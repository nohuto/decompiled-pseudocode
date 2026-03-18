/*
 * XREFs of ?DelegateCapture@CTouchProcessor@@AEAA?AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C010FDB0
 * Callers:
 *     ?DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z @ 0x1C01102BC (-DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00370F4 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0037360 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?DelegateCaptureInt@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z @ 0x1C0110198 (-DelegateCaptureInt@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_OWORD *__fastcall CTouchProcessor::DelegateCapture(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rdx
  struct _KTHREAD *v9; // rcx
  int v10; // ebx
  __int64 v11; // r8
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  const struct tagINPUTDEST *v21; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  bool v29; // zf
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  _OWORD v44[11]; // [rsp+20h] [rbp-E0h] BYREF
  char v45; // [rsp+D0h] [rbp-30h]
  _BYTE v46[176]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v47[24]; // [rsp+190h] [rbp+90h] BYREF

  memset(v44, 0, sizeof(v44));
  v9 = *(struct _KTHREAD **)(a1 + 104);
  v10 = 0;
  v45 = 0;
  if ( v9 != KeGetCurrentThread() )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
    v9 = *(struct _KTHREAD **)(a1 + 104);
  }
  if ( v9 != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
  v11 = *(_QWORD *)(a3 + 40);
  if ( v11 )
  {
    *(_WORD *)a5 = *(_WORD *)(v11 + 20);
    *(_DWORD *)(a5 + 4) = *(_DWORD *)(v11 + 24);
    v21 = (const struct tagINPUTDEST *)CTouchProcessor::DelegateCaptureInt(a1, v46, v11, 1LL);
    CInputDest::CInputDest((CInputDest *)v47, v21);
    CInputDest::operator=((__int64)v44, v47);
    CInputDest::SetEmpty((CInputDest *)v47);
    v22 = v44[1];
    *(_OWORD *)(a5 + 8) = v44[0];
    v23 = v44[2];
    *(_OWORD *)(a5 + 24) = v22;
    v24 = v44[3];
    *(_OWORD *)(a5 + 40) = v23;
    v25 = v44[4];
    *(_OWORD *)(a5 + 56) = v24;
    v26 = v44[5];
    *(_OWORD *)(a5 + 72) = v25;
    v27 = v44[6];
    *(_OWORD *)(a5 + 88) = v26;
    v28 = v44[8];
    *(_OWORD *)(a5 + 104) = v27;
    v29 = DWORD1(v44[5]) == 0;
    *(_OWORD *)(a5 + 120) = v44[7];
    LOBYTE(v10) = !v29;
    v30 = v44[9];
    *(_DWORD *)(a5 + 184) = v10;
    *(_OWORD *)(a5 + 136) = v28;
    v31 = v44[10];
    *(_OWORD *)(a5 + 152) = v30;
    v32 = v44[0];
    *(_OWORD *)(a5 + 168) = v31;
    v33 = v44[1];
    *a2 = v32;
    v34 = v44[2];
    a2[1] = v33;
    v35 = v44[3];
    a2[2] = v34;
    v36 = v44[4];
    a2[3] = v35;
    v37 = v44[5];
    a2[4] = v36;
    v38 = v44[6];
    a2[5] = v37;
    v39 = v44[7];
    a2[6] = v38;
    v40 = v44[8];
    a2[7] = v39;
    v41 = v44[9];
    a2[8] = v40;
    v42 = v44[10];
    a2[9] = v41;
    a2[10] = v42;
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
    v12 = v44[1];
    *a2 = v44[0];
    v13 = v44[2];
    a2[1] = v12;
    v14 = v44[3];
    a2[2] = v13;
    v15 = v44[4];
    a2[3] = v14;
    v16 = v44[5];
    a2[4] = v15;
    v17 = v44[6];
    a2[5] = v16;
    v18 = v44[8];
    a2[6] = v17;
    a2[7] = v44[7];
    v19 = v44[9];
    a2[8] = v18;
    v20 = v44[10];
    a2[9] = v19;
    a2[10] = v20;
  }
  CInputDest::SetEmpty((CInputDest *)v44);
  return a2;
}
