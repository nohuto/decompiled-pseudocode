/*
 * XREFs of RECTFromSIZERECT @ 0x1C00EC384
 * Callers:
 *     xxxCheckFullScreen @ 0x1C0015690 (xxxCheckFullScreen.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01A3358 (-ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RECTFromSIZERECT(_DWORD *a1, _DWORD *a2)
{
  unsigned int v3; // r8d
  int v4; // ecx
  int v5; // r9d
  __int64 result; // rax
  unsigned int v7; // eax

  *a1 = *a2;
  a1[1] = a2[1];
  v3 = 0x80000000;
  v4 = a2[2] + *a2;
  a1[2] = v4;
  if ( (*a2 ^ v4) < 0 && (a2[2] ^ v4) < 0 )
  {
    v7 = 0x80000000;
    if ( v4 < 0 )
      v7 = 0x7FFFFFFF;
    a1[2] = v7;
  }
  v5 = a2[3] + a2[1];
  a1[3] = v5;
  result = (unsigned int)v5 ^ a2[1];
  if ( (result & 0x80000000) != 0 )
  {
    result = a2[3] ^ (unsigned int)v5;
    if ( (result & 0x80000000) != 0 )
    {
      if ( v5 < 0 )
        v3 = 0x7FFFFFFF;
      a1[3] = v3;
    }
  }
  return result;
}
