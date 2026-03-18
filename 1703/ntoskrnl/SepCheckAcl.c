/*
 * XREFs of SepCheckAcl @ 0x14046EA34
 * Callers:
 *     SeCaptureAcl @ 0x14046E928 (SeCaptureAcl.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall SepCheckAcl(PACL Acl, unsigned int a2)
{
  if ( a2 >= 8 && a2 == Acl->AclSize )
    return RtlValidAcl(Acl);
  else
    return 0;
}
