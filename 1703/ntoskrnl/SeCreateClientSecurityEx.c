/*
 * XREFs of SeCreateClientSecurityEx @ 0x14050AD10
 * Callers:
 *     AlpcpGetEffectiveTokenMessage @ 0x140444158 (AlpcpGetEffectiveTokenMessage.c)
 *     AlpcpImpersonateMessage @ 0x14047D170 (AlpcpImpersonateMessage.c)
 *     AlpcpExposeTokenAttribute @ 0x140523980 (AlpcpExposeTokenAttribute.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x1400445AC (ObFastReferenceObjectLocked.c)
 *     PsIsHostSilo @ 0x140050C00 (PsIsHostSilo.c)
 *     SepReconcileTrustSidWithProcessProtection @ 0x140091BA0 (SepReconcileTrustSidWithProcessProtection.c)
 *     PsGetCurrentServerSilo @ 0x140094960 (PsGetCurrentServerSilo.c)
 *     ObFastReferenceObject @ 0x1400EE6B0 (ObFastReferenceObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     SepCreateClientSecurityEx @ 0x14050AF80 (SepCreateClientSecurityEx.c)
 *     SepUpdateSiloInClientSecurity @ 0x1406F644C (SepUpdateSiloInClientSecurity.c)
 */

__int64 __fastcall SeCreateClientSecurityEx(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 *v5; // rsi
  _KPROCESS *Process; // rdi
  int v10; // r12d
  int v11; // r14d
  char v12; // r15
  __int64 result; // rax
  unsigned int v14; // edi
  signed __int64 *v15; // rcx
  __int64 CurrentServerSilo; // rbx
  unsigned int v17; // ebx
  char v18[8]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v19; // [rsp+68h] [rbp-50h] BYREF
  __int64 v20; // [rsp+70h] [rbp-48h]
  struct _KTHREAD *v21; // [rsp+78h] [rbp-40h]
  int v22; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v23; // [rsp+C8h] [rbp+10h]

  v23 = a2;
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v18[0] = 0;
  v19 = 0LL;
  if ( (struct _KTHREAD *)a1 == CurrentThread )
    Process = CurrentThread->ApcState.Process;
  else
    Process = *(_KPROCESS **)(a1 + 544);
  if ( (*(_DWORD *)(a1 + 1736) & 8) != 0 )
  {
    v20 = *(_QWORD *)(a1 + 544);
    v21 = KeGetCurrentThread();
    --v21->KernelApcDisable;
    ExAcquirePushLockSharedEx(a1 + 1720, 0LL);
    if ( (*(_DWORD *)(a1 + 1736) & 8) != 0 )
    {
      v5 = (__int64 *)(*(_QWORD *)(a1 + 1640) & 0xFFFFFFFFFFFFFFF8uLL);
      ObfReferenceObject(v5);
      v10 = *(_DWORD *)(a1 + 1640) & 3;
      v12 = (*(_BYTE *)(a1 + 1640) & 4) != 0;
      LOBYTE(v22) = *(_BYTE *)(v20 + 1738);
    }
    else
    {
      v10 = v22;
      v12 = v22;
    }
    v15 = (signed __int64 *)(a1 + 1720);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1720), 0LL, 17LL) != 17 )
    {
      ExfReleasePushLockShared(v15);
      v15 = (signed __int64 *)(a1 + 1720);
    }
    KeAbPostRelease((ULONG_PTR)v15);
    KeLeaveCriticalRegionThread((__int64)v21);
    if ( v5 )
    {
      v11 = 2;
      goto LABEL_7;
    }
  }
  else
  {
    v10 = v22;
  }
  v5 = (__int64 *)ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
  if ( !v5 )
  {
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&Process[1], 0LL);
    v5 = (__int64 *)ObFastReferenceObjectLocked(&Process[1].Affinity.Bitmap[5]);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Header.Lock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&Process[1].Header.Lock);
    KeAbPostRelease((ULONG_PTR)&Process[1]);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  v11 = 1;
  LOBYTE(v22) = BYTE2(Process[2].ActiveProcessors.Bitmap[0]);
  v12 = 0;
LABEL_7:
  SepReconcileTrustSidWithProcessProtection(v5[138], (__int64)&v22, v18, &v19);
  result = SepCreateClientSecurityEx((_DWORD)v5, v23, a3, v11, v12, v10, 1, a1, v18[0], v19, a4);
  v14 = result;
  if ( (int)result < 0 || !*(_BYTE *)(a4 + 8) )
  {
    ObfDereferenceObject(v5);
    return v14;
  }
  if ( *(PEPROCESS *)(a1 + 544) != PsInitialSystemProcess )
    return result;
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( PsIsHostSilo(CurrentServerSilo) )
    return v14;
  result = SepUpdateSiloInClientSecurity(a4, CurrentServerSilo);
  v17 = result;
  if ( (int)result < 0 )
  {
    ObfDereferenceObject(v5);
    return v17;
  }
  return result;
}
