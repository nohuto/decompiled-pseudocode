/*
 * XREFs of xxxSetSystemCursor @ 0x1C0209AFC
 * Callers:
 *     NtUserSetSystemCursor @ 0x1C01DFD60 (NtUserSetSystemCursor.c)
 * Callees:
 *     CheckWinstaAttributeAccess @ 0x1C00BD550 (CheckWinstaAttributeAccess.c)
 *     xxxSetMonitorIcoCurIndex @ 0x1C00C1534 (xxxSetMonitorIcoCurIndex.c)
 *     zzzSetSystemImage @ 0x1C00C1638 (zzzSetSystemImage.c)
 */

__int64 __fastcall xxxSetSystemCursor(struct tagCURSOR *a1, __int64 a2)
{
  __int16 v3; // di
  unsigned int v4; // ebx
  __int64 v5; // rcx
  _WORD *v6; // rax

  v3 = a2;
  if ( !(unsigned int)CheckWinstaAttributeAccess(16LL, a2) )
    return 0LL;
  v4 = 0;
  v5 = 0LL;
  v6 = *(_WORD **)gasyscur;
  do
  {
    if ( *v6 == v3 )
      break;
    ++v4;
    ++v5;
    v6 += 8;
  }
  while ( v5 < 17 );
  if ( v4 == 17 || !(unsigned int)zzzSetSystemImage(a1, *(_QWORD *)&gasyscur[8 * v4 + 4]) )
    return 0LL;
  xxxSetMonitorIcoCurIndex(0LL, 0, v4, 2);
  return 1LL;
}
