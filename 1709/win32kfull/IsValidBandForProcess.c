/*
 * XREFs of IsValidBandForProcess @ 0x1C0073288
 * Callers:
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     _DeferWindowPosAndBand @ 0x1C009ABD8 (_DeferWindowPosAndBand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsValidBandForProcess(__int64 a1, int a2, __int64 a3)
{
  int v6; // eax
  unsigned int v7; // edx

  v6 = IsImmersiveBroker(a1);
  v7 = 0;
  if ( v6 )
    return 1LL;
  if ( (*(_BYTE *)(a1 + 776) & 0x30) == 0x10 )
  {
    if ( a2 > 11 )
    {
      if ( a2 == 15 || a2 == 13 || a2 > 16 && a2 <= 18 )
        return 1LL;
    }
    else
    {
      if ( a2 >= 8 )
        return 1LL;
      if ( a2 == 1 )
        return gfEnableModernOnDesktop;
      if ( a2 > 2 && (a2 <= 4 || a2 == 6) )
        return 1LL;
    }
    return 0LL;
  }
  if ( a2 == 1 )
    return 1LL;
  if ( (*(_DWORD *)(a1 + 776) & 2) == 0 && (!a3 || *(_DWORD *)(a3 + 320) != 2) )
    return 0LL;
  LOBYTE(v7) = a2 == 2;
  return v7;
}
