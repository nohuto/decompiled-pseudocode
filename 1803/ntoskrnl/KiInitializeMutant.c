/*
 * XREFs of KiInitializeMutant @ 0x1400D3988
 * Callers:
 *     KeInitializeMutex @ 0x1400D3950 (KeInitializeMutex.c)
 *     KeInitializeMutant @ 0x1400D3970 (KeInitializeMutant.c)
 *     LdrpInitMuiCrits @ 0x14013E790 (LdrpInitMuiCrits.c)
 *     WmipDriverEntry @ 0x14089FCB0 (WmipDriverEntry.c)
 *     EtwpInitialize @ 0x1408A3474 (EtwpInitialize.c)
 *     PopDiagInitialize @ 0x1408A5C04 (PopDiagInitialize.c)
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 *     sub_1408AFF10 @ 0x1408AFF10 (sub_1408AFF10.c)
 *     ViInitSystemPhase0 @ 0x1408C58B4 (ViInitSystemPhase0.c)
 *     MiInitializeBootDefaults @ 0x1408C69EC (MiInitializeBootDefaults.c)
 *     PnpInitializeDeviceEvents @ 0x1408C84C4 (PnpInitializeDeviceEvents.c)
 *     EtwpInitializeRegistration @ 0x1408C88E0 (EtwpInitializeRegistration.c)
 *     ExpProfileInitialization @ 0x1408C8F84 (ExpProfileInitialization.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 */

__int64 __fastcall KiInitializeMutant(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v10; // rcx
  int v11; // [rsp+48h] [rbp+10h] BYREF

  *(_BYTE *)(a1 + 2) = 0;
  *(_BYTE *)a1 = 2;
  if ( (_BYTE)a2 )
  {
    CurrentThread = KeGetCurrentThread();
    *(_DWORD *)(a1 + 4) = 0;
    *(_QWORD *)(a1 + 40) = CurrentThread;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    v11 = 0;
    while ( 1 )
    {
      LOBYTE(a2) = 1;
      KiSetVpThreadSpinLockCount(CurrentPrcb, a2);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        break;
      KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
      do
        KeYieldProcessorEx(&v11);
      while ( CurrentThread->ThreadLock );
    }
    Blink = CurrentThread->MutantListHead.Blink;
    v10 = (struct _LIST_ENTRY *)(a1 + 24);
    if ( Blink->Flink != &CurrentThread->MutantListHead )
      __fastfail(3u);
    v10->Flink = &CurrentThread->MutantListHead;
    *(_QWORD *)(a1 + 32) = Blink;
    Blink->Flink = v10;
    CurrentThread->MutantListHead.Blink = v10;
    KiReleaseThreadLockSafe((__int64)CurrentThread);
    __writecr8(CurrentIrql);
  }
  else
  {
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_DWORD *)(a1 + 4) = 1;
  }
  result = a1 + 8;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  *(_BYTE *)(a1 + 49) = a3;
  *(_BYTE *)(a1 + 48) = 0;
  return result;
}
