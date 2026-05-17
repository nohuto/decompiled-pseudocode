/*
 * XREFs of RtlSetControlSecurityDescriptor @ 0x180088730
 * Callers:
 *     sub_18008CB8C @ 0x18008CB8C (sub_18008CB8C.c)
 *     RtlSetAttributesSecurityDescriptor @ 0x1800E59D0 (RtlSetAttributesSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSetControlSecurityDescriptor(__int64 a1, unsigned __int16 a2, unsigned __int16 a3)
{
  if ( (~a2 & a3) != 0 || (a2 & 0xC03F) != 0 )
    return 3221225485LL;
  *(_WORD *)(a1 + 2) = a3 | *(_WORD *)(a1 + 2) & ~a2;
  return 0LL;
}
