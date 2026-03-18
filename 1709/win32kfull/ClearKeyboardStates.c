/*
 * XREFs of ClearKeyboardStates @ 0x1C0111E78
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C004D930 (xxxSystemParametersInfo.c)
 *     xxxSwitchDesktop @ 0x1C005089C (xxxSwitchDesktop.c)
 * Callees:
 *     ClearKeyboardToggleStates @ 0x1C0050198 (ClearKeyboardToggleStates.c)
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
  *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = 0LL;
  LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) = 0;
  gfsSASModifiersDown = 0;
  WindowArrangementSequence::fWindowArrangementSequenceInProgress = 0;
  return result;
}
