/*
 * XREFs of DpiGetAgpStatus @ 0x1C01FD884
 * Callers:
 *     DpiAddDevice @ 0x1C0203030 (DpiAddDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetAgpStatus(__int64 a1)
{
  __int64 v1; // r8
  unsigned int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 v5; // rax
  unsigned __int16 v6; // dx
  __int16 v7; // dx
  __int16 v8; // ax
  unsigned __int16 v9; // cx

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1096LL);
  if ( (*(_BYTE *)(v1 + 6) & 0x10) == 0 )
    return (unsigned int)-1073741823;
  v2 = *(unsigned __int8 *)(v1 + 52);
  v3 = v2 - 64;
  if ( v2 < 0x40 )
    v3 = 0xFFFFFFFFLL;
  v4 = v2 < 0x40 ? 0xC0000095 : 0;
  if ( v2 >= 0x40 )
  {
    v6 = *(_WORD *)((unsigned int)v3 + v1 + 64);
    if ( (_BYTE)v6 == 2 )
      return v4;
    v7 = HIBYTE(v6);
    LOBYTE(v8) = v7;
    while ( (_BYTE)v7 )
    {
      v3 = (unsigned int)(unsigned __int8)v8 - 64;
      if ( (unsigned __int8)v8 < 0x40u )
        v3 = 0xFFFFFFFFLL;
      v4 = (unsigned __int8)v8 < 0x40u ? 0xC0000095 : 0;
      if ( (unsigned __int8)v8 < 0x40u )
        goto LABEL_5;
      v9 = *(_WORD *)((unsigned int)v3 + v1 + 64);
      v8 = HIBYTE(v9);
      LOBYTE(v7) = HIBYTE(v9);
      if ( (_BYTE)v9 == 2 )
        return v4;
    }
    return (unsigned int)-1073741823;
  }
LABEL_5:
  v5 = WdLogNewEntry5_WdError(v3);
  *(_QWORD *)(v5 + 24) = (int)v4;
  WdLogEvent5_WdError(v5);
  return v4;
}
