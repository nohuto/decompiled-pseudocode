/*
 * XREFs of SetOldRedirectionBitmap @ 0x1C0112BF8
 * Callers:
 *     DeleteOldRedirectionBitmap @ 0x1C001D698 (DeleteOldRedirectionBitmap.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C005FB68 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 */

__int64 __fastcall SetOldRedirectionBitmap(__int64 a1)
{
  __int64 Prop; // rax
  unsigned int v2; // r8d
  unsigned int v3; // r10d
  __int64 v4; // r11

  Prop = GetProp(a1, atomLayer, 1);
  if ( Prop )
  {
    *(_QWORD *)(Prop + 8) = v4;
    return v2;
  }
  return v3;
}
