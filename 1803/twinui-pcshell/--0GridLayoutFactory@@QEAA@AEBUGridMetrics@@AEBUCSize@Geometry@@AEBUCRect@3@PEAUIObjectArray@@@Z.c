/*
 * XREFs of ??0GridLayoutFactory@@QEAA@AEBUGridMetrics@@AEBUCSize@Geometry@@AEBUCRect@3@PEAUIObjectArray@@@Z @ 0x18028E478
 * Callers:
 *     ?v_LayoutChildren@CSwitchItemGrid@@MEAAXXZ @ 0x1802906C0 (-v_LayoutChildren@CSwitchItemGrid@@MEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

GridLayoutFactory *__fastcall GridLayoutFactory::GridLayoutFactory(
        GridLayoutFactory *this,
        const struct GridMetrics *a2,
        const struct Geometry::CSize *a3,
        const struct Geometry::CRect *a4,
        struct IObjectArray *a5)
{
  GridLayoutFactory *v6; // rax
  __int64 v7; // rcx
  __int128 v8; // xmm1

  v6 = this;
  v7 = 4LL;
  do
  {
    *(_OWORD *)v6 = *(_OWORD *)a2;
    *((_OWORD *)v6 + 1) = *((_OWORD *)a2 + 1);
    *((_OWORD *)v6 + 2) = *((_OWORD *)a2 + 2);
    *((_OWORD *)v6 + 3) = *((_OWORD *)a2 + 3);
    *((_OWORD *)v6 + 4) = *((_OWORD *)a2 + 4);
    *((_OWORD *)v6 + 5) = *((_OWORD *)a2 + 5);
    *((_OWORD *)v6 + 6) = *((_OWORD *)a2 + 6);
    v6 = (GridLayoutFactory *)((char *)v6 + 128);
    v8 = *((_OWORD *)a2 + 7);
    a2 = (const struct GridMetrics *)((char *)a2 + 128);
    *((_OWORD *)v6 - 1) = v8;
    --v7;
  }
  while ( v7 );
  *((_QWORD *)this + 64) = *(_QWORD *)a3;
  *(_OWORD *)((char *)this + 520) = *(_OWORD *)a4;
  *((_QWORD *)this + 67) = a5;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)this + 67);
  return this;
}
