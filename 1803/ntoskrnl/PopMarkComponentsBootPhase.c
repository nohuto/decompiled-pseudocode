/*
 * XREFs of PopMarkComponentsBootPhase @ 0x140475428
 * Callers:
 *     PopSaveHiberContext @ 0x140473E20 (PopSaveHiberContext.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x1400D2C7C (VfIsVerifierEnabled.c)
 *     PoSetHiberRange @ 0x140156AD0 (PoSetHiberRange.c)
 *     FirstEntrySList @ 0x1401B2BC0 (FirstEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     HvlMarkHiberPhase @ 0x14022BE58 (HvlMarkHiberPhase.c)
 *     MmIsAddressValid @ 0x140256450 (MmIsAddressValid.c)
 *     RtlMarkHiberPhase @ 0x140292630 (RtlMarkHiberPhase.c)
 *     VfIsVerifierExtensionEnabled @ 0x1402A9828 (VfIsVerifierExtensionEnabled.c)
 *     MiConvertHiberPhasePages @ 0x140475478 (MiConvertHiberPhasePages.c)
 *     BgkResumePrepare @ 0x140476898 (BgkResumePrepare.c)
 *     KdMarkHiberPhase @ 0x1404843F8 (KdMarkHiberPhase.c)
 *     KeMarkHiberPhase @ 0x140484480 (KeMarkHiberPhase.c)
 *     MmMarkHiberPhase @ 0x1404857DC (MmMarkHiberPhase.c)
 *     PopMarkHiberPhase @ 0x14048636C (PopMarkHiberPhase.c)
 */

void __fastcall PopMarkComponentsBootPhase(char *Address)
{
  PVOID *i; // rbx
  PSLIST_ENTRY j; // rbx
  unsigned int k; // ebx
  _QWORD *v5; // rbx
  PVOID *m; // rbx

  if ( !byte_1403AA1C1 )
  {
    PoSetHiberRange(0LL, 0x10000u, PopSaveHiberContext, 0LL, 0x6E72654Bu);
    PoSetHiberRange(0LL, 0x10000u, HalAllocateCrashDumpRegisters, 0LL, 0x6348616Cu);
    for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
    {
      PoSetHiberRange(0LL, 0x10000u, i, 0xA0uLL, 0x6E72654Bu);
      if ( MmIsAddressValid(i[12]) )
        PoSetHiberRange(0LL, 0x10000u, i[12], *((unsigned __int16 *)i + 45), 0x6E72654Bu);
      if ( MmIsAddressValid(i[10]) )
        PoSetHiberRange(0LL, 0x10000u, i[10], *((unsigned __int16 *)i + 37), 0x6E72654Bu);
    }
    for ( j = FirstEntrySList(&SListHead); j; j = j->Next )
      KeMarkHiberPhase(*((PVOID *)&j[-1].Next + 1));
    ((void (__fastcall *)(_QWORD))off_140398688[0])(0LL);
    PopMarkHiberPhase(Address);
    KdMarkHiberPhase();
    if ( (unsigned int)VfIsVerifierEnabled() )
    {
      if ( ViTrackIrqlQueue )
        PoSetHiberRange(0LL, 0x10000u, ViTrackIrqlQueue, 56LL * (unsigned int)ViTrackIrqlQueueLength, 0x72696656u);
      if ( (unsigned int)VfIsVerifierExtensionEnabled() == 1 && ViFnExtensionHiberFunc )
        PoSetHiberRange(0LL, 0x10000u, ViFnExtensionHiberFunc, 0LL, 0x72696656u);
    }
    BgkResumePrepare(0LL);
    RtlMarkHiberPhase();
    HvlMarkHiberPhase();
    MmMarkHiberPhase();
    for ( k = 0; k < IopNumTriageDumpDataBlocks; ++k )
      PoSetHiberRange(
        0LL,
        0x10000u,
        IopTriageDumpDataBlocks[2 * k],
        _mm_srli_si128(*(__m128i *)&IopTriageDumpDataBlocks[2 * k], 8).m128i_u64[0]
      - (_QWORD)IopTriageDumpDataBlocks[2 * k],
        0x42706D44u);
    v5 = PopShutdownNotificationCallback;
    if ( PopShutdownNotificationCallback )
    {
      PoSetHiberRange(0LL, 0x10000u, PopShutdownNotificationCallback, 0x18uLL, 0x6E72654Bu);
      ((void (__fastcall *)(_QWORD))*v5)(v5[2]);
    }
    for ( m = (PVOID *)PopThermal; m != &PopThermal; m = (PVOID *)*m )
      PoSetHiberRange(0LL, 0x10000u, m, 0x368uLL, 0x6D726854u);
    if ( (PopSimulateHiberBugcheck & 0x100) == 0 )
      MiConvertHiberPhasePages(Address + 32);
    Address[3] = 1;
  }
  Address[28] = 1;
}
