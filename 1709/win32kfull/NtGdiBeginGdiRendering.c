/*
 * XREFs of NtGdiBeginGdiRendering @ 0x1C001AAC0
 * Callers:
 *     <none>
 * Callees:
 *     GreBeginGdiRenderingToDxSurface @ 0x1C0018A24 (GreBeginGdiRenderingToDxSurface.c)
 */

__int64 __fastcall NtGdiBeginGdiRendering(__int64 a1, unsigned int a2, __int64 a3)
{
  return GreBeginGdiRenderingToDxSurface(a1, a2, a3);
}
