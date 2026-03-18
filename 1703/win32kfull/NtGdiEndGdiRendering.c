/*
 * XREFs of NtGdiEndGdiRendering @ 0x1C00EA020
 * Callers:
 *     <none>
 * Callees:
 *     GreEndGdiRenderingToDxSurface @ 0x1C007FF8C (GreEndGdiRenderingToDxSurface.c)
 */

__int64 __fastcall NtGdiEndGdiRendering(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  unsigned int v5; // r8d
  int v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0;
  v5 = GreEndGdiRenderingToDxSurface(a1, a2, a4, (__int64)&v7);
  if ( a3 )
  {
    if ( (unsigned __int64)a3 >= W32UserProbeAddress )
      a3 = (_DWORD *)W32UserProbeAddress;
    *a3 = v7;
  }
  return v5;
}
