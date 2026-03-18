/*
 * XREFs of ?GetPixelFormatInfo@COffScreenRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800D6410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall COffScreenRenderTarget::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 312);
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 304);
  *(_DWORD *)(a2 + 8) = v2;
  return a2;
}
