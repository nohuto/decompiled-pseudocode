/*
 * XREFs of NtGdiBeginGdiRendering @ 0x1C0102D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall NtGdiBeginGdiRendering(__int64 a1, unsigned int a2, __int64 a3)
{
  return GreBeginGdiRenderingToDxSurface(a1, a2, a3);
}
