/*
 * XREFs of ExpAllocateHandleTableEntry @ 0x1404B7650
 * Callers:
 *     ExCreateHandleEx @ 0x1404B7560 (ExCreateHandleEx.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExpAllocateHandleTableEntrySlow @ 0x140553A18 (ExpAllocateHandleTableEntrySlow.c)
 */

__int64 __fastcall ExpAllocateHandleTableEntry(int *a1, _QWORD *a2)
{
  char v2; // al
  unsigned int Number; // r15d
  unsigned int v6; // r12d
  unsigned int v7; // r14d
  unsigned int v8; // ebp
  int *v9; // rbx
  unsigned int v10; // eax
  char HandleTableEntrySlow; // di
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdi
  __int64 v20; // rax
  int v21; // eax
  int v22; // [rsp+50h] [rbp+8h]

  v2 = *((_BYTE *)a1 + 44);
  if ( (v2 & 4) != 0 )
    return 0LL;
  if ( (v2 & 1) != 0 )
    Number = 0;
  else
    Number = KeGetPcr()->Prcb.Number;
  v6 = ExpFreeListCount;
LABEL_5:
  v7 = 0;
  v22 = *a1;
  v8 = Number;
  while ( 1 )
  {
    v9 = &a1[16 * v8 + 16];
    if ( *((_QWORD *)v9 + 1) )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&a1[16 * v8 + 16], 0LL);
      v19 = *((_QWORD *)v9 + 1);
      if ( v19 )
      {
        v20 = *(_QWORD *)(v19 + 8);
        *((_QWORD *)v9 + 1) = v20;
        if ( !v20 )
          *((_QWORD *)v9 + 2) = 0LL;
        v21 = ++v9[6];
        if ( v21 > v9[7] )
          v9[7] = v21;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&a1[16 * v8 + 16], v16, v17, v18);
      KeAbPostRelease((ULONG_PTR)&a1[16 * v8 + 16]);
      if ( v19 )
        break;
    }
    v10 = v8 + 1;
    ++v7;
    v8 = 0;
    if ( v10 != v6 )
      v8 = v10;
    if ( v7 >= v6 )
    {
      HandleTableEntrySlow = 1;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(a1 + 14), 0LL);
      if ( v22 == *a1 )
        HandleTableEntrySlow = ExpAllocateHandleTableEntrySlow(a1, &a1[16 * Number + 16]);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)a1 + 7, v12, v13, v14);
      KeAbPostRelease((ULONG_PTR)(a1 + 14));
      if ( !HandleTableEntrySlow )
        return 0LL;
      goto LABEL_5;
    }
  }
  result = v19;
  *a2 = *(_QWORD *)((v19 & 0xFFFFFFFFFFFFF000uLL) + 8) + 4 * ((__int64)(v19 - (v19 & 0xFFFFFFFFFFFFF000uLL)) >> 4);
  return result;
}
