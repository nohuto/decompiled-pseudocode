/*
 * XREFs of ?SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180030010
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z @ 0x180030DF0 (-UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::SetProperty(__int64 a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  int updated; // eax

  if ( a3 == 18 && a2 == 22 )
  {
    *(float *)(*(_QWORD *)(a1 + 320) + 44LL) = fminf(fmaxf(*a4, 0.0), 1.0);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 328) + 112LL) & 4) != 0
      && *(_DWORD *)(a1 + 380)
      && (updated = CKeyframeAnimation::UpdatePlaybackState(a1, 0LL, 0LL, 0LL), v4 = updated, updated < 0) )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x7E9u);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x7EEu);
  }
  return v4;
}
