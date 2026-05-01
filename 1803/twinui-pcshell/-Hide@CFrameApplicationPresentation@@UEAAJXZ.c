/*
 * XREFs of ?Hide@CFrameApplicationPresentation@@UEAAJXZ @ 0x180136F40
 * Callers:
 *     <none>
 * Callees:
 *     ?_SetFrameCloakSerialized@CFrameApplicationPresentation@@AEAAXW4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x180013620 (-_SetFrameCloakSerialized@CFrameApplicationPresentation@@AEAAXW4__MIDL___MIDL_itf_privilegedoper.c)
 */

__int64 __fastcall CFrameApplicationPresentation::Hide(CFrameApplicationPresentation *this)
{
  if ( *((_BYTE *)this + 52) )
  {
    CFrameApplicationPresentation::_SetFrameCloakSerialized((__int64)this, 1u);
    *((_BYTE *)this + 52) = 0;
  }
  return 0LL;
}
