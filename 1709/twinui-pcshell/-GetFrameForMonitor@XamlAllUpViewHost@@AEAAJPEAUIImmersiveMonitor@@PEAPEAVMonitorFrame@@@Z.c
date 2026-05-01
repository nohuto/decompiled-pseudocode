/*
 * XREFs of ?GetFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@PEAPEAVMonitorFrame@@@Z @ 0x18015AFA0
 * Callers:
 *     ?HandleCrossMonitorTabbing@XamlAllUpViewHost@@UEAAXPEAUHWND__@@I@Z @ 0x180159300 (-HandleCrossMonitorTabbing@XamlAllUpViewHost@@UEAAXPEAUHWND__@@I@Z.c)
 *     ?DisplaySettingsChange@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180159700 (-DisplaySettingsChange@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLA.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlAllUpViewHost::GetFrameForMonitor(
        XamlAllUpViewHost *this,
        struct IImmersiveMonitor *a2,
        struct MonitorFrame **a3)
{
  unsigned int v5; // ebp
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rbx
  int v9; // ebp
  int v10; // eax
  char v11; // r14
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v14; // [rsp+80h] [rbp+18h] BYREF
  __int64 v15; // [rsp+88h] [rbp+20h]

  v5 = 0;
  *a3 = 0LL;
  v6 = *((_QWORD *)this + 34);
  v7 = *((_QWORD *)this + 35);
  while ( 1 )
  {
    if ( v6 == v7 )
      return 2147647531LL;
    v8 = *(_QWORD *)(*(_QWORD *)v6 + 48LL);
    v15 = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v9 = v5 | 1;
    v10 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, __int64, int *))(*(_QWORD *)a2 + 96LL))(a2, v8, &v14);
    if ( v10 >= 0 )
    {
      if ( v14 )
      {
        v11 = 1;
        goto LABEL_9;
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2DE,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewhost.cpp",
        (const char *)(unsigned int)v10);
    }
    v11 = 0;
LABEL_9:
    v5 = v9 & 0xFFFFFFFE;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    if ( v11 )
      break;
    v6 += 8LL;
  }
  *a3 = *(struct MonitorFrame **)v6;
  return 0LL;
}
