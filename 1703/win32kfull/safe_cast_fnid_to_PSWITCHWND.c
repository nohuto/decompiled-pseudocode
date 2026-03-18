/*
 * XREFs of safe_cast_fnid_to_PSWITCHWND @ 0x1C01B2C2C
 * Callers:
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01CAD78 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     xxxNextWindow @ 0x1C01CC154 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01CC84C (xxxOldNextWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall safe_cast_fnid_to_PSWITCHWND(__int64 a1)
{
  if ( !a1 || (*(_WORD *)(a1 + 82) & 0x3FFF) != 0x2A0 )
    return 0LL;
  if ( *(_DWORD *)(a1 + 252) )
    return *(_QWORD *)(a1 + 392);
  return *(_QWORD *)(a1 + 384);
}
