/*
 * XREFs of NtGdiCreateDIBSection @ 0x1C0099DE0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetDCDpiScaleValue @ 0x1C0082CD4 (GreGetDCDpiScaleValue.c)
 *     GreGetBitmapBitsSize @ 0x1C009A190 (GreGetBitmapBitsSize.c)
 *     bCaptureBitmapInfo @ 0x1C009A230 (bCaptureBitmapInfo.c)
 *     GreCreateDIBitmapReal @ 0x1C009A300 (GreCreateDIBitmapReal.c)
 */

__int64 __fastcall NtGdiCreateDIBSection(HDC a1, HANDLE Handle, __int64 a3, void *a4, int a5, int a6, char a7)
{
  int DCDpiScaleValue; // r9d
  int v9; // r8d
  int v10; // eax

  if ( a4 )
  {
    bCaptureBitmapInfo(a4);
    if ( (a7 & 0x10) != 0 )
    {
      DCDpiScaleValue = GreGetDCDpiScaleValue(a1);
      if ( DCDpiScaleValue > 1 )
      {
        v9 = MEMORY[8];
        if ( MEMORY[8] < 0 )
          v9 = -MEMORY[8];
        if ( 0x7FFFFFFF / DCDpiScaleValue < v9 )
          goto LABEL_11;
        v10 = MEMORY[4];
        if ( MEMORY[4] < 0 )
          v10 = -MEMORY[4];
        if ( 0x7FFFFFFF / DCDpiScaleValue < v10 )
LABEL_11:
          ExRaiseStatus(-1073741675);
        MEMORY[8] *= DCDpiScaleValue;
        MEMORY[4] *= DCDpiScaleValue;
      }
    }
  }
  return 0LL;
}
