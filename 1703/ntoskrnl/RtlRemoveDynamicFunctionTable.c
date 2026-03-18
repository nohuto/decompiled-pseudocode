/*
 * XREFs of RtlRemoveDynamicFunctionTable @ 0x140066DD4
 * Callers:
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlRemoveDynamicFunctionTable(__int64 a1)
{
  unsigned int v1; // r12d
  struct _KTHREAD *CurrentThread; // r14
  _KPROCESS *Process; // rdi
  volatile signed __int64 *v4; // rsi
  unsigned int *v5; // rdi
  unsigned int v6; // r8d
  unsigned int v7; // edx
  unsigned __int64 *v8; // rax
  unsigned int *v9; // rcx
  unsigned int v10; // r15d
  unsigned __int64 v12; // [rsp+58h] [rbp+10h]
  __int64 v13; // [rsp+60h] [rbp+18h]

  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v12 = *(_QWORD *)(a1 + 48);
  v13 = *(_QWORD *)(a1 + 40);
  if ( v13 - v12 >= 0xFFFFFFFF )
    return 3221225621LL;
  v1 = -1073741569;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  --CurrentThread->SpecialApcDisable;
  v4 = (volatile signed __int64 *)&Process[2].Affinity.Bitmap[19];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[2].Affinity.Bitmap[19], 0LL);
  v5 = (unsigned int *)Process[2].Affinity.Bitmap[18];
  if ( v5 )
  {
    v6 = *v5;
    v7 = 1;
    if ( *v5 > 1 )
    {
      v8 = (unsigned __int64 *)(v5 + 12);
      while ( *v8 < v12 )
      {
        ++v7;
        v8 += 3;
        if ( v7 >= v6 )
          goto LABEL_15;
      }
      v9 = &v5[4 * v7 + 4 + 2 * v7];
      if ( *((_QWORD *)v9 + 1) == v12 && v9[4] == (_DWORD)v13 - (_DWORD)v12 )
      {
        v10 = v6 - 1;
        if ( v7 != v6 - 1 )
          memmove(v9, &v5[4 * v7 + 10 + 2 * v7], 24LL * (v6 - v7 - 1));
        v1 = 0;
        *v5 = v10;
      }
    }
  }
LABEL_15:
  if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  KiLeaveGuardedRegionUnsafe(CurrentThread);
  return v1;
}
