/*
 * XREFs of ?OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x1800E0840
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x180059594 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x18009ECC8 (WPP_SF_.c)
 *     WPP_SF_S @ 0x18009ECE8 (WPP_SF_S.c)
 *     WPP_SF_qS @ 0x1800A0B54 (WPP_SF_qS.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 *     ?CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x1800DE7CC (-CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?FindMonitor@CMonitorManager@@AEAA?AV?$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z @ 0x1800DF3DC (-FindMonitor@CMonitorManager@@AEAA-AV-$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z.c)
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@@Z @ 0x1800E1644 (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CMonitorManager::OnMonitorEnabledChanged(
        CMonitorManager *this,
        const unsigned __int16 *a2,
        const struct _tagpropertykey *a3)
{
  int MonitorForCaptureDeviceIfAppropriate; // ebx
  wchar_t *v6; // rbx
  CAudioSessionManager *v7; // rcx
  char IsCaptureMonitorEnabled; // al
  struct CMonitorManager::CaptureMonitor *v9; // rcx
  struct IMMDevice *v10; // [rsp+30h] [rbp-20h] BYREF
  wchar_t *String2; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v12[2]; // [rsp+40h] [rbp-10h] BYREF
  int v13; // [rsp+80h] [rbp+30h] BYREF
  struct CMonitorManager::CaptureMonitor *v14; // [rsp+98h] [rbp+48h] BYREF

  v12[1] = -2LL;
  v10 = 0LL;
  v12[0] = 0LL;
  MonitorForCaptureDeviceIfAppropriate = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IMMDevice **))(**((_QWORD **)this + 8) + 40LL))(
                                           *((_QWORD *)this + 8),
                                           a2,
                                           &v10);
  if ( MonitorForCaptureDeviceIfAppropriate >= 0 )
  {
    MonitorForCaptureDeviceIfAppropriate = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, _QWORD *))v10->lpVtbl->QueryInterface)(
                                             v10,
                                             &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
                                             v12);
    if ( MonitorForCaptureDeviceIfAppropriate >= 0 )
    {
      MonitorForCaptureDeviceIfAppropriate = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)v12[0] + 24LL))(
                                               v12[0],
                                               &v13);
      if ( MonitorForCaptureDeviceIfAppropriate >= 0 )
      {
        if ( v13 != 1 )
          goto LABEL_37;
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_S(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x23u,
            (__int64)&WPP_1a258077347a3434ed979dcee8522c59_Traceguids,
            a2);
        }
        CMonitorManager::FindMonitor((__int64)this, (struct IUnknown **)&v14, a2);
        if ( v14 )
        {
          v6 = 0LL;
          String2 = 0LL;
          v7 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_qS(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x24u,
              (__int64)&WPP_1a258077347a3434ed979dcee8522c59_Traceguids);
            v7 = WPP_GLOBAL_Control;
          }
          if ( !*((_BYTE *)v14 + 12) )
          {
            IsCaptureMonitorEnabled = CMonitor::IsCaptureMonitorEnabled(v10, &String2, 0LL);
            v6 = String2;
            if ( IsCaptureMonitorEnabled && !_wcsicoll(*((const wchar_t **)v14 + 10), String2) )
            {
              if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              {
                WPP_SF_(
                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                  0x25u,
                  (__int64)&WPP_1a258077347a3434ed979dcee8522c59_Traceguids);
              }
              CoTaskMemFree(v6);
              v9 = v14;
              goto LABEL_22;
            }
            v7 = WPP_GLOBAL_Control;
          }
          if ( v7 != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_DWORD *)v7 + 7) & 0x800000) != 0
            && *((_BYTE *)v7 + 25) >= 4u )
          {
            WPP_SF_S(*((_QWORD *)v7 + 2), 0x26u, (__int64)&WPP_1a258077347a3434ed979dcee8522c59_Traceguids, a2);
          }
          CMonitorManager::RemoveMonitor(this, v14);
          CoTaskMemFree(v6);
        }
        MonitorForCaptureDeviceIfAppropriate = CMonitorManager::CreateMonitorForCaptureDeviceIfAppropriate(this, v10);
        v9 = v14;
        if ( MonitorForCaptureDeviceIfAppropriate >= 0 )
        {
LABEL_22:
          if ( v9 )
            (*(void (__fastcall **)(struct CMonitorManager::CaptureMonitor *))(*(_QWORD *)v9 + 16LL))(v9);
          goto LABEL_37;
        }
        if ( v14 )
          (*(void (**)(void))(*(_QWORD *)v14 + 16LL))();
      }
    }
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x27u,
      (__int64)&WPP_1a258077347a3434ed979dcee8522c59_Traceguids,
      MonitorForCaptureDeviceIfAppropriate);
  }
LABEL_37:
  if ( v12[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12[0] + 16LL))(v12[0]);
  if ( v10 )
    ((void (__fastcall *)(struct IMMDevice *))v10->lpVtbl->Release)(v10);
}
