/*
 * XREFs of ?NotifyInvalidDisplaySet@CMagnifierRenderTarget@@UEAAJXZ @ 0x180148640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMagnifierRenderTarget::NotifyInvalidDisplaySet(CMagnifierRenderTarget *this)
{
  if ( *((_BYTE *)this + 572) )
    *((_DWORD *)this + 144) = -2003304442;
  return 0LL;
}
