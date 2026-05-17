/*
 * XREFs of RtlAbsoluteToSelfRelativeSD @ 0x1800765E0
 * Callers:
 *     sub_18010C7E0 @ 0x18010C7E0 (sub_18010C7E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlAbsoluteToSelfRelativeSD(__int64 a1)
{
  if ( *(__int16 *)(a1 + 2) >= 0 )
    return RtlMakeSelfRelativeSD();
  else
    return 3221225703LL;
}
