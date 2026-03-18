/*
 * XREFs of AuthzBasepCompareUnsigned @ 0x1402640F8
 * Callers:
 *     AuthzBasepCompareFQBNOperands @ 0x140263C04 (AuthzBasepCompareFQBNOperands.c)
 *     AuthzBasepCompareIntegerOperands @ 0x140263E78 (AuthzBasepCompareIntegerOperands.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AuthzBasepCompareUnsigned(unsigned __int8 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 0x80u:
      LOBYTE(result) = a2 == a3;
      break;
    case 0x81u:
      LOBYTE(result) = a2 != a3;
      break;
    case 0x82u:
      LOBYTE(result) = a2 < a3;
      break;
    case 0x83u:
      LOBYTE(result) = a2 <= a3;
      break;
    case 0x84u:
      LOBYTE(result) = a2 > a3;
      break;
    default:
      LOBYTE(result) = a1 == 133 && a2 >= a3;
      break;
  }
  return (unsigned __int8)result;
}
