/*
 * XREFs of ExpFreeHandleTableEntry @ 0x1405120A0
 * Callers:
 *     ExCreateHandleEx @ 0x1404B7560 (ExCreateHandleEx.c)
 *     ExDestroyHandle @ 0x140512040 (ExDestroyHandle.c)
 *     ObpCreateHandle @ 0x1405AB660 (ObpCreateHandle.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExpGetHandleExtraInfo @ 0x1407BD4E4 (ExpGetHandleExtraInfo.c)
 */

char __fastcall ExpFreeHandleTableEntry(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r10
  char v5; // si
  unsigned int Number; // eax
  ULONG_PTR v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v13; // rax
  _DWORD *HandleExtraInfo; // rax
  __int64 v15; // [rsp+38h] [rbp+10h]

  HIDWORD(v15) = HIDWORD(a2);
  v4 = a1;
  if ( *(_DWORD *)(a1 + 4) )
  {
    LODWORD(v15) = a2 & 0xFFFFFFFC;
    HandleExtraInfo = (_DWORD *)ExpGetHandleExtraInfo(a1, v15);
    if ( HandleExtraInfo )
    {
      *HandleExtraInfo = 0;
      HandleExtraInfo[1] = 0;
    }
  }
  *(_QWORD *)(a3 + 8) = 0LL;
  v5 = *(_BYTE *)(v4 + 44) & 1;
  if ( v5 )
    Number = 0;
  else
    Number = KeGetPcr()->Prcb.Number;
  v7 = v4 + ((Number + 1LL) << 6);
  ExAcquirePushLockExclusiveEx(v7, 0LL);
  if ( v5 )
  {
    v11 = *(_QWORD *)(v7 + 16);
    if ( v11 )
      *(_QWORD *)(v11 + 8) = a3;
    else
      *(_QWORD *)(v7 + 8) = a3;
    *(_QWORD *)(v7 + 16) = a3;
  }
  else
  {
    v13 = *(_QWORD *)(v7 + 8);
    *(_QWORD *)(a3 + 8) = v13;
    if ( !v13 )
      *(_QWORD *)(v7 + 16) = a3;
    *(_QWORD *)(v7 + 8) = a3;
  }
  --*(_DWORD *)(v7 + 24);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v7, v8, v9, v10);
  return KeAbPostRelease(v7);
}
