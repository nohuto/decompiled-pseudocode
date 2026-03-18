/*
 * XREFs of ?NeedsCopyFrontToBack@CHwFullScreenRenderTarget@@IEAA_NXZ @ 0x18013D5A4
 * Callers:
 *     ?ContributeToDirtyRegion@CHwFullScreenRenderTarget@@UEAAJAEBVCMILMatrix@@PEAVCDirtyRegion@@@Z @ 0x18007C100 (-ContributeToDirtyRegion@CHwFullScreenRenderTarget@@UEAAJAEBVCMILMatrix@@PEAVCDirtyRegion@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CHwFullScreenRenderTarget::NeedsCopyFrontToBack(CHwFullScreenRenderTarget *this)
{
  bool result; // al

  if ( (*((_DWORD *)this + 85) & 0x408) != 0x408 )
    return 0;
  if ( (*(unsigned __int8 (__fastcall **)(CHwFullScreenRenderTarget *))(*(_QWORD *)this + 312LL))(this) )
    return 0;
  result = 1;
  if ( *((_DWORD *)this + 74) <= 1u )
    return 0;
  return result;
}
