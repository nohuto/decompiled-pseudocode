/*
 * XREFs of ?WriteSqmInfo@CAudioDGModule@@AEAAXXZ @ 0x1400348FC
 * Callers:
 *     ?PostMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140034170 (-PostMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 * Callees:
 *     McTemplateU0q @ 0x140034B24 (McTemplateU0q.c)
 *     WPP_SF_DDD @ 0x140034B94 (WPP_SF_DDD.c)
 */

void __fastcall CAudioDGModule::WriteSqmInfo(CAudioDGModule *this)
{
  __int64 v1; // rcx

  WinSqmIncrementDWORD(*(_QWORD *)&g_hSqmSession.Data1, 5470LL, g_EndpointStatistics);
  WinSqmIncrementDWORD(*(_QWORD *)&g_hSqmSession.Data1, 5951LL, *(&g_EndpointStatistics + 1));
  WinSqmIncrementDWORD(*(_QWORD *)&g_hSqmSession.Data1, 5933LL, (unsigned int)dword_140087F10);
  if ( g_EndpointStatistics > 0x32u )
  {
    WerRegisterMemoryBlock(&g_EndpointStatistics, 0xCu);
    ShipAssert(47106LL, g_EndpointStatistics);
    if ( (Microsoft_Windows_AudioEnableBits & 1) != 0 )
      McTemplateU0q(v1, &EVT_AUDIODG_GLITCH_THRESHOLD_EXCEEDED, g_EndpointStatistics);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_DDD(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        32LL,
        &WPP_3fe81b27291f30f1338e1fd51985555a_Traceguids,
        g_EndpointStatistics,
        *(&g_EndpointStatistics + 1),
        dword_140087F10);
    }
  }
}
