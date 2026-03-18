/*
 * XREFs of ?UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C012C5F8
 * Callers:
 *     _lambda_9e8b74e3f8861f09181d3f126c379c9e_::_lambda_invoker_cdecl_ @ 0x1C004FE60 (_lambda_9e8b74e3f8861f09181d3f126c379c9e_--_lambda_invoker_cdecl_.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C012BBF0 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 * Callees:
 *     ?BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C012AEC0 (-BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 */

__int64 __fastcall CPTPProcessor::UpdateEnvironment(__int64 a1, char a2, struct tagHID_POINTER_DEVICE_INFO *a3)
{
  if ( (a2 & 1) != 0 )
    CPTPProcessor::BuildEnvironment((CPTPProcessor *)a1, a3);
  return PTPEngineTraceProducer::SetEnvironment(
           *(PTPEngineTraceProducer **)(a1 + 800),
           (const struct PTPEnvironment *)(a1 + 808));
}
