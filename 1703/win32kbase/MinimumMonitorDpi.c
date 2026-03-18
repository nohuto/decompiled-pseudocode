/*
 * XREFs of MinimumMonitorDpi @ 0x1C00729F4
 * Callers:
 *     ?UpdateUserScreen@@YAJH@Z @ 0x1C0070960 (-UpdateUserScreen@@YAJH@Z.c)
 *     ?ExpandedMonitorRect@@YA?AUtagRECT@@PEAUtagMONITOR@@K@Z @ 0x1C007290C (-ExpandedMonitorRect@@YA-AUtagRECT@@PEAUtagMONITOR@@K@Z.c)
 *     ExpandedMonitorSpace @ 0x1C00DE480 (ExpandedMonitorSpace.c)
 * Callees:
 *     <none>
 */

__int64 MinimumMonitorDpi()
{
  __int64 v0; // r8
  __int64 result; // rax
  __int64 v2; // rcx
  unsigned __int16 v3; // dx

  v0 = *((_QWORD *)gpDispInfo + 12);
  LOWORD(result) = *(_WORD *)(*(_QWORD *)(v0 + 40) + 128LL);
  do
  {
    v2 = *(_QWORD *)(v0 + 40);
    v0 = *(_QWORD *)(v0 + 56);
    v3 = *(_WORD *)(v2 + 128);
    if ( (unsigned __int16)result < v3 )
      v3 = result;
    result = v3;
  }
  while ( v0 );
  return result;
}
