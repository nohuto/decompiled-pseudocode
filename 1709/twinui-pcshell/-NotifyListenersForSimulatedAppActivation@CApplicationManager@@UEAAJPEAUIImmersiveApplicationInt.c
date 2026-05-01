/*
 * XREFs of ?NotifyListenersForSimulatedAppActivation@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x18000DC60
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x180011674 (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
 *     ?_GetMonitorForNotifyApp@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAPEAUIImmersiveMonitor@@@Z @ 0x1800117E0 (-_GetMonitorForNotifyApp@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAPEAUIIm.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x1800118DC (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::NotifyListenersForSimulatedAppActivation(
        CApplicationManager *this,
        __int64 (__fastcall ***a2)(struct IImmersiveApplicationInternal *, GUID *, __int64))
{
  __int64 (__fastcall **v4)(struct IImmersiveApplicationInternal *, GUID *, __int64); // rbx
  __int64 v5; // rax
  int MonitorForNotifyApp; // r12d
  char *v7; // r13
  struct IImmersiveMonitor *v8; // rbx
  struct ISyncIAMEventHandler *v9; // rdi
  __int64 v10; // r14
  struct IObjectArray *v11; // r15
  __int64 v12; // rsi
  int v13; // eax
  struct IObjectArray *v14; // rcx
  __int64 v15; // rcx
  struct IImmersiveMonitor *v17; // [rsp+40h] [rbp-28h] BYREF
  struct ISyncIAMEventHandler *v18[4]; // [rsp+48h] [rbp-20h] BYREF
  struct IObjectArray *v21; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v22; // [rsp+C8h] [rbp+60h] BYREF

  v18[1] = (struct ISyncIAMEventHandler *)-2LL;
  v22 = 0LL;
  v4 = *a2;
  v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v22);
  MonitorForNotifyApp = (*v4)(
                          (struct IImmersiveApplicationInternal *)a2,
                          &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                          v5);
  if ( MonitorForNotifyApp >= 0 )
  {
    v17 = 0LL;
    v7 = (char *)this - 248;
    MonitorForNotifyApp = CApplicationManager::_GetMonitorForNotifyApp(
                            (CApplicationManager *)((char *)this - 248),
                            (struct IImmersiveApplicationInternal *)a2,
                            &v17);
    v8 = v17;
    if ( MonitorForNotifyApp >= 0 )
    {
      v21 = 0LL;
      MonitorForNotifyApp = CApplicationManager::_GetSingleMonitorObjectArray(
                              (CApplicationManager *)((char *)this - 248),
                              v17,
                              &v21);
      if ( MonitorForNotifyApp >= 0 )
      {
        v18[0] = 0LL;
        MonitorForNotifyApp = CApplicationManager::_GetGlobalSyncEventHandler(
                                (CApplicationManager *)((char *)this - 248),
                                v18);
        v9 = v18[0];
        if ( MonitorForNotifyApp >= 0 )
        {
          v10 = v22;
          v11 = v21;
          v12 = *(_QWORD *)v18[0];
          v13 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, __int64)))(*a2)[17])(a2);
          (*(void (__fastcall **)(struct ISyncIAMEventHandler *, struct IObjectArray *, unsigned __int64, __int64, int, int, int))(v12 + 24))(
            v9,
            v11,
            ((unsigned __int64)this + 8) & -(__int64)(v7 != 0LL),
            v10,
            v13,
            7,
            0xFFFF);
        }
        if ( v9 )
          (*(void (__fastcall **)(struct ISyncIAMEventHandler *))(*(_QWORD *)v9 + 16LL))(v9);
      }
      v14 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        ((void (__fastcall *)(struct IObjectArray *))v14->lpVtbl->Release)(v14);
      }
    }
    if ( v8 )
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v15 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return (unsigned int)MonitorForNotifyApp;
}
