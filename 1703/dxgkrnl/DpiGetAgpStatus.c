/*
 * XREFs of DpiGetAgpStatus @ 0x1C0122380
 * Callers:
 *     DpiAddDevice @ 0x1C010E450 (DpiAddDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetAgpStatus(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  unsigned int i; // eax
  unsigned int v4; // ebx
  unsigned __int16 v5; // ax
  __int64 v7; // rax

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1096LL);
  if ( (*(_BYTE *)(v2 + 6) & 0x10) != 0 )
  {
    for ( i = *(unsigned __int8 *)(v2 + 52); i >= 0x40; i = (unsigned __int8)i )
    {
      v4 = 0;
      v5 = *(_WORD *)(i - 64 + v2 + 64);
      if ( (_BYTE)v5 == 2 )
        return v4;
      LOWORD(i) = HIBYTE(v5);
      if ( !(_BYTE)i )
        return (unsigned int)-1073741823;
    }
    v4 = -1073741675;
    v7 = WdLogNewEntry5_WdError(v2, a2);
    *(_QWORD *)(v7 + 24) = -1073741675LL;
    WdLogEvent5_WdError(v7);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v4;
}
