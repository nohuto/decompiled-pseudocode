/*
 * XREFs of SetOldRedirectionBitmap @ 0x1C011C068
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00624E4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     DeleteOldRedirectionBitmap @ 0x1C008A5A0 (DeleteOldRedirectionBitmap.c)
 * Callees:
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 */

__int64 __fastcall SetOldRedirectionBitmap(__int64 a1, __int64 a2)
{
  __int64 Prop; // rax
  unsigned int v4; // r8d
  unsigned int v5; // r11d

  Prop = GetProp(a1, atomLayer, 1);
  if ( Prop )
  {
    *(_QWORD *)(Prop + 8) = a2;
    return v4;
  }
  return v5;
}
