/*
 * XREFs of ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagPOINT@@AEBVCMoveEvent@1@@Z @ 0x1C00149DC
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0014B60 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 * Callees:
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagPOINT@@W4PostMouseMoveOptions@@@Z @ 0x1C0014828 (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagP.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0016D34 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C00172B8 (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C00172E4 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     EtwTraceWakePump @ 0x1C0017BF0 (EtwTraceWakePump.c)
 *     ApiSetEditionUpdateRawMouseMode @ 0x1C0017C2C (ApiSetEditionUpdateRawMouseMode.c)
 *     ApiSetEditionMouseMoveShellResilience @ 0x1C0017C54 (ApiSetEditionMouseMoveShellResilience.c)
 *     CoalesceInputSourceMouseMoves @ 0x1C0017CC0 (CoalesceInputSourceMouseMoves.c)
 *     ApiSetEditionWakeThreadForInput @ 0x1C0017DF0 (ApiSetEditionWakeThreadForInput.c)
 */

void __fastcall CMouseProcessor::DetectAndApplyMouseMovePostStrategy(
        CMouseProcessor *this,
        const struct CInputDest *a2,
        struct tagPOINT *a3,
        const struct CMouseProcessor::CMoveEvent *a4)
{
  __int64 v4; // rsi
  char v5; // r9
  char v9; // di
  struct tagQ *Queue; // rax
  struct tagQ *v11; // r13
  __int64 v12; // rcx
  __int64 v13; // r15
  struct tagPOINT *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r15
  __int64 PtiFromInputDest; // rax
  __int64 v18; // rax
  __int64 v19; // rcx

  v4 = *(_QWORD *)a4;
  v5 = 4;
  if ( *(_DWORD *)(v4 + 124) != 1 )
    v5 = 0;
  v9 = v5 | 1;
  if ( (*(_DWORD *)(v4 + 88) & 4) == 0 )
    v9 = v5;
  Queue = (struct tagQ *)CInputDest::GetQueue(a2, 0LL);
  v11 = Queue;
  if ( !Queue )
    goto LABEL_21;
  CoalesceInputSourceMouseMoves(Queue);
  if ( *((_DWORD *)a2 + 23) == 2 )
    v12 = *((_QWORD *)a2 + 10);
  else
    v12 = 0LL;
  ApiSetEditionMouseMoveShellResilience(v12);
  v13 = CInputDest::GetQueue(a2, 0LL);
  if ( v13 )
    *(_QWORD *)(v13 + 88) = anonymous_namespace_::GetPtiFromInputDest(a2, 2LL);
  ApiSetEditionUpdateRawMouseMode(v11);
  v14 = (struct tagPOINT *)CInputDest::GetQueue(a2, 0LL);
  if ( v14 )
    v14[23] = *a3;
  if ( *((_DWORD *)a2 + 23) == 2 )
    v16 = *((_QWORD *)a2 + 10);
  else
    v16 = 0LL;
  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(a2, v15);
  EtwTraceWakePump(PtiFromInputDest, v16, 512LL);
  if ( CInputDest::IsCompositionInput(a2) )
  {
    v9 |= 2u;
    goto LABEL_21;
  }
  if ( (v9 & 1) != 0 )
  {
LABEL_21:
    CMouseProcessor::PostMouseMoveToInputDest((__int64 *)this, (__int64)a2, v4, (unsigned __int16 *)a3, v9);
    return;
  }
  v18 = CInputDest::GetQueue(a2, 0LL);
  if ( v18 )
    *(_DWORD *)(v18 + 380) |= 0x20u;
  ApiSetEditionWakeThreadForInput(a2);
  v19 = *((_QWORD *)v11 + 17);
  if ( v19 )
  {
    if ( (GetAppCompatFlags2QuadWord(*(_QWORD *)(v19 + 16)) & 0x2000000000000LL) != 0 )
      CMouseProcessor::PostMouseMoveToInputDest((__int64 *)this, (__int64)a2, v4, (unsigned __int16 *)a3, 0);
  }
}
