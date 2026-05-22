/*
 * XREFs of ?GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z @ 0x1800355A4
 * Callers:
 *     ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIInputTarget@@@Z @ 0x180057CEC (-InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult.c)
 *     ?HitTest3D@MPCInputRouter@@AEAAXPEAUInputInfo@@PEAUIInputTarget@@PEAPEAU3@@Z @ 0x1800A92A8 (-HitTest3D@MPCInputRouter@@AEAAXPEAUInputInfo@@PEAUIInputTarget@@PEAPEAU3@@Z.c)
 *     ?CreateMPCTarget@MPCInputRouter@@AEAAJPEAUIInputTarget@@_KPEAPEAUIMPCInputTarget@@@Z @ 0x1800A9D30 (-CreateMPCTarget@MPCInputRouter@@AEAAJPEAUIInputTarget@@_KPEAPEAUIMPCInputTarget@@@Z.c)
 *     ?Update3DFocusWNF@MPCInputRouter@@AEAAXXZ @ 0x1800AAB90 (-Update3DFocusWNF@MPCInputRouter@@AEAAXXZ.c)
 *     ??0MPCExclusiveInputTarget@@IEAA@PEAUIInputTarget@@I_K@Z @ 0x1800AB120 (--0MPCExclusiveInputTarget@@IEAA@PEAUIInputTarget@@I_K@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindWindowA@ViewHelper@@SAJPEAUIMonitorView@Server@Navigation@@V?$function@$$A6A_NPEAUIServerWindow@Server@Navigation@@@Z@std@@PEAPEAUIServerWindow@34@@Z @ 0x180035B70 (-FindWindowA@ViewHelper@@SAJPEAUIMonitorView@Server@Navigation@@V-$function@$$A6A_NPEAUIServerWi.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewHelper::GetWindowIdFromViewId(struct IViewHierarchy *a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  int WindowA; // eax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 *v7; // rbx
  int v8; // eax
  _QWORD v10[9]; // [rsp+38h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  unsigned int v12; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v13; // [rsp+B0h] [rbp+30h] BYREF
  __int64 *v14; // [rsp+B8h] [rbp+38h] BYREF

  v2 = 0LL;
  (*(void (__fastcall **)(struct IViewHierarchy *, __int64 *, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, &v13, a2);
  v3 = v13;
  if ( v13 )
  {
    v14 = 0LL;
    v10[0] = off_1800D4B10;
    v10[7] = v10;
    WindowA = ViewHelper::FindWindowA(v13, v10, &v14);
    if ( WindowA >= 0 )
    {
      v7 = v14;
      if ( v14 )
      {
        v8 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v14 + 24))(v14, &v12);
        if ( v8 < 0 )
        {
          wil::details::in1diag3::_FailFast_Hr(
            retaddr,
            (void *)0x70,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
            (const char *)(unsigned int)v8);
          __debugbreak();
        }
        v2 = v12;
      }
      if ( !v7 )
        goto LABEL_14;
      v6 = *v7;
    }
    else
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 0, 107, WindowA);
      if ( !v14 )
        goto LABEL_14;
      v6 = *v14;
    }
    (*(void (**)(void))(v6 + 16))();
LABEL_14:
    v3 = v13;
  }
  if ( v3 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return v2;
}
