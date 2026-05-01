/*
 * XREFs of ?HandleCrossMonitorTabbing@XamlAllUpViewHost@@UEAAXPEAUHWND__@@I@Z @ 0x180159300
 * Callers:
 *     <none>
 * Callees:
 *     ?GetImmersiveMonitorForNavigate@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@IPEAV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Z @ 0x18015987C (-GetImmersiveMonitorForNavigate@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@IPEAV-$ComPtr@UII.c)
 *     ?GetFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@PEAPEAVMonitorFrame@@@Z @ 0x18015AFA0 (-GetFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@PEAPEAVMonitorFrame@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall XamlAllUpViewHost::HandleCrossMonitorTabbing(XamlAllUpViewHost *this, HWND a2, unsigned int a3)
{
  struct IImmersiveMonitor *v6; // rbx
  struct IImmersiveMonitor *v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rbp
  int ImmersiveMonitorForNavigate; // eax
  struct MonitorFrame *v11; // rsi
  struct MonitorFrame *v12[7]; // [rsp+20h] [rbp-38h] BYREF
  struct IImmersiveMonitor *v13; // [rsp+60h] [rbp+8h] BYREF
  struct IImmersiveMonitor *v14; // [rsp+78h] [rbp+20h]

  v12[1] = (struct MonitorFrame *)-2LL;
  v6 = 0LL;
  v14 = 0LL;
  v7 = 0LL;
  v13 = 0LL;
  v8 = *((_QWORD *)this + 18);
  v9 = *((_QWORD *)this + 19);
  while ( v8 != v9 )
  {
    if ( (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v8 + 56LL) + 40LL))(*(_QWORD *)(*(_QWORD *)v8 + 56LL)) == a2 )
    {
      v6 = *(struct IImmersiveMonitor **)(*(_QWORD *)v8 + 48LL);
      if ( v6 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 8LL))(*(_QWORD *)(*(_QWORD *)v8 + 48LL));
      v14 = v6;
      ImmersiveMonitorForNavigate = XamlAllUpViewHost::GetImmersiveMonitorForNavigate((char *)this - 128, v6, a3, &v13);
      v7 = v13;
      if ( ImmersiveMonitorForNavigate >= 0
        && v6 != v13
        && (int)XamlAllUpViewHost::GetFrameForMonitor((XamlAllUpViewHost *)((char *)this - 128), v13, v12) >= 0 )
      {
        v11 = (struct MonitorFrame *)*((_QWORD *)v12[0] + 7);
        v12[0] = v11;
        if ( v11 )
          (*(void (__fastcall **)(struct MonitorFrame *))(*(_QWORD *)v11 + 8LL))(v11);
        (*(void (__fastcall **)(struct MonitorFrame *))(*(_QWORD *)v11 + 24LL))(v11);
        (*(void (__fastcall **)(struct MonitorFrame *))(*(_QWORD *)v11 + 16LL))(v11);
      }
      break;
    }
    v8 += 8LL;
  }
  if ( v7 )
    (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v6 )
    (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v6 + 16LL))(v6);
}
