/*
 * XREFs of ?PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C01F415C
 * Callers:
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00C6290 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 * Callees:
 *     InternalSetClipboardData @ 0x1C00C5D58 (InternalSetClipboardData.c)
 *     CreateScreenPalette @ 0x1C020F558 (CreateScreenPalette.c)
 */

void __fastcall PasteScreenPalette(struct tagWINDOWSTATION *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // [rsp+48h] [rbp+10h]
  __int64 v5; // [rsp+50h] [rbp+18h]

  if ( (int)CreateScreenPalette(*(HDC *)(gpDispInfo + 48LL)) >= 0 )
  {
    InternalSetClipboardData((__int64)a1, 9LL, v4, 0, 1);
    GreSetPaletteOwner(v4, 0LL);
    Win32FreePool(v5, v2, v3);
  }
}
