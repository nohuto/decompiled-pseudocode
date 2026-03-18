/*
 * XREFs of ?s_EndpointProc@CManipulationManager@@CAJAEBUMessageCallThreadInfo@1@PEBUMsgCallTypeDefinition@@PEAXPEBXH@Z @ 0x18001CB8C
 * Callers:
 *     ?s_RenderThreadEndpointProc@CManipulationManager@@CAJPEAXPEBXH@Z @ 0x18001CB20 (-s_RenderThreadEndpointProc@CManipulationManager@@CAJPEAXPEBXH@Z.c)
 *     ?s_ManipulationThreadEndpointProc@CManipulationManager@@CAJPEAXPEBXH@Z @ 0x1801D12D0 (-s_ManipulationThreadEndpointProc@CManipulationManager@@CAJPEAXPEBXH@Z.c)
 *     ?s_RenderThreadTelemetryEndpointProc@CManipulationManager@@CAJPEAXPEBXH@Z @ 0x1801D1340 (-s_RenderThreadTelemetryEndpointProc@CManipulationManager@@CAJPEAXPEBXH@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CManipulationManager::s_EndpointProc(
        const struct CManipulationManager::MessageCallThreadInfo *a1,
        const struct MsgCallTypeDefinition *a2,
        void *a3,
        const void *a4,
        int a5)
{
  int v5; // eax
  unsigned int v6; // ebx

  v5 = CoreUICallReceive(
         *((_QWORD *)a1 + 2),
         a2,
         &Microsoft::CoreUI::MessageCall::DWMCoreCallbacks_g_parameters_B7Wh97u7JZ5MPI8fhO4RmhzOr4c,
         218LL,
         a3,
         a4,
         a5);
  v6 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x8E3u);
  return v6;
}
