/*
 * XREFs of ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x18005681C
 * Callers:
 *     ?SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_DATA@@W4MonitorChangeOptions@@@Z @ 0x180051DB0 (-SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_D.c)
 *     ?HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x1800549A0 (-HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x180054A10 (-HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windo.c)
 *     ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x180054C00 (-HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z.c)
 *     ?HandleDeactivation@CImmersiveApp@@UEAAJW4ZBID@@@Z @ 0x180054D90 (-HandleDeactivation@CImmersiveApp@@UEAAJW4ZBID@@@Z.c)
 *     ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x180055160 (-HandleDestruction@CImmersiveApp@@UEAA-AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEA.c)
 *     ?ForgetThisApp@CImmersiveApp@@UEAAXW4ForgetReason@@PEA_N@Z @ 0x1800556B0 (-ForgetThisApp@CImmersiveApp@@UEAAXW4ForgetReason@@PEA_N@Z.c)
 *     ?ReportVisibilityOverride@CImmersiveApp@@UEAA_NW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@W4OVERRIDE_IMMUNITY_CHANGE@@W4ReportVisibilityOverrideOptions@@@Z @ 0x180056080 (-ReportVisibilityOverride@CImmersiveApp@@UEAA_NW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE.c)
 *     ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x180056F30 (-_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ.c)
 *     ?_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x180059A3C (-_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 *     CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56___::Invoke @ 0x18005C2C0 (CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56___--Invoke.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x180025750 (-_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     ?IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z @ 0x180050130 (-IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z.c)
 *     ?_AddNotificationsAndResolve@CImmersiveApp@@AEAAJQEBUAPP_CHANGE_INFO@@_KPEAPEAU2@PEA_K@Z @ 0x180056BE0 (-_AddNotificationsAndResolve@CImmersiveApp@@AEAAJQEBUAPP_CHANGE_INFO@@_KPEAPEAU2@PEA_K@Z.c)
 *     ?_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ @ 0x180057844 (-_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ.c)
 *     ??$CreateRefCountedObj@UAPP_NOTIFICATION_DATA@@U1@@@YA?AV?$ComPtr@V?$CRefCountedObject@UAPP_NOTIFICATION_DATA@@@@@WRL@Microsoft@@$$QEAUAPP_NOTIFICATION_DATA@@@Z @ 0x18005B9C4 (--$CreateRefCountedObj@UAPP_NOTIFICATION_DATA@@U1@@@YA-AV-$ComPtr@V-$CRefCountedObject@UAPP_NOTI.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_b80a549fac08ad064d4fba4063c5e56a___ @ 0x18005C698 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_b80a549fac08ad064d4fba4063c5e56a___.c)
 *     ?RaiseVisibilityChanged@ObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@IEAAJE@Z @ 0x18005FF30 (-RaiseVisibilityChanged@ObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall CImmersiveApp::_ScheduleApplicationNotifications(
        CImmersiveApp *this,
        const struct APP_CHANGE_INFO *a2,
        unsigned __int64 a3)
{
  struct IUnknown *v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  const struct APP_CHANGE_INFO *v9; // rax
  char v10; // al
  int Object; // r14d
  struct APP_CHANGE_INFO *v12; // rcx
  __int64 v13; // rbx
  unsigned __int64 v14; // rbx
  char v15; // si
  int Ptr; // esi
  IUnknown **v17; // rax
  struct APP_CHANGE_INFO *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // [rsp+38h] [rbp-29h] BYREF
  __int64 v21; // [rsp+40h] [rbp-21h] BYREF
  unsigned __int64 v22[3]; // [rsp+48h] [rbp-19h] BYREF
  unsigned __int64 v23; // [rsp+60h] [rbp-1h] BYREF
  char v24; // [rsp+68h] [rbp+7h]
  void *Block[2]; // [rsp+70h] [rbp+Fh] BYREF
  char *v26; // [rsp+80h] [rbp+1Fh]
  __int64 v27; // [rsp+88h] [rbp+27h]
  int v28; // [rsp+C8h] [rbp+67h] BYREF
  struct APP_CHANGE_INFO *v29; // [rsp+E0h] [rbp+7Fh] BYREF

  v22[1] = -2LL;
  v6 = (struct IUnknown *)*CWRLObjectWithGITSite::_GetGITSitePtr((__int64)this + 40, &v21);
  v22[2] = (unsigned __int64)v6;
  if ( v6 )
    ((void (__fastcall *)(struct IUnknown *))v6->lpVtbl->AddRef)(v6);
  v7 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( v6 )
  {
    if ( !*((_BYTE *)this + 704) )
      goto LABEL_15;
    if ( (*((_BYTE *)this + 496) & 1) != 0 )
    {
      if ( !*((_QWORD *)this + 48) || (v8 = 0LL, !a3) )
      {
LABEL_15:
        if ( BYTE4(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr) )
        {
          v10 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 11) + 392LL))((char *)this + 88);
          Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility::RaiseVisibilityChanged(
            (CImmersiveApp *)((char *)this + 104),
            v10 != 0);
          v20 = 0LL;
          v29 = 0LL;
          Object = IAMPrivate_QueryObject(
                     v6,
                     (const struct _GUID *)&SID_ImmersiveApplicationListeners,
                     &GUID_747669b9_e53c_46ce_b0d5_6629c216fafc,
                     (void **)&v29);
          if ( Object >= 0 )
            Object = (*(__int64 (__fastcall **)(struct APP_CHANGE_INFO *, __int64 *))(*(_QWORD *)v29 + 24LL))(v29, &v20);
          v12 = v29;
          if ( v29 )
          {
            v29 = 0LL;
            (*(void (__fastcall **)(struct APP_CHANGE_INFO *))(*(_QWORD *)v12 + 16LL))(v12);
          }
          if ( Object >= 0
            && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 24LL))(v20, &v28) >= 0
            && v28
            && (int)CImmersiveApp::_AddNotificationsAndResolve(this, a2, a3, &v29, v22) >= 0 )
          {
            v13 = v20;
            Block[0] = v29;
            Block[1] = (void *)v22[0];
            v26 = (char *)this + 72;
            if ( this != (CImmersiveApp *)-72LL )
              (*(void (__fastcall **)(char *))(*((_QWORD *)this + 9) + 8LL))((char *)this + 72);
            v27 = v13;
            if ( v13 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
            CreateRefCountedObj<APP_NOTIFICATION_DATA,APP_NOTIFICATION_DATA>(v22, Block);
            v14 = v22[0];
            if ( v22[0] )
            {
              v15 = *((_BYTE *)this + 671);
              v23 = v22[0];
              (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v22[0] + 8LL))(v22[0]);
              v24 = v15;
              Ptr = (int)CApplicationManagerUtility::g_pIAMGlobals[11].Ptr;
              v17 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_b80a549fac08ad064d4fba4063c5e56a___(
                                   &v29,
                                   &v23);
              Windows::Internal::ComTaskPool::RunTask(3, 2u, Ptr, 0, *v17, 0LL);
              v18 = v29;
              if ( v29 )
              {
                v29 = 0LL;
                (*(void (__fastcall **)(struct APP_CHANGE_INFO *))(*(_QWORD *)v18 + 16LL))(v18);
              }
              if ( v23 )
                (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v23 + 16LL))(v23);
            }
            if ( v14 )
              (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v14 + 16LL))(v14);
            operator delete(Block[0]);
            if ( v27 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
            if ( v26 )
              (*(void (__fastcall **)(char *))(*(_QWORD *)v26 + 16LL))(v26);
          }
          v19 = v20;
          if ( v20 )
          {
            v20 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
          }
        }
        goto LABEL_41;
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
    *((_BYTE *)this + 704) = 0;
    goto LABEL_15;
  }
LABEL_41:
  if ( v6 )
    ((void (__fastcall *)(struct IUnknown *))v6->lpVtbl->Release)(v6);
}
