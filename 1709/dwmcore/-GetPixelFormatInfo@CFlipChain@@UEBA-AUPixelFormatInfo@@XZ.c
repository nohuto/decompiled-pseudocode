/*
 * XREFs of ?GetPixelFormatInfo@CFlipChain@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800C15C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipChain::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 300);
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 292);
  *(_DWORD *)(a2 + 8) = v2;
  return a2;
}
