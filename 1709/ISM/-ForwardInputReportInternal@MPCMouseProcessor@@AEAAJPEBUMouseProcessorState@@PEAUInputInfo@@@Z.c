/*
 * XREFs of ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x18004AB4C
 * Callers:
 *     ?ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x18004A9F0 (-ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DownLevelInput@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@KK_N@Z @ 0x18004AF88 (-DownLevelInput@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@KK_N@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800563FC (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIInputTarget@@@Z @ 0x180056D64 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUIInputDisplay@@PEAUInputInfo@@PEAUIMPCInput.c)
 *     ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIInputTarget@@@Z @ 0x180057CEC (-InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult.c)
 *     ?IsExclusiveTarget@MPCHolographicInputManager@@SA_NPEAUIInputTarget@@@Z @ 0x180058C6C (-IsExclusiveTarget@MPCHolographicInputManager@@SA_NPEAUIInputTarget@@@Z.c)
 *     ?GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCInputTarget@@XZ @ 0x18005906C (-GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCInputTarget@@XZ.c)
 *     ?OnMenuPressed@MPCManager@@QEAAXAEBUDeviceInfo@@W4MPCSourceKind@@@Z @ 0x18005DD10 (-OnMenuPressed@MPCManager@@QEAAXAEBUDeviceInfo@@W4MPCSourceKind@@@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x18005FE00 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ @ 0x18005FED0 (-SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ.c)
 *     ?TrackPosition@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@@Z @ 0x180060ACC (-TrackPosition@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCMouseProcessor::ForwardInputReportInternal(
        MPCMouseProcessor *this,
        const struct MouseProcessorState *a2,
        struct InputInfo *a3)
{
  MPCHolographicInputManager *Instance; // rax
  struct IInputTarget *FocusedTarget; // rax
  MPCHolographicInputManager *v8; // rax
  struct IMPCInputTarget *v9; // rax
  struct IInputDisplay *v10; // rbx
  MPCHolographicInputManager *v11; // rax
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  unsigned int v15; // r12d
  struct IInputTarget *v16; // rbx
  unsigned int *v17; // rsi
  struct MPCHolographicInputManager *v18; // rax
  struct IInputTarget *v19; // rcx
  char v21; // cl
  struct IInputTarget *v22; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct IInputTarget *v24; // [rsp+90h] [rbp+18h] BYREF

  if ( (*((_WORD *)a3 + 350) & 0xC00) != 0 )
    *((_DWORD *)this + 176) = *((__int16 *)a3 + 351);
  else
    *((_DWORD *)this + 176) = 0;
  *((_DWORD *)this + 188) = GetTickCount();
  Instance = MPCHolographicInputManager::GetInstance();
  FocusedTarget = MPCHolographicInputManager::GetFocusedTarget(Instance);
  if ( MPCHolographicInputManager::IsExclusiveTarget(FocusedTarget)
    && !*((_BYTE *)MPCHolographicInputManager::GetInstance() + 3129) )
  {
    v8 = MPCHolographicInputManager::GetInstance();
    v9 = MPCHolographicInputManager::GetFocusedTarget(v8);
    *((_DWORD *)a3 + 168) = (*(__int64 (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)v9 + 64LL))(v9);
    MPCMouseProcessor::DownLevelInput(this, a2, a3, *((_DWORD *)a3 + 177), *((_DWORD *)a3 + 178), 0);
LABEL_9:
    *((_BYTE *)this + 760) = 0;
LABEL_38:
    *((_DWORD *)this + 177) = *((_DWORD *)a2 + 4);
    return 0LL;
  }
  if ( !MPCInputProviderBase::IsPrimary((MPCMouseProcessor *)((char *)this + 56)) )
  {
    MPCInputProviderBase::SetRequestingPrimary((MPCMouseProcessor *)((char *)this + 32));
    goto LABEL_9;
  }
  v24 = 0LL;
  v10 = (struct IInputDisplay *)*((_QWORD *)this + 11);
  v11 = MPCHolographicInputManager::GetInstance();
  v12 = MPCHolographicInputManager::Process3DInput(v11, v10, a3, (MPCMouseProcessor *)((char *)this + 56), &v24);
  v13 = v12;
  if ( v12 >= 0 )
  {
    if ( (*((_DWORD *)a2 + 4) & 0x10) != 0 || (*((_DWORD *)this + 177) & 0x10) == 0 )
    {
      if ( (*((_DWORD *)a2 + 4) & 0x10) == 0 || (*((_DWORD *)this + 177) & 0x10) != 0 )
        goto LABEL_26;
      v15 = 1;
      *(_QWORD *)((char *)this + 780) = *((_QWORD *)this + 91);
      *((_DWORD *)this + 197) = *((_DWORD *)this + 184);
      *((_WORD *)this + 398) = 256;
      *((_DWORD *)this + 198) = 1045220557;
      *((_DWORD *)this + 200) = GetTickCount();
    }
    else
    {
      v15 = 0;
    }
    if ( *((_BYTE *)this + 797) && *((_BYTE *)this + 796) )
    {
      v15 = 2;
      *((_WORD *)this + 398) = 0;
      *((_DWORD *)this + 200) = 0;
    }
    v16 = v24;
    v17 = (unsigned int *)*((_QWORD *)this + 10);
    v18 = MPCHolographicInputManager::GetInstance();
    v12 = MPCHolographicInputManager::InjectInteractionState(v18, v15, *v17, (char *)a3 + 776, v16);
    v13 = v12;
    if ( v12 < 0 )
    {
      v14 = 250LL;
      goto LABEL_23;
    }
LABEL_26:
    v21 = *((_BYTE *)a3 + 776);
    *((_BYTE *)this + 760) = v21 != 0;
    if ( v21 )
    {
      *((_DWORD *)a3 + 17) = (int)*((float *)a3 + 195);
      *((_DWORD *)a3 + 18) = (int)*((float *)a3 + 196);
      *((_BYTE *)a3 + 676) = 0;
      *((_BYTE *)a3 + 776) = 0;
      *((_DWORD *)a3 + 168) = *((_DWORD *)a3 + 202);
      *((_BYTE *)a3 + 2770) = 1;
      MPCMouseProcessor::DownLevelInput(
        this,
        a2,
        a3,
        (int)*((float *)a3 + 195),
        (int)*((float *)a3 + 196),
        *((_BYTE *)a3 + 1072) != 0);
    }
    else if ( *((_BYTE *)this + 761) && !*((_QWORD *)this + 70) )
    {
      *((_DWORD *)a3 + 168) = *((_DWORD *)this + 191);
      *((_BYTE *)a3 + 2770) = 1;
      MPCMouseProcessor::DownLevelInput(
        this,
        a2,
        a3,
        *((_DWORD *)this + 192),
        *((_DWORD *)this + 193),
        *((_DWORD *)this + 194) != 0);
    }
    if ( *((_BYTE *)this + 797) )
      MPCGestureCancelTracker::TrackPosition(
        (MPCMouseProcessor *)((char *)this + 780),
        (MPCMouseProcessor *)((char *)this + 728));
    if ( (*((_DWORD *)a2 + 4) & 0x20) == 0 && (*((_DWORD *)this + 177) & 0x20) != 0 )
      MPCManager::OnMenuPressed(MPCManager::s_instance, *((_QWORD *)this + 10), 3LL);
    v22 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v22 + 16LL))(v22);
    }
    goto LABEL_38;
  }
  v14 = 228LL;
LABEL_23:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v14,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
    (const char *)(unsigned int)v12);
  v19 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v19 + 16LL))(v19);
  }
  return v13;
}
