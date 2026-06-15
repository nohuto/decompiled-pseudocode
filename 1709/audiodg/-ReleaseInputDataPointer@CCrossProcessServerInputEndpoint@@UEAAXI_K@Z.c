/*
 * XREFs of ?ReleaseInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXI_K@Z @ 0x1400172C0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x14001D9AC (memset.c)
 *     WPP_SF_D @ 0x140035F74 (WPP_SF_D.c)
 *     WPP_SF_s @ 0x140056DE8 (WPP_SF_s.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140056F64 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AEWMILOG_SECURITY@@YAXKPEAXE@Z @ 0x1400631E0 (-AEWMILOG_SECURITY@@YAXKPEAXE@Z.c)
 */

void __fastcall CCrossProcessServerInputEndpoint::ReleaseInputDataPointer(
        CCrossProcessServerInputEndpoint *this,
        unsigned int a2,
        unsigned __int8 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  void *v8; // rcx
  _BYTE EventTrace[64]; // [rsp+20h] [rbp-79h] BYREF
  __int64 v10; // [rsp+60h] [rbp-39h]
  __int64 v11; // [rsp+68h] [rbp-31h]
  __int64 v12; // [rsp+70h] [rbp-29h]
  _BYTE v13[64]; // [rsp+80h] [rbp-19h] BYREF
  __int64 v14; // [rsp+C0h] [rbp+27h]
  __int64 v15; // [rsp+C8h] [rbp+2Fh]
  __int64 v16; // [rsp+D0h] [rbp+37h]

  v4 = a2;
  if ( g_u32AEWMILogLevel >= 5 )
  {
    memset(EventTrace, 0, sizeof(EventTrace));
    strcpy(EventTrace, "X");
    *(_OWORD *)&EventTrace[24] = AEWMIGUID_DATA;
    *(_DWORD *)&EventTrace[44] = 0x20000;
    *(_WORD *)&EventTrace[4] = 1287;
    *(_QWORD *)&EventTrace[48] = (char *)this - 440;
    *(_DWORD *)&EventTrace[56] = 0;
    v10 = v4;
    v11 = 0LL;
    v12 = 0LL;
    TraceEvent(g_hAEWMITraceHandle, (PEVENT_TRACE_HEADER)EventTrace);
  }
  if ( (_DWORD)v4 && ((*(_DWORD *)(*((_QWORD *)this - 47) + 156LL) & 1) != 0 || (*((_BYTE *)this - 280) & 1) != 0) )
  {
    v5 = *((_QWORD *)this - 47);
    v6 = *(_QWORD *)(v5 + 16);
    if ( v6 < 0 )
    {
      AEWMILOG_SECURITY(v6, (char *)this - 440, a3);
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) )
      {
        WPP_SF_s(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          38LL,
          &WPP_a656f1dc337437ce15896b73439d7644_Traceguids,
          "Security failure - memory overwrite detected - Invalid offset.");
      }
      _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this - 47) + 156LL), 0xFFFFFFFE);
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 37LL, &WPP_a656f1dc337437ce15896b73439d7644_Traceguids, 0LL);
      }
      AudCPTraceLoggingErrorHelper("CCrossProcessBaseEndpoint::IsValidOffset", 0x64Eu, -2147467259);
    }
    else if ( *((_DWORD *)this + 4) <= 1u )
    {
      v7 = (unsigned int)(v4 * *((_DWORD *)this - 90) - *((_DWORD *)this + 20)) + v6;
      if ( v7 > *(_QWORD *)(v5 + 8) )
        v7 = *(_QWORD *)(v5 + 8);
      *(_QWORD *)(v5 + 16) = v7;
    }
  }
  if ( g_u32AEWMILogLevel >= 5 )
  {
    memset(v13, 0, sizeof(v13));
    *(_QWORD *)&v13[48] = (char *)this - 440;
    v15 = *((int *)this + 4);
    strcpy(v13, "X");
    *(_DWORD *)&v13[44] = 0x20000;
    *(_OWORD *)&v13[24] = AEWMIGUID_DATA;
    *(_WORD *)&v13[4] = 1288;
    *(_DWORD *)&v13[56] = 0;
    v14 = v4;
    v16 = 0LL;
    TraceEvent(g_hAEWMITraceHandle, (PEVENT_TRACE_HEADER)v13);
  }
  v8 = (void *)*((_QWORD *)this - 39);
  *((_DWORD *)this + 4) = 3;
  SetEvent(v8);
}
