/*
 * XREFs of HUBDSM_ComputingLPMTimeoutValuesInUnconfigured @ 0x1C001F480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_ComputingLPMTimeoutValuesInUnconfigured(__int64 a1)
{
  __int64 v1; // r8
  unsigned __int8 v2; // dl
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(_BYTE *)(v1 + 2220);
  if ( (v2 & 8) == 0 || (*(_DWORD *)(v1 + 1644) & 0x80u) != 0 || (*(_DWORD *)(*(_QWORD *)v1 + 40LL) & 0x8000) != 0 )
    return 4061LL;
  result = 4089LL;
  *(_BYTE *)(v1 + 2213) = ~(v2 >> 5) | 0xFE;
  return result;
}
