/*
 * XREFs of ?PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C01E8144
 * Callers:
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00AF478 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 * Callees:
 *     InternalSetClipboardData @ 0x1C00AF078 (InternalSetClipboardData.c)
 *     CreateScreenPalette @ 0x1C020DD2C (CreateScreenPalette.c)
 */

void __fastcall PasteScreenPalette(struct tagWINDOWSTATION *a1)
{
  __int64 v2; // [rsp+48h] [rbp+10h]
  __int64 v3; // [rsp+50h] [rbp+18h]

  if ( (int)CreateScreenPalette(*(HDC *)(gpDispInfo + 48LL)) >= 0 )
  {
    InternalSetClipboardData((__int64)a1, 9LL, v2, 0, 1);
    GreSetPaletteOwner(v2, 0LL);
    Win32FreePool(v3);
  }
}
