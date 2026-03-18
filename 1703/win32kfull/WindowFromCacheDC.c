/*
 * XREFs of WindowFromCacheDC @ 0x1C01C2DB4
 * Callers:
 *     _SelectPalette @ 0x1C00E6528 (_SelectPalette.c)
 *     xxxRealizePalette @ 0x1C01083C0 (xxxRealizePalette.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowFromCacheDC(__int64 *a1)
{
  __int64 v2; // rbx
  __int64 **i; // rdx

  v2 = 0LL;
  GreLockVisRgnShared(*(_QWORD *)(gpDispInfo + 32LL));
  for ( i = *(__int64 ***)(gpDispInfo + 16LL); i; i = (__int64 **)*i )
  {
    if ( i[1] == a1 )
    {
      if ( ((_DWORD)i[8] & 0x400000) == 0 )
        v2 = (__int64)i[2];
      break;
    }
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  return v2;
}
