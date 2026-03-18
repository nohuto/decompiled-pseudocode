/*
 * XREFs of ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1C0015168
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0015374 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ?SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z @ 0x1C00114B0 (-SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0016D34 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C0017190 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0017230 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0017560 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ApiSetEditionPostEventMessage @ 0x1C00905D8 (ApiSetEditionPostEventMessage.c)
 */

CInputDest *__fastcall CMouseProcessor::HandleCapture_BreakHasMouseOwner(
        __int64 a1,
        CInputDest *a2,
        CInputDest *a3,
        _DWORD *a4)
{
  volatile __int32 *v5; // rdi
  struct tagTHREADINFO *ThreadInfo; // rax
  struct tagTHREADINFO *v10; // rdx
  char v11; // al
  struct tagTHREADINFO *PtiFromInputDest; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  _OWORD v24[12]; // [rsp+30h] [rbp-D8h] BYREF

  v5 = (volatile __int32 *)(a1 + 2696);
  CInputDest::CInputDest(a2, (const struct CInputDest *)(a1 + 2696));
  CInputDest::GetThreadInfo((CInputDest *)v5);
  ThreadInfo = CInputDest::GetThreadInfo(a3);
  if ( v10 || ThreadInfo )
    v11 = v10 == ThreadInfo;
  else
    v11 = CInputDest::operator==(v5, a3);
  if ( !v11 )
  {
    PtiFromInputDest = (struct tagTHREADINFO *)anonymous_namespace_::GetPtiFromInputDest(a3, 2LL);
    CInputGlobals::SetPtiLastWoken(gpInputGlobals, PtiFromInputDest, 0);
  }
  if ( (*(_DWORD *)(*(_QWORD *)a4 + 88LL) & 2) != 0 )
  {
    v14 = *((_OWORD *)a2 + 1);
    v24[0] = *(_OWORD *)a2;
    v15 = *((_OWORD *)a2 + 2);
    v24[1] = v14;
    v16 = *((_OWORD *)a2 + 3);
    v24[2] = v15;
    v17 = *((_OWORD *)a2 + 4);
    v24[3] = v16;
    v18 = *((_OWORD *)a2 + 5);
    v24[4] = v17;
    v19 = *((_OWORD *)a2 + 6);
    v24[5] = v18;
    v20 = *((_OWORD *)a2 + 8);
    v24[6] = v19;
    v24[7] = *((_OWORD *)a2 + 7);
    v21 = *((_OWORD *)a2 + 9);
    v24[8] = v20;
    v22 = *((_OWORD *)a2 + 10);
    v24[9] = v21;
    v23 = *((_OWORD *)a2 + 11);
    v24[10] = v22;
    v24[11] = v23;
    ApiSetEditionPostEventMessage((unsigned int)v24, 2, 0, 0, 0LL);
  }
  *(_DWORD *)(a1 + 2688) &= ~a4[3];
  if ( !*(_DWORD *)(a1 + 2688) )
  {
    CInputDest::SetEmpty((CInputDest *)v5);
    _InterlockedExchange(v5 + 50, 0);
  }
  return a2;
}
