/*
 * XREFs of PopMarkComponentsBootPhase @ 0x140433C3C
 * Callers:
 *     PopSaveHiberContext @ 0x140434F40 (PopSaveHiberContext.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x1400F8F48 (VfIsVerifierEnabled.c)
 *     FirstEntrySList @ 0x140188F60 (FirstEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     HvlMarkHiberPhase @ 0x1401EE5BC (HvlMarkHiberPhase.c)
 *     MmIsAddressValid @ 0x140219970 (MmIsAddressValid.c)
 *     PoSetHiberRange @ 0x140241970 (PoSetHiberRange.c)
 *     RtlMarkHiberPhase @ 0x14025A810 (RtlMarkHiberPhase.c)
 *     VfIsVerifierExtensionEnabled @ 0x140276704 (VfIsVerifierExtensionEnabled.c)
 *     BgkResumePrepare @ 0x14042A5F4 (BgkResumePrepare.c)
 *     KdMarkHiberPhase @ 0x14042DF90 (KdMarkHiberPhase.c)
 *     KeMarkHiberPhase @ 0x14042E018 (KeMarkHiberPhase.c)
 *     MmMarkHiberPhase @ 0x140430420 (MmMarkHiberPhase.c)
 *     MmUpdateHiberMappings @ 0x1404306AC (MmUpdateHiberMappings.c)
 *     PopMarkHiberPhase @ 0x140433E88 (PopMarkHiberPhase.c)
 */

void __fastcall PopMarkComponentsBootPhase(PVOID Address)
{
  PVOID *i; // rbx
  PSLIST_ENTRY j; // rbx
  unsigned int k; // ebx
  _QWORD *v5; // rbx

  if ( !byte_140365B41 )
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
      KeMarkHiberPhase(*((_QWORD **)&j[-1].Next + 1));
    ((void (__fastcall *)(_QWORD))off_1403532E8[0])(0LL);
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
    if ( (PopSimulateHiberBugcheck & 0x100) == 0 )
      MmUpdateHiberMappings(1, (__int64)Address + 32);
    *((_BYTE *)Address + 3) = 1;
  }
  *((_BYTE *)Address + 28) = 1;
}
