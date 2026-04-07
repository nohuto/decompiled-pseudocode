/*
 * XREFs of ?OnGlobalTimeUpdated@CLivePreview@@UEAAJXZ @ 0x180069BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

__int64 __fastcall CLivePreview::OnGlobalTimeUpdated(CLivePreview *this)
{
  CVisual::SetDirtyFlags(this, 0x2000);
  return 0LL;
}
