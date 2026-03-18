/*
 * XREFs of SepLocateTokenIntegrity @ 0x14005CA48
 * Callers:
 *     SepCopyTokenIntegrity @ 0x14006A264 (SepCopyTokenIntegrity.c)
 *     SepMandatorySubProcessToken @ 0x14006B9C8 (SepMandatorySubProcessToken.c)
 *     RtlpNewSecurityObject @ 0x1404C43A0 (RtlpNewSecurityObject.c)
 *     NtCreateLowBoxToken @ 0x140540EB0 (NtCreateLowBoxToken.c)
 *     NtSetInformationToken @ 0x140544C00 (NtSetInformationToken.c)
 *     SepGetDefaultsSubjectContext @ 0x140790B2C (SepGetDefaultsSubjectContext.c)
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
