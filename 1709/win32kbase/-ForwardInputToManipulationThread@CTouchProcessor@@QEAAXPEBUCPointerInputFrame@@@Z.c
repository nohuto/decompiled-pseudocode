/*
 * XREFs of ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C011D520
 * Callers:
 *     ?ForwardPointerInputFrameToManipulationThread@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C011D5D0 (-ForwardPointerInputFrameToManipulationThread@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C011E76C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     CoreMsgSend @ 0x1C0011904 (CoreMsgSend.c)
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAXIPEBUCPointerInputFrame@@@Z @ 0x1C011A074 (-BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAXIPEBUCPointerInputFrame@@@Z.c)
 *     ?CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z @ 0x1C011A2F8 (-CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z.c)
 *     ?CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z @ 0x1C011B8DC (-CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z.c)
 */

void __fastcall CTouchProcessor::ForwardInputToManipulationThread(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2)
{
  int v3; // ebp
  __int64 v4; // r8
  unsigned int v5; // edi
  _DWORD *v6; // rbx
  CTouchProcessor *v7; // rcx
  unsigned int v8; // eax
  CTouchProcessor *v9; // rcx

  v3 = CTouchProcessor::CountMTNodesReadyForRouting(this, a2);
  v4 = (unsigned int)(v3 - 1);
  if ( (unsigned __int64)(208 * v4) > 0xFFFFFFFF || (unsigned int)(208 * v4 + 232) < 0xE8 )
    v5 = 0;
  else
    v5 = 208 * v4 + 232;
  v6 = (_DWORD *)Win32AllocPool(v5, 0x6D696955u);
  *v6 = 0;
  v8 = CTouchProcessor::CalcManipulationInputInfoSize(v7, v3);
  CTouchProcessor::BuildManipulationInputInfo(v9, v6 + 2, v8, a2);
  CoreMsgSend(gInputInteropMTConnectionHandle, 0, v6, (const GUID *)v5);
  Win32FreePool((__int64)v6);
}
