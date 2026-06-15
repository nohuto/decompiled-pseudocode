/*
 * XREFs of WPP_SF_S_guid_ @ 0x180076C80
 * Callers:
 *     ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x180018810 (-RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z.c)
 *     ?GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z @ 0x18001ACAC (-GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z.c)
 *     ?AddGainStage@CAudioSession@@UEAAJPEAVCGainStage@@PEBU_GUID@@@Z @ 0x180070040 (-AddGainStage@CAudioSession@@UEAAJPEAVCGainStage@@PEBU_GUID@@@Z.c)
 *     ?RemoveGainStage@CAudioSession@@UEAAJPEBU_GUID@@0_NPEA_J@Z @ 0x1800753D0 (-RemoveGainStage@CAudioSession@@UEAAJPEBU_GUID@@0_NPEA_J@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_S_guid_(__int64 a1, unsigned __int16 a2, __int64 a3, const wchar_t *a4)
{
  __int64 v5; // rcx

  if ( a4 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a4[v5] );
  }
  if ( !a4 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, &WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids, a2, a4);
}
