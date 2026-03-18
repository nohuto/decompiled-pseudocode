/*
 * XREFs of ClearKeyboardStates @ 0x1C00B9C64
 * Callers:
 *     xxxSwitchDesktop @ 0x1C00B8B10 (xxxSwitchDesktop.c)
 *     xxxSystemParametersInfo @ 0x1C00BEA10 (xxxSystemParametersInfo.c)
 * Callees:
 *     ClearKeyboardToggleStates @ 0x1C00B80E8 (ClearKeyboardToggleStates.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 ClearKeyboardStates()
{
  __int64 i; // rcx
  __int64 result; // rax

  for ( i = 0LL; i < 64; i += 16LL )
    *(__m128i *)(i + *(_QWORD *)&gafAsyncKeyState[0]) = _mm_and_si128(
                                                          _mm_loadu_si128((const __m128i *)(i
                                                                                          + *(_QWORD *)&gafAsyncKeyState[0])),
                                                          (__m128i)_xmm_aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa);
  ClearKeyboardToggleStates();
  result = gfsSASModifiersDown;
  WPP_MAIN_CB.Queue.Wcb.DeviceObject = 0LL;
  WPP_MAIN_CB.AlignmentRequirement = 0;
  gfsSASModifiersDown = 0;
  WindowArrangementSequence::fWindowArrangementSequenceInProgress = 0;
  return result;
}
