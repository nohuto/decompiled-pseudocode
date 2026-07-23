/*
 * XREFs of MiFreeInPageSupportBlock @ 0x140032450
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140025FD0 (MiPfPutPagesInTransition.c)
 *     MiResolveMappedFileFault @ 0x14002A0B0 (MiResolveMappedFileFault.c)
 *     MiAllocateInPageSupport @ 0x14002A89C (MiAllocateInPageSupport.c)
 *     MiFinishHardFault @ 0x14002FC50 (MiFinishHardFault.c)
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiResolveTransitionFault @ 0x140049330 (MiResolveTransitionFault.c)
 *     MiPrivateFixup @ 0x1400CD7E0 (MiPrivateFixup.c)
 *     MiWaitForCollidedFaultComplete @ 0x140125424 (MiWaitForCollidedFaultComplete.c)
 *     MiResolvePageFileFault @ 0x140234CE8 (MiResolvePageFileFault.c)
 *     MmPrefetchPagesEx @ 0x14048E088 (MmPrefetchPagesEx.c)
 *     MiPfAllocateMdls @ 0x140493FB0 (MiPfAllocateMdls.c)
 *     MiGetReadyInPageBlock @ 0x1406E2624 (MiGetReadyInPageBlock.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeInPageSupportBlock(char *P, unsigned __int64 a2)
{
  char *v3; // rcx
  __int64 v4; // rdx
  _SLIST_HEADER *v5; // rcx

  if ( *((struct _KTHREAD **)P + 19) == KeGetCurrentThread() && *((_QWORD *)P + 26) )
    KeAbPostRelease((ULONG_PTR)P);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 44, 0xFFFFFFFF) == 1 )
  {
    v3 = (char *)*((_QWORD *)P + 31);
    if ( v3 && v3 != P + 256 )
      ExFreePoolWithTag(v3, 0);
    LOBYTE(a2) = ~P[189];
    v4 = (a2 >> 5) & 1;
    v5 = (_SLIST_HEADER *)&MiState[2 * (unsigned int)v4 + 552];
    if ( (unsigned int)LOWORD(v5->Alignment) >= *((unsigned __int8 *)&MiState[556] + v4) )
      ExFreePoolWithTag(P, 0);
    else
      RtlpInterlockedPushEntrySList(v5, (PSLIST_ENTRY)P);
  }
}
