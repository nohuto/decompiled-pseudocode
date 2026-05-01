/*
 * XREFs of ?AdjustMonitorConnectedIfNeeded@ImmersiveMonitorHelper@@QEAAJXZ @ 0x1801523A8
 * Callers:
 *     ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18014A8B0 (-ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsCurrentMonitorAlsoPrimary@ImmersiveMonitorHelper@@AEAA_NXZ @ 0x180152568 (-IsCurrentMonitorAlsoPrimary@ImmersiveMonitorHelper@@AEAA_NXZ.c)
 *     ?DoesMonitorSupportTaskbar@ImmersiveMonitorHelper@@AEAA_NPEAUIImmersiveMonitor@@@Z @ 0x1801525B0 (-DoesMonitorSupportTaskbar@ImmersiveMonitorHelper@@AEAA_NPEAUIImmersiveMonitor@@@Z.c)
 *     ?ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z @ 0x1801526F0 (-ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ImmersiveMonitorHelper::AdjustMonitorConnectedIfNeeded(ImmersiveMonitorHelper *this)
{
  __int64 v2; // rcx
  __int64 *v3; // rdi
  __int64 v4; // rbx
  __int64 *v5; // rax
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // rdx
  struct IImmersiveMonitor *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  LPARAM dwData; // [rsp+60h] [rbp+20h] BYREF
  struct IImmersiveMonitor *v13; // [rsp+68h] [rbp+28h] BYREF

  LODWORD(dwData) = 0;
  v2 = *((_QWORD *)this + 5);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, LPARAM *))(*(_QWORD *)v2 + 48LL))(v2, &dwData);
    if ( (_DWORD)dwData )
    {
      if ( ImmersiveMonitorHelper::IsCurrentMonitorAlsoPrimary(this)
        && ImmersiveMonitorHelper::DoesMonitorSupportTaskbar(this, *((struct IImmersiveMonitor **)this + 5)) )
      {
        return 0LL;
      }
    }
  }
  v13 = 0LL;
  v3 = (__int64 *)*((_QWORD *)this + 6);
  v4 = *v3;
  v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v13);
  v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *, GUID *, __int64 *))(v4 + 72))(
         v3,
         0LL,
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         v5);
  v7 = retaddr;
  if ( v6 < 0 )
  {
    v8 = 186LL;
LABEL_7:
    wil::details::in1diag3::_Log_Hr(
      v7,
      (void *)v8,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_13;
  }
  v6 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, LPARAM *))(*(_QWORD *)v13 + 48LL))(v13, &dwData);
  v7 = retaddr;
  if ( v6 < 0 )
  {
    v8 = 189LL;
    goto LABEL_7;
  }
  if ( (_DWORD)dwData && ImmersiveMonitorHelper::DoesMonitorSupportTaskbar(this, v13) )
  {
    ImmersiveMonitorHelper::ConnectToMonitor(this, v13);
    goto LABEL_14;
  }
LABEL_13:
  dwData = (LPARAM)this;
  EnumDisplayMonitors(
    0LL,
    0LL,
    CCLambdaAdapter<int (*)(HMONITOR__ *,HDC__ *,tagRECT *,__int64),4>::Adapt<_lambda_5f99a1c03ccf24f71b9832bdc2798968_>,
    (LPARAM)&dwData);
LABEL_14:
  v9 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return 0LL;
}
