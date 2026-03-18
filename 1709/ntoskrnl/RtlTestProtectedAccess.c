/*
 * XREFs of RtlTestProtectedAccess @ 0x1405391F8
 * Callers:
 *     NtSetInformationThread @ 0x1404CD4F0 (NtSetInformationThread.c)
 *     PspGetProcessProtectionRequirementsFromImage @ 0x140538F14 (PspGetProcessProtectionRequirementsFromImage.c)
 *     PspValidateCreateProcessProtection @ 0x140538F44 (PspValidateCreateProcessProtection.c)
 *     PspCheckForInvalidAccessByProtection @ 0x1405391CC (PspCheckForInvalidAccessByProtection.c)
 *     PopBlackBoxUpdate @ 0x140599AD8 (PopBlackBoxUpdate.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlTestProtectedAccess(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // eax
  bool result; // al

  result = 1;
  if ( (a2 & 7) != 0 )
  {
    if ( (unsigned __int8)(a1 & 7) < (unsigned __int8)(a2 & 7) )
      return 0;
    v2 = *(_DWORD *)&RtlProtectedAccess[12 * ((unsigned __int64)a1 >> 4)];
    if ( !_bittest(&v2, a2 >> 4) )
      return 0;
  }
  return result;
}
