/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CMagnifierRenderTarget@@UEAAXXZ @ 0x180138AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMagnifierRenderTarget::ReleaseResourcesForDisplayChange(CMagnifierRenderTarget *this)
{
  if ( *((_BYTE *)this + 572) )
    *((_DWORD *)this + 144) = -2003304442;
}
