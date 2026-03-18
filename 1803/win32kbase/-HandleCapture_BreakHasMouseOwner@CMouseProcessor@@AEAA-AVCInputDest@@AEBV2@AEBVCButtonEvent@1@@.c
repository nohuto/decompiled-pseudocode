/*
 * XREFs of ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1C00382F8
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0038520 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ?SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z @ 0x1C0035E70 (-SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0036194 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0036E3C (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C003704C (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0037290 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?GetHardwareButton@CButtonEvent@CMouseProcessor@@QEBA?AW4ButtonNumber@@XZ @ 0x1C0065570 (-GetHardwareButton@CButtonEvent@CMouseProcessor@@QEBA-AW4ButtonNumber@@XZ.c)
 *     ApiSetEditionPostEventMessage @ 0x1C006A6E0 (ApiSetEditionPostEventMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

CInputDest *__fastcall CMouseProcessor::HandleCapture_BreakHasMouseOwner(
        __int64 a1,
        CInputDest *a2,
        CInputDest *a3,
        _DWORD *a4)
{
  __int64 v6; // rcx
  struct tagTHREADINFO *ThreadInfo; // rax
  struct tagTHREADINFO *v10; // rdx
  unsigned int v11; // eax
  bool v12; // zf
  char v14; // al
  struct tagTHREADINFO *PtiFromInputDest; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  _OWORD v25[11]; // [rsp+30h] [rbp-C8h] BYREF

  v6 = 1LL;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 2736), 1, 1) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(1LL, a2);
  if ( a4[4] != 2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, a2);
  CInputDest::CInputDest(a2, (const struct CInputDest *)(a1 + 2552));
  CInputDest::GetThreadInfo((CInputDest *)(a1 + 2552));
  ThreadInfo = CInputDest::GetThreadInfo(a3);
  if ( v10 )
  {
    if ( v10 == ThreadInfo )
      goto LABEL_5;
    goto LABEL_10;
  }
  if ( ThreadInfo )
  {
LABEL_10:
    v14 = 0;
    goto LABEL_15;
  }
  v14 = CInputDest::operator==((unsigned int *)(a1 + 2552), (__int64)a3);
LABEL_15:
  if ( !v14 )
  {
    PtiFromInputDest = (struct tagTHREADINFO *)anonymous_namespace_::GetPtiFromInputDest((__int64)a3, 2LL);
    CInputGlobals::SetPtiLastWoken(gpInputGlobals, PtiFromInputDest, 0);
  }
LABEL_5:
  if ( (*(_DWORD *)(*(_QWORD *)a4 + 88LL) & 2) != 0 )
  {
    v16 = *((_OWORD *)a2 + 1);
    v25[0] = *(_OWORD *)a2;
    v17 = *((_OWORD *)a2 + 2);
    v25[1] = v16;
    v18 = *((_OWORD *)a2 + 3);
    v25[2] = v17;
    v19 = *((_OWORD *)a2 + 4);
    v25[3] = v18;
    v20 = *((_OWORD *)a2 + 5);
    v25[4] = v19;
    v21 = *((_OWORD *)a2 + 6);
    v25[5] = v20;
    v22 = *((_OWORD *)a2 + 8);
    v25[6] = v21;
    v25[7] = *((_OWORD *)a2 + 7);
    v23 = *((_OWORD *)a2 + 9);
    v25[8] = v22;
    v24 = *((_OWORD *)a2 + 10);
    v25[9] = v23;
    v25[10] = v24;
    ApiSetEditionPostEventMessage((unsigned int)v25, 2, 0, 0, 0LL);
  }
  v11 = ~(unsigned int)CMouseProcessor::CButtonEvent::GetHardwareButton(a4);
  v12 = (v11 & *(_DWORD *)(a1 + 2544)) == 0;
  *(_DWORD *)(a1 + 2544) &= v11;
  if ( v12 )
  {
    CInputDest::SetEmpty((CInputDest *)(a1 + 2552));
    _InterlockedExchange((volatile __int32 *)(a1 + 2736), 0);
  }
  return a2;
}
