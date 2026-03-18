/*
 * XREFs of SpbCheck @ 0x1C01EFF50
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0067354 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     zzzLockWindowUpdate2 @ 0x1C00CB554 (zzzLockWindowUpdate2.c)
 *     CreateSpb @ 0x1C0125804 (CreateSpb.c)
 * Callees:
 *     SpbCheckDce @ 0x1C0072E70 (SpbCheckDce.c)
 */

__int64 SpbCheck()
{
  __int64 result; // rax
  __int64 i; // rbx

  result = gpDispInfo;
  if ( *(_QWORD *)(gpDispInfo + 24LL) )
  {
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
    for ( i = *(_QWORD *)(gpDispInfo + 16LL); i; i = *(_QWORD *)i )
    {
      if ( (*(_DWORD *)(i + 64) & 0x400800) == 0 )
        SpbCheckDce(i);
    }
    return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  }
  return result;
}
