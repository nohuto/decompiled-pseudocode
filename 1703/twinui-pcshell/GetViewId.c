/*
 * XREFs of GetViewId @ 0x1800D5884
 * Callers:
 *     ?StartActivity@ControlGainedForActivation@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1800D5DA0 (-StartActivity@ControlGainedForActivation@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationV.c)
 *     ?StartActivity@ControlGained@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1800D6340 (-StartActivity@ControlGained@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@W4SHELL_.c)
 *     ?StartActivity@ControlLost@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1800D6900 (-StartActivity@ControlLost@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@W4SHELL_PO.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GetViewId(__int64 (__fastcall ***a1)(_QWORD, GUID *, __int64 *), _QWORD *a2)
{
  __int64 (__fastcall **v4)(_QWORD, GUID *, __int64 *); // rbx
  __int64 *v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  void *v10; // rcx
  void *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  void *v16; // [rsp+50h] [rbp+20h] BYREF
  __int64 v17; // [rsp+58h] [rbp+28h] BYREF
  __int64 v18; // [rsp+60h] [rbp+30h] BYREF

  *a2 = 0LL;
  v18 = 0LL;
  v4 = *a1;
  v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v18);
  v6 = (*v4)(a1, &GUID_e99a73b1_cde0_477b_91b8_e995fa037387, v5);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v17 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 24LL))(v18, &v17);
    v7 = v8;
    if ( v8 >= 0 )
    {
      v16 = 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v17 + 40LL))(v17, &v16);
      v7 = v9;
      if ( v9 >= 0 )
      {
        v11 = v16;
        v10 = 0LL;
        v16 = 0LL;
        *a2 = v11;
        v7 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x1F,
          (__int64)"pcshell\\twinui\\holographicpositioner\\inc\\holographicpositionertracing.h",
          (const char *)(unsigned int)v9);
        v10 = v16;
      }
      if ( v10 )
        CoTaskMemFree(v10);
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x1C,
        (__int64)"pcshell\\twinui\\holographicpositioner\\inc\\holographicpositionertracing.h",
        (const char *)(unsigned int)v8);
    }
    v12 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x1A,
      (__int64)"pcshell\\twinui\\holographicpositioner\\inc\\holographicpositionertracing.h",
      (const char *)(unsigned int)v6);
  }
  v13 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return v7;
}
