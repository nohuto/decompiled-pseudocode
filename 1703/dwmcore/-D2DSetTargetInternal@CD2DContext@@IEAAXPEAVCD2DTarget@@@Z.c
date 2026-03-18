/*
 * XREFs of ?D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z @ 0x1800AC6B8
 * Callers:
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x18007B250 (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x1800AC7C4 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommandList@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_DRAW_COMPOSITOR_COMMAND_LIST_OPTIONS@@I_N@Z @ 0x1800AD1A0 (-DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommand.c)
 * Callees:
 *     <none>
 */

void __fastcall CD2DContext::D2DSetTargetInternal(CD2DContext *this, struct CD2DTarget *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx

  v2 = *((_QWORD *)this + 23);
  if ( a2 )
  {
    v3 = *((_QWORD *)a2 + 5);
    v4 = *((_QWORD *)a2 + 4);
  }
  else
  {
    v3 = 0LL;
    v4 = 0LL;
  }
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v2 + 56LL))(v2, v4, v3);
}
