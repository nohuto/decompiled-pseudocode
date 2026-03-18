/*
 * XREFs of PopMarkComponentsBootPhase @ 0x14040D5C8
 * Callers:
 *     PopSaveHiberContext @ 0x140405800 (PopSaveHiberContext.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x14003CBA4 (VfIsVerifierEnabled.c)
 *     HvlMarkHiberPhase @ 0x14013E08C (HvlMarkHiberPhase.c)
 *     RtlMarkHiberPhase @ 0x14013ED00 (RtlMarkHiberPhase.c)
 *     PoSetHiberRange @ 0x14013EF30 (PoSetHiberRange.c)
 *     FirstEntrySList @ 0x140189460 (FirstEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     VfIsVerifierExtensionEnabled @ 0x14024FF04 (VfIsVerifierExtensionEnabled.c)
 *     BgkResumePrepare @ 0x14040CFC0 (BgkResumePrepare.c)
 *     PopMarkHiberPhase @ 0x14040D278 (PopMarkHiberPhase.c)
 *     MmMarkHiberPhase @ 0x14040D3A0 (MmMarkHiberPhase.c)
 *     KeMarkHiberPhase @ 0x14040D8D8 (KeMarkHiberPhase.c)
 *     MmUpdateHiberMappings @ 0x14040DF80 (MmUpdateHiberMappings.c)
 */

_UNKNOWN **__fastcall PopMarkComponentsBootPhase(unsigned int *Address)
{
  _UNKNOWN **result; // rax
  PVOID *i; // rbx
  PSLIST_ENTRY j; // rbx
  unsigned int m; // ebx
  _QWORD *v6; // rbx
  __int64 k; // rbx
  void *v8; // r8
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  if ( !byte_14034B2E1 )
  {
    PoSetHiberRange(0LL, 0x10000u, PopSaveHiberContext, 0LL, 0x6E72654Bu);
    PoSetHiberRange(0LL, 0x10000u, HalAllocateCrashDumpRegisters, 0LL, 0x6348616Cu);
    for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
    {
      PoSetHiberRange(0LL, 0x10000u, i, 0xA0uLL, 0x6E72654Bu);
      PoSetHiberRange(0LL, 0x10000u, i[12], *((unsigned __int16 *)i + 45), 0x6E72654Bu);
      PoSetHiberRange(0LL, 0x10000u, i[10], *((unsigned __int16 *)i + 37), 0x6E72654Bu);
    }
    for ( j = FirstEntrySList(&SListHead); j; j = j->Next )
      KeMarkHiberPhase(*((PVOID *)&j[-1].Next + 1));
    ((void (__fastcall *)(_QWORD))off_14033B2B8[0])(0LL);
    PopMarkHiberPhase(Address);
    PoSetHiberRange(0LL, 0x10000u, &KdPitchDebugger, 0LL, 0x626C644Bu);
    if ( !KdPitchDebugger )
    {
      KdSetHiberRange(&KdpContext);
      for ( k = 0LL; (unsigned int)k < (unsigned int)KeNumberProcessors_0; k = (unsigned int)(k + 1) )
      {
        v8 = (void *)KdLogBuffer[k];
        if ( v8 )
          PoSetHiberRange(0LL, 0x10000u, v8, 0x1000uLL, 0x626C644Bu);
      }
    }
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
    for ( m = 0; m < IopNumTriageDumpDataBlocks; ++m )
      PoSetHiberRange(
        0LL,
        0x10000u,
        *(PVOID *)&IopTriageDumpDataBlocks[m],
        _mm_srli_si128((__m128i)IopTriageDumpDataBlocks[m], 8).m128i_u64[0] - *(_QWORD *)&IopTriageDumpDataBlocks[m],
        0x42706D44u);
    v6 = PopShutdownNotificationCallback;
    if ( PopShutdownNotificationCallback )
    {
      PoSetHiberRange(0LL, 0x10000u, PopShutdownNotificationCallback, 0x18uLL, 0x6E72654Bu);
      ((void (__fastcall *)(_QWORD))*v6)(v6[2]);
    }
    result = (_UNKNOWN **)MmUpdateHiberMappings(1LL);
    *((_BYTE *)Address + 3) = 1;
  }
  *((_BYTE *)Address + 28) = 1;
  return result;
}
