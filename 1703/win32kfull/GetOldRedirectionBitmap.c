/*
 * XREFs of GetOldRedirectionBitmap @ 0x1C001D6EC
 * Callers:
 *     DeleteOldRedirectionBitmap @ 0x1C001D698 (DeleteOldRedirectionBitmap.c)
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C00636D0 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 */

__int64 __fastcall GetOldRedirectionBitmap(__int64 a1)
{
  __int64 Prop; // rax
  __int64 v2; // r10

  Prop = GetProp(a1, (unsigned __int16)atomLayer, 1LL);
  if ( Prop )
    return *(_QWORD *)(Prop + 8);
  return v2;
}
