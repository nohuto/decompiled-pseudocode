/*
 * XREFs of RtlRemoveDynamicFunctionTable @ 0x140114F8C
 * Callers:
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
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
  char v11; // bl
  unsigned __int64 v13; // [rsp+58h] [rbp+10h]
  __int64 v14; // [rsp+60h] [rbp+18h]

  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v13 = *(_QWORD *)(a1 + 48);
  v14 = *(_QWORD *)(a1 + 40);
  if ( v14 - v13 >= 0xFFFFFFFF )
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
      while ( *v8 < v13 )
      {
        ++v7;
        v8 += 3;
        if ( v7 >= v6 )
          goto LABEL_15;
      }
      v9 = &v5[4 * v7 + 4 + 2 * v7];
      if ( *((_QWORD *)v9 + 1) == v13 && v9[4] == (_DWORD)v14 - (_DWORD)v13 )
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
  v11 = _InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v11 & 2) != 0 && (v11 & 4) == 0 )
    ExfTryToWakePushLock(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v1;
}
