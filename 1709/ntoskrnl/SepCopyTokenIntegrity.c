/*
 * XREFs of SepCopyTokenIntegrity @ 0x1400E4A04
 * Callers:
 *     AuthzBasepQueryTokenAttributeAndValues @ 0x14028DADC (AuthzBasepQueryTokenAttributeAndValues.c)
 *     NtQueryInformationToken @ 0x1404A40D0 (NtQueryInformationToken.c)
 *     SeQueryInformationToken @ 0x1404A6E30 (SeQueryInformationToken.c)
 *     SeTokenCanImpersonate @ 0x1404CEBB0 (SeTokenCanImpersonate.c)
 *     SepValidLabelSubjectContext @ 0x1405395EC (SepValidLabelSubjectContext.c)
 *     SepAdjustPrivileges @ 0x140539C70 (SepAdjustPrivileges.c)
 *     SeIsTokenAssignableToProcess @ 0x140573A88 (SeIsTokenAssignableToProcess.c)
 * Callees:
 *     SepLocateTokenIntegrity @ 0x1400878E8 (SepLocateTokenIntegrity.c)
 */

PSID __fastcall SepCopyTokenIntegrity(__int64 a1)
{
  __int64 TokenIntegrity; // rax
  __int64 v2; // rdx
  PSID result; // rax

  TokenIntegrity = SepLocateTokenIntegrity(a1);
  if ( TokenIntegrity )
  {
    *(_QWORD *)v2 = *(_QWORD *)TokenIntegrity;
    result = (PSID)*(unsigned int *)(TokenIntegrity + 8);
    *(_DWORD *)(v2 + 8) = (_DWORD)result;
  }
  else
  {
    result = SeUntrustedMandatorySid;
    *(_QWORD *)v2 = SeUntrustedMandatorySid;
    *(_DWORD *)(v2 + 8) = 96;
  }
  return result;
}
