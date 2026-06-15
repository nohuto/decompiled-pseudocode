/*
 * XREFs of WPP_SF_S_guid_ @ 0x1800906D4
 * Callers:
 *     ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x180014190 (-RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z.c)
 *     ?GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z @ 0x180015FB0 (-GetCurrentPolicyGain@CAudioSession@@IEAAJPEA_JAEA_NPEAUSessionPolicyGains@@AEA_J@Z.c)
 *     ?AddGainStage@CAudioSession@@UEAAJPEAVCGainStage@@PEBU_GUID@@@Z @ 0x18008A0D0 (-AddGainStage@CAudioSession@@UEAAJPEAVCGainStage@@PEBU_GUID@@@Z.c)
 *     ?RemoveGainStage@CAudioSession@@UEAAJPEBU_GUID@@0_NPEA_J@Z @ 0x18008EEF0 (-RemoveGainStage@CAudioSession@@UEAAJPEBU_GUID@@0_NPEA_J@Z.c)
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
  return EtwTraceMessage(a1, 43LL, &WPP_0c5ff841e5503cc39024c97173620901_Traceguids, a2, a4);
}
