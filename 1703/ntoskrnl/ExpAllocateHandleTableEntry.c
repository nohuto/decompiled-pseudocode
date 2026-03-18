/*
 * XREFs of ExpAllocateHandleTableEntry @ 0x140517DE0
 * Callers:
 *     ExCreateHandleEx @ 0x140517CF0 (ExCreateHandleEx.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x14042B8B0 (ExpAllocateHandleTableEntrySlow.c)
 */

__int64 __fastcall ExpAllocateHandleTableEntry(__int64 a1, _QWORD *a2)
{
  char v2; // al
  unsigned int Number; // r12d
  unsigned int v6; // r15d
  unsigned int v7; // esi
  int v8; // ebp
  __int64 v9; // rbx
  char HandleTableEntrySlow; // di
  __int64 result; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  int v14; // eax
  unsigned int v15; // [rsp+50h] [rbp+8h]

  v2 = *(_BYTE *)(a1 + 44);
  if ( (v2 & 4) != 0 )
    return 0LL;
  if ( (v2 & 1) != 0 )
    Number = 0;
  else
    Number = KeGetPcr()->Prcb.Number;
  v6 = ExpFreeListCount;
  v7 = Number;
LABEL_5:
  v8 = 0;
  v15 = *(_DWORD *)a1;
  while ( 1 )
  {
    v9 = a1 + ((v7 + 1LL) << 6);
    if ( *(_QWORD *)(v9 + 8) )
    {
      ExAcquirePushLockExclusiveEx(a1 + ((v7 + 1LL) << 6), 0LL);
      v12 = *(_QWORD *)(v9 + 8);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 8);
        *(_QWORD *)(v9 + 8) = v13;
        if ( !v13 )
          *(_QWORD *)(v9 + 16) = 0LL;
        v14 = ++*(_DWORD *)(v9 + 24);
        if ( v14 > *(_DWORD *)(v9 + 28) )
          *(_DWORD *)(v9 + 28) = v14;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + ((v7 + 1LL) << 6)));
      KeAbPostRelease(a1 + ((v7 + 1LL) << 6));
      if ( v12 )
        break;
    }
    if ( ++v7 == v6 )
      v7 = 0;
    if ( ++v8 >= v6 )
    {
      HandleTableEntrySlow = 1;
      v7 = Number;
      ExAcquirePushLockExclusiveEx(a1 + 56, 0LL);
      if ( v15 == *(_DWORD *)a1 )
        HandleTableEntrySlow = ExpAllocateHandleTableEntrySlow((unsigned int *)a1, a1 + ((Number + 1LL) << 6));
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 56), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 56));
      KeAbPostRelease(a1 + 56);
      if ( !HandleTableEntrySlow )
        return 0LL;
      goto LABEL_5;
    }
  }
  result = v12;
  *a2 = *(_QWORD *)((v12 & 0xFFFFFFFFFFFFF000uLL) + 8) + 4 * ((__int64)(v12 - (v12 & 0xFFFFFFFFFFFFF000uLL)) >> 4);
  return result;
}
