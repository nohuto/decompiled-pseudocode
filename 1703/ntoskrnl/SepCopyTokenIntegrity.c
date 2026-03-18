/*
 * XREFs of SepCopyTokenIntegrity @ 0x140064158
 * Callers:
 *     AuthzBasepQueryTokenAttributeAndValues @ 0x1402637A8 (AuthzBasepQueryTokenAttributeAndValues.c)
 *     SeIsTokenAssignableToProcess @ 0x14043FBC0 (SeIsTokenAssignableToProcess.c)
 *     SeTokenCanImpersonate @ 0x14047EAA0 (SeTokenCanImpersonate.c)
 *     SepValidLabelSubjectContext @ 0x14049CE4C (SepValidLabelSubjectContext.c)
 *     SepAdjustPrivileges @ 0x14049D310 (SepAdjustPrivileges.c)
 *     SeQueryInformationToken @ 0x1404FE620 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x140508720 (NtQueryInformationToken.c)
 * Callees:
 *     SepLocateTokenIntegrity @ 0x140064184 (SepLocateTokenIntegrity.c)
 */

__int64 SepCopyTokenIntegrity()
{
  __int64 TokenIntegrity; // rax
  __int64 v1; // rdx
  __int64 result; // rax

  TokenIntegrity = SepLocateTokenIntegrity();
  if ( TokenIntegrity )
  {
    *(_QWORD *)v1 = *(_QWORD *)TokenIntegrity;
    result = *(unsigned int *)(TokenIntegrity + 8);
    *(_DWORD *)(v1 + 8) = result;
  }
  else
  {
    result = SeUntrustedMandatorySid;
    *(_QWORD *)v1 = SeUntrustedMandatorySid;
    *(_DWORD *)(v1 + 8) = 96;
  }
  return result;
}
