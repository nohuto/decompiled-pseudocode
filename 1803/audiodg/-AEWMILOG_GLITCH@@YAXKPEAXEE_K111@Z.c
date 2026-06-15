/*
 * XREFs of ?AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z @ 0x1400602F0
 * Callers:
 *     ?GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140017B40 (-GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 *     ?GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x1400554A0 (-GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 *     ?GetOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x140055BD0 (-GetOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z.c)
 *     ?GetOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x140056E70 (-GetOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z.c)
 * Callees:
 *     memset_0 @ 0x14001C9A0 (memset_0.c)
 */

void __fastcall AEWMILOG_GLITCH(
        __int64 a1,
        void *a2,
        __int64 a3,
        UCHAR a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8)
{
  struct _EVENT_TRACE_HEADER EventTrace; // [rsp+20h] [rbp-60h] BYREF
  void *v11; // [rsp+50h] [rbp-30h]
  int v12; // [rsp+58h] [rbp-28h]
  unsigned __int64 v13; // [rsp+60h] [rbp-20h]
  unsigned __int64 v14; // [rsp+68h] [rbp-18h]
  unsigned __int64 v15; // [rsp+70h] [rbp-10h]
  unsigned __int64 v16; // [rsp+78h] [rbp-8h]

  if ( g_u32AEWMILogLevel >= 5 )
  {
    memset_0(&EventTrace, 0, 0x40uLL);
    v12 = 0;
    EventTrace.Size = 96;
    v13 = a5;
    v14 = a6;
    v15 = a7;
    v16 = a8;
    EventTrace.UserTime = 0x20000;
    EventTrace.24 = (union _EVENT_TRACE_HEADER::$146F82FB58FCEC23F5D30A6BD72C4E4F)AEWMIGUID_GLITCH;
    EventTrace.Class.Level = 5;
    EventTrace.Class.Type = a4;
    v11 = a2;
    TraceEvent(g_hAEWMITraceHandle, &EventTrace);
  }
}
