/*
 * XREFs of ?EndAppTransitionRequest@CImmersiveApplicationTransitionHelper@@UEAAJXZ @ 0x18003BE70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApplicationTransitionHelper::EndAppTransitionRequest(
        CImmersiveApplicationTransitionHelper *this)
{
  if ( *((_DWORD *)this + 8) )
  {
    DwmpEndTransitionRequest();
    *((_DWORD *)this + 8) = 0;
  }
  return 0LL;
}
