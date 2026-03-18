/*
 * XREFs of ?ArrangeActionCompatibleWithStyle@@YAHPEAUtagWND@@W4_WARR_ACTIONS@@@Z @ 0x1C01D7A48
 * Callers:
 *     xxxArrangeWindow @ 0x1C01DD468 (xxxArrangeWindow.c)
 *     xxxEndSetWindowArrangement @ 0x1C01DDFF4 (xxxEndSetWindowArrangement.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ArrangeActionCompatibleWithStyle(__int64 a1, int a2)
{
  unsigned int v2; // r8d
  bool v4; // zf

  v2 = 1;
  if ( *(char *)(a1 + 64) < 0 )
    return 0LL;
  switch ( a2 )
  {
    case 0:
      if ( *(_WORD *)(*(_QWORD *)(a1 + 168) + 8LL) == *(_WORD *)(gpsi + 884LL) || (*(_BYTE *)(a1 + 70) & 1) == 0 )
        return 0;
      v4 = (*(_BYTE *)(a1 + 71) & 1) == 0;
      goto LABEL_21;
    case 1:
      if ( (*(_BYTE *)(a1 + 70) & 2) == 0 )
        return 0;
      v4 = (*(_BYTE *)(a1 + 71) & 0x20) == 0;
LABEL_21:
      if ( v4 )
        return v2;
      return 0;
    case 2:
      if ( (*(_BYTE *)(a1 + 71) & 1) == 0 || (*(_BYTE *)(a1 + 70) & 4) != 0 )
        return v2;
      return 0;
  }
  if ( a2 > 2 )
  {
    if ( a2 > 5 )
    {
      if ( a2 <= 7 )
        return *(_WORD *)(*(_QWORD *)(a1 + 168) + 8LL) != *(_WORD *)(gpsi + 884LL);
      return v2;
    }
    if ( (*(_BYTE *)(a1 + 70) & 4) != 0 && *(_WORD *)(*(_QWORD *)(a1 + 168) + 8LL) != *(_WORD *)(gpsi + 884LL) )
      return v2;
    return 0;
  }
  return v2;
}
