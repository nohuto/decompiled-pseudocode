/*
 * XREFs of ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x140018218
 * Callers:
 *     ?FillRampBuffer@CCrossProcessServerInputEndpoint@@AEAAXXZ @ 0x140017A54 (-FillRampBuffer@CCrossProcessServerInputEndpoint@@AEAAXXZ.c)
 *     ?GetCurrentPadding@CCrossProcessBaseEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x1400538C0 (-GetCurrentPadding@CCrossProcessBaseEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z.c)
 *     ?GetOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x140055BD0 (-GetOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z.c)
 *     ?ReleaseOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x1400567D0 (-ReleaseOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@.c)
 *     ?GetOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x140056E70 (-GetOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z.c)
 *     ?ReleaseOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x1400571F0 (-ReleaseOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@.c)
 * Callees:
 *     WPP_SF_D @ 0x140034C3C (WPP_SF_D.c)
 *     WPP_SF_s @ 0x140054A68 (WPP_SF_s.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140054BE4 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AEWMILOG_SECURITY@@YAXKPEAXE@Z @ 0x1400601E0 (-AEWMILOG_SECURITY@@YAXKPEAXE@Z.c)
 */

char __fastcall CCrossProcessBaseEndpoint::IsValidOffset(
        CCrossProcessBaseEndpoint *this,
        __int64 a2,
        unsigned __int8 a3)
{
  char v3; // bl

  v3 = 0;
  if ( a2 >= 0 )
    return 1;
  AEWMILOG_SECURITY((unsigned int)this, this, a3);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) )
  {
    WPP_SF_s(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      38LL,
      &WPP_698a2f115f533c7f031ecbc2e80baf0e_Traceguids,
      "Security failure - memory overwrite detected - Invalid offset.");
  }
  _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this + 8) + 156LL), 0xFFFFFFFE);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 37LL, &WPP_698a2f115f533c7f031ecbc2e80baf0e_Traceguids, 0LL);
  }
  AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::IsValidOffset", 0x64Eu, -2147467259);
  return v3;
}
