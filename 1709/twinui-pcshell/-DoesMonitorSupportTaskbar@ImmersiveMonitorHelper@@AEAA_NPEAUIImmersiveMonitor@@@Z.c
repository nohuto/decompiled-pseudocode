/*
 * XREFs of ?DoesMonitorSupportTaskbar@ImmersiveMonitorHelper@@AEAA_NPEAUIImmersiveMonitor@@@Z @ 0x180186888
 * Callers:
 *     ?AdjustMonitorConnectedIfNeeded@ImmersiveMonitorHelper@@QEAAJXZ @ 0x1801866A8 (-AdjustMonitorConnectedIfNeeded@ImmersiveMonitorHelper@@QEAAJXZ.c)
 *     ??$Adapt@V_lambda_5f99a1c03ccf24f71b9832bdc2798968_@@@?$CCLambdaAdapter@P6AHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z$03@@SAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z @ 0x180186C20 (--$Adapt@V_lambda_5f99a1c03ccf24f71b9832bdc2798968_@@@-$CCLambdaAdapter@P6AHPEAUHMONITOR__@@PEAU.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall ImmersiveMonitorHelper::DoesMonitorSupportTaskbar(
        ImmersiveMonitorHelper *this,
        struct IImmersiveMonitor *a2)
{
  bool v4; // si
  int v5; // eax
  __int64 v6; // rdx
  __int64 *v7; // rdi
  __int64 v8; // rbx
  __int64 *v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  void (*v13)(void); // rax
  __int64 v14; // rcx
  _QWORD v16[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  int v18; // [rsp+60h] [rbp+20h] BYREF
  int v19; // [rsp+70h] [rbp+30h] BYREF
  __int64 v20; // [rsp+78h] [rbp+38h] BYREF

  v16[1] = -2LL;
  v4 = 0;
  v5 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)a2 + 48LL))(a2, &v18);
  if ( v5 >= 0 )
  {
    if ( !v18 )
      return v4;
    v5 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, _QWORD *))(*(_QWORD *)a2 + 40LL))(a2, v16);
    if ( v5 < 0 )
    {
      v6 = 266LL;
      goto LABEL_3;
    }
    v20 = 0LL;
    v7 = (__int64 *)*((_QWORD *)this + 9);
    v8 = *v7;
    v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v20);
    v10 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, SID *, GUID *, __int64 *))(v8 + 72))(
            v7,
            v16[0],
            &SID_EdgeUi,
            &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e,
            v9);
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 80LL))(v20, &v19);
      if ( v10 >= 0 )
      {
        v4 = v19 != -1;
        v14 = v20;
        if ( !v20 )
          return v4;
        v20 = 0LL;
        v13 = *(void (**)(void))(*(_QWORD *)v14 + 16LL);
        goto LABEL_15;
      }
      v11 = 270LL;
    }
    else
    {
      v11 = 268LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
      (const char *)(unsigned int)v10);
    v12 = v20;
    if ( !v20 )
      return v4;
    v20 = 0LL;
    v13 = *(void (**)(void))(*(_QWORD *)v12 + 16LL);
LABEL_15:
    v13();
    return v4;
  }
  v6 = 262LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
    (const char *)(unsigned int)v5);
  return v4;
}
