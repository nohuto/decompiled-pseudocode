/*
 * XREFs of ??$Adapt@V_lambda_5f99a1c03ccf24f71b9832bdc2798968_@@@?$CCLambdaAdapter@P6AHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z$03@@SAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z @ 0x180152940
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DoesMonitorSupportTaskbar@ImmersiveMonitorHelper@@AEAA_NPEAUIImmersiveMonitor@@@Z @ 0x1801525B0 (-DoesMonitorSupportTaskbar@ImmersiveMonitorHelper@@AEAA_NPEAUIImmersiveMonitor@@@Z.c)
 *     ?ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z @ 0x1801526F0 (-ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCLambdaAdapter<int (*)(HMONITOR__ *,HDC__ *,tagRECT *,__int64),4>::Adapt<_lambda_5f99a1c03ccf24f71b9832bdc2798968_>(
        HMONITOR a1,
        HDC a2,
        LPRECT a3,
        ImmersiveMonitorHelper **a4)
{
  unsigned int v6; // ebp
  __int64 *v7; // rdi
  __int64 v8; // rbx
  __int64 *v9; // rax
  int v10; // eax
  struct IImmersiveMonitor *v11; // rcx
  struct IImmersiveMonitor *v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct IImmersiveMonitor *v15; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0;
  v15 = 0LL;
  v7 = (__int64 *)*((_QWORD *)*a4 + 6);
  v8 = *v7;
  v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v15);
  v10 = (*(__int64 (__fastcall **)(__int64 *, HMONITOR, GUID *, GUID *, __int64 *))(v8 + 72))(
          v7,
          a1,
          &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
          &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
          v9);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xCA,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
      (const char *)(unsigned int)v10);
LABEL_6:
    v12 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v12 + 16LL))(v12);
    }
    return 1;
  }
  if ( !ImmersiveMonitorHelper::DoesMonitorSupportTaskbar(*a4, v15) )
    goto LABEL_6;
  ImmersiveMonitorHelper::ConnectToMonitor(*a4, v15);
  v11 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v6;
}
