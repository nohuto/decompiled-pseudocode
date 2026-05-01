/*
 * XREFs of ?Hide@CFrameApplicationPresentation@@UEAAJXZ @ 0x180069630
 * Callers:
 *     <none>
 * Callees:
 *     ?_SetFrameCloakSerialized@CFrameApplicationPresentation@@AEAAXW4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x18006B2C8 (-_SetFrameCloakSerialized@CFrameApplicationPresentation@@AEAAXW4__MIDL___MIDL_itf_privilegedoper.c)
 */

__int64 __fastcall CFrameApplicationPresentation::Hide(CFrameApplicationPresentation *this)
{
  if ( *((_BYTE *)this + 60) )
  {
    CFrameApplicationPresentation::_SetFrameCloakSerialized(this, 1LL);
    *((_BYTE *)this + 60) = 0;
  }
  return 0LL;
}
