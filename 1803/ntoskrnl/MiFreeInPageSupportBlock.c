/*
 * XREFs of MiFreeInPageSupportBlock @ 0x140059960
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140047200 (MiPfPutPagesInTransition.c)
 *     MiPrivateFixup @ 0x14004C8E8 (MiPrivateFixup.c)
 *     MiResolveMappedFileFault @ 0x140056F30 (MiResolveMappedFileFault.c)
 *     MiAllocateInPageSupport @ 0x14005763C (MiAllocateInPageSupport.c)
 *     MiFinishHardFault @ 0x140058B10 (MiFinishHardFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x14007C9F8 (MiWaitForCollidedFaultComplete.c)
 *     MiResolveTransitionFault @ 0x140119A70 (MiResolveTransitionFault.c)
 *     MiResolvePageFileFault @ 0x140151874 (MiResolvePageFileFault.c)
 *     MiFaultGetFileExtents @ 0x14026194C (MiFaultGetFileExtents.c)
 *     MmPrefetchPagesEx @ 0x1404BBAC8 (MmPrefetchPagesEx.c)
 *     MiPfAllocateMdls @ 0x1404BC050 (MiPfAllocateMdls.c)
 *     MiGetReadyInPageBlock @ 0x14074D190 (MiGetReadyInPageBlock.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeInPageSupportBlock(char *P)
{
  char *v2; // rcx
  _SLIST_HEADER *v3; // rcx

  if ( *((struct _KTHREAD **)P + 19) == KeGetCurrentThread() && *((_QWORD *)P + 26) )
    KeAbPostRelease((ULONG_PTR)P);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 44, 0xFFFFFFFF) == 1 )
  {
    v2 = (char *)*((_QWORD *)P + 31);
    if ( v2 && v2 != P + 264 )
      ExFreePoolWithTag(v2, 0);
    v3 = (_SLIST_HEADER *)&MiState[2 * (((unsigned __int64)(unsigned __int8)~P[189] >> 5) & 1) + 600];
    if ( (unsigned int)LOWORD(v3->Alignment) >= *((unsigned __int8 *)&MiState[604]
                                                + (((unsigned __int64)(unsigned __int8)~P[189] >> 5) & 1)) )
      ExFreePoolWithTag(P, 0);
    else
      RtlpInterlockedPushEntrySList(v3, (PSLIST_ENTRY)P);
  }
}
