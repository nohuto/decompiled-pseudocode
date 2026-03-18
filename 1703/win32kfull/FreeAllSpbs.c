/*
 * XREFs of FreeAllSpbs @ 0x1C00FE090
 * Callers:
 *     xxxSwitchDesktop @ 0x1C00B8B10 (xxxSwitchDesktop.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00FD8FC (-InitiateWin32kCleanup@@YAHXZ.c)
 *     xxxRealizePalette @ 0x1C01083C0 (xxxRealizePalette.c)
 * Callees:
 *     FreeSpb @ 0x1C01E3B70 (FreeSpb.c)
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
