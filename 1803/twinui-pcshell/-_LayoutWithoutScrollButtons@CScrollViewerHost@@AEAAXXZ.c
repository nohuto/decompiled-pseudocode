/*
 * XREFs of ?_LayoutWithoutScrollButtons@CScrollViewerHost@@AEAAXXZ @ 0x180291648
 * Callers:
 *     ?UpdateScrollButtonVisibility@CScrollViewerHost@@UEAAXXZ @ 0x180291350 (-UpdateScrollButtonVisibility@CScrollViewerHost@@UEAAXXZ.c)
 *     ?v_LayoutChildren@CScrollViewerHost@@MEAAXXZ @ 0x1802916E0 (-v_LayoutChildren@CScrollViewerHost@@MEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_GetIdealChildLocation@CScrollViewerHost@@AEAA?AUCRect@Geometry@@XZ @ 0x1802913A8 (-_GetIdealChildLocation@CScrollViewerHost@@AEAA-AUCRect@Geometry@@XZ.c)
 *     ??$As@UIMultitaskingViewElement@@@?$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802A1DB0 (--$As@UIMultitaskingViewElement@@@-$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 */

void __fastcall CScrollViewerHost::_LayoutWithoutScrollButtons(CScrollViewerHost *this)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 IdealChildLocation; // rax
  __int64 v5; // r11
  __int64 *v6; // [rsp+20h] [rbp-28h] BYREF
  _DWORD v7[4]; // [rsp+28h] [rbp-20h] BYREF

  v2 = *((_QWORD *)this + 57);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 144LL))(v2);
  v6 = 0LL;
  Microsoft::WRL::ComPtr<IScrollViewer>::As<IMultitaskingViewElement>((char *)this + 448, &v6);
  v3 = *v6;
  IdealChildLocation = CScrollViewerHost::_GetIdealChildLocation((__int64)this, v7);
  (*(void (__fastcall **)(__int64, __int64))(v3 + 104))(v5, IdealChildLocation);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
}
