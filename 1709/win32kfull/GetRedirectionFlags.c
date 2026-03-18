/*
 * XREFs of GetRedirectionFlags @ 0x1C008DA7C
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x1C008D65C (zzzUpdateLayeredWindow.c)
 *     _SetLayeredWindowAttributes @ 0x1C0090BA8 (_SetLayeredWindowAttributes.c)
 *     RecreateRedirectionBitmap @ 0x1C00E6938 (RecreateRedirectionBitmap.c)
 *     _GetLayeredWindowAttributes @ 0x1C012B134 (_GetLayeredWindowAttributes.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01C5084 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     xxxPrintWindow @ 0x1C01C53F8 (xxxPrintWindow.c)
 * Callees:
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 */

__int64 __fastcall GetRedirectionFlags(__int64 a1)
{
  __int64 Prop; // rax
  unsigned int v2; // r11d

  Prop = GetProp(a1, atomLayer, 1);
  if ( Prop )
    return *(unsigned int *)(Prop + 32);
  return v2;
}
