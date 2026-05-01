/*
 * XREFs of ?NotifyListenersForSimulatedAppActivation@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x1801092E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x1800F12F0 (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 *     ?_GetMonitorForNotifyApp@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAPEAUIImmersiveMonitor@@@Z @ 0x18010F9C0 (-_GetMonitorForNotifyApp@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAPEAUIIm.c)
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x18010FAA0 (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::NotifyListenersForSimulatedAppActivation(
        CApplicationManager *this,
        struct IImmersiveApplicationInternal *a2)
{
  int MonitorForNotifyApp; // r15d
  char *v5; // r12
  __int64 v6; // rsi
  struct IObjectArray *v7; // r14
  struct ISyncIAMEventHandler *v8; // rbx
  __int64 v9; // rdi
  int v10; // eax
  __int64 v12[3]; // [rsp+40h] [rbp-18h] BYREF
  struct ISyncIAMEventHandler *v14; // [rsp+A8h] [rbp+50h] BYREF
  struct IObjectArray *v15; // [rsp+B0h] [rbp+58h] BYREF
  struct IImmersiveMonitor *v16; // [rsp+B8h] [rbp+60h] BYREF

  v12[1] = -2LL;
  v12[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
  MonitorForNotifyApp = (**(__int64 (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, __int64 *))a2)(
                          a2,
                          &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                          v12);
  if ( MonitorForNotifyApp >= 0 )
  {
    v16 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v16);
    v5 = (char *)this - 240;
    MonitorForNotifyApp = CApplicationManager::_GetMonitorForNotifyApp(
                            (CApplicationManager *)((char *)this - 240),
                            a2,
                            &v16);
    if ( MonitorForNotifyApp >= 0 )
    {
      v15 = 0LL;
      Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v15);
      MonitorForNotifyApp = CApplicationManager::_GetSingleMonitorObjectArray(
                              (CApplicationManager *)((char *)this - 240),
                              v16,
                              &v15);
      if ( MonitorForNotifyApp >= 0 )
      {
        v14 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
        MonitorForNotifyApp = CApplicationManager::_GetGlobalSyncEventHandler(
                                (CApplicationManager *)((char *)this - 240),
                                &v14);
        if ( MonitorForNotifyApp >= 0 )
        {
          v6 = v12[0];
          v7 = v15;
          v8 = v14;
          v9 = *(_QWORD *)v14;
          v10 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 136LL))(a2);
          (*(void (__fastcall **)(struct ISyncIAMEventHandler *, struct IObjectArray *, unsigned __int64, __int64, int, int, int))(v9 + 24))(
            v8,
            v7,
            ((unsigned __int64)this + 8) & -(__int64)(v5 != 0LL),
            v6,
            v10,
            7,
            0xFFFF);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
      }
      Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v15);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v16);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
  return (unsigned int)MonitorForNotifyApp;
}
