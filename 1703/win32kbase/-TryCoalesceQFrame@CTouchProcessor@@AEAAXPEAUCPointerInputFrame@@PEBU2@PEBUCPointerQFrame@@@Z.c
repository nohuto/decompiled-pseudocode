/*
 * XREFs of ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C0128010
 * Callers:
 *     ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x1C011E2A0 (-EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPoi.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAXPEAU2@K@Z @ 0x1C012594C (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAXPEAU2@K@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIIPEAX@Z @ 0x1C0125E7C (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIIPEAX@Z.c)
 * Callees:
 *     EtwTraceBeginPointerFrameCoalesce @ 0x1C00D98E0 (EtwTraceBeginPointerFrameCoalesce.c)
 *     EtwTraceEndPointerFrameCoalesce @ 0x1C00D9E40 (EtwTraceEndPointerFrameCoalesce.c)
 *     EtwTracePointerNoCoalesce @ 0x1C00DA440 (EtwTracePointerNoCoalesce.c)
 *     ?CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@KH@Z @ 0x1C011BD68 (-CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@.c)
 *     ?CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKKIH@Z @ 0x1C011CABC (-CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKKIH@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z @ 0x1C011EB44 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0122E64 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?TrackCoalesceOnArrival@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1C0127F60 (-TrackCoalesceOnArrival@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z.c)
 */

void __fastcall CTouchProcessor::TryCoalesceQFrame(
        CTouchProcessor *this,
        struct CPointerInputFrame *a2,
        const struct CPointerInputFrame *a3,
        const struct CPointerQFrame *a4)
{
  __int64 v4; // rsi
  int v5; // r8d
  int v7; // eax
  int v9; // edi
  int v10; // r9d
  int v11; // r12d
  unsigned int v12; // ebp
  int v14; // eax
  int v15; // r13d
  _DWORD *v16; // rsi
  unsigned int i; // r14d
  CTouchProcessor *v18; // r10
  __int64 v19; // rbp
  CTouchProcessor *v20; // rcx
  _QWORD *v21; // rax
  __int16 v22; // dx
  int v23; // ecx
  int v24; // eax
  CTouchProcessor *v25; // [rsp+20h] [rbp-68h]
  int v26; // [rsp+98h] [rbp+10h]
  int v28; // [rsp+A8h] [rbp+20h]

  v4 = *((_QWORD *)a2 + 13);
  v5 = 0;
  v7 = 0;
  v9 = 0;
  v26 = 0;
  v10 = 1;
  v28 = 0;
  v11 = 1;
  v12 = 0;
  if ( *((_DWORD *)a2 + 12) )
  {
    do
    {
      if ( *(_DWORD *)v4 == -1 )
        break;
      if ( !a4 || a4 == (const struct CPointerQFrame *)v4 )
      {
        if ( (*(_DWORD *)(v4 + 220) & 2) != 0 && *(_DWORD *)(v4 + 216) != *(_DWORD *)(*(_QWORD *)(v4 + 232) + 216LL) )
        {
          CTouchProcessor::TrackCoalesceOnArrival((__int64)this, v4, 17);
          *(_DWORD *)(v4 + 220) &= ~2u;
          v10 = 1;
          v5 = 0;
        }
        v14 = *(_DWORD *)(v4 + 220);
        if ( (v14 & 2) != 0 )
        {
          *(_DWORD *)(v4 + 220) = v14 | 4;
          v7 = 1;
          v26 = 1;
        }
        else
        {
          v7 = v26;
        }
        *(_QWORD *)(v4 + 232) = 0LL;
      }
      ++v12;
      v4 += 240LL;
    }
    while ( v12 < *((_DWORD *)a2 + 12) );
    v9 = 0;
    if ( v7 )
    {
      EtwTraceBeginPointerFrameCoalesce(*((_DWORD *)a2 + 10), *((_DWORD *)a2 + 12), 0);
      v5 = 0;
      v10 = 1;
    }
  }
  v15 = 1;
  v16 = (_DWORD *)*((_QWORD *)a2 + 12);
  for ( i = 0; i < *((_DWORD *)a2 + 12); v16 += 152 )
  {
    if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v16) )
    {
      v19 = *((_QWORD *)a2 + 13) + 240LL * (unsigned int)v16[2];
      if ( (a4 || *(_QWORD *)(v19 + 8) == 0xFFFFFFFFLL) && a4 != (const struct CPointerQFrame *)v19 )
      {
        v15 = (*(_BYTE *)(v19 + 220) & 4) != 0 ? v15 : 0;
      }
      else
      {
        if ( (*(_DWORD *)(v19 + 220) & 2) != 0 )
        {
          *((_QWORD *)v16 + 2) = CTouchProcessor::CoalesceNodeWithPrevious(
                                   v18,
                                   a2,
                                   a3,
                                   (struct CPointerInfoNode *)v16,
                                   i,
                                   v5);
        }
        else
        {
          v15 = v5;
          LODWORD(v25) = v16[65];
          v21 = CTouchProcessor::CreateAndReferenceMsgData(
                  v18,
                  *((_WORD *)v16 + 126),
                  *((_DWORD *)a2 + 10),
                  i,
                  v25,
                  -__CFSHR__(*v16, 7));
          v22 = *((_WORD *)v16 + 126);
          v23 = *((unsigned __int16 *)v16 + 120);
          *((_QWORD *)v16 + 2) = v21;
          EtwTracePointerNoCoalesce(v23, v22, *(_DWORD *)(v19 + 224), 0);
        }
        v5 = 0;
        if ( !*((_QWORD *)v16 + 2) )
        {
          CTouchProcessor::FreePointerInfoNodeInt(v20, a2, i);
          v5 = 0;
        }
        v10 = 1;
      }
      if ( *(_QWORD *)(v19 + 8) != 0xFFFFFFFFLL )
        v11 = v5;
    }
    if ( !a4 )
    {
      if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v16) )
      {
        v24 = v16[65];
        if ( (v24 & 0x2000) != 0 )
        {
          v28 = v10;
          if ( (v24 & 0x10000) != 0 )
            v9 = v10;
        }
      }
    }
    i += v10;
  }
  if ( v26 != v5 )
  {
    EtwTraceEndPointerFrameCoalesce(*((_DWORD *)a2 + 10), *((_DWORD *)a2 + 12), 0);
    v10 = 1;
  }
  *((_DWORD *)a2 + 20) ^= (*((_DWORD *)a2 + 20) ^ (2 * v15)) & 2;
  if ( !a4 )
    *((_DWORD *)a2 + 20) = *((_DWORD *)a2 + 20) & 0xFFFFFFE3 | (4 * (v10 & v11 | (2 * (v10 & v28 | (2 * (v10 & v9))))));
}
