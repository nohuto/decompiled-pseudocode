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

BOOLEAN __cdecl RtlTestProtectedAccess(PS_PROTECTION Source, PS_PROTECTION Target)
{
  BOOLEAN result; // al
  int v3; // eax

  result = 1;
  if ( (Target.Level & 7) != 0 )
  {
    if ( (unsigned __int8)(Source.Level & 7) < (unsigned __int8)(Target.Level & 7) )
      return 0;
    v3 = *(_DWORD *)&RtlProtectedAccess[12 * ((unsigned __int64)Source.Level >> 4)];
    if ( !_bittest(&v3, Target.Level >> 4) )
      return 0;
  }
  return result;
}
