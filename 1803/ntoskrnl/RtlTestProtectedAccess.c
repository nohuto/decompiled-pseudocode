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

bool __fastcall RtlTestProtectedAccess(unsigned __int8 a1, unsigned __int8 a2)
{
  bool result; // al
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
