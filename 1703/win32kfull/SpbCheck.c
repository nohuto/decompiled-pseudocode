/*
 * XREFs of SpbCheck @ 0x1C01E3F34
 * Callers:
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C00636D0 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     zzzLockWindowUpdate2 @ 0x1C00B6C84 (zzzLockWindowUpdate2.c)
 *     CreateSpb @ 0x1C011C530 (CreateSpb.c)
 * Callees:
 *     SpbCheckDce @ 0x1C00E3550 (SpbCheckDce.c)
 */

__int64 SpbCheck()
{
  __int64 result; // rax
  __int64 v1; // rcx
  __int64 v2; // rbx

  result = gpDispInfo;
  if ( *(_QWORD *)(gpDispInfo + 24LL) )
  {
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
    v1 = gpDispInfo;
    v2 = *(_QWORD *)(gpDispInfo + 16LL);
    if ( v2 )
    {
      do
      {
        if ( (*(_DWORD *)(v2 + 64) & 0x400800) == 0 )
          SpbCheckDce(v2);
        v2 = *(_QWORD *)v2;
      }
      while ( v2 );
      v1 = gpDispInfo;
    }
    return GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)v1 + 32LL));
  }
  return result;
}
