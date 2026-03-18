/*
 * XREFs of UmfdUnloadFontFileInternal @ 0x1C00419A0
 * Callers:
 *     UmfdLoadFontFile @ 0x1C0041350 (UmfdLoadFontFile.c)
 *     UmfdUnloadFontFile @ 0x1C0041970 (UmfdUnloadFontFile.c)
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C00381D8 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C0038470 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall UmfdUnloadFontFileInternal(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ecx
  struct _SLIST_ENTRY v5[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v6; // [rsp+48h] [rbp-20h]
  unsigned int v7; // [rsp+50h] [rbp-18h]

  FontDriverDdiRequest::FontDriverDdiRequest((__int64)v5, 5);
  v6 = a1;
  v5[0].Next = (struct _SLIST_ENTRY *)&UnloadFontFileRequest::`vftable';
  v7 = 0;
  v2 = UmfdClientSendAndWaitForCompletion(*(_DWORD *)(a1 + 8), v5);
  v3 = v7;
  if ( v2 < 0 )
    return 0;
  return v3;
}
