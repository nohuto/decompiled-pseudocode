/*
 * XREFs of CmpFreePostBlock @ 0x1404E224C
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1404A26F0 (NtNotifyChangeMultipleKeys.c)
 *     CmpNotifyChangeKey @ 0x1404A3080 (CmpNotifyChangeKey.c)
 *     CmNotifyRunDown @ 0x1404B9558 (CmNotifyRunDown.c)
 *     CmpPostApc @ 0x1404E1E60 (CmpPostApc.c)
 *     CmpSignalDeferredPosts @ 0x1404E21B4 (CmpSignalDeferredPosts.c)
 *     CmpFreeSubordinatePost @ 0x1404E22A0 (CmpFreeSubordinatePost.c)
 *     CmpPostNotify @ 0x1404E2F90 (CmpPostNotify.c)
 *     CmpDeleteKeyObject @ 0x14059F520 (CmpDeleteKeyObject.c)
 *     CmpPostApcRunDown @ 0x140701440 (CmpPostApcRunDown.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x1400FA020 (ObDereferenceObjectDeferDelete.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFreePostBlock(PVOID P)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)P + 6);
  if ( v2 )
  {
    ObDereferenceObjectDeferDelete(*(PVOID *)(v2 + 16));
    ExFreePoolWithTag(*((PVOID *)P + 6), 0);
  }
  if ( (*((_DWORD *)P + 14) & 0x10000) != 0 )
    ExFreePoolWithTag(*((PVOID *)P + 8), 0);
  ExFreePoolWithTag(P, 0);
}
