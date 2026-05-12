/*
 * XREFs of StorPortWritePortUshort @ 0x1C0033700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall StorPortWritePortUshort(__int64 a1, unsigned __int16 a2, unsigned __int16 a3)
{
  __int64 result; // rax

  result = a3;
  __outword(a2, a3);
  return result;
}
