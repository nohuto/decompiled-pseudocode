/*
 * XREFs of KiInitializeMutant @ 0x140121F00
 * Callers:
 *     LdrpInitMuiCrits @ 0x1400136C0 (LdrpInitMuiCrits.c)
 *     KeInitializeMutex @ 0x140121EE0 (KeInitializeMutex.c)
 *     KeInitializeMutant @ 0x140121EF0 (KeInitializeMutant.c)
 *     EtwpInitialize @ 0x1407FBF08 (EtwpInitialize.c)
 *     WmipDriverEntry @ 0x1407FF1F0 (WmipDriverEntry.c)
 *     sub_140808C5C @ 0x140808C5C (sub_140808C5C.c)
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 *     PopDiagInitialize @ 0x140812630 (PopDiagInitialize.c)
 *     ViInitSystemPhase0 @ 0x140812964 (ViInitSystemPhase0.c)
 *     MiInitializeBootDefaults @ 0x140812ADC (MiInitializeBootDefaults.c)
 *     PnpInitializeDeviceEvents @ 0x140824F44 (PnpInitializeDeviceEvents.c)
 *     EtwpInitializeRegistration @ 0x140825108 (EtwpInitializeRegistration.c)
 *     ExpProfileInitialization @ 0x1408256D4 (ExpProfileInitialization.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
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
