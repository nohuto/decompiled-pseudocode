/*
 * XREFs of SeRegisterObjectTypeMandatoryPolicy @ 0x14017149C
 * Callers:
 *     PspInitPhase0 @ 0x1408A0D54 (PspInitPhase0.c)
 *     SepTokenInitialization @ 0x1408BD630 (SepTokenInitialization.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall SeRegisterObjectTypeMandatoryPolicy(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // ebx
  char v6; // bp
  __int64 v7; // r9
  __int64 v8; // rdx
  unsigned int v9; // eax
  _QWORD *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  char v14; // di

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  v6 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&SepMandatoryObjectTypePolicyLock, 0LL);
  v8 = (unsigned int)SepMandatoryObjectTypePolicyCount;
  v9 = 0;
  if ( !SepMandatoryObjectTypePolicyCount )
    goto LABEL_7;
  v10 = SepMandatoryObjectTypePolicy;
  while ( a1 != *v10 )
  {
    ++v9;
    v10 += 3;
    if ( v9 >= SepMandatoryObjectTypePolicyCount )
      goto LABEL_5;
  }
  v6 = 1;
LABEL_5:
  if ( v9 >= 0x20 )
  {
    v3 = -1073741823;
    goto LABEL_14;
  }
  if ( v6 )
  {
    v11 = v9;
  }
  else
  {
LABEL_7:
    v11 = v9;
    v8 = (unsigned int)++SepMandatoryObjectTypePolicyCount;
    v12 = 3LL * v9;
    *(_QWORD *)&SepMandatoryObjectTypePolicy[2 * v12] = a1;
    SepMandatoryObjectTypePolicy[2 * v12 + 4] = 0;
    SepMandatoryObjectTypePolicy[2 * v12 + 2] = 0;
  }
  v13 = 3 * v11;
  SepMandatoryObjectTypePolicy[2 * v13 + 2] |= 1u;
  SepMandatoryObjectTypePolicy[2 * v13 + 3] = a2;
  if ( (a2 & 1) != 0 )
    SepMandatoryObjectTypePolicy[6 * v11 + 4] |= 0x100u;
  if ( (a2 & 2) != 0 )
    SepMandatoryObjectTypePolicy[6 * v11 + 4] |= 0x200u;
  if ( (a2 & 4) != 0 )
    SepMandatoryObjectTypePolicy[6 * v11 + 4] |= 0x400u;
LABEL_14:
  v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)&SepMandatoryObjectTypePolicyLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
    ExfTryToWakePushLock(
      (volatile signed __int64 *)&SepMandatoryObjectTypePolicyLock,
      v8,
      (__int64)SepMandatoryObjectTypePolicy,
      v7);
  KeAbPostRelease((ULONG_PTR)&SepMandatoryObjectTypePolicyLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v3;
}
