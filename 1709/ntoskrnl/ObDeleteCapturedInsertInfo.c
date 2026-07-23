/*
 * XREFs of ObDeleteCapturedInsertInfo @ 0x1404E38B0
 * Callers:
 *     CcInitializeCacheMapEx @ 0x1400636F0 (CcInitializeCacheMapEx.c)
 *     CmLoadDifferencingKey @ 0x1404E2048 (CmLoadDifferencingKey.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     SeReleaseSecurityDescriptor @ 0x14049CFE0 (SeReleaseSecurityDescriptor.c)
 */

void __fastcall ObDeleteCapturedInsertInfo(__int64 a1)
{
  __int64 v2; // rax
  void *v3; // rcx
  struct _KPRCB *CurrentPrcb; // r8
  _SLIST_ENTRY *v5; // rdx
  _GENERAL_LOOKASIDE *P; // rcx

  if ( (*(_BYTE *)(a1 - 21) & 1) != 0 )
  {
    v2 = *(_QWORD *)(a1 - 16);
    if ( v2 )
    {
      v3 = *(void **)(v2 + 32);
      if ( v3 )
      {
        SeReleaseSecurityDescriptor(v3, *(_BYTE *)(v2 + 16), 1);
        *(_QWORD *)(*(_QWORD *)(a1 - 16) + 32LL) = 0LL;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v5 = *(_SLIST_ENTRY **)(a1 - 16);
      P = CurrentPrcb->PPLookasideList[4].P;
      ++P->TotalFrees;
      if ( LOWORD(P->ListHead.Alignment) < P->Depth
        || (++P->FreeMisses,
            P = CurrentPrcb->PPLookasideList[4].L,
            ++P->TotalFrees,
            LOWORD(P->ListHead.Alignment) < P->Depth) )
      {
        RtlpInterlockedPushEntrySList(&P->ListHead, v5);
      }
      else
      {
        ++P->FreeMisses;
        ((void (__fastcall *)(_SLIST_ENTRY *))P->FreeEx)(v5);
      }
      *(_QWORD *)(a1 - 16) = 0LL;
    }
  }
}
