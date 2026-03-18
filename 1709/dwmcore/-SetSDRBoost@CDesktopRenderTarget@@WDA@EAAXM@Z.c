/*
 * XREFs of ?SetSDRBoost@CDesktopRenderTarget@@WDA@EAAXM@Z @ 0x1800C5F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDesktopRenderTarget::SetSDRBoost(__int64 a1, enum D2D1_FILL_MODE a2)
{
  CDrawListEntryBuilder::GeometrySink::SetFillMode((CDrawListEntryBuilder::GeometrySink *)(a1 - 48), a2);
}
