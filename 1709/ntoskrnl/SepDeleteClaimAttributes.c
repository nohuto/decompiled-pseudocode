/*
 * XREFs of SepDeleteClaimAttributes @ 0x14073100C
 * Callers:
 *     SepSetTokenClaims @ 0x14045CDB4 (SepSetTokenClaims.c)
 *     SepTokenDeleteMethod @ 0x14048D160 (SepTokenDeleteMethod.c)
 *     SepDeleteLogonSessionClaims @ 0x1405A7BA8 (SepDeleteLogonSessionClaims.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x14001EED0 (AuthzBasepFreeSecurityAttributesList.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall SepDeleteClaimAttributes(PVOID P)
{
  _DWORD *v2; // rcx
  _DWORD *v3; // rcx
  void *v4; // rcx

  if ( P )
  {
    v2 = (_DWORD *)*((_QWORD *)P + 72);
    if ( v2 )
    {
      AuthzBasepFreeSecurityAttributesList(v2);
      ExFreePoolWithTag(*((PVOID *)P + 72), 0);
      *((_QWORD *)P + 72) = 0LL;
    }
    v3 = (_DWORD *)*((_QWORD *)P + 73);
    if ( v3 )
    {
      AuthzBasepFreeSecurityAttributesList(v3);
      ExFreePoolWithTag(*((PVOID *)P + 73), 0);
      *((_QWORD *)P + 73) = 0LL;
    }
    v4 = (void *)*((_QWORD *)P + 1);
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0);
      *((_QWORD *)P + 1) = 0LL;
    }
    ExFreePoolWithTag(P, 0);
  }
}
