/*
 * XREFs of PnpCompareInstancePath @ 0x1404857D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x140485820 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall PnpCompareInstancePath(_RTL_AVL_TABLE *a1, _QWORD *a2, _QWORD *a3)
{
  LONG v3; // ecx
  __int64 result; // rax

  v3 = RtlCompareUnicodeStrings(
         *(PCWCH *)(a2[1] + 8LL),
         (unsigned __int64)*(unsigned __int16 *)a2[1] >> 1,
         *(PCWCH *)(a3[1] + 8LL),
         (unsigned __int64)*(unsigned __int16 *)a3[1] >> 1,
         1u);
  result = 0LL;
  if ( v3 >= 0 )
  {
    LOBYTE(result) = v3 <= 0;
    return (unsigned int)(result + 1);
  }
  return result;
}
