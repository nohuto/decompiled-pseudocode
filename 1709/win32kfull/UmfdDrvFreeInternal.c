/*
 * XREFs of UmfdDrvFreeInternal @ 0x1C02B34C0
 * Callers:
 *     UmfdDrvFree @ 0x1C003F0A0 (UmfdDrvFree.c)
 *     UmfdQueryFont @ 0x1C003F180 (UmfdQueryFont.c)
 *     UmfdQueryFontTree @ 0x1C0040420 (UmfdQueryFontTree.c)
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C00381D8 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C0038470 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 */

__int64 __fastcall UmfdDrvFreeInternal(__int64 a1, __int64 a2, unsigned int a3)
{
  struct _SLIST_ENTRY v7[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+48h] [rbp-20h]
  __int64 v9; // [rsp+50h] [rbp-18h]

  FontDriverDdiRequest::FontDriverDdiRequest((__int64)v7, 9);
  v8 = a1;
  v7[0].Next = (struct _SLIST_ENTRY *)&FreeRequest::`vftable';
  v9 = a2;
  return UmfdClientSendAndWaitForCompletion(a3, v7);
}
