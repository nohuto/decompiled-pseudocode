/*
 * XREFs of NtGdiCreateDIBSection @ 0x1C00478C0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetBitmapBitsSize @ 0x1C0047BFC (GreGetBitmapBitsSize.c)
 *     bCaptureBitmapInfo @ 0x1C0047C90 (bCaptureBitmapInfo.c)
 *     GreCreateDIBitmapReal @ 0x1C0047D58 (GreCreateDIBitmapReal.c)
 */

__int64 __fastcall NtGdiCreateDIBSection(__int64 a1, __int64 a2, __int64 a3, void *a4)
{
  if ( a4 )
    bCaptureBitmapInfo(a4);
  return 0LL;
}
