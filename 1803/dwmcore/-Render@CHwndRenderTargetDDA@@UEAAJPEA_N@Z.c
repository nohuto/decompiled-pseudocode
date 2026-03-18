/*
 * XREFs of ?Render@CHwndRenderTargetDDA@@UEAAJPEA_N@Z @ 0x1801700D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180061DB0 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?DDAExcludeVisualSetExclude@CComposition@@QEAAX_N@Z @ 0x18013E538 (-DDAExcludeVisualSetExclude@CComposition@@QEAAX_N@Z.c)
 */

__int64 __fastcall CHwndRenderTargetDDA::Render(CComposition **this, bool *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r8
  __int64 v7; // r9

  CComposition::DDAExcludeVisualSetExclude(*(this - 6), 1, a3, a4);
  LODWORD(a2) = CHwndRenderTarget::Render((CHwndRenderTarget *)this, a2);
  CComposition::DDAExcludeVisualSetExclude(*(this - 6), 0, v6, v7);
  return (unsigned int)a2;
}
