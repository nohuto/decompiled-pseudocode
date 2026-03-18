/*
 * XREFs of ?s_EndpointProc@CManipulationManager@@CAJAEBUMessageCallThreadInfo@1@PEBUMsgCallTypeDefinition@@PEAXPEBXH@Z @ 0x1800C0B3C
 * Callers:
 *     ?s_RenderThreadEndpointProc@CManipulationManager@@CAJPEAXPEBXH@Z @ 0x1800C0AD0 (-s_RenderThreadEndpointProc@CManipulationManager@@CAJPEAXPEBXH@Z.c)
 *     ?s_ManipulationThreadEndpointProc@CManipulationManager@@CAJPEAXPEBXH@Z @ 0x180198D00 (-s_ManipulationThreadEndpointProc@CManipulationManager@@CAJPEAXPEBXH@Z.c)
 *     ?s_RenderThreadTelemetryEndpointProc@CManipulationManager@@CAJPEAXPEBXH@Z @ 0x180198D70 (-s_RenderThreadTelemetryEndpointProc@CManipulationManager@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CManipulationManager::s_EndpointProc(
        const struct CManipulationManager::MessageCallThreadInfo *a1,
        const struct MsgCallTypeDefinition *a2,
        void *a3,
        const void *a4,
        int a5)
{
  signed int v5; // eax
  unsigned int v6; // ebx

  v5 = CoreUICallReceive(*((_QWORD *)a1 + 2), a2, &g_parameters_PTzwBA4mNRcOZNjuEhV2NJ6EUp4, 197LL, a3, a4, a5);
  v6 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x8D3u);
  return v6;
}
