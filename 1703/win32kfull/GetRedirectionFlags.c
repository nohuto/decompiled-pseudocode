/*
 * XREFs of GetRedirectionFlags @ 0x1C009E94C
 * Callers:
 *     _SetLayeredWindowAttributes @ 0x1C0022C08 (_SetLayeredWindowAttributes.c)
 *     RecreateRedirectionBitmap @ 0x1C009DE40 (RecreateRedirectionBitmap.c)
 *     zzzUpdateLayeredWindow @ 0x1C009E550 (zzzUpdateLayeredWindow.c)
 *     _GetLayeredWindowAttributes @ 0x1C011F04C (_GetLayeredWindowAttributes.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01C1844 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     xxxPrintWindow @ 0x1C01C2478 (xxxPrintWindow.c)
 * Callees:
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 */

__int64 __fastcall GetRedirectionFlags(__int64 a1)
{
  __int64 Prop; // rax
  unsigned int v2; // r10d

  Prop = GetProp(a1, atomLayer, 1);
  if ( Prop )
    return *(unsigned int *)(Prop + 32);
  return v2;
}
