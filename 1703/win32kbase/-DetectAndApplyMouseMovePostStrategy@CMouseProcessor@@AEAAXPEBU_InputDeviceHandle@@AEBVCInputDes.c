/*
 * XREFs of ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXPEBU_InputDeviceHandle@@AEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@_N@Z @ 0x1C0045AC0
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0045DB0 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 * Callees:
 *     ApiSetEditionWakeThreadForInput @ 0x1C0044FE8 (ApiSetEditionWakeThreadForInput.c)
 *     CoalesceInputSourceMouseMoves @ 0x1C0045220 (CoalesceInputSourceMouseMoves.c)
 *     ApiSetEditionMouseMoveShellResilience @ 0x1C0045290 (ApiSetEditionMouseMoveShellResilience.c)
 *     ApiSetEditionUpdateRawMouseMode @ 0x1C00452F8 (ApiSetEditionUpdateRawMouseMode.c)
 *     EtwTraceWakePump @ 0x1C0045320 (EtwTraceWakePump.c)
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagPOINT@@W4PostMouseMoveOptions@@@Z @ 0x1C0045950 (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagP.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0047C70 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C0047F3C (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C0047F6C (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 */

void __fastcall CMouseProcessor::DetectAndApplyMouseMovePostStrategy(
        CMouseProcessor *this,
        const struct _InputDeviceHandle *a2,
        const struct CInputDest *a3,
        struct tagPOINT *a4,
        const struct tagINPUT_MESSAGE_SOURCE *a5,
        bool a6)
{
  struct tagQ *Queue; // rax
  char v11; // dl
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // r15
  struct tagPOINT *v15; // rax
  __int64 v16; // rdx
  __int64 *v17; // r15
  char PtiFromInputDest; // al
  __int64 v19; // rax
  __int64 v20; // rcx
  char v21; // [rsp+20h] [rbp-28h]

  Queue = (struct tagQ *)CInputDest::GetQueue(a3, 0LL);
  v12 = (__int64)Queue;
  if ( Queue )
  {
    CoalesceInputSourceMouseMoves(Queue, a5);
    if ( *((_DWORD *)a3 + 23) == 2 )
      v13 = *((_QWORD *)a3 + 10);
    else
      v13 = 0LL;
    ApiSetEditionMouseMoveShellResilience(v13);
    v14 = CInputDest::GetQueue(a3, 0LL);
    if ( v14 )
      *(_QWORD *)(v14 + 56) = anonymous_namespace_::GetPtiFromInputDest(a3, 2LL);
    ApiSetEditionUpdateRawMouseMode(v12);
    v15 = (struct tagPOINT *)CInputDest::GetQueue(a3, 0LL);
    if ( v15 )
      v15[19] = *a4;
    if ( *((_DWORD *)a3 + 23) == 2 )
      v17 = (__int64 *)*((_QWORD *)a3 + 10);
    else
      v17 = 0LL;
    PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(a3, v16);
    EtwTraceWakePump(PtiFromInputDest, v17, 0);
    if ( CInputDest::IsCompositionInput(a3) )
    {
      CMouseProcessor::PostMouseMoveToInputDest(
        (__int64 *)this,
        (__int64)a3,
        (__int64)a2,
        (unsigned __int16 *)a4,
        a6 + 2);
    }
    else if ( a6 )
    {
      CMouseProcessor::PostMouseMoveToInputDest((__int64 *)this, (__int64)a3, (__int64)a2, (unsigned __int16 *)a4, 1);
    }
    else
    {
      v19 = CInputDest::GetQueue(a3, 0LL);
      if ( v19 )
        *(_DWORD *)(v19 + 340) |= 0x20u;
      ApiSetEditionWakeThreadForInput((__int64)a3);
      v20 = *(_QWORD *)(v12 + 104);
      if ( v20 )
      {
        if ( (GetAppCompatFlags2QuadWord(*(_QWORD *)(v20 + 16)) & 0x2000000000000LL) != 0 )
          CMouseProcessor::PostMouseMoveToInputDest(
            (__int64 *)this,
            (__int64)a3,
            (__int64)a2,
            (unsigned __int16 *)a4,
            0);
      }
    }
  }
  else
  {
    CMouseProcessor::PostMouseMoveToInputDest(
      (__int64 *)this,
      (__int64)a3,
      (__int64)a2,
      (unsigned __int16 *)a4,
      v11 & v21);
  }
}
