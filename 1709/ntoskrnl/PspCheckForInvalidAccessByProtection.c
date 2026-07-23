/*
 * XREFs of PspCheckForInvalidAccessByProtection @ 0x1405391CC
 * Callers:
 *     PsTestProtectedProcessIncompatibility @ 0x14053919C (PsTestProtectedProcessIncompatibility.c)
 *     NtCreateUserProcess @ 0x14053B4F4 (NtCreateUserProcess.c)
 * Callees:
 *     RtlTestProtectedAccess @ 0x1405391F8 (RtlTestProtectedAccess.c)
 */

bool __fastcall PspCheckForInvalidAccessByProtection(char a1, PS_PROTECTION a2, PS_PROTECTION a3)
{
  char v3; // r9

  v3 = 0;
  if ( a1 )
    return RtlTestProtectedAccess(a2, a3) == 0;
  return v3;
}
