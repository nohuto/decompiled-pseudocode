/*
 * XREFs of RtlCreateRegistryKey @ 0x1800EB580
 * Callers:
 *     <none>
 * Callees:
 *     sub_180056CCC @ 0x180056CCC (sub_180056CCC.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 */

__int64 __fastcall RtlCreateRegistryKey(int a1, _WORD *a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  result = sub_180056CCC(a1, a2, 1, &v4);
  if ( (int)result >= 0 )
  {
    if ( (a1 & 0x40000000) == 0 )
      ZwClose();
    return 0LL;
  }
  return result;
}
