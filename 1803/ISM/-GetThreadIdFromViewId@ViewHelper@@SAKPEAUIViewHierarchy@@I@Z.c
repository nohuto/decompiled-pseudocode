/*
 * XREFs of ?GetThreadIdFromViewId@ViewHelper@@SAKPEAUIViewHierarchy@@I@Z @ 0x180019808
 * Callers:
 *     ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@_N@Z @ 0x180050574 (-RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagP.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindWindowW@ViewHelper@@SAJPEAUIMonitorView@Server@Navigation@@V?$function@$$A6A_NPEAUIServerWindow@Server@Navigation@@@Z@std@@PEAPEAUIServerWindow@34@@Z @ 0x180019BA4 (-FindWindowW@ViewHelper@@SAJPEAUIMonitorView@Server@Navigation@@V-$function@$$A6A_NPEAUIServerWi.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewHelper::GetThreadIdFromViewId(struct IViewHierarchy *a1, unsigned int a2)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  __int64 *v4; // rbx
  int v5; // eax
  __int64 v6; // rcx
  _QWORD v8[9]; // [rsp+28h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  unsigned int v10; // [rsp+90h] [rbp+20h] BYREF
  __int64 *v11; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v12; // [rsp+A8h] [rbp+38h] BYREF

  v2 = 0;
  (*(void (__fastcall **)(struct IViewHierarchy *, __int64 *, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, &v12, a2);
  if ( v12 )
  {
    v11 = 0LL;
    v8[0] = off_1800EB9B0;
    v8[7] = v8;
    if ( (int)ViewHelper::FindWindowW(v12, v8, &v11) < 0 )
    {
      if ( !v11 )
        goto LABEL_11;
      v3 = *v11;
      goto LABEL_10;
    }
    v4 = v11;
    if ( v11 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v11 + 112))(v11, &v10);
      if ( v5 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xB0,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
          (const char *)(unsigned int)v5);
        JUMPOUT(0x1800198E8LL);
      }
      v2 = v10;
    }
    if ( v4 )
    {
      v3 = *v4;
LABEL_10:
      (*(void (**)(void))(v3 + 16))();
    }
  }
LABEL_11:
  v6 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return v2;
}
