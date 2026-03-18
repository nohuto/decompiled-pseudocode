/*
 * XREFs of SeRegisterObjectTypeMandatoryPolicy @ 0x140154004
 * Callers:
 *     PspInitPhase0 @ 0x1407FC734 (PspInitPhase0.c)
 *     SepTokenInitialization @ 0x14081B048 (SepTokenInitialization.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall SeRegisterObjectTypeMandatoryPolicy(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // edi
  char v6; // bp
  unsigned int v7; // r8d
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  v6 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&SepMandatoryObjectTypePolicyLock, 0LL);
  v7 = 0;
  if ( !SepMandatoryObjectTypePolicyCount )
    goto LABEL_7;
  v8 = SepMandatoryObjectTypePolicy;
  while ( a1 != *v8 )
  {
    ++v7;
    v8 += 3;
    if ( v7 >= SepMandatoryObjectTypePolicyCount )
      goto LABEL_5;
  }
  v6 = 1;
LABEL_5:
  if ( v7 >= 0x20 )
  {
    v3 = -1073741823;
    goto LABEL_14;
  }
  if ( !v6 )
  {
LABEL_7:
    ++SepMandatoryObjectTypePolicyCount;
    v9 = 3LL * v7;
    *(_QWORD *)&SepMandatoryObjectTypePolicy[2 * v9] = a1;
    SepMandatoryObjectTypePolicy[2 * v9 + 4] = 0;
    SepMandatoryObjectTypePolicy[2 * v9 + 2] = 0;
  }
  v10 = 3LL * v7;
  SepMandatoryObjectTypePolicy[2 * v10 + 2] |= 1u;
  SepMandatoryObjectTypePolicy[2 * v10 + 3] = a2;
  if ( (a2 & 1) != 0 )
    SepMandatoryObjectTypePolicy[6 * v7 + 4] |= 0x100u;
  if ( (a2 & 2) != 0 )
    SepMandatoryObjectTypePolicy[6 * v7 + 4] |= 0x200u;
  if ( (a2 & 4) != 0 )
    SepMandatoryObjectTypePolicy[6 * v7 + 4] |= 0x400u;
LABEL_14:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&SepMandatoryObjectTypePolicyLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&SepMandatoryObjectTypePolicyLock);
  KeAbPostRelease((ULONG_PTR)&SepMandatoryObjectTypePolicyLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v3;
}
