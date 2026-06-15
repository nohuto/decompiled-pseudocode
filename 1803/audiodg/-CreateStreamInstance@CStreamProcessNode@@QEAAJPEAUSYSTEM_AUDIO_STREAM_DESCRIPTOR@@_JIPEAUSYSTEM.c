/*
 * XREFs of ?CreateStreamInstance@CStreamProcessNode@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140002008
 * Callers:
 *     ?CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14000CB04 (-CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUSYSTEM_AUDIO_S.c)
 * Callees:
 *     ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140003850 (-CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUS.c)
 *     WPP_SF_D @ 0x140034C3C (WPP_SF_D.c)
 *     ?CreateSpatialStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x1400407D0 (-CreateSpatialStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140043450 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CStreamProcessNode::CreateStreamInstance(
        CStreamProcessNode *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        __int64 a3,
        unsigned int a4,
        struct SYSTEM_AUDIO_STREAM *a5)
{
  int v6; // eax
  unsigned int v7; // ebx
  struct CEndpointInstance *v9; // [rsp+48h] [rbp+10h] BYREF

  if ( (*((_DWORD *)a2 + 22) & 0x800000) != 0 )
    v6 = CEndpointInstance::CreateSpatialStreamEndpointInstance(a2, a3, a4, a5, &v9);
  else
    v6 = CEndpointInstance::CreateStreamEndpointInstance(a2, a3, a4, a5, &v9);
  v7 = v6;
  if ( v6 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        17LL,
        &WPP_b0b678a55dcf3cc4e3459249774c166a_Traceguids,
        (unsigned int)v6);
    }
    AudDGTraceLoggingErrorHelper("CStreamProcessNode::CreateStreamInstance", 0x1D9u, v7);
  }
  else
  {
    *((_QWORD *)this + 4) = v9;
  }
  return v7;
}
