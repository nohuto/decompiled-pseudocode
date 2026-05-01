/*
 * XREFs of ?Show@CFrameApplicationPresentation@@UEAAJXZ @ 0x1800148B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ @ 0x1800130C4 (-_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ.c)
 *     ?_SetFrameCloakSerialized@CFrameApplicationPresentation@@AEAAXW4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x180013620 (-_SetFrameCloakSerialized@CFrameApplicationPresentation@@AEAAXW4__MIDL___MIDL_itf_privilegedoper.c)
 */

__int64 __fastcall CFrameApplicationPresentation::Show(CFrameApplicationPresentation *this)
{
  if ( !*((_BYTE *)this + 52) )
  {
    CFrameApplicationPresentation::_SuppressSplashScreenIfAppropriate(this);
    if ( *((_DWORD *)this + 53) != 1 )
      CFrameApplicationPresentation::_SetFrameCloakSerialized((__int64)this, 0);
    *((_BYTE *)this + 52) = 1;
  }
  return 0LL;
}
