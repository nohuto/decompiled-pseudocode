/*
 * XREFs of SepLocateTokenIntegrity @ 0x1400878E8
 * Callers:
 *     SepMandatorySubProcessToken @ 0x140019E94 (SepMandatorySubProcessToken.c)
 *     SepCopyTokenIntegrity @ 0x1400E4A04 (SepCopyTokenIntegrity.c)
 *     NtSetInformationToken @ 0x1404690B0 (NtSetInformationToken.c)
 *     RtlpNewSecurityObject @ 0x1404BCE00 (RtlpNewSecurityObject.c)
 *     NtCreateLowBoxToken @ 0x140549290 (NtCreateLowBoxToken.c)
 *     SepGetDefaultsSubjectContext @ 0x14072C780 (SepGetDefaultsSubjectContext.c)
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
