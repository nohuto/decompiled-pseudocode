/*
 * XREFs of ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x18004F6C0
 * Callers:
 *     ?NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z @ 0x18004A970 (-NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z.c)
 *     ?GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18004BEF0 (-GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x18004D92C (-SetOpacity@CVisual@@QEAAXM@Z.c)
 *     ?GetPixelFormatInfo@CHwndBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x1801907D0 (-GetPixelFormatInfo@CHwndBitmap@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     ?PopStacksForBspChildVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x1802118C0 (-PopStacksForBspChildVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z.c)
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x180211CF0 (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall CVisual::GetOpacityInternal(CVisual *this)
{
  __int64 v1; // rcx
  __int64 i; // rcx

  v1 = *((_QWORD *)this + 27);
  if ( (*(_DWORD *)(v1 + 4) & 0x100000) == 0 )
    return FLOAT_1_0;
  for ( i = v1 + 12; (*(_DWORD *)i & 0x7F000000) != 0xC000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
    ;
  return *(float *)(i + 4);
}
