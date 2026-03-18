/*
 * XREFs of MagInputTransform @ 0x1C01D3940
 * Callers:
 *     ?GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z @ 0x1C019C500 (-GetMouseCoord@@YAXJJK_K0PEAUtagPOINT@@PEAU_SUBPIXELS@@HHH@Z.c)
 *     ApplyMagInputTransform @ 0x1C01A2820 (ApplyMagInputTransform.c)
 *     TransformForInputMagnification @ 0x1C01A2C40 (TransformForInputMagnification.c)
 *     ?MagnifyScreenLocation@@YAXPEAUtagPOINT@@@Z @ 0x1C01AB890 (-MagnifyScreenLocation@@YAXPEAUtagPOINT@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 */

__int64 MagInputTransform()
{
  __int64 v0; // rax
  __int64 result; // rax

  v0 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408);
  if ( !v0 )
    return 0LL;
  result = *(_QWORD *)(v0 + 216);
  if ( !result )
    return 0LL;
  return result;
}
