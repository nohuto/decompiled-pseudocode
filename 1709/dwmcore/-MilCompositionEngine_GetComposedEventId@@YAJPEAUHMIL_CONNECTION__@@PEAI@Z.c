/*
 * XREFs of ?MilCompositionEngine_GetComposedEventId@@YAJPEAUHMIL_CONNECTION__@@PEAI@Z @ 0x1801203B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetComposedEventId@CConnection@@QEAAJPEAI@Z @ 0x180120ADC (-GetComposedEventId@CConnection@@QEAAJPEAI@Z.c)
 */

__int64 __fastcall MilCompositionEngine_GetComposedEventId(struct HMIL_CONNECTION__ *a1, unsigned int *a2)
{
  unsigned int v2; // ebx
  signed int ComposedEventId; // eax

  if ( a1 )
  {
    ComposedEventId = CConnection::GetComposedEventId(a1, a2);
    v2 = ComposedEventId;
    if ( ComposedEventId < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802191F4, 1u, ComposedEventId, 0x91u);
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802191F4, 1u, 0x80070057, 0x8Du);
  }
  return v2;
}
