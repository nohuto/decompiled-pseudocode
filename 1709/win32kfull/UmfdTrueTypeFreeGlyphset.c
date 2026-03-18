/*
 * XREFs of UmfdTrueTypeFreeGlyphset @ 0x1C0040D74
 * Callers:
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C003C1B0 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C00381D8 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C0038470 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 *     ?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z @ 0x1C0040DF8 (-ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

void __fastcall UmfdTrueTypeFreeGlyphset(__int64 a1, int a2, void *a3)
{
  struct _SLIST_ENTRY v6[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+50h] [rbp-18h]

  FontDriverDdiRequest::FontDriverDdiRequest((__int64)v6, 15);
  v7 = a1;
  v6[0].Next = (struct _SLIST_ENTRY *)&TrueTypeFreeGlyphsetRequest::`vftable';
  v8 = a2;
  UmfdClientSendAndWaitForCompletion(0, v6);
  UmfdAllocation::ReleaseKernelmodeAllocation(a3);
}
