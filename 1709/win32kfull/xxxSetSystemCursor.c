/*
 * XREFs of xxxSetSystemCursor @ 0x1C020B89C
 * Callers:
 *     NtUserSetSystemCursor @ 0x1C01EBEE0 (NtUserSetSystemCursor.c)
 * Callees:
 *     xxxSetMonitorIcoCurIndex @ 0x1C0051864 (xxxSetMonitorIcoCurIndex.c)
 *     zzzSetSystemImage @ 0x1C0051988 (zzzSetSystemImage.c)
 *     CheckWinstaAttributeAccess @ 0x1C0053250 (CheckWinstaAttributeAccess.c)
 */

__int64 __fastcall xxxSetSystemCursor(struct tagCURSOR *a1, __int16 a2)
{
  _WORD *v4; // rax
  int v5; // ebx
  __int64 i; // rcx

  if ( !(unsigned int)CheckWinstaAttributeAccess(16LL) )
    return 0LL;
  v4 = *(_WORD **)gasyscur;
  v5 = 0;
  for ( i = 0LL; i < 19; ++i )
  {
    if ( *v4 == a2 )
      break;
    ++v5;
    v4 += 8;
  }
  if ( v5 == 19 || !(unsigned int)zzzSetSystemImage(a1, *(_QWORD *)&gasyscur[8 * v5 + 4]) )
    return 0LL;
  xxxSetMonitorIcoCurIndex(0, 0, v5);
  return 1LL;
}
