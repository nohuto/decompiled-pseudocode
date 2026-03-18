/*
 * XREFs of ??$ReleaseInterfaceNoNULL@VCScratchRenderTargetBitmap@@@@YAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x1801AE954
 * Callers:
 *     ?ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x18008D148 (-ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z.c)
 * Callees:
 *     ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x18008D360 (-Release@CScratchRenderTargetBitmap@@UEAAKXZ.c)
 */

unsigned int __fastcall ReleaseInterfaceNoNULL<CScratchRenderTargetBitmap>(CScratchRenderTargetBitmap *a1)
{
  unsigned int result; // eax

  if ( a1 )
    return CScratchRenderTargetBitmap::Release(a1);
  return result;
}
