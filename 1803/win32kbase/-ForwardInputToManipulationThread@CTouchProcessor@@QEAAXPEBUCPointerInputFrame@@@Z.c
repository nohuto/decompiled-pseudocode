/*
 * XREFs of ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0111AD0
 * Callers:
 *     ?ForwardPointerInputFrameToManipulationThread@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C0111BA0 (-ForwardPointerInputFrameToManipulationThread@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C011303C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0056990 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAXIPEBUCPointerInputFrame@@@Z @ 0x1C010D5D4 (-BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAXIPEBUCPointerInputFrame@@@Z.c)
 *     ?CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z @ 0x1C010D8B8 (-CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z.c)
 *     ?CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z @ 0x1C010F774 (-CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::ForwardInputToManipulationThread(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // esi
  unsigned __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  CTouchProcessor *v9; // rcx
  _DWORD *v10; // rdi
  __int64 v11; // rdx
  CTouchProcessor *v12; // rcx
  unsigned int v13; // esi
  __int64 v14; // rcx

  v5 = CTouchProcessor::CountMTNodesReadyForRouting(this, a2);
  if ( !v5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3);
  v6 = 224LL * (v5 - 1);
  if ( v6 > 0xFFFFFFFF || (unsigned int)(v6 + 248) < 0xF8 )
    v7 = 0;
  else
    v7 = v6 + 248;
  if ( v7 < 0xF8 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, 248LL);
  v10 = (_DWORD *)Win32AllocPool(v7, 0x6D696955u);
  if ( !v10 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
  *v10 = 0;
  v13 = CTouchProcessor::CalcManipulationInputInfoSize(v9, v5);
  if ( v7 <= v13 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11);
  CTouchProcessor::BuildManipulationInputInfo(v12, v10 + 2, v13, a2);
  InputExtensibilityCallout::CoreMsgSendMessage(v14, 8);
  Win32FreePool((__int64)v10);
}
