/*
 * XREFs of RtlTestProtectedAccess @ 0x1405463A0
 * Callers:
 *     NtSetInformationThread @ 0x14047D650 (NtSetInformationThread.c)
 *     PspCheckForInvalidAccessByProtection @ 0x14054636C (PspCheckForInvalidAccessByProtection.c)
 *     PspValidateCreateProcessProtection @ 0x140546440 (PspValidateCreateProcessProtection.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x1405464A4 (PspGetProcessProtectionRequirementsFromImage.c)
 *     PopBlackBoxUpdate @ 0x1405744A4 (PopBlackBoxUpdate.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlTestProtectedAccess(unsigned __int8 a1, unsigned __int8 a2)
{
  _BOOL8 result; // rax
  int v3; // eax

  result = 1;
  if ( (a2 & 7) != 0 )
  {
    if ( (unsigned __int8)(a1 & 7) < (unsigned __int8)(a2 & 7) )
      return 0;
    v3 = *(_DWORD *)&RtlProtectedAccess[12 * ((unsigned __int64)a1 >> 4)];
    if ( !_bittest(&v3, a2 >> 4) )
      return 0;
  }
  return result;
}
