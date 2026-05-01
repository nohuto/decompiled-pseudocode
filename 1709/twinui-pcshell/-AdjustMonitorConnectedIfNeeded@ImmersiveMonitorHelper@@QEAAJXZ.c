/*
 * XREFs of ?AdjustMonitorConnectedIfNeeded@ImmersiveMonitorHelper@@QEAAJXZ @ 0x1801866A8
 * Callers:
 *     ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18017F580 (-ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DoesMonitorSupportTaskbar@ImmersiveMonitorHelper@@AEAA_NPEAUIImmersiveMonitor@@@Z @ 0x180186888 (-DoesMonitorSupportTaskbar@ImmersiveMonitorHelper@@AEAA_NPEAUIImmersiveMonitor@@@Z.c)
 *     ?ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z @ 0x1801869C8 (-ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ImmersiveMonitorHelper::AdjustMonitorConnectedIfNeeded(ImmersiveMonitorHelper *this)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 *v4; // rdi
  __int64 v5; // rbx
  __int64 *v6; // rax
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // rdx
  struct IImmersiveMonitor *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  LPARAM dwData; // [rsp+60h] [rbp+20h] BYREF
  struct IImmersiveMonitor *v14; // [rsp+68h] [rbp+28h] BYREF

  LODWORD(dwData) = 0;
  v2 = *((_QWORD *)this + 8);
  if ( !v2 )
    goto LABEL_7;
  (*(void (__fastcall **)(__int64, LPARAM *))(*(_QWORD *)v2 + 48LL))(v2, &dwData);
  if ( !(_DWORD)dwData )
    goto LABEL_7;
  v3 = (*(__int64 (__fastcall **)(_QWORD, LPARAM *))(**((_QWORD **)this + 8) + 56LL))(*((_QWORD *)this + 8), &dwData);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xFC,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
      (const char *)(unsigned int)v3);
  if ( !(_DWORD)dwData
    || !ImmersiveMonitorHelper::DoesMonitorSupportTaskbar(this, *((struct IImmersiveMonitor **)this + 8)) )
  {
LABEL_7:
    v14 = 0LL;
    v4 = (__int64 *)*((_QWORD *)this + 9);
    v5 = *v4;
    v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v14);
    v7 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *, GUID *, __int64 *))(v5 + 72))(
           v4,
           0LL,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           v6);
    v8 = retaddr;
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, LPARAM *))(*(_QWORD *)v14 + 48LL))(v14, &dwData);
      v8 = retaddr;
      if ( v7 >= 0 )
      {
        if ( (_DWORD)dwData && ImmersiveMonitorHelper::DoesMonitorSupportTaskbar(this, v14) )
        {
          ImmersiveMonitorHelper::ConnectToMonitor(this, v14);
          goto LABEL_16;
        }
LABEL_15:
        dwData = (LPARAM)this;
        EnumDisplayMonitors(
          0LL,
          0LL,
          CCLambdaAdapter<int (*)(HMONITOR__ *,HDC__ *,tagRECT *,__int64),4>::Adapt<_lambda_5f99a1c03ccf24f71b9832bdc2798968_>,
          (LPARAM)&dwData);
LABEL_16:
        v10 = v14;
        if ( v14 )
        {
          v14 = 0LL;
          (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v10 + 16LL))(v10);
        }
        return 0LL;
      }
      v9 = 189LL;
    }
    else
    {
      v9 = 186LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v8,
      (void *)v9,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_15;
  }
  return 0LL;
}
