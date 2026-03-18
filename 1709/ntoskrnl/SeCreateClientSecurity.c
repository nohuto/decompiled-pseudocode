/*
 * XREFs of SeCreateClientSecurity @ 0x14049CBB0
 * Callers:
 *     EtwpUpdateTrace @ 0x140450B18 (EtwpUpdateTrace.c)
 *     AlpcpCreateSecurityContext @ 0x140461E3C (AlpcpCreateSecurityContext.c)
 *     AlpcpCreateClientPort @ 0x140465D6C (AlpcpCreateClientPort.c)
 *     AlpcpImpersonateMessage @ 0x14049DC60 (AlpcpImpersonateMessage.c)
 *     EtwpStartLogger @ 0x1404ECD4C (EtwpStartLogger.c)
 *     NtImpersonateThread @ 0x140578D78 (NtImpersonateThread.c)
 * Callees:
 *     SepReconcileTrustSidWithProcessProtection @ 0x14006A520 (SepReconcileTrustSidWithProcessProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObFastReferenceObject @ 0x140081EF0 (ObFastReferenceObject.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ObFastReferenceObjectLocked @ 0x14008AA44 (ObFastReferenceObjectLocked.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     PsReferenceImpersonationTokenEx @ 0x14049D120 (PsReferenceImpersonationTokenEx.c)
 *     SepCreateClientSecurityEx @ 0x14049D260 (SepCreateClientSecurityEx.c)
 */

NTSTATUS __stdcall SeCreateClientSecurity(
        PETHREAD ClientThread,
        PSECURITY_QUALITY_OF_SERVICE ClientSecurityQos,
        BOOLEAN RemoteSession,
        PSECURITY_CLIENT_CONTEXT ClientContext)
{
  struct _KTHREAD *CurrentThread; // rbp
  _KPROCESS *Process; // rdi
  __int64 *v9; // rbx
  int v10; // ebp
  char v11; // r14
  NTSTATUS result; // eax
  NTSTATUS v13; // edi
  char v14; // [rsp+60h] [rbp-38h] BYREF
  char v15; // [rsp+61h] [rbp-37h] BYREF
  char v16; // [rsp+62h] [rbp-36h] BYREF
  int v17; // [rsp+64h] [rbp-34h] BYREF
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
             (_DWORD)v9,
             (_DWORD)ClientSecurityQos,
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
