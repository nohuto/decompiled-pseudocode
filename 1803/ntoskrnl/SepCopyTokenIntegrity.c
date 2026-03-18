/*
 * XREFs of SepCopyTokenIntegrity @ 0x14006A264
 * Callers:
 *     AuthzBasepQueryTokenAttributeAndValues @ 0x1402C3750 (AuthzBasepQueryTokenAttributeAndValues.c)
 *     SepValidLabelSubjectContext @ 0x1404EBF4C (SepValidLabelSubjectContext.c)
 *     SepAdjustPrivileges @ 0x1404EC418 (SepAdjustPrivileges.c)
 *     SeIsTokenAssignableToProcess @ 0x140562F14 (SeIsTokenAssignableToProcess.c)
 *     NtQueryInformationToken @ 0x140597890 (NtQueryInformationToken.c)
 *     SeTokenCanImpersonate @ 0x140599E60 (SeTokenCanImpersonate.c)
 *     SeQueryInformationToken @ 0x1405ADE00 (SeQueryInformationToken.c)
 * Callees:
 *     SepLocateTokenIntegrity @ 0x14005CA48 (SepLocateTokenIntegrity.c)
 */

__int64 __fastcall SepCopyTokenIntegrity(__int64 a1)
{
  __int64 TokenIntegrity; // rax
  __int64 v2; // rdx
  __int64 result; // rax

  TokenIntegrity = SepLocateTokenIntegrity(a1);
  if ( TokenIntegrity )
  {
    *(_QWORD *)v2 = *(_QWORD *)TokenIntegrity;
    result = *(unsigned int *)(TokenIntegrity + 8);
  }
  else
  {
    *(_QWORD *)v2 = SeUntrustedMandatorySid;
    result = 96LL;
  }
  *(_DWORD *)(v2 + 8) = result;
  return result;
}
