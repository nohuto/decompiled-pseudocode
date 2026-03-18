/*
 * XREFs of ?GetStereoContextForRt@CMagnifierRenderTarget@@MEAA?AW4StereoContext@@I@Z @ 0x1800C11E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMagnifierRenderTarget::GetStereoContextForRt(__int64 a1, unsigned int a2)
{
  return *(unsigned int *)(32 * (a2 + 12LL) + a1);
}
