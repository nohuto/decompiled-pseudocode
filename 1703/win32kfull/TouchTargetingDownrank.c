/*
 * XREFs of TouchTargetingDownrank @ 0x1C023AC3C
 * Callers:
 *     ?_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z @ 0x1C01CFD4C (-_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TouchTargetingDownrank(__int64 a1, int a2)
{
  int v2; // eax
  unsigned int v3; // r9d
  int v4; // ecx
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 184);
  v3 = 0x7FFFFFFF;
  v4 = *(_DWORD *)(a1 + 188);
  if ( a2 == 1 )
  {
    if ( v2 < v4 )
      v4 = v2;
    if ( (unsigned __int64)(600000LL / v4 + 0x80000000LL) > 0xFFFFFFFF )
      return v3;
    result = 40LL;
    v3 = 600000 / v4;
    if ( 600000 / v4 > 40 )
      return v3;
  }
  else
  {
    if ( v2 < v4 )
      v4 = v2;
    if ( (unsigned __int64)(200000LL / v4 + 0x80000000LL) <= 0xFFFFFFFF )
      v3 = 200000 / v4;
    LODWORD(result) = abs32(v3);
    if ( (int)result > 20 )
      LOWORD(result) = 20;
    return (unsigned __int16)result;
  }
  return result;
}
