/*
 * XREFs of ?CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z @ 0x1C011B8DC
 * Callers:
 *     ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAXIPEBUCPointerInputFrame@@@Z @ 0x1C011A074 (-BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAXIPEBUCPointerInputFrame@@@Z.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C011D520 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C011E76C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0122080 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 */

__int64 __fastcall CTouchProcessor::CountMTNodesReadyForRouting(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2)
{
  unsigned int v2; // r8d
  CPointerInfoNode *v3; // r9
  int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // r8d
  unsigned int v7; // ecx

  v2 = 0;
  if ( *((_DWORD *)a2 + 12) )
  {
    v3 = (CPointerInfoNode *)*((_QWORD *)a2 + 12);
    do
    {
      v4 = CPointerInfoNode::IsForManipulationThread(v3);
      v7 = v6 + 1;
      if ( !v4 )
        v7 = v6;
      v2 = v7;
    }
    while ( v5 != 1 );
  }
  return v2;
}
