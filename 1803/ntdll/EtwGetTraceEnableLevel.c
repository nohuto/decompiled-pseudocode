/*
 * XREFs of EtwGetTraceEnableLevel @ 0x180081280
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetLastWin32Error @ 0x180008390 (RtlSetLastWin32Error.c)
 *     sub_1800812F0 @ 0x1800812F0 (sub_1800812F0.c)
 */

char __fastcall EtwGetTraceEnableLevel(__int64 a1)
{
  char v3; // [rsp+32h] [rbp+Ah]

  v3 = BYTE2(a1);
  if ( ((unsigned __int16)a1 < (unsigned int)sub_1800812F0() || (_WORD)a1 == 0xFFFF) && a1 )
    return v3;
  RtlSetLastWin32Error(6);
  return 0;
}
