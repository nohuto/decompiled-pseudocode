/*
 * XREFs of ?DrawInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1801A9BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIALIAS_MODE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180043A58 (-SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIAL.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180043ED0 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180043FB4 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::DrawInk(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        struct ID2D1Ink *a3,
        const struct _D3DCOLORVALUE *a4,
        struct ID2D1InkStyle *a5,
        enum D2D1_ANTIALIAS_MODE a6,
        enum D2D1_PRIMITIVE_BLEND a7)
{
  struct D2D_MATRIX_3X2_F v12; // [rsp+30h] [rbp-28h] BYREF

  CD2DContext::FlushDrawList(this);
  CD2DContext::EnsureBeginDraw(this);
  CD2DContext::SetCommonState(this, a2, a7, &a6, &v12);
  (*(void (__fastcall **)(_QWORD, const struct _D3DCOLORVALUE *))(**((_QWORD **)this + 38) + 64LL))(
    *((_QWORD *)this + 38),
    a4);
  (*(void (__fastcall **)(_QWORD, struct ID2D1Ink *, _QWORD, struct ID2D1InkStyle *))(**((_QWORD **)this + 22) + 816LL))(
    *((_QWORD *)this + 22),
    a3,
    *((_QWORD *)this + 38),
    a5);
  return 0LL;
}
