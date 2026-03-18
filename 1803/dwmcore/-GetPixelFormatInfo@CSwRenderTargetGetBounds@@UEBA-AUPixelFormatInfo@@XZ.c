/*
 * XREFs of ?GetPixelFormatInfo@CSwRenderTargetGetBounds@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800D6BC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSwRenderTargetGetBounds::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 8) = 0;
  return a2;
}
