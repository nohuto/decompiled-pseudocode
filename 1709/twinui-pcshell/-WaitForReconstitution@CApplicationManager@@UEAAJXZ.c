/*
 * XREFs of ?WaitForReconstitution@CApplicationManager@@UEAAJXZ @ 0x18000FF50
 * Callers:
 *     <none>
 * Callees:
 *     ??$WaitOnAddressHelper@_N@@YAJPEA_N_NK@Z @ 0x18002488C (--$WaitOnAddressHelper@_N@@YAJPEA_N_NK@Z.c)
 */

__int64 __fastcall CApplicationManager::WaitForReconstitution(CApplicationManager *this)
{
  unsigned int v1; // ebx

  v1 = BYTE4(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr) == 0 ? 0x8007000C : 0;
  if ( BYTE4(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr) )
    WaitOnAddressHelper<bool>((char *)&CApplicationManagerUtility::g_pIAMGlobals[11].Ptr + 5);
  return v1;
}
