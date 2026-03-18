/*
 * XREFs of ?Render@CHwndRenderTargetDDA@@UEAAJPEA_N@Z @ 0x180147C80
 * Callers:
 *     <none>
 * Callees:
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180019700 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?DDAExcludeVisualSetExclude@CComposition@@QEAAX_N@Z @ 0x18011B914 (-DDAExcludeVisualSetExclude@CComposition@@QEAAX_N@Z.c)
 */

__int64 __fastcall CHwndRenderTargetDDA::Render(CComposition **this, bool *a2, __int64 a3)
{
  __int64 v5; // r8

  CComposition::DDAExcludeVisualSetExclude(*(this - 6), 1, a3);
  LODWORD(a2) = CHwndRenderTarget::Render((CHwndRenderTarget *)this, a2);
  CComposition::DDAExcludeVisualSetExclude(*(this - 6), 0, v5);
  return (unsigned int)a2;
}
