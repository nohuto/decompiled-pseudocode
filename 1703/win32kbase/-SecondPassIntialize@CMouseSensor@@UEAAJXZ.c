/*
 * XREFs of ?SecondPassIntialize@CMouseSensor@@UEAAJXZ @ 0x1C0130550
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionCheckForMouseAsTouch @ 0x1C013A0D0 (ApiSetEditionCheckForMouseAsTouch.c)
 */

__int64 __fastcall CMouseSensor::SecondPassIntialize(struct CMouseAsTouchAdapter **this)
{
  if ( (unsigned int)ApiSetEditionCheckForMouseAsTouch() )
    return CMouseAsTouchAdapter::CreateInstance(this + 81);
  else
    return 0LL;
}
