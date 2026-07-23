/*
 * XREFs of EtwGetTraceEnableFlags @ 0x1800812C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetLastWin32Error @ 0x180008390 (RtlSetLastWin32Error.c)
 *     sub_1800812F0 @ 0x1800812F0 (sub_1800812F0.c)
 */

__int64 __fastcall EtwGetTraceEnableFlags(__int64 a1)
{
  unsigned int v3; // [rsp+34h] [rbp+Ch]

  v3 = HIDWORD(a1);
  if ( ((unsigned __int16)a1 < (unsigned int)sub_1800812F0() || (_WORD)a1 == 0xFFFF) && a1 )
    return v3;
  RtlSetLastWin32Error(6);
  return 0LL;
}
