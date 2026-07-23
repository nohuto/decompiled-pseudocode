/*
 * XREFs of sub_18007E64C @ 0x18007E64C
 * Callers:
 *     sub_18007E578 @ 0x18007E578 (sub_18007E578.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall sub_18007E64C(PSID Sid, unsigned int a2)
{
  if ( a2 >= 8 && a2 >= 4 * (unsigned int)*((unsigned __int8 *)Sid + 1) + 8 )
    return RtlValidSid(Sid);
  else
    return 0;
}
