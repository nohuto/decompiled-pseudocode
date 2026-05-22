/*
 * XREFs of ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@_N@Z @ 0x180059198
 * Callers:
 *     ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIInputTarget@@@Z @ 0x180057CEC (-InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult.c)
 *     ?HitTest3D@MPCInputRouter@@AEAAXPEAUInputInfo@@PEAUIInputTarget@@PEAPEAU3@@Z @ 0x1800A92A8 (-HitTest3D@MPCInputRouter@@AEAAXPEAUInputInfo@@PEAUIInputTarget@@PEAPEAU3@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x180030C4C (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z @ 0x180035448 (-GetViewIdFromWindowId@ViewHelper@@SAIPEAUIViewHierarchy@@_K@Z.c)
 *     ?GetProcessIdFromViewId@ViewHelper@@SAKPEAUIViewHierarchy@@I@Z @ 0x1800356B0 (-GetProcessIdFromViewId@ViewHelper@@SAKPEAUIViewHierarchy@@I@Z.c)
 *     ?GetThreadIdFromViewId@ViewHelper@@SAKPEAUIViewHierarchy@@I@Z @ 0x1800357C0 (-GetThreadIdFromViewId@ViewHelper@@SAKPEAUIViewHierarchy@@I@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180049F08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCHolographicInputManager_RequestForegroundChange_@ISMTracing@@QEAAX_K0KK_N@Z @ 0x180055D98 (-MPCHolographicInputManager_RequestForegroundChange_@ISMTracing@@QEAAX_K0KK_N@Z.c)
 *     ?GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCInputTarget@@XZ @ 0x18005906C (-GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCInputTarget@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall MPCHolographicInputManager::RequestForegroundChange(
        __int64 a1,
        HWND a2,
        __int64 a3,
        const char *a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        bool a8)
{
  __int64 v8; // r15
  unsigned int ViewIdFromWindowId; // edi
  __int64 v12; // rbp
  struct IMPCInputTarget *FocusedTarget; // rax
  struct IMPCInputTarget *v14; // rbx
  _DWORD *v15; // rcx
  ISMTracing *v16; // rcx
  __int64 v17; // rax
  struct IViewHierarchy *ViewHierarchy; // rax
  unsigned int ThreadIdFromViewId; // ebx
  struct IViewHierarchy *v20; // rax
  unsigned int ProcessIdFromViewId; // eax
  struct IViewHierarchy *v22; // rax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v8 = (unsigned int)a4;
  ViewIdFromWindowId = a3;
  if ( !*(_BYTE *)(a1 + 3128) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x4C6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      a4);
    __debugbreak();
  }
  v12 = 0LL;
  FocusedTarget = MPCHolographicInputManager::GetFocusedTarget((MPCHolographicInputManager *)a1, (__int64)a2, a3, a4);
  v14 = FocusedTarget;
  if ( FocusedTarget )
    (*(void (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)FocusedTarget + 8LL))(FocusedTarget);
  if ( v14 )
  {
    v12 = (*(__int64 (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)v14 + 64LL))(v14);
    (*(void (__fastcall **)(struct IMPCInputTarget *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v15 && *v15 )
  {
    ISMTracing::Instance();
    ISMTracing::MPCHolographicInputManager_RequestForegroundChange_(v16, (__int64)a2, v12, ViewIdFromWindowId, v8, a8);
  }
  v17 = 1LL << gdwDeviceFamily;
  if ( ((1LL << gdwDeviceFamily) & 0x224A) != 0 )
  {
    if ( a2 )
    {
      if ( (HWND)v12 != a2 )
      {
        LODWORD(v17) = SetForegroundWindow(a2);
        if ( a8 )
        {
          if ( ViewIdFromWindowId )
          {
            ViewHierarchy = ISMStatics::GetViewHierarchy();
            ThreadIdFromViewId = ViewHelper::GetThreadIdFromViewId(ViewHierarchy, ViewIdFromWindowId);
            v20 = ISMStatics::GetViewHierarchy();
            ProcessIdFromViewId = ViewHelper::GetProcessIdFromViewId(v20, ViewIdFromWindowId);
            LODWORD(v17) = SetInputFocus(ProcessIdFromViewId, ThreadIdFromViewId, ViewIdFromWindowId, a2, 0);
          }
        }
      }
    }
  }
  else
  {
    if ( !ViewIdFromWindowId )
    {
      v22 = ISMStatics::GetViewHierarchy();
      ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(v22, (__int64)a2);
    }
    LODWORD(v17) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 3056)
                                                                                               + 120LL))(
                     *(_QWORD *)(a1 + 3056),
                     ViewIdFromWindowId,
                     v8,
                     a5,
                     0LL,
                     a7);
  }
  return v17;
}
