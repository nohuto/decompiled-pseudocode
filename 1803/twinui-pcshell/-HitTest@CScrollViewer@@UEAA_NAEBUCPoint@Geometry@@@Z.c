/*
 * XREFs of ?HitTest@CScrollViewer@@UEAA_NAEBUCPoint@Geometry@@@Z @ 0x1802A26A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x180288518 (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     ?_HitTestChildren@CMultitaskingViewElementBase@@IEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@AEBUCPoint@Geometry@@@Z @ 0x18028BCD8 (-_HitTestChildren@CMultitaskingViewElementBase@@IEAA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@.c)
 *     ?_GetVisibleRect@CScrollViewer@@AEAA?AUCRect@Geometry@@XZ @ 0x1802A32F4 (-_GetVisibleRect@CScrollViewer@@AEAA-AUCRect@Geometry@@XZ.c)
 */

bool __fastcall CScrollViewer::HitTest(CScrollViewer *this, const struct Geometry::CPoint *a2)
{
  bool v3; // bl
  char v4; // di
  Geometry::CRect *VisibleRect; // rax
  __int64 v8; // [rsp+20h] [rbp-38h] BYREF

  v3 = 0;
  LODWORD(v8) = 0;
  v4 = 0;
  VisibleRect = (Geometry::CRect *)CScrollViewer::_GetVisibleRect(this);
  if ( Geometry::CRect::Contains(VisibleRect, (const struct tagPOINT *)a2) )
  {
    v4 = 1;
    v3 = *CMultitaskingViewElementBase::_HitTestChildren(this, &v8, (__int64 *)a2) != 0;
  }
  if ( (v4 & 1) != 0 )
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  return v3;
}
