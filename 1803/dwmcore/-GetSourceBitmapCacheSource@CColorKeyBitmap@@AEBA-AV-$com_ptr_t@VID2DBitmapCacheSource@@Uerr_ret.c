/*
 * XREFs of ?GetSourceBitmapCacheSource@CColorKeyBitmap@@AEBA?AV?$com_ptr_t@VID2DBitmapCacheSource@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180216D48
 * Callers:
 *     ?GetDisplayId@CColorKeyBitmap@@UEBA?AVDisplayId@@XZ @ 0x180216CD0 (-GetDisplayId@CColorKeyBitmap@@UEBA-AVDisplayId@@XZ.c)
 *     ?LockForRead@CColorKeyBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180216DE0 (-LockForRead@CColorKeyBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

_QWORD *__fastcall CColorKeyBitmap::GetSourceBitmapCacheSource(__int64 a1, _QWORD *a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v3 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(a1 + 24))(
         *(_QWORD *)(a1 + 24),
         &GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3,
         a2);
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x161F,
      (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
      (const char *)(unsigned int)v3);
  return a2;
}
