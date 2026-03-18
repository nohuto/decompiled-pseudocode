/*
 * XREFs of ?GetPixelFormatInfo@CBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800D62D0
 * Callers:
 *     ?GetPixelFormatInfo@CSystemMemoryBitmap@@WNA@EBA?AUPixelFormatInfo@@XZ @ 0x1800DD740 (-GetPixelFormatInfo@CSystemMemoryBitmap@@WNA@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmap::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 176);
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 168);
  *(_DWORD *)(a2 + 8) = v2;
  return a2;
}
