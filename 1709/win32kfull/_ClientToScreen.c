/*
 * XREFs of _ClientToScreen @ 0x1C023A9FC
 * Callers:
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01DC988 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxSBWndProc @ 0x1C02110F0 (xxxSBWndProc.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0213304 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ClientToScreen(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = *(_WORD *)(a1 + 82) & 0x3FFF;
  if ( (_DWORD)result != 669 )
  {
    if ( (*(_BYTE *)(a1 + 66) & 0x40) != 0 )
      *a2 = *(_DWORD *)(a1 + 152) - *a2;
    else
      *a2 += *(_DWORD *)(a1 + 144);
    result = *(unsigned int *)(a1 + 148);
    a2[1] += result;
  }
  return result;
}
