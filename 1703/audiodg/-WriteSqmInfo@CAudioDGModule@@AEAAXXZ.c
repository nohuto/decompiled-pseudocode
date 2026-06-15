/*
 * XREFs of ?WriteSqmInfo@CAudioDGModule@@AEAAXXZ @ 0x14003629C
 * Callers:
 *     ?PostMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140035A80 (-PostMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 * Callees:
 *     Template_q @ 0x140001504 (Template_q.c)
 *     WPP_SF_DDD @ 0x140036474 (WPP_SF_DDD.c)
 */

void __fastcall CAudioDGModule::WriteSqmInfo(CAudioDGModule *this)
{
  __int64 v1; // rcx

  WinSqmIncrementDWORD(*(_QWORD *)&g_hSqmSession.Data1, 5470LL, g_EndpointStatistics);
  WinSqmIncrementDWORD(*(_QWORD *)&g_hSqmSession.Data1, 5951LL, *(&g_EndpointStatistics + 1));
  WinSqmIncrementDWORD(*(_QWORD *)&g_hSqmSession.Data1, 5933LL, (unsigned int)dword_140085F10);
  if ( g_EndpointStatistics > 0x32u )
  {
    WerRegisterMemoryBlock(&g_EndpointStatistics, 0xCu);
    ShipAssert(47106LL, g_EndpointStatistics);
    if ( (Microsoft_Windows_AudioEnableBits & 1) != 0 )
      Template_q(v1, (__int64)&EVT_AUDIODG_GLITCH_THRESHOLD_EXCEEDED, g_EndpointStatistics);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_DDD(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        32LL,
        &WPP_23720d765f8d3da2cbc3c5fdd3fad56c_Traceguids,
        g_EndpointStatistics);
    }
  }
}
