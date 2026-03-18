/*
 * XREFs of ?PostPresent@CDesktopRenderTarget@@WDA@EAAJ_N0@Z @ 0x1800C5EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopRenderTarget::PostPresent(
        __int64 a1,
        struct CResourceTable *a2,
        const struct MILCMD_RENDERTARGET_SETCLEARCOLOR *a3)
{
  return CRenderTarget::ProcessSetClearColor((CRenderTarget *)(a1 - 48), a2, a3);
}
