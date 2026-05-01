/*
 * XREFs of ?_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180015214
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180008450 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x180011674 (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x1800118DC (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 *     ?_HandleMonitorRelatedNotificationForDesktopWindow@CApplicationManager@@AEAAXPEAUHWND__@@0_NW4ZBID@@@Z @ 0x180015BB0 (-_HandleMonitorRelatedNotificationForDesktopWindow@CApplicationManager@@AEAAXPEAUHWND__@@0_NW4ZB.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180018F0C (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_7f98d2e01e22d2c20437399d24fb9aeb___ @ 0x18001BFF0 (Windows--Internal--ComTaskPool--QueueTask__lambda_7f98d2e01e22d2c20437399d24fb9aeb___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall CApplicationManager::_HandleMonitorChanged(
        __int64 **this,
        const struct CApplicationManager::HSHELL_DATA *const a2)
{
  __int64 v4; // rdi
  PSRWLOCK v5; // r15
  struct IObjectArray *Ptr; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 *v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rax
  int GlobalSyncEventHandler; // eax
  struct ISyncIAMEventHandler *v14; // rbx
  struct IObjectArray *v15; // rcx
  struct IObjectArray *v16; // rcx
  __int64 *v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rax
  int v20; // eax
  struct IObjectArray *v21; // rbx
  struct IObjectArray *v22; // rcx
  struct IImmersiveMonitor *v23; // rcx
  _DWORD v24[2]; // [rsp+40h] [rbp-20h] BYREF
  struct ISyncIAMEventHandler *v25; // [rsp+48h] [rbp-18h] BYREF
  __int64 v26; // [rsp+50h] [rbp-10h]
  __int64 v27; // [rsp+58h] [rbp-8h]
  struct IObjectArray *v28; // [rsp+A8h] [rbp+48h] BYREF
  struct IImmersiveMonitor *v29; // [rsp+B0h] [rbp+50h] BYREF
  struct IObjectArray *v30; // [rsp+B8h] [rbp+58h] BYREF

  v27 = -2LL;
  v4 = *((_QWORD *)a2 + 1);
  v5 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = (struct IObjectArray *)CApplicationManagerUtility::g_pIAMGlobals[12].Ptr;
  v28 = Ptr;
  if ( Ptr )
  {
    ((void (__fastcall *)(struct IObjectArray *))Ptr->lpVtbl->AddRef)(Ptr);
    v25 = (struct ISyncIAMEventHandler *)Ptr;
    ((void (__fastcall *)(struct IObjectArray *))Ptr->lpVtbl->AddRef)(Ptr);
    v26 = v4;
    Windows::Internal::ComTaskPool::QueueTask__lambda_7f98d2e01e22d2c20437399d24fb9aeb___(
      v8,
      v7,
      LODWORD(v5[13].Ptr),
      &v25);
    if ( v25 )
      (*(void (__fastcall **)(struct ISyncIAMEventHandler *))(*(_QWORD *)v25 + 16LL))(v25);
    ((void (__fastcall *)(struct IObjectArray *))Ptr->lpVtbl->Release)(Ptr);
  }
  if ( *((_DWORD *)a2 + 4) == 1 )
  {
    v9 = *((_QWORD *)a2 + 5);
    if ( !v9 )
      v9 = *((_QWORD *)a2 + 1);
    CApplicationManager::_HandleMonitorRelatedNotificationForDesktopWindow(
      this,
      *((_QWORD *)a2 + 1),
      v9,
      0LL,
      *((_DWORD *)a2 + 6));
  }
  else
  {
    if ( *((_DWORD *)a2 + 4) == 2 )
    {
      if ( !(unsigned int)IsShellFrameWindow(*((_QWORD *)a2 + 1)) )
        return;
      v29 = 0LL;
      v25 = (struct ISyncIAMEventHandler *)*((_QWORD *)a2 + 1);
      LODWORD(v26) = 2;
      if ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(this, &v25, &v29, 0LL) >= 0 )
      {
        v28 = 0LL;
        v10 = this[71];
        v11 = *v10;
        v12 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v28);
        if ( (*(int (__fastcall **)(__int64 *, _QWORD, GUID *, GUID *, __int64))(v11 + 88))(
               v10,
               *((_QWORD *)a2 + 1),
               &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
               &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
               v12) >= 0 )
        {
          v24[0] = *((_DWORD *)this + 210);
          v24[1] = 0;
          (*(void (__fastcall **)(struct IImmersiveMonitor *, struct IObjectArray *, _DWORD *, __int64))(*(_QWORD *)v29 + 456LL))(
            v29,
            v28,
            v24,
            4LL);
          if ( (*(unsigned __int8 (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v29 + 416LL))(v29) )
          {
            v25 = 0LL;
            GlobalSyncEventHandler = CApplicationManager::_GetGlobalSyncEventHandler((CApplicationManager *)this, &v25);
            v14 = v25;
            if ( GlobalSyncEventHandler >= 0 )
            {
              v30 = 0LL;
              if ( (int)CApplicationManager::_GetSingleMonitorObjectArray(
                          (CApplicationManager *)this,
                          (struct IImmersiveMonitor *)v28,
                          &v30) >= 0 )
                (*(void (__fastcall **)(struct ISyncIAMEventHandler *, struct IObjectArray *, char *, _QWORD, _DWORD, int, int))(*(_QWORD *)v14 + 24LL))(
                  v14,
                  v30,
                  (char *)this + 256,
                  0LL,
                  *((_DWORD *)a2 + 6),
                  2,
                  0xFFFF);
              v15 = v30;
              if ( v30 )
              {
                v30 = 0LL;
                ((void (__fastcall *)(struct IObjectArray *))v15->lpVtbl->Release)(v15);
              }
            }
            if ( v14 )
              (*(void (__fastcall **)(struct ISyncIAMEventHandler *))(*(_QWORD *)v14 + 16LL))(v14);
          }
        }
        v16 = v28;
        if ( v28 )
        {
          v28 = 0LL;
          ((void (__fastcall *)(struct IObjectArray *))v16->lpVtbl->Release)(v16);
        }
      }
    }
    else
    {
      if ( *((__int64 **)a2 + 1) != this[97] )
        return;
      v29 = 0LL;
      v17 = this[71];
      v18 = *v17;
      v19 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v29);
      if ( (*(int (__fastcall **)(__int64 *, _QWORD, GUID *, GUID *, __int64))(v18 + 88))(
             v17,
             *((_QWORD *)a2 + 1),
             &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
             &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
             v19) >= 0 )
      {
        v28 = 0LL;
        if ( (int)CApplicationManager::_GetSingleMonitorObjectArray((CApplicationManager *)this, v29, &v28) >= 0 )
        {
          v30 = 0LL;
          v20 = CApplicationManager::_GetGlobalSyncEventHandler(
                  (CApplicationManager *)this,
                  (struct ISyncIAMEventHandler **)&v30);
          v21 = v30;
          if ( v20 >= 0 )
            ((void (__fastcall *)(struct IObjectArray *, struct IObjectArray *, __int64 **, _QWORD, _DWORD, int, int))v30->lpVtbl->GetCount)(
              v30,
              v28,
              this + 32,
              0LL,
              *((_DWORD *)a2 + 6),
              2,
              0xFFFF);
          if ( v21 )
            ((void (__fastcall *)(struct IObjectArray *))v21->lpVtbl->Release)(v21);
        }
        v22 = v28;
        if ( v28 )
        {
          v28 = 0LL;
          ((void (__fastcall *)(struct IObjectArray *))v22->lpVtbl->Release)(v22);
        }
      }
    }
    v23 = v29;
    if ( v29 )
    {
      v29 = 0LL;
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v23 + 16LL))(v23);
    }
  }
}
