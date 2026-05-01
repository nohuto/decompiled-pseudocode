/*
 * XREFs of ?HitTest@CVirtualDesktopContainerElement@@UEAA_NAEBUCPoint@Geometry@@@Z @ 0x1802A72A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_HitTestChildren@CMultitaskingViewElementBase@@IEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@AEBUCPoint@Geometry@@@Z @ 0x18028BCD8 (-_HitTestChildren@CMultitaskingViewElementBase@@IEAA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@.c)
 */

char __fastcall CVirtualDesktopContainerElement::HitTest(
        CVirtualDesktopContainerElement *this,
        const struct Geometry::CPoint *a2)
{
  char v2; // bl
  char v3; // r8
  __int64 *v4; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  LODWORD(v6) = 0;
  v3 = 0;
  if ( *((_QWORD *)this + 100) > 1uLL
    || (v4 = CMultitaskingViewElementBase::_HitTestChildren(this, &v6, (__int64 *)a2), v3 = 1, *v4) )
  {
    v2 = 1;
  }
  if ( (v3 & 1) != 0 )
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  return v2;
}
