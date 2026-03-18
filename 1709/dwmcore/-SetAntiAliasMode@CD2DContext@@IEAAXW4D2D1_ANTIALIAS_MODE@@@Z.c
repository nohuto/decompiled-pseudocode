/*
 * XREFs of ?SetAntiAliasMode@CD2DContext@@IEAAXW4D2D1_ANTIALIAS_MODE@@@Z @ 0x180043DAC
 * Callers:
 *     ?SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIALIAS_MODE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180043A58 (-SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIAL.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DContext::SetAntiAliasMode(CD2DContext *this, enum D2D1_ANTIALIAS_MODE a2)
{
  if ( a2 != *((_DWORD *)this + 96) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 256LL))(*((_QWORD *)this + 22));
    *((_DWORD *)this + 96) = a2;
  }
}
