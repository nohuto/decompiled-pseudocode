/*
 * XREFs of ?_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180014630
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180008380 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x180010F60 (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x1800111C8 (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 *     ?_HandleMonitorRelatedNotificationForDesktopWindow@CApplicationManager@@AEAAXPEAUHWND__@@0_NW4ZBID@@@Z @ 0x180014FE8 (-_HandleMonitorRelatedNotificationForDesktopWindow@CApplicationManager@@AEAAXPEAUHWND__@@0_NW4ZB.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180017CC8 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_7f98d2e01e22d2c20437399d24fb9aeb___ @ 0x18001B6D8 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_7f98d2e01e22d2c20437399d24fb9aeb___.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall CApplicationManager::_HandleMonitorChanged(
        __int64 **this,
        const struct CApplicationManager::HSHELL_DATA *const a2)
{
  __int64 v4; // rdi
  PSRWLOCK v5; // r15
  struct IImmersiveMonitor *Ptr; // rbx
  unsigned int v7; // edi
  struct IObjectArray *v8; // rcx
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
  __int64 v24; // [rsp+28h] [rbp-38h]
  _DWORD v25[2]; // [rsp+40h] [rbp-20h] BYREF
  struct ISyncIAMEventHandler *v26; // [rsp+48h] [rbp-18h] BYREF
  __int64 v27; // [rsp+50h] [rbp-10h]
  __int64 v28; // [rsp+58h] [rbp-8h]
  struct IObjectArray *v29; // [rsp+A8h] [rbp+48h] BYREF
  struct IImmersiveMonitor *v30; // [rsp+B0h] [rbp+50h] BYREF
  struct IObjectArray *v31; // [rsp+B8h] [rbp+58h] BYREF

  v28 = -2LL;
  v4 = *((_QWORD *)a2 + 1);
  v5 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = (struct IImmersiveMonitor *)CApplicationManagerUtility::g_pIAMGlobals[12].Ptr;
  v30 = Ptr;
  if ( Ptr )
  {
    (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v26 = Ptr;
    (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v27 = v4;
    v7 = (unsigned int)v5[13].Ptr;
    v24 = 0LL;
    Windows::Internal::ComTaskPool::WrapWithTask__lambda_7f98d2e01e22d2c20437399d24fb9aeb___(&v29, &v26);
    Windows::Internal::ComTaskPool::RunTask(3LL, 2LL, v7, 0LL);
    v8 = v29;
    if ( v29 )
    {
      v29 = 0LL;
      ((void (__fastcall *)(struct IObjectArray *))v8->lpVtbl->Release)(v8);
    }
    if ( v26 )
      (*(void (__fastcall **)(struct ISyncIAMEventHandler *))(*(_QWORD *)v26 + 16LL))(v26);
    (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)Ptr + 16LL))(Ptr);
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
      v30 = 0LL;
      v26 = (struct ISyncIAMEventHandler *)*((_QWORD *)a2 + 1);
      LODWORD(v27) = 2;
      if ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(this, &v26, &v30, 0LL) >= 0 )
      {
        v29 = 0LL;
        v10 = this[62];
        v11 = *v10;
        v12 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v29);
        if ( (*(int (__fastcall **)(__int64 *, _QWORD, GUID *, GUID *, __int64, __int64))(v11 + 88))(
               v10,
               *((_QWORD *)a2 + 1),
               &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
               &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
               v12,
               v24) >= 0 )
        {
          v25[0] = *((_DWORD *)this + 190);
          v25[1] = 0;
          (*(void (__fastcall **)(struct IImmersiveMonitor *, struct IObjectArray *, _DWORD *, __int64))(*(_QWORD *)v30 + 456LL))(
            v30,
            v29,
            v25,
            4LL);
          if ( (*(unsigned __int8 (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v30 + 416LL))(v30) )
          {
            v26 = 0LL;
            GlobalSyncEventHandler = CApplicationManager::_GetGlobalSyncEventHandler((CApplicationManager *)this, &v26);
            v14 = v26;
            if ( GlobalSyncEventHandler >= 0 )
            {
              v31 = 0LL;
              if ( (int)CApplicationManager::_GetSingleMonitorObjectArray(
                          (CApplicationManager *)this,
                          (struct IImmersiveMonitor *)v29,
                          &v31) >= 0 )
                (*(void (__fastcall **)(struct ISyncIAMEventHandler *, struct IObjectArray *, char *, _QWORD, _DWORD, int, int))(*(_QWORD *)v14 + 24LL))(
                  v14,
                  v31,
                  (char *)this + 208,
                  0LL,
                  *((_DWORD *)a2 + 6),
                  2,
                  0xFFFF);
              v15 = v31;
              if ( v31 )
              {
                v31 = 0LL;
                ((void (__fastcall *)(struct IObjectArray *))v15->lpVtbl->Release)(v15);
              }
            }
            if ( v14 )
              (*(void (__fastcall **)(struct ISyncIAMEventHandler *))(*(_QWORD *)v14 + 16LL))(v14);
          }
        }
        v16 = v29;
        if ( v29 )
        {
          v29 = 0LL;
          ((void (__fastcall *)(struct IObjectArray *))v16->lpVtbl->Release)(v16);
        }
      }
    }
    else
    {
      if ( *((__int64 **)a2 + 1) != this[88] )
        return;
      v30 = 0LL;
      v17 = this[62];
      v18 = *v17;
      v19 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v30);
      if ( (*(int (__fastcall **)(__int64 *, _QWORD, GUID *, GUID *, __int64, __int64))(v18 + 88))(
             v17,
             *((_QWORD *)a2 + 1),
             &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
             &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
             v19,
             v24) >= 0 )
      {
        v29 = 0LL;
        if ( (int)CApplicationManager::_GetSingleMonitorObjectArray((CApplicationManager *)this, v30, &v29) >= 0 )
        {
          v31 = 0LL;
          v20 = CApplicationManager::_GetGlobalSyncEventHandler(
                  (CApplicationManager *)this,
                  (struct ISyncIAMEventHandler **)&v31);
          v21 = v31;
          if ( v20 >= 0 )
            ((void (__fastcall *)(struct IObjectArray *, struct IObjectArray *, __int64 **, _QWORD, _DWORD, int, int))v31->lpVtbl->GetCount)(
              v31,
              v29,
              this + 26,
              0LL,
              *((_DWORD *)a2 + 6),
              2,
              0xFFFF);
          if ( v21 )
            ((void (__fastcall *)(struct IObjectArray *))v21->lpVtbl->Release)(v21);
        }
        v22 = v29;
        if ( v29 )
        {
          v29 = 0LL;
          ((void (__fastcall *)(struct IObjectArray *))v22->lpVtbl->Release)(v22);
        }
      }
    }
    v23 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v23 + 16LL))(v23);
    }
  }
}
