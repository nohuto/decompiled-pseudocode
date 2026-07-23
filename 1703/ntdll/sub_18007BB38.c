/*
 * XREFs of sub_18007BB38 @ 0x18007BB38
 * Callers:
 *     sub_18007BA64 @ 0x18007BA64 (sub_18007BA64.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall sub_18007BB38(PSID Sid, unsigned int a2)
{
  if ( a2 >= 8 && a2 >= 4 * (unsigned int)*((unsigned __int8 *)Sid + 1) + 8 )
    return RtlValidSid(Sid);
  else
    return 0;
}
