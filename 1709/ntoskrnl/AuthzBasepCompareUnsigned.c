/*
 * XREFs of AuthzBasepCompareUnsigned @ 0x14028E42C
 * Callers:
 *     AuthzBasepCompareFQBNOperands @ 0x14028DF34 (AuthzBasepCompareFQBNOperands.c)
 *     AuthzBasepCompareIntegerOperands @ 0x14028E1A4 (AuthzBasepCompareIntegerOperands.c)
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
