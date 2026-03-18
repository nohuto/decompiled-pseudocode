/*
 * XREFs of RtlRemoveDynamicFunctionTable @ 0x1400B22EC
 * Callers:
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlRemoveDynamicFunctionTable(__int64 a1)
{
  unsigned int v1; // r12d
  struct _KTHREAD *CurrentThread; // r14
  _KPROCESS *Process; // rbx
  volatile signed __int64 *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _DWORD *v8; // rbx
  unsigned __int64 *v9; // rax
  _DWORD *v10; // rcx
  int v11; // r15d
  char v12; // si
  unsigned __int64 v14; // [rsp+58h] [rbp+10h]
  __int64 v15; // [rsp+60h] [rbp+18h]

  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v14 = *(_QWORD *)(a1 + 48);
  v15 = *(_QWORD *)(a1 + 40);
  if ( v15 - v14 >= 0xFFFFFFFF )
    return 3221225621LL;
  v1 = -1073741569;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  --CurrentThread->SpecialApcDisable;
  v4 = (volatile signed __int64 *)&Process[2].Affinity.Bitmap[19];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[2].Affinity.Bitmap[19], 0LL);
  v8 = (_DWORD *)Process[2].Affinity.Bitmap[18];
  if ( v8 )
  {
    v6 = (unsigned int)*v8;
    v5 = 1LL;
    if ( (unsigned int)v6 > 1 )
    {
      v9 = (unsigned __int64 *)(v8 + 12);
      v7 = v14;
      while ( *v9 < v14 )
      {
        v5 = (unsigned int)(v5 + 1);
        v9 += 3;
        if ( (unsigned int)v5 >= (unsigned int)v6 )
          goto LABEL_15;
      }
      v10 = &v8[4 * (unsigned int)v5 + 4 + 2 * (unsigned int)v5];
      if ( *((_QWORD *)v10 + 1) == v14 && v10[4] == (_DWORD)v15 - (_DWORD)v14 )
      {
        v11 = v6 - 1;
        if ( (_DWORD)v5 != (_DWORD)v6 - 1 )
          memmove(
            v10,
            &v8[4 * (unsigned int)(v5 + 1) + 4 + 2 * (unsigned int)(v5 + 1)],
            24LL * (unsigned int)(v6 - v5 - 1));
        v1 = 0;
        *v8 = v11;
      }
    }
  }
LABEL_15:
  v12 = _InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v12 & 2) != 0 && (v12 & 4) == 0 )
    ExfTryToWakePushLock(v4, v5, v6, v7);
  KeAbPostRelease((ULONG_PTR)v4);
  KiLeaveGuardedRegionUnsafe(CurrentThread);
  return v1;
}
