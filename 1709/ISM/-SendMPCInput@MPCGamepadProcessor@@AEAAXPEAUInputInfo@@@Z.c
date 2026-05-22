/*
 * XREFs of ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1800390E0
 * Callers:
 *     ?PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x1800379E0 (-PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800367C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetButtonHoldHelper@MPCSlateDeadzoneHelper@@QEAA?BV?$shared_ptr@VMPCButtonHoldHelper@@@std@@XZ @ 0x180036B98 (-GetButtonHoldHelper@MPCSlateDeadzoneHelper@@QEAA-BV-$shared_ptr@VMPCButtonHoldHelper@@@std@@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800563FC (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIInputTarget@@@Z @ 0x180057CEC (-InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult.c)
 *     ?InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KKMM@Z @ 0x1800580E0 (-InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KKMM@Z.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18005A0A0 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005A148 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?OnMenuPressed@MPCManager@@QEAAXAEBUDeviceInfo@@W4MPCSourceKind@@@Z @ 0x18005DD10 (-OnMenuPressed@MPCManager@@QEAAXAEBUDeviceInfo@@W4MPCSourceKind@@@Z.c)
 *     ?TrackPosition@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@@Z @ 0x180060ACC (-TrackPosition@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCGamepadProcessor::SendMPCInput(MPCGamepadProcessor *this, struct InputInfo *a2)
{
  _BYTE *v4; // r13
  char v5; // r15
  volatile signed __int32 *v6; // rbx
  _QWORD *ButtonHoldHelper; // rax
  char v8; // cl
  _QWORD *v9; // rax
  char v10; // r12
  volatile signed __int32 *v11; // rbx
  volatile signed __int32 *v12; // rbx
  unsigned int v13; // r14d
  __int64 v14; // rbx
  unsigned int *v15; // rdi
  struct MPCHolographicInputManager *Instance; // rax
  MPCGestureHandlerManager *v17; // rcx
  unsigned int v18; // ebx
  struct MPCHolographicInputManager *v19; // rax
  int v20; // eax
  unsigned int v21; // ebx
  struct MPCHolographicInputManager *v22; // rax
  int v23; // eax
  __int64 v24; // [rsp+30h] [rbp-78h]
  __int64 v25; // [rsp+38h] [rbp-70h] BYREF
  volatile signed __int32 *v26; // [rsp+40h] [rbp-68h]
  __int64 v27; // [rsp+48h] [rbp-60h] BYREF
  volatile signed __int32 *v28; // [rsp+50h] [rbp-58h]
  __int64 v29; // [rsp+58h] [rbp-50h] BYREF
  volatile signed __int32 *v30; // [rsp+60h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  char *v32; // [rsp+B0h] [rbp+8h] BYREF
  char **v33; // [rsp+B8h] [rbp+10h]

  LODWORD(v32) = 0;
  v4 = (char *)a2 + 776;
  *((_DWORD *)a2 + 322) = *((_DWORD *)a2 + 195);
  *((_DWORD *)a2 + 323) = *((_DWORD *)a2 + 196);
  *((_OWORD *)a2 + 81) = *(_OWORD *)((char *)a2 + 788);
  *((_DWORD *)a2 + 328) = *((_DWORD *)a2 + 202);
  v5 = *(_BYTE *)(*MPCSlateDeadzoneHelper::GetButtonHoldHelper(*((_QWORD *)this + 505), &v25) + 10LL);
  v6 = v26;
  if ( v26 )
  {
    if ( _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  ButtonHoldHelper = MPCSlateDeadzoneHelper::GetButtonHoldHelper(*((_QWORD *)this + 505), &v29);
  v8 = 1;
  if ( *(_BYTE *)(*ButtonHoldHelper + 10LL)
    || (v9 = MPCSlateDeadzoneHelper::GetButtonHoldHelper(*((_QWORD *)this + 505), &v27),
        v8 = 3,
        v10 = 0,
        *(_BYTE *)(*v9 + 12LL)) )
  {
    v10 = 1;
  }
  if ( (v8 & 2) != 0 )
  {
    v11 = v28;
    if ( v28 )
    {
      if ( !_InterlockedDecrement(v28 + 2) )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
        if ( !_InterlockedDecrement(v11 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
      }
    }
  }
  v12 = v30;
  if ( v30 )
  {
    if ( !_InterlockedDecrement(v30 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      if ( !_InterlockedDecrement(v12 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  if ( v10 )
  {
    v13 = v5 != 0;
    if ( v5 )
    {
      *((_QWORD *)this + 506) = *((_QWORD *)this + 494);
      *((_DWORD *)this + 1014) = *((_DWORD *)this + 990);
      *((_WORD *)this + 2032) = 256;
      *((_DWORD *)this + 1015) = 1045220557;
      *((_DWORD *)this + 1017) = GetTickCount();
    }
    else if ( *((_BYTE *)this + 4065) && *((_BYTE *)this + 4064) )
    {
      v13 = 2;
      *((_WORD *)this + 2032) = 0;
      *((_DWORD *)this + 1017) = 0;
    }
    v14 = *((_QWORD *)this + 74);
    v15 = (unsigned int *)*((_QWORD *)this + 7);
    Instance = MPCHolographicInputManager::GetInstance();
    MPCHolographicInputManager::InjectInteractionState(Instance, v13, *v15, v4, v14);
  }
  if ( v5 )
    MPCGestureCancelTracker::TrackPosition(
      (MPCGamepadProcessor *)((char *)this + 4048),
      (MPCGamepadProcessor *)((char *)this + 3952));
  if ( (*((_BYTE *)this + 3464) & 1) == 0 && (*((_BYTE *)this + 3448) & 1) != 0 )
    MPCManager::OnMenuPressed(MPCManager::s_instance, *((_QWORD *)this + 7), 4LL);
  if ( *v4 && *((_BYTE *)a2 + 778) && !*((_DWORD *)this + 976) && v10 )
  {
    *((_DWORD *)a2 + 318) = 2 - (v5 != 0);
    v33 = &v32;
    v32 = (char *)this + 32;
    if ( this != (MPCGamepadProcessor *)-32LL )
      (*(void (__fastcall **)(char *))(*((_QWORD *)this + 4) + 8LL))((char *)this + 32);
    v17 = MPCGestureHandlerManager::GetInstance();
    MPCGestureHandlerManager::DownLevelTo2D(v17);
  }
  if ( *(_BYTE *)(*((_QWORD *)this + 504) + 12LL) )
  {
    v18 = **((_DWORD **)this + 7);
    v19 = MPCHolographicInputManager::GetInstance();
    v20 = MPCHolographicInputManager::InjectRightClick(
            v19,
            1LL,
            v18,
            *((unsigned int *)a2 + 202),
            *((_DWORD *)a2 + 195),
            *((_DWORD *)a2 + 196),
            -2LL);
    if ( v20 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2AB,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcgamepad\\lib\\mpcgamepadprocessor.cpp",
        (const char *)(unsigned int)v20);
    v21 = **((_DWORD **)this + 7);
    v22 = MPCHolographicInputManager::GetInstance();
    v23 = MPCHolographicInputManager::InjectRightClick(
            v22,
            0LL,
            v21,
            *((unsigned int *)a2 + 202),
            *((_DWORD *)a2 + 195),
            *((_DWORD *)a2 + 196),
            v24);
    if ( v23 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2B4,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcgamepad\\lib\\mpcgamepadprocessor.cpp",
        (const char *)(unsigned int)v23);
  }
}
