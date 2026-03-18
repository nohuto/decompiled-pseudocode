/*
 * XREFs of SepCheckAcl @ 0x140544BD0
 * Callers:
 *     SeCaptureAcl @ 0x140544AC4 (SeCaptureAcl.c)
 * Callees:
 *     RtlValidAcl @ 0x1404C80D0 (RtlValidAcl.c)
 */

BOOLEAN __fastcall SepCheckAcl(ACL *a1, unsigned int a2)
{
  if ( a2 >= 8 && a2 == a1->AclSize )
    return RtlValidAcl(a1);
  else
    return 0;
}
