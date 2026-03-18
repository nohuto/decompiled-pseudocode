/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CMagnifierRenderTarget@@UEAAXXZ @ 0x18015AF90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMagnifierRenderTarget::ReleaseResourcesForDisplayChange(CMagnifierRenderTarget *this)
{
  if ( *((_BYTE *)this + 628) )
    *((_DWORD *)this + 158) = -2003304442;
}
