/*
 * XREFs of SeCreateClientSecurity @ 0x14050B3A0
 * Callers:
 *     AlpcpCreateClientPort @ 0x1404768A4 (AlpcpCreateClientPort.c)
 *     AlpcpCreateSecurityContext @ 0x14047C5D4 (AlpcpCreateSecurityContext.c)
 *     AlpcpImpersonateMessage @ 0x14047D170 (AlpcpImpersonateMessage.c)
 *     EtwpStartLogger @ 0x1405509F8 (EtwpStartLogger.c)
 *     NtImpersonateThread @ 0x140558B44 (NtImpersonateThread.c)
 *     EtwpUpdateTrace @ 0x1405D8AE8 (EtwpUpdateTrace.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x1400445AC (ObFastReferenceObjectLocked.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x140091BA0 (SepReconcileTrustSidWithProcessProtection.c)
 *     ObFastReferenceObject @ 0x1400EE6B0 (ObFastReferenceObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     SepCreateClientSecurityEx @ 0x14050AF80 (SepCreateClientSecurityEx.c)
 *     PsReferenceImpersonationTokenEx @ 0x14050C610 (PsReferenceImpersonationTokenEx.c)
 */

NTSTATUS __stdcall SeCreateClientSecurity(
        PETHREAD ClientThread,
        PSECURITY_QUALITY_OF_SERVICE ClientSecurityQos,
        BOOLEAN RemoteSession,
        PSECURITY_CLIENT_CONTEXT ClientContext)
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // r15
  __int64 *v9; // rdi
  int v10; // esi
  char v11; // r12
  NTSTATUS result; // eax
  NTSTATUS v13; // esi
  char v14; // [rsp+60h] [rbp-38h] BYREF
  char v15; // [rsp+61h] [rbp-37h] BYREF
  char v16; // [rsp+62h] [rbp-36h] BYREF
  unsigned int v17; // [rsp+64h] [rbp-34h] BYREF
  __int64 v18; // [rsp+68h] [rbp-30h] BYREF
  char v19; // [rsp+A0h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v14 = 0;
  v18 = 0LL;
  if ( ClientThread == CurrentThread )
    Process = CurrentThread->ApcState.Process;
  else
    Process = ClientThread->Process;
  v9 = (__int64 *)PsReferenceImpersonationTokenEx(
                    (_DWORD)ClientThread,
                    0,
                    (unsigned int)&v16,
                    (unsigned int)&v15,
                    (__int64)&v17,
                    (__int64)&v19);
  if ( v9 )
  {
    v11 = v15;
    v10 = 2;
  }
  else
  {
    v9 = (__int64 *)ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
    if ( !v9 )
    {
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&Process[1], 0LL);
      v9 = (__int64 *)ObFastReferenceObjectLocked(&Process[1].Affinity.Bitmap[5]);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Header.Lock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&Process[1].Header.Lock);
      KeAbPostRelease((ULONG_PTR)&Process[1]);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
    v10 = 1;
    v19 = BYTE2(Process[2].ActiveProcessors.Bitmap[0]);
    v11 = 0;
  }
  SepReconcileTrustSidWithProcessProtection(v9[138], (__int64)&v19, &v14, &v18);
  result = SepCreateClientSecurityEx(
             (__int64)v9,
             (__int64)ClientSecurityQos,
             RemoteSession,
             v10,
             v11,
             v17,
             0,
             0LL,
             v14,
             v18,
             (__int64)ClientContext);
  v13 = result;
  if ( result < 0 || !ClientSecurityQos->ContextTrackingMode )
  {
    ObfDereferenceObject(v9);
    return v13;
  }
  return result;
}
