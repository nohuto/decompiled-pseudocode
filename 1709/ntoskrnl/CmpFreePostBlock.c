/*
 * XREFs of CmpFreePostBlock @ 0x14046FAD4
 * Callers:
 *     CmpPostApc @ 0x14046F720 (CmpPostApc.c)
 *     CmpSignalDeferredPosts @ 0x14046FA38 (CmpSignalDeferredPosts.c)
 *     CmpFreeSubordinatePost @ 0x14046FB14 (CmpFreeSubordinatePost.c)
 *     CmpNotifyChangeKey @ 0x140479920 (CmpNotifyChangeKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x14047A598 (NtNotifyChangeMultipleKeys.c)
 *     CmpPostNotify @ 0x14047BFBC (CmpPostNotify.c)
 *     CmpDeleteKeyObject @ 0x1404A97C0 (CmpDeleteKeyObject.c)
 *     CmNotifyRunDown @ 0x1404D66B0 (CmNotifyRunDown.c)
 *     CmpPostApcRunDown @ 0x140697900 (CmpPostApcRunDown.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x140071350 (ObDereferenceObjectDeferDelete.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
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
