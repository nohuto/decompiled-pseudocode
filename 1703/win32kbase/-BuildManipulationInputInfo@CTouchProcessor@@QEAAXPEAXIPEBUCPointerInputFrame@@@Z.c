/*
 * XREFs of ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAXIPEBUCPointerInputFrame@@@Z @ 0x1C011B284
 * Callers:
 *     BuildManipulationInputInfo @ 0x1C0129630 (BuildManipulationInputInfo.c)
 * Callees:
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C006F870 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     ?CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z @ 0x1C011B574 (-CalcManipulationInputInfoSize@CTouchProcessor@@AEAAKK@Z.c)
 *     ?CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z @ 0x1C011CA78 (-CountMTNodesReadyForRouting@CTouchProcessor@@AEAAIPEBUCPointerInputFrame@@@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0122A28 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     GetPointerInfoSize @ 0x1C01296AC (GetPointerInfoSize.c)
 */

void __fastcall CTouchProcessor::BuildManipulationInputInfo(
        CTouchProcessor *this,
        _QWORD *a2,
        unsigned int a3,
        const struct CPointerInputFrame *a4)
{
  __int64 v4; // rbx
  CTouchProcessor *v8; // rcx
  unsigned int v9; // eax
  CTouchProcessor *v10; // rcx
  size_t PointerInfoSize; // r15
  unsigned int i; // edi
  _DWORD *v13; // rbp
  __int64 v14; // r13
  __int64 v15; // rax

  v4 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  CInpLockGuard::LockExclusive((PERESOURCE *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 200LL));
  v9 = CTouchProcessor::CountMTNodesReadyForRouting(v8, a4);
  if ( a3 >= CTouchProcessor::CalcManipulationInputInfoSize(v10, v9) )
  {
    PointerInfoSize = 0LL;
    if ( *((_DWORD *)a4 + 12) )
      PointerInfoSize = (unsigned int)GetPointerInfoSize(*(unsigned int *)(*((_QWORD *)a4 + 12) + 248LL));
    *(_DWORD *)a2 = 0;
    for ( i = 0; i < *((_DWORD *)a4 + 12); ++i )
    {
      v13 = (_DWORD *)(*((_QWORD *)a4 + 12) + 608LL * i);
      if ( (unsigned int)CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)v13) )
      {
        v14 = 18LL * *(unsigned int *)a2;
        memmove(&a2[v14 + 2], v13 + 62, PointerInfoSize);
        if ( (v13[1] & 0x80u) == 0 )
          v15 = 0LL;
        else
          v15 = (unsigned int)v13[101];
        a2[v14 + 5] = v15;
        ++*(_DWORD *)a2;
      }
    }
    a2[1] = *((_QWORD *)a4 + 9);
  }
  *(_QWORD *)(v4 + 232) = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v4 + 200));
}
