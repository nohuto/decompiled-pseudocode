/*
 * XREFs of ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAXIPEBUCPointerInputFrame@@@Z @ 0x1C010D5D4
 * Callers:
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0111AD0 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     GetPointerInfoSize @ 0x1C00B3058 (GetPointerInfoSize.c)
 *     ?CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z @ 0x1C010D8B8 (-CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z.c)
 *     ?CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z @ 0x1C010F774 (-CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0117288 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::BuildManipulationInputInfo(
        CTouchProcessor *this,
        _DWORD *a2,
        unsigned int a3,
        const struct CPointerInputFrame *a4)
{
  unsigned int v7; // r15d
  CTouchProcessor *v8; // rcx
  __int64 v9; // rdx
  CTouchProcessor *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // ebx
  size_t v14; // r12
  unsigned int PointerInfoSize; // eax
  unsigned int v16; // r14d
  __int64 v17; // rbp
  __int64 v18; // r13
  __int64 v19; // rcx
  int v20; // edx

  v7 = CTouchProcessor::CountMTNodesReadyForRouting(this, a4);
  if ( a3 < CTouchProcessor::CalcManipulationInputInfoSize(v8, v7) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9);
  if ( a3 >= CTouchProcessor::CalcManipulationInputInfoSize(v10, v7) )
  {
    v13 = 0;
    v14 = 0LL;
    if ( *((_DWORD *)a4 + 12) )
    {
      PointerInfoSize = GetPointerInfoSize(*(_DWORD *)(*((_QWORD *)a4 + 12) + 232LL));
      v14 = PointerInfoSize;
      if ( !PointerInfoSize )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11);
    }
    a2[2] = 0;
    v16 = 0;
    if ( *((_DWORD *)a4 + 12) )
    {
      do
      {
        v17 = *((_QWORD *)a4 + 12) + 576LL * v16;
        if ( (unsigned int)CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)v17) )
        {
          v18 = 56 * v11;
          memmove(&a2[56 * v11 + 4], (const void *)(v17 + 232), v14);
          v19 = 56LL * (unsigned int)a2[2];
          *(_OWORD *)&a2[v19 + 40] = *(_OWORD *)(v17 + 416);
          *(_OWORD *)&a2[v19 + 44] = *(_OWORD *)(v17 + 432);
          *(_OWORD *)&a2[v19 + 48] = *(_OWORD *)(v17 + 448);
          if ( (*(_DWORD *)(v17 + 4) & 0x80u) == 0 )
            v20 = 0;
          else
            v20 = *(_DWORD *)(v17 + 388);
          a2[56 * a2[2] + 52] = v20;
          *(_QWORD *)&a2[56 * a2[2] + 54] = *(_QWORD *)(v17 + 552);
          *(_QWORD *)&a2[56 * a2[2] + 56] = *(_QWORD *)(v17 + 480);
          v12 = 224LL * (unsigned int)a2[2];
          a2[(unsigned __int64)v12 / 4 + 58] = *(_DWORD *)(v17 + 560) != 0;
          *(_QWORD *)&a2[v18 + 10] = 0LL;
          v11 = (unsigned int)++a2[2];
        }
        ++v16;
      }
      while ( v16 < *((_DWORD *)a4 + 12) );
      v13 = v11;
    }
    if ( v13 != v7 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11);
    *(_QWORD *)a2 = *((_QWORD *)a4 + 9);
  }
}
