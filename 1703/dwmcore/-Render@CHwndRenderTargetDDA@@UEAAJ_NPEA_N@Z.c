/*
 * XREFs of ?Render@CHwndRenderTargetDDA@@UEAAJ_NPEA_N@Z @ 0x180155F80
 * Callers:
 *     <none>
 * Callees:
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18006E340 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?DDAExcludeVisualSetExclude@CComposition@@QEAAX_N@Z @ 0x18013F530 (-DDAExcludeVisualSetExclude@CComposition@@QEAAX_N@Z.c)
 */

__int64 __fastcall CHwndRenderTargetDDA::Render(CComposition **this, char a2, bool *a3)
{
  __int64 v6; // rdx

  CComposition::DDAExcludeVisualSetExclude(*(this - 6), 1);
  LOBYTE(v6) = a2;
  LODWORD(a3) = CHwndRenderTarget::Render((CHwndRenderTarget *)this, v6, a3);
  CComposition::DDAExcludeVisualSetExclude(*(this - 6), 0);
  return (unsigned int)a3;
}
