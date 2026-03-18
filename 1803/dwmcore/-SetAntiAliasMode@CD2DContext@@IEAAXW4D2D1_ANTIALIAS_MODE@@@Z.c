/*
 * XREFs of ?SetAntiAliasMode@CD2DContext@@IEAAXW4D2D1_ANTIALIAS_MODE@@@Z @ 0x1801E3E98
 * Callers:
 *     ?DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommandList@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_DRAW_COMPOSITOR_COMMAND_LIST_OPTIONS@@I_N@Z @ 0x1801E2750 (-DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommand.c)
 *     ?SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIALIAS_MODE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1801E3ED8 (-SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIAL.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DContext::SetAntiAliasMode(CD2DContext *this, enum D2D1_ANTIALIAS_MODE a2)
{
  if ( a2 != *((_DWORD *)this + 96) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 256LL))(*((_QWORD *)this + 22));
    *((_DWORD *)this + 96) = a2;
  }
}
