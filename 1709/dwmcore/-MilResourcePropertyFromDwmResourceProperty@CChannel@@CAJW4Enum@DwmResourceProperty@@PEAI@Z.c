/*
 * XREFs of ?MilResourcePropertyFromDwmResourceProperty@CChannel@@CAJW4Enum@DwmResourceProperty@@PEAI@Z @ 0x1801227FC
 * Callers:
 *     ?BaseAnimationAddBinding@CChannel@@UEAAJIIW4Enum@DwmResourceProperty@@@Z @ 0x180121420 (-BaseAnimationAddBinding@CChannel@@UEAAJIIW4Enum@DwmResourceProperty@@@Z.c)
 *     ?BaseAnimationRemoveBinding@CChannel@@UEAAJIIW4Enum@DwmResourceProperty@@@Z @ 0x1801214E0 (-BaseAnimationRemoveBinding@CChannel@@UEAAJIIW4Enum@DwmResourceProperty@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CChannel::MilResourcePropertyFromDwmResourceProperty(unsigned int a1, _DWORD *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a1 < 7 )
  {
    *a2 = dword_1802191F8[a1];
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0xC3Bu);
  }
  return v2;
}
