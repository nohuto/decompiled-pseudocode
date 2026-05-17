/*
 * XREFs of sub_1800F1A7C @ 0x1800F1A7C
 * Callers:
 *     RtlExtendCorrelationVector @ 0x1800F16E0 (RtlExtendCorrelationVector.c)
 *     RtlIncrementCorrelationVector @ 0x1800F1740 (RtlIncrementCorrelationVector.c)
 *     RtlValidateCorrelationVector @ 0x1800F18D0 (RtlValidateCorrelationVector.c)
 *     sub_1800F1A98 @ 0x1800F1A98 (sub_1800F1A98.c)
 *     sub_1800F1AD4 @ 0x1800F1AD4 (sub_1800F1AD4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800F1A7C(_BYTE *a1)
{
  __int64 result; // rax

  if ( *a1 == 1 )
    return 65LL;
  result = 0xFFFFFFFFLL;
  if ( *a1 == 2 )
    return 129LL;
  return result;
}
