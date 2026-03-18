/*
 * XREFs of SepCheckAcl @ 0x14045C4C8
 * Callers:
 *     SeCaptureAcl @ 0x14045C3BC (SeCaptureAcl.c)
 * Callees:
 *     RtlValidAcl @ 0x1404BC590 (RtlValidAcl.c)
 */

BOOLEAN __fastcall SepCheckAcl(ACL *a1, unsigned int a2)
{
  if ( a2 >= 8 && a2 == a1->AclSize )
    return RtlValidAcl(a1);
  else
    return 0;
}
