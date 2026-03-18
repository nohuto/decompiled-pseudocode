/*
 * XREFs of ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C0038470
 * Callers:
 *     UmfdDestroyFont @ 0x1C003F0D0 (UmfdDestroyFont.c)
 *     UmfdQueryFont @ 0x1C003F180 (UmfdQueryFont.c)
 *     UmfdQueryTrueTypeTable @ 0x1C003F460 (UmfdQueryTrueTypeTable.c)
 *     UmfdQueryFontTree @ 0x1C0040420 (UmfdQueryFontTree.c)
 *     UmfdTrueTypeFreeGlyphset @ 0x1C0040D74 (UmfdTrueTypeFreeGlyphset.c)
 *     UmfdQueryFontFile @ 0x1C00412C0 (UmfdQueryFontFile.c)
 *     UmfdLoadFontFile @ 0x1C0041350 (UmfdLoadFontFile.c)
 *     UmfdUnloadFontFileInternal @ 0x1C00419A0 (UmfdUnloadFontFileInternal.c)
 *     UmfdQueryTrueTypeOutline @ 0x1C01315F0 (UmfdQueryTrueTypeOutline.c)
 *     UmfdDrvFreeInternal @ 0x1C02B34C0 (UmfdDrvFreeInternal.c)
 *     UmfdEscape @ 0x1C02B3520 (UmfdEscape.c)
 *     UmfdFontManagement @ 0x1C02B35D0 (UmfdFontManagement.c)
 *     UmfdGetTrueTypeFile @ 0x1C02B3690 (UmfdGetTrueTypeFile.c)
 *     UmfdQueryGlyphAttrs @ 0x1C02B3710 (UmfdQueryGlyphAttrs.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall FontDriverDdiRequest::FontDriverDdiRequest(__int64 a1, int a2)
{
  __int64 ThreadInformation; // [rsp+30h] [rbp-28h] BYREF

  *(_DWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = &FontDriverDdiRequest::`vftable';
  *(_QWORD *)(a1 + 16) = KeGetCurrentThread();
  *(_BYTE *)(a1 + 32) = 0;
  if ( ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadAmILastThread|0x20, &ThreadInformation, 0x10u, 0LL) >= 0 )
  {
    *(_QWORD *)(a1 + 24) = ThreadInformation;
    *(_BYTE *)(a1 + 32) = 1;
  }
  return a1;
}
