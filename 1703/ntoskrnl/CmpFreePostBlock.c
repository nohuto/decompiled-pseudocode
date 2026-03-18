/*
 * XREFs of CmpFreePostBlock @ 0x1404CE0B0
 * Callers:
 *     CmpPostNotify @ 0x14048C118 (CmpPostNotify.c)
 *     NtNotifyChangeMultipleKeys @ 0x14048E630 (NtNotifyChangeMultipleKeys.c)
 *     CmpNotifyChangeKey @ 0x140491AD8 (CmpNotifyChangeKey.c)
 *     CmpPostApc @ 0x1404CDCF0 (CmpPostApc.c)
 *     CmpSignalDeferredPosts @ 0x1404CE014 (CmpSignalDeferredPosts.c)
 *     CmpFreeSubordinatePost @ 0x1404CE104 (CmpFreeSubordinatePost.c)
 *     CmpDeleteKeyObject @ 0x140506F30 (CmpDeleteKeyObject.c)
 *     CmNotifyRunDown @ 0x14053F248 (CmNotifyRunDown.c)
 *     CmpPostApcRunDown @ 0x14066D290 (CmpPostApcRunDown.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x1400E19E0 (ObDereferenceObjectDeferDelete.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFreePostBlock(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 )
  {
    ObDereferenceObjectDeferDelete(*(PVOID *)(v2 + 16));
    ExFreePoolWithTag(*(PVOID *)(a1 + 48), 0);
  }
  if ( (*(_DWORD *)(a1 + 56) & 0x10000) != 0 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 64), 0);
  ExFreePoolWithTag((PVOID)a1, 0);
}
