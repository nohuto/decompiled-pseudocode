/*
 * XREFs of KiInitializeMutant @ 0x1400B4748
 * Callers:
 *     KeInitializeMutex @ 0x1400B4710 (KeInitializeMutex.c)
 *     KeInitializeMutant @ 0x1400B4730 (KeInitializeMutant.c)
 *     LdrpInitMuiCrits @ 0x1400DC158 (LdrpInitMuiCrits.c)
 *     PopDiagInitialize @ 0x140827B48 (PopDiagInitialize.c)
 *     MiInitializeBootDefaults @ 0x14082F394 (MiInitializeBootDefaults.c)
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 *     sub_14083D98C @ 0x14083D98C (sub_14083D98C.c)
 *     PnpInitializeDeviceEvents @ 0x14083E46C (PnpInitializeDeviceEvents.c)
 *     EtwpInitialize @ 0x140840858 (EtwpInitialize.c)
 *     WmipDriverEntry @ 0x140843D40 (WmipDriverEntry.c)
 *     ViInitSystemPhase0 @ 0x140848008 (ViInitSystemPhase0.c)
 *     EtwpInitializeRegistration @ 0x1408566F0 (EtwpInitializeRegistration.c)
 *     ExpProfileInitialization @ 0x140856DEC (ExpProfileInitialization.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KiInitializeMutant(__int64 a1, char a2, char a3)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 CurrentIrql; // bp
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v9; // rax
  int v10; // [rsp+38h] [rbp+10h] BYREF

  *(_BYTE *)(a1 + 2) = 0;
  *(_BYTE *)a1 = 2;
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    *(_DWORD *)(a1 + 4) = 0;
    *(_QWORD *)(a1 + 40) = CurrentThread;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v10 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v10);
      while ( CurrentThread->ThreadLock );
    }
    Blink = CurrentThread->MutantListHead.Blink;
    v9 = (struct _LIST_ENTRY *)(a1 + 24);
    if ( Blink->Flink != &CurrentThread->MutantListHead )
      __fastfail(3u);
    v9->Flink = &CurrentThread->MutantListHead;
    *(_QWORD *)(a1 + 32) = Blink;
    Blink->Flink = v9;
    CurrentThread->MutantListHead.Blink = v9;
    CurrentThread->ThreadLock = 0LL;
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
