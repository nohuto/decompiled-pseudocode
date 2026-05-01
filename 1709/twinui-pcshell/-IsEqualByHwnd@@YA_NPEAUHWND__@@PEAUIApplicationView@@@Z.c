/*
 * XREFs of ?IsEqualByHwnd@@YA_NPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18007DDE8
 * Callers:
 *     _lambda_3410a86568d10ea920f7ee8e3deba990_::operator() @ 0x180074F68 (_lambda_3410a86568d10ea920f7ee8e3deba990_--operator().c)
 *     ?GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x180075370 (-GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z.c)
 *     ?GetViewForHwnd@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x18007B6B0 (-GetViewForHwnd@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUHWND__@@PEAPEAUIApplicationV.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
bool __fastcall IsEqualByHwnd(HWND a1, int (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *))
{
  int (__fastcall **v4)(struct IApplicationView *, GUID *, __int64 *); // rbx
  __int64 *v5; // rax
  int (__fastcall **v6)(struct IApplicationView *, GUID *, __int64 *); // rbx
  __int64 *v7; // rax
  int v8; // eax
  HWND v9; // rcx
  bool v10; // bl
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v14[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  BOOL v16; // [rsp+58h] [rbp+28h] BYREF
  HWND v17; // [rsp+60h] [rbp+30h] BYREF
  __int64 v18; // [rsp+68h] [rbp+38h] BYREF

  v14[1] = -2LL;
  v16 = 0;
  v14[0] = 0LL;
  v18 = 0LL;
  v4 = *a2;
  v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v14);
  if ( (*v4)((struct IApplicationView *)a2, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, v5) < 0 )
  {
    v6 = *a2;
    v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v18);
    if ( (*v6)((struct IApplicationView *)a2, &GUID_e99a73b1_cde0_477b_91b8_e995fa037387, v7) >= 0 )
    {
      v17 = 0LL;
      v8 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v18 + 24LL))(v18, &v17);
      if ( v8 >= 0 )
        (*(void (__fastcall **)(HWND, HWND, BOOL *))(*(_QWORD *)v17 + 96LL))(v17, a1, &v16);
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3D,
          (__int64)"pcshell\\twinui\\appviewmanager\\lib\\util.cpp",
          (const char *)(unsigned int)v8);
      v9 = v17;
      if ( v17 )
      {
        v17 = 0LL;
        (*(void (__fastcall **)(HWND))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
  }
  else if ( (*(int (__fastcall **)(__int64, HWND *))(*(_QWORD *)v14[0] + 24LL))(v14[0], &v17) >= 0 )
  {
    v16 = a1 == v17;
  }
  v10 = v16;
  v11 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = v14[0];
  if ( v14[0] )
  {
    v14[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return v10;
}
