/*
 * XREFs of ?DelegateCaptureInt@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z @ 0x1C0110198
 * Callers:
 *     ?DelegateCapture@CTouchProcessor@@AEAA?AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C010FDB0 (-DelegateCapture@CTouchProcessor@@AEAA-AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ?DelegateCapture@CTouchProcessor@@QEAA?AUtagINPUTDEST@@GKH@Z @ 0x1C0110020 (-DelegateCapture@CTouchProcessor@@QEAA-AUtagINPUTDEST@@GKH@Z.c)
 * Callees:
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z @ 0x1C011AFAC (-SetDelegateActionInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@W4tagDCPACTION@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_OWORD *__fastcall CTouchProcessor::DelegateCaptureInt(__int64 a1, _OWORD *a2, __int64 a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r9d
  _OWORD *v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1

  memset(a2, 0, 0xB0uLL);
  if ( *(struct _KTHREAD **)(a1 + 104) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
  v10 = *(_DWORD *)(a3 + 432);
  if ( (v10 & 4) != 0 || (v10 & 8) != 0 )
  {
    if ( a4 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
  }
  else
  {
    v11 = (_OWORD *)((-(__int64)(*(_DWORD *)(a3 + 40) != 0) & 0xFFFFFFFFFFFFFF38uLL) + a3 + 240);
    v12 = v11[1];
    *a2 = *v11;
    v13 = v11[2];
    a2[1] = v12;
    v14 = v11[3];
    a2[2] = v13;
    v15 = v11[4];
    a2[3] = v14;
    v16 = v11[5];
    a2[4] = v15;
    v17 = v11[6];
    a2[5] = v16;
    v18 = v11[8];
    a2[6] = v17;
    a2[7] = v11[7];
    v19 = v11[9];
    a2[8] = v18;
    v20 = v11[10];
    a2[9] = v19;
    a2[10] = v20;
    if ( a4 )
      CTouchProcessor::SetDelegateActionInt(a1, a3, 4LL);
    else
      *(_DWORD *)(a3 + 432) = v10 | 4;
  }
  return a2;
}
