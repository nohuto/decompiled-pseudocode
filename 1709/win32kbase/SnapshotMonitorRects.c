/*
 * XREFs of SnapshotMonitorRects @ 0x1C0063880
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C00626E0 (xxxResetDisplayDevice.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     HdevFromMonitor @ 0x1C00626A0 (HdevFromMonitor.c)
 */

_DWORD *SnapshotMonitorRects()
{
  int v0; // edx
  __int64 v1; // rax
  _DWORD *v2; // rsi
  _DWORD *result; // rax
  __int64 v4; // rbx
  __int64 i; // rdi
  __int64 v6; // rcx

  v0 = **(_DWORD **)gpDispInfo;
  if ( (unsigned int)(v0 - 1) > 0xFFFE )
    return 0LL;
  v1 = Win32AllocPool(48LL * (unsigned int)(v0 - 1) + 56, 0x726D7355u);
  v2 = (_DWORD *)v1;
  if ( !v1 )
  {
    UserSetLastError(14);
    return 0LL;
  }
  v4 = v1 + 8;
  for ( i = *(_QWORD *)(gpDispInfo + 96); i; i = *(_QWORD *)(i + 56) )
  {
    v6 = *(_QWORD *)(i + 40);
    if ( (*(_DWORD *)(v6 + 24) & 1) != 0 )
    {
      *(_OWORD *)v4 = *(_OWORD *)(v6 + 28);
      *(_OWORD *)(v4 + 16) = *(_OWORD *)(*(_QWORD *)(i + 40) + 44LL);
      *(_WORD *)(v4 + 32) = *(_WORD *)(*(_QWORD *)(i + 40) + 64LL);
      *(_WORD *)(v4 + 34) = *(_WORD *)(*(_QWORD *)(i + 40) + 66LL);
      *(_DWORD *)(v4 + 36) = *(_DWORD *)(i + 600);
      if ( (unsigned int)HdevFromMonitor(i) == -1 )
        *(_QWORD *)(v4 + 40) = 0LL;
      else
        *(_QWORD *)(v4 + 40) = *(_QWORD *)i;
      v4 += 48LL;
    }
  }
  result = v2;
  *v2 = (v4 - (__int64)v2 - 8) / 48;
  return result;
}
