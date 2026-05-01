/*
 * XREFs of ?ReportVisibilityOverride@CImmersiveApp@@UEAA_NW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@W4OVERRIDE_IMMUNITY_CHANGE@@W4ReportVisibilityOverrideOptions@@@Z @ 0x18012FFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x180003D68 (-IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInter.c)
 *     ?IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180003ECC (-IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveAp.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x1800485A0 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IsApplicationWindowVisible@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1800F93EC (-IsApplicationWindowVisible@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSource@@@Z @ 0x18012D79C (-ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSour.c)
 *     ?SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4VisibilityOverrideSource@@@Z @ 0x1801308E0 (-SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4V.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CImmersiveApp::ReportVisibilityOverride(RTL_SRWLOCK *a1, int a2, __int64 a3, __int64 a4, char a5)
{
  int v7; // ebx
  char IsReportingEnabled; // bp
  CImmersiveApp::CImmersiveWindowCollection *v9; // r14
  int v10; // edx
  __int64 v11; // r8
  int v12; // r9d
  int v14; // [rsp+28h] [rbp-30h] BYREF
  __int64 v15; // [rsp+30h] [rbp-28h]
  struct IImmersiveMonitor *v16; // [rsp+60h] [rbp+8h] BYREF

  v7 = 0;
  IsReportingEnabled = 0;
  v9 = (CImmersiveApp::CImmersiveWindowCollection *)&a1[19];
  if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowVisible((CImmersiveApp::CImmersiveWindowCollection *)&a1[19])
    || v10 == 2 )
  {
    IsReportingEnabled = a2 != LODWORD(a1[64].Ptr);
    if ( a2 != LODWORD(a1[64].Ptr) )
    {
      if ( a2 == 2 )
      {
        v16 = 0LL;
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v16);
        (*((void (__fastcall **)(RTL_SRWLOCK *, struct IImmersiveMonitor **))a1->Ptr + 58))(a1, &v16);
        IsReportingEnabled = CReportWindowVisibilityChange::IsReportingEnabled(
                               (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
                               (struct IUnknown *)v16,
                               (struct IUnknown *)((unsigned __int64)a1 & -(__int64)(a1 != (RTL_SRWLOCK *)112)));
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v16);
      }
      else
      {
        if ( v12 != 2
          && CReportWindowVisibilityChange::IsOverrideImmuneApplication(
               (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
               (struct IUnknown *)((unsigned __int64)a1 & ((unsigned __int128)-(__int128)(unsigned __int64)&a1[-14] >> 64))) )
        {
          return 0;
        }
        IsReportingEnabled = 1;
      }
    }
    if ( IsReportingEnabled )
    {
      LODWORD(a1[64].Ptr) = a2;
      if ( a2 == 1 )
        CImmersiveApp::CImmersiveWindowCollection::SetVisibilityOverride(v9, 1LL, 1LL);
      else
        CImmersiveApp::CImmersiveWindowCollection::ClearVisibilityOverride(v9, 1LL, v11);
      if ( (a5 & 1) != 0 && CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowVisible(v9) )
      {
        LOBYTE(v7) = a2 != 2;
        v14 = v7 + 13;
        v15 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *))a1->Ptr + 48))(a1);
        CImmersiveApp::_ScheduleApplicationNotifications(a1 - 14, (const struct APP_CHANGE_INFO *const)&v14, 1uLL);
      }
    }
  }
  return IsReportingEnabled;
}
