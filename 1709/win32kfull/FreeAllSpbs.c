/*
 * XREFs of FreeAllSpbs @ 0x1C00D70D0
 * Callers:
 *     xxxSwitchDesktop @ 0x1C005089C (xxxSwitchDesktop.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00D7298 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     xxxRealizePalette @ 0x1C010EC10 (xxxRealizePalette.c)
 * Callees:
 *     FreeSpb @ 0x1C01EFB8C (FreeSpb.c)
 */

__int64 FreeAllSpbs()
{
  __int64 result; // rax
  __int64 v1; // rcx

  while ( 1 )
  {
    result = gpDispInfo;
    v1 = *(_QWORD *)(gpDispInfo + 24LL);
    if ( !v1 )
      break;
    FreeSpb(v1);
  }
  *(_QWORD *)(gpDispInfo + 24LL) = 0LL;
  return result;
}
