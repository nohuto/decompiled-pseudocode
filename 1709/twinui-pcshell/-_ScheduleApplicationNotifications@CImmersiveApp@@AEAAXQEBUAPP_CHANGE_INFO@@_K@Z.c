/*
 * XREFs of ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x180058EA0
 * Callers:
 *     ?SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_DATA@@W4MonitorChangeOptions@@@Z @ 0x180054120 (-SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_D.c)
 *     ?HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x180056DF0 (-HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x180056E60 (-HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windo.c)
 *     ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x180057050 (-HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z.c)
 *     ?HandleDeactivation@CImmersiveApp@@UEAAJW4ZBID@@@Z @ 0x1800571E0 (-HandleDeactivation@CImmersiveApp@@UEAAJW4ZBID@@@Z.c)
 *     ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x1800575B0 (-HandleDestruction@CImmersiveApp@@UEAA-AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEA.c)
 *     ?ForgetThisApp@CImmersiveApp@@UEAAXW4ForgetReason@@PEA_N@Z @ 0x180057B80 (-ForgetThisApp@CImmersiveApp@@UEAAXW4ForgetReason@@PEA_N@Z.c)
 *     ?ReportVisibilityOverride@CImmersiveApp@@UEAA_NW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@W4OVERRIDE_IMMUNITY_CHANGE@@W4ReportVisibilityOverrideOptions@@@Z @ 0x180058670 (-ReportVisibilityOverride@CImmersiveApp@@UEAA_NW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE.c)
 *     ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x18005953C (-_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ.c)
 *     ?_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x18005C448 (-_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 *     CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56___::Invoke @ 0x18005E640 (CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56___--Invoke.c)
 * Callees:
 *     ?IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z @ 0x180052660 (-IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z.c)
 *     ?_AddNotificationsAndResolve@CImmersiveApp@@AEAAJQEBUAPP_CHANGE_INFO@@_KPEAPEAU2@PEA_K@Z @ 0x180059230 (-_AddNotificationsAndResolve@CImmersiveApp@@AEAAJQEBUAPP_CHANGE_INFO@@_KPEAPEAU2@PEA_K@Z.c)
 *     ?_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ @ 0x180059E90 (-_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ.c)
 *     ??$CreateRefCountedObj@UAPP_NOTIFICATION_DATA@@U1@@@YA?AV?$ComPtr@V?$CRefCountedObject@UAPP_NOTIFICATION_DATA@@@@@WRL@Microsoft@@$$QEAUAPP_NOTIFICATION_DATA@@@Z @ 0x18005DE00 (--$CreateRefCountedObj@UAPP_NOTIFICATION_DATA@@U1@@@YA-AV-$ComPtr@V-$CRefCountedObject@UAPP_NOTI.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_c35d5355421e51b91e1b7dc40faf7951___ @ 0x18005DEE0 (Windows--Internal--ComTaskPool--QueueTask__lambda_c35d5355421e51b91e1b7dc40faf7951___.c)
 *     ?RaiseVisibilityChanged@ObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@IEAAJE@Z @ 0x180061BAC (-RaiseVisibilityChanged@ObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall CImmersiveApp::_ScheduleApplicationNotifications(
        CImmersiveApp *this,
        const struct APP_CHANGE_INFO *a2,
        unsigned __int64 a3)
{
  struct IUnknown *v6; // rcx
  struct IUnknown *v7; // rdi
  unsigned __int64 v8; // rcx
  const struct APP_CHANGE_INFO *v9; // rax
  char v10; // al
  int Object; // ebx
  struct APP_CHANGE_INFO *v12; // rcx
  __int64 v13; // rbx
  unsigned __int64 v14; // rbx
  char v15; // si
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  struct IUnknown *v19; // [rsp+30h] [rbp-50h] BYREF
  struct APP_CHANGE_INFO *v20; // [rsp+38h] [rbp-48h] BYREF
  char v21; // [rsp+40h] [rbp-40h]
  unsigned __int64 v22[3]; // [rsp+48h] [rbp-38h] BYREF
  void *Block[2]; // [rsp+60h] [rbp-20h] BYREF
  char *v24; // [rsp+70h] [rbp-10h]
  __int64 v25; // [rsp+78h] [rbp-8h]
  int v26; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v27; // [rsp+C8h] [rbp+48h] BYREF

  v22[1] = -2LL;
  v19 = 0LL;
  v26 = 1;
  (*(void (__fastcall **)(char *, GUID *, struct IUnknown **))(*((_QWORD *)this + 7) + 32LL))(
    (char *)this + 56,
    &GUID_00000000_0000_0000_c000_000000000046,
    &v19);
  v6 = v19;
  v7 = v19;
  v22[2] = (unsigned __int64)v19;
  if ( v19 )
  {
    ((void (__fastcall *)(struct IUnknown *))v19->lpVtbl->AddRef)(v19);
    v6 = v19;
  }
  if ( v6 )
  {
    v19 = 0LL;
    ((void (__fastcall *)(struct IUnknown *))v6->lpVtbl->Release)(v6);
  }
  if ( v7 )
  {
    if ( !*((_BYTE *)this + 744) )
      goto LABEL_15;
    if ( (*((_BYTE *)this + 536) & 1) != 0 )
    {
      if ( !*((_QWORD *)this + 53) || (v8 = 0LL, !a3) )
      {
LABEL_15:
        if ( BYTE4(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr) )
        {
          v10 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 14) + 392LL))((char *)this + 112);
          Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility::RaiseVisibilityChanged(
            (CImmersiveApp *)((char *)this + 128),
            v10 != 0);
          v27 = 0LL;
          v20 = 0LL;
          Object = IAMPrivate_QueryObject(
                     v7,
                     (const struct _GUID *)&SID_ImmersiveApplicationListeners,
                     &GUID_747669b9_e53c_46ce_b0d5_6629c216fafc,
                     (void **)&v20);
          if ( Object >= 0 )
            Object = (*(__int64 (__fastcall **)(struct APP_CHANGE_INFO *, __int64 *))(*(_QWORD *)v20 + 24LL))(v20, &v27);
          v12 = v20;
          if ( v20 )
          {
            v20 = 0LL;
            (*(void (__fastcall **)(struct APP_CHANGE_INFO *))(*(_QWORD *)v12 + 16LL))(v12);
          }
          if ( Object >= 0
            && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v27 + 24LL))(v27, &v26) >= 0
            && v26
            && (int)CImmersiveApp::_AddNotificationsAndResolve(this, a2, a3, &v20, v22) >= 0 )
          {
            v13 = v27;
            Block[0] = v20;
            Block[1] = (void *)v22[0];
            v24 = (char *)this + 96;
            if ( this != (CImmersiveApp *)-96LL )
              (*(void (__fastcall **)(char *))(*((_QWORD *)this + 12) + 8LL))((char *)this + 96);
            v25 = v13;
            if ( v13 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
            CreateRefCountedObj<APP_NOTIFICATION_DATA,APP_NOTIFICATION_DATA>(v22, Block);
            v14 = v22[0];
            if ( v22[0] )
            {
              v15 = *((_BYTE *)this + 711);
              v20 = (struct APP_CHANGE_INFO *)v22[0];
              (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v22[0] + 8LL))(v22[0]);
              v21 = v15;
              Windows::Internal::ComTaskPool::QueueTask__lambda_c35d5355421e51b91e1b7dc40faf7951___(
                v17,
                v16,
                LODWORD(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr),
                &v20);
              if ( v20 )
                (*(void (__fastcall **)(struct APP_CHANGE_INFO *))(*(_QWORD *)v20 + 16LL))(v20);
            }
            if ( v14 )
              (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v14 + 16LL))(v14);
            operator delete(Block[0]);
            if ( v25 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
            if ( v24 )
              (*(void (__fastcall **)(char *))(*(_QWORD *)v24 + 16LL))(v24);
          }
          v18 = v27;
          if ( v27 )
          {
            v27 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
          }
        }
        goto LABEL_39;
      }
      v9 = a2;
      while ( *(_DWORD *)v9 != 8 )
      {
        ++v8;
        v9 = (const struct APP_CHANGE_INFO *)((char *)v9 + 16);
        if ( v8 >= a3 )
          goto LABEL_15;
      }
    }
    CImmersiveApp::_ClearForegroundBoostHintedProcess(this);
    *((_BYTE *)this + 744) = 0;
    goto LABEL_15;
  }
LABEL_39:
  if ( v7 )
    ((void (__fastcall *)(struct IUnknown *))v7->lpVtbl->Release)(v7);
}
