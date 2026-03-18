/*
 * XREFs of SepLocateTokenIntegrity @ 0x140064184
 * Callers:
 *     SepCopyTokenIntegrity @ 0x140064158 (SepCopyTokenIntegrity.c)
 *     SepMandatorySubProcessToken @ 0x1400662F4 (SepMandatorySubProcessToken.c)
 *     NtSetInformationToken @ 0x14046DB70 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x1404A48A0 (NtCreateLowBoxToken.c)
 *     RtlpNewSecurityObject @ 0x14051EA30 (RtlpNewSecurityObject.c)
 *     SepGetDefaultsSubjectContext @ 0x1406F4D34 (SepGetDefaultsSubjectContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepLocateTokenIntegrity(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(unsigned int *)(a1 + 208);
  if ( (_DWORD)v1 == -1 )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 152) + 16 * v1;
}
