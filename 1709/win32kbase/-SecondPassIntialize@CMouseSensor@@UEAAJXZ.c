/*
 * XREFs of ?SecondPassIntialize@CMouseSensor@@UEAAJXZ @ 0x1C012FB70
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateInstance@CMouseAsTouchAdapter@@SAJPEAPEAV1@@Z @ 0x1C0131D58 (-CreateInstance@CMouseAsTouchAdapter@@SAJPEAPEAV1@@Z.c)
 *     ApiSetEditionCheckForMouseAsTouch @ 0x1C01393A8 (ApiSetEditionCheckForMouseAsTouch.c)
 */

__int64 __fastcall CMouseSensor::SecondPassIntialize(struct CMouseAsTouchAdapter **this)
{
  if ( (unsigned int)ApiSetEditionCheckForMouseAsTouch() )
    return CMouseAsTouchAdapter::CreateInstance(this + 121);
  else
    return 0LL;
}
