/*
 * XREFs of ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAXIPEBUCPointerInputFrame@@@Z @ 0x1C011A074
 * Callers:
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C011D520 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     ?CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z @ 0x1C011A2F8 (-CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z.c)
 *     ?CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z @ 0x1C011B8DC (-CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0122080 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 */

void __fastcall CTouchProcessor::BuildManipulationInputInfo(
        CTouchProcessor *this,
        _DWORD *a2,
        __int64 a3,
        const struct CPointerInputFrame *a4)
{
  unsigned int v6; // eax
  CTouchProcessor *v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // r10d
  size_t v10; // rsi
  unsigned int i; // r14d
  __int64 v12; // rbp
  __int64 v13; // r15
  __int64 v14; // rcx
  int v15; // ecx

  v6 = CTouchProcessor::CountMTNodesReadyForRouting(this, a4);
  v8 = CTouchProcessor::CalcManipulationInputInfoSize(v7, v6);
  if ( v9 < v8 )
    return;
  v10 = 0LL;
  if ( *((_DWORD *)a4 + 12) )
  {
    switch ( *(_DWORD *)(*((_QWORD *)a4 + 12) + 248LL) )
    {
      case 1:
        v10 = 96LL;
        break;
      case 2:
        goto LABEL_7;
      case 3:
        v10 = 120LL;
        break;
      case 5:
LABEL_7:
        v10 = 144LL;
        break;
    }
  }
  a2[2] = 0;
  for ( i = 0; i < *((_DWORD *)a4 + 12); ++i )
  {
    v12 = *((_QWORD *)a4 + 12) + 608LL * i;
    if ( (unsigned int)CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)v12) )
    {
      v13 = 52LL * (unsigned int)a2[2];
      memmove(&a2[v13 + 4], (const void *)(v12 + 248), v10);
      v14 = 52LL * (unsigned int)a2[2];
      *(_OWORD *)&a2[v14 + 40] = *(_OWORD *)(v12 + 440);
      *(_OWORD *)&a2[v14 + 44] = *(_OWORD *)(v12 + 456);
      *(_OWORD *)&a2[v14 + 48] = *(_OWORD *)(v12 + 472);
      if ( (*(_DWORD *)(v12 + 4) & 0x80u) == 0 )
        v15 = 0;
      else
        v15 = *(_DWORD *)(v12 + 404);
      a2[52 * a2[2] + 52] = v15;
      *(_QWORD *)&a2[52 * a2[2] + 54] = *(_QWORD *)(v12 + 576);
      *(_QWORD *)&a2[v13 + 10] = 0LL;
      ++a2[2];
    }
  }
  *(_QWORD *)a2 = *((_QWORD *)a4 + 9);
}
