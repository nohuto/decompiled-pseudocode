/*
 * XREFs of RtlTestProtectedAccess @ 0x1405553AC
 * Callers:
 *     PopBlackBoxUpdate @ 0x1405230F0 (PopBlackBoxUpdate.c)
 *     PspValidateCreateProcessProtection @ 0x14055514C (PspValidateCreateProcessProtection.c)
 *     PspCheckForInvalidAccessByProtection @ 0x14055537C (PspCheckForInvalidAccessByProtection.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x140577B58 (PspGetProcessProtectionRequirementsFromImage.c)
 *     NtSetInformationThread @ 0x14059B270 (NtSetInformationThread.c)
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
