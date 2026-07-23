/*
 * XREFs of CmpCleanupPathInfo @ 0x1406617E8
 * Callers:
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall CmpCleanupPathInfo(__int64 a1)
{
  _SLIST_ENTRY *v1; // rdx
  struct _KPRCB *CurrentPrcb; // r8
  _GENERAL_LOOKASIDE *P; // rcx
  PSLIST_ENTRY result; // rax

  v1 = *(_SLIST_ENTRY **)(a1 + 160);
  if ( v1 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[8].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth )
      return RtlpInterlockedPushEntrySList(&P->ListHead, v1);
    ++P->FreeMisses;
    P = CurrentPrcb->PPLookasideList[8].L;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth )
    {
      return RtlpInterlockedPushEntrySList(&P->ListHead, v1);
    }
    else
    {
      ++P->FreeMisses;
      return (PSLIST_ENTRY)((__int64 (__fastcall *)(_SLIST_ENTRY *))P->FreeEx)(v1);
    }
  }
  return result;
}
