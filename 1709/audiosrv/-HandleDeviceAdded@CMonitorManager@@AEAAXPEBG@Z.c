/*
 * XREFs of ?HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z @ 0x1800A4390
 * Callers:
 *     ?ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ @ 0x1800A62C8 (-ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     ?CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x1800A3564 (-CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z @ 0x1800A8974 (-IsCaptureMonitorEnabled@CMonitor@@KA_NPEAUIMMDevice@@PEAPEAGPEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CMonitorManager::HandleDeviceAdded(CMonitorManager *this, const unsigned __int16 *a2)
{
  int MonitorForCaptureDeviceIfAppropriate; // ebx
  unsigned int i; // edi
  void *v6; // rcx
  bool IsCaptureMonitorEnabled; // al
  LPVOID v8; // rbx
  int v9; // eax
  __int64 v10; // [rsp+30h] [rbp-30h] BYREF
  struct IMMDevice *v11; // [rsp+38h] [rbp-28h] BYREF
  __int64 v12; // [rsp+40h] [rbp-20h] BYREF
  LPVOID pv[3]; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v14; // [rsp+90h] [rbp+30h] BYREF
  int v15; // [rsp+A0h] [rbp+40h] BYREF
  struct IMMDevice *v16; // [rsp+A8h] [rbp+48h] BYREF

  pv[1] = (LPVOID)-2LL;
  v11 = 0LL;
  v12 = 0LL;
  MonitorForCaptureDeviceIfAppropriate = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IMMDevice **))(**((_QWORD **)this + 8) + 40LL))(
                                           *((_QWORD *)this + 8),
                                           a2,
                                           &v11);
  if ( MonitorForCaptureDeviceIfAppropriate < 0
    || (MonitorForCaptureDeviceIfAppropriate = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))v11->lpVtbl->QueryInterface)(
                                                 v11,
                                                 &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
                                                 &v12),
        MonitorForCaptureDeviceIfAppropriate < 0)
    || (MonitorForCaptureDeviceIfAppropriate = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v12 + 24LL))(
                                                 v12,
                                                 &v15),
        MonitorForCaptureDeviceIfAppropriate < 0) )
  {
LABEL_27:
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x48u,
        (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids,
        MonitorForCaptureDeviceIfAppropriate);
    }
    goto LABEL_31;
  }
  if ( v15 == 1 )
  {
    MonitorForCaptureDeviceIfAppropriate = CMonitorManager::CreateMonitorForCaptureDeviceIfAppropriate(this, v11);
    if ( MonitorForCaptureDeviceIfAppropriate >= 0 )
      goto LABEL_31;
    goto LABEL_27;
  }
  v10 = 0LL;
  MonitorForCaptureDeviceIfAppropriate = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**((_QWORD **)this + 8) + 24LL))(
                                           *((_QWORD *)this + 8),
                                           1LL,
                                           1LL,
                                           &v10);
  if ( MonitorForCaptureDeviceIfAppropriate < 0
    || (MonitorForCaptureDeviceIfAppropriate = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v10 + 24LL))(
                                                 v10,
                                                 &v14),
        MonitorForCaptureDeviceIfAppropriate < 0) )
  {
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    goto LABEL_27;
  }
  for ( i = 0; i < v14; ++i )
  {
    v16 = 0LL;
    pv[0] = 0LL;
    if ( (*(int (__fastcall **)(__int64, _QWORD, struct IMMDevice **))(*(_QWORD *)v10 + 32LL))(v10, i, &v16) >= 0 )
    {
      IsCaptureMonitorEnabled = CMonitor::IsCaptureMonitorEnabled(v16, (unsigned __int16 **)pv, 0LL);
      v8 = pv[0];
      if ( IsCaptureMonitorEnabled && !(unsigned int)_o__wcsicmp(pv[0], a2) )
      {
        v9 = CMonitorManager::CreateMonitorForCaptureDeviceIfAppropriate(this, v16);
        if ( v9 < 0
          && WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x47u,
            (__int64)&WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids,
            v9);
        }
      }
      v6 = v8;
    }
    else
    {
      v6 = 0LL;
    }
    CoTaskMemFree(v6);
    if ( v16 )
      ((void (__fastcall *)(struct IMMDevice *))v16->lpVtbl->Release)(v16);
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
LABEL_31:
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v11 )
    ((void (__fastcall *)(struct IMMDevice *))v11->lpVtbl->Release)(v11);
}
