/*
 * XREFs of EtwGetTraceLoggerHandle @ 0x180081230
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetLastWin32Error @ 0x180008390 (RtlSetLastWin32Error.c)
 *     sub_1800812F0 @ 0x1800812F0 (sub_1800812F0.c)
 */

__int64 __fastcall EtwGetTraceLoggerHandle(__int64 a1)
{
  __int64 v1; // rbx
  LONG v3; // ecx

  if ( !a1 )
  {
    v3 = 87;
LABEL_7:
    RtlSetLastWin32Error(v3);
    return -1LL;
  }
  if ( *(_DWORD *)a1 < 0x30u )
  {
    v3 = 24;
    goto LABEL_7;
  }
  v1 = *(_QWORD *)(a1 + 8);
  if ( (unsigned __int16)v1 >= (unsigned int)sub_1800812F0() && (_WORD)v1 != 0xFFFF )
  {
    v1 = -1LL;
    RtlSetLastWin32Error(6);
  }
  return v1;
}
