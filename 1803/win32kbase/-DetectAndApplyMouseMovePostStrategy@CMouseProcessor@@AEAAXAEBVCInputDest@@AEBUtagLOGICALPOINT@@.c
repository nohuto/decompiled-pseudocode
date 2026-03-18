/*
 * XREFs of ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@@Z @ 0x1C0037C94
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0037E1C (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0036194 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C0036F78 (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C0036FA4 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C003704C (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@W4PostMouseMoveOptions@@@Z @ 0x1C0037B44 (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 *     ?SetMouseMovePoint@QHelper@@YAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@@Z @ 0x1C003AA38 (-SetMouseMovePoint@QHelper@@YAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@@Z.c)
 *     EtwTraceWakePump @ 0x1C003AAB0 (EtwTraceWakePump.c)
 *     ApiSetEditionUpdateRawMouseMode @ 0x1C003AAEC (ApiSetEditionUpdateRawMouseMode.c)
 *     ApiSetEditionMouseMoveShellResilience @ 0x1C003AB14 (ApiSetEditionMouseMoveShellResilience.c)
 *     CoalesceInputSourceMouseMoves @ 0x1C003AB80 (CoalesceInputSourceMouseMoves.c)
 *     ApiSetEditionWakeThreadForInput @ 0x1C003AFAC (ApiSetEditionWakeThreadForInput.c)
 *     INPUTDEST_FROM_PWND @ 0x1C0061D64 (INPUTDEST_FROM_PWND.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::DetectAndApplyMouseMovePostStrategy(
        CMouseProcessor *this,
        const struct CInputDest *a2,
        const struct tagLOGICALPOINT *a3,
        const struct CMouseProcessor::CMoveEvent *a4)
{
  __int64 v8; // rsi
  char v9; // dl
  char v10; // di
  struct tagQ *Queue; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct tagQ *v14; // r15
  __int64 v15; // rcx
  __int64 v16; // r13
  const struct tagLOGICALPOINT *v17; // r8
  __int64 v18; // r12
  __int64 PtiFromInputDest; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  _OWORD *v22; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int64 v33; // rdx
  __int64 v34; // rcx
  _OWORD v35[11]; // [rsp+30h] [rbp-188h] BYREF
  _BYTE v36[176]; // [rsp+E0h] [rbp-D8h] BYREF

  if ( !*(_DWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  v8 = *(_QWORD *)a4;
  v9 = 4;
  if ( *(_DWORD *)(v8 + 124) != 1 )
    v9 = 0;
  v10 = v9 | 1;
  if ( (*(_DWORD *)(v8 + 88) & 4) == 0 )
    v10 = v9;
  Queue = (struct tagQ *)CInputDest::GetQueue(a2, 0LL);
  v14 = Queue;
  if ( !Queue )
  {
    if ( !*(_QWORD *)(v8 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12);
    goto LABEL_21;
  }
  CoalesceInputSourceMouseMoves(Queue);
  if ( *((_DWORD *)a2 + 21) == 2 )
    v15 = *((_QWORD *)a2 + 9);
  else
    v15 = 0LL;
  ApiSetEditionMouseMoveShellResilience(v15);
  v16 = CInputDest::GetQueue(a2, 0LL);
  if ( v16 )
    *(_QWORD *)(v16 + 88) = anonymous_namespace_::GetPtiFromInputDest((__int64)a2, 2LL);
  ApiSetEditionUpdateRawMouseMode(v14);
  QHelper::SetMouseMovePoint(a2, a3, v17);
  if ( *((_DWORD *)a2 + 21) == 2 )
    v18 = *((_QWORD *)a2 + 9);
  else
    v18 = 0LL;
  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest((__int64)a2, 0LL);
  EtwTraceWakePump(PtiFromInputDest, v18, 512LL);
  if ( CInputDest::IsCompositionInput(a2) )
  {
    v10 |= 2u;
    goto LABEL_21;
  }
  if ( (v10 & 1) != 0 )
  {
LABEL_21:
    CMouseProcessor::PostMouseMoveToInputDest((__int64 *)this, a2, v8, (unsigned __int16 *)a3, v10);
    return;
  }
  v20 = CInputDest::GetQueue(a2, 0LL);
  if ( v20 )
    *(_DWORD *)(v20 + 388) |= 0x20u;
  ApiSetEditionWakeThreadForInput(a2);
  v21 = *((_QWORD *)v14 + 17);
  if ( v21 && (GetAppCompatFlags2QuadWord(*(_QWORD *)(v21 + 16)) & 0x2000000000000LL) != 0 )
  {
    v22 = (_OWORD *)INPUTDEST_FROM_PWND(v36, *((_QWORD *)v14 + 17));
    v23 = v22[1];
    v35[0] = *v22;
    v24 = v22[2];
    v35[1] = v23;
    v25 = v22[3];
    v35[2] = v24;
    v26 = v22[4];
    v35[3] = v25;
    v27 = v22[5];
    v35[4] = v26;
    v28 = v22[6];
    v35[5] = v27;
    v29 = v22[8];
    v35[6] = v28;
    v35[7] = v22[7];
    v30 = v22[9];
    v35[8] = v29;
    v31 = v22[10];
    v35[9] = v30;
    v35[10] = v31;
    if ( !CInputDest::operator==((unsigned int *)a2, (__int64)v35) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33);
    CMouseProcessor::PostMouseMoveToInputDest((__int64 *)this, a2, v8, (unsigned __int16 *)a3, 0);
  }
}
