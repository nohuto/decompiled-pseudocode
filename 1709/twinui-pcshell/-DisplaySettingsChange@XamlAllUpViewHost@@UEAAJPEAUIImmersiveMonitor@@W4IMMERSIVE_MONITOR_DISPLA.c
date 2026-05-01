/*
 * XREFs of ?DisplaySettingsChange@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180159700
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@PEAPEAVMonitorFrame@@@Z @ 0x18015AFA0 (-GetFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@PEAPEAVMonitorFrame@@@Z.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ @ 0x18015CB30 (-DismissView@-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UEAAJXZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XamlAllUpViewHost::DisplaySettingsChange(__int64 a1, struct IImmersiveMonitor *a2, char a3)
{
  __int64 v4; // rdi
  int FrameForMonitor; // eax
  int v6; // esi
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rbx
  int v12[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+28h] [rbp-40h]
  __int64 v14; // [rsp+30h] [rbp-38h]
  char v15; // [rsp+38h] [rbp-30h]
  _BYTE v16[16]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v13 = -2LL;
  if ( (a3 & 0x14) != 0 )
  {
    v4 = a1 - 8;
    v14 = a1 - 8;
    v15 = 1;
    FrameForMonitor = XamlAllUpViewHost::GetFrameForMonitor(
                        (XamlAllUpViewHost *)(a1 - 8),
                        a2,
                        (struct MonitorFrame **)v12);
    v6 = FrameForMonitor;
    if ( FrameForMonitor < 0 )
    {
      v7 = (unsigned int)FrameForMonitor;
      v8 = 520LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
        (const char *)v7);
      CMultitaskingViewHostBase<IAllUpViewHost>::DismissView(v4);
      return (unsigned int)v6;
    }
    v9 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, _BYTE *))(*(_QWORD *)a2 + 88LL))(a2, v16);
    v6 = v9;
    if ( v9 < 0 )
    {
      v7 = (unsigned int)v9;
      v8 = 523LL;
      goto LABEL_10;
    }
    v10 = *(_QWORD *)(*(_QWORD *)v12 + 56LL);
    *(_QWORD *)v12 = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v6 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v10 + 48LL))(v10, v16);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v6 < 0 )
    {
      v7 = (unsigned int)v6;
      v8 = 524LL;
      goto LABEL_10;
    }
  }
  return 0LL;
}
