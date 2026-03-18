/*
 * XREFs of ??$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z @ 0x1800C78B0
 * Callers:
 *     ?SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x1800423A0 (-SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ?UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ @ 0x1800B4D20 (-UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ.c)
 *     ?SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z @ 0x1800B5D48 (-SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18015D484 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z @ 0x180182A24 (-SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z.c)
 *     ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x1801CF274 (-OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 *     ?ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ @ 0x1801FBAF8 (-ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 */

__int64 __fastcall ReleaseInterface<CVisualTree>(CMILRefCountBase **a1)
{
  CMILRefCountBase *v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = CMILRefCountBase::Release(v2);
    *a1 = 0LL;
  }
  return result;
}
