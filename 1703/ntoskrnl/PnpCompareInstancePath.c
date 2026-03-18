/*
 * XREFs of PnpCompareInstancePath @ 0x1404857D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x140485820 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall PnpCompareInstancePath(struct _RTL_AVL_TABLE *Table, _QWORD *FirstStruct, _QWORD *SecondStruct)
{
  LONG v3; // ecx
  __int64 result; // rax

  v3 = RtlCompareUnicodeStrings(
         *(PCWCH *)(FirstStruct[1] + 8LL),
         (unsigned __int64)*(unsigned __int16 *)FirstStruct[1] >> 1,
         *(PCWCH *)(SecondStruct[1] + 8LL),
         (unsigned __int64)*(unsigned __int16 *)SecondStruct[1] >> 1,
         1u);
  result = 0LL;
  if ( v3 >= 0 )
  {
    LOBYTE(result) = v3 <= 0;
    return (unsigned int)(result + 1);
  }
  return result;
}
