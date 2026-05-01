/*
 * XREFs of ?ReportVisibilityOverride@CImmersiveApp@@UEAA_NW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@W4OVERRIDE_IMMUNITY_CHANGE@@W4ReportVisibilityOverrideOptions@@@Z @ 0x180058670
 * Callers:
 *     <none>
 * Callees:
 *     ?IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180025CF4 (-IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveAp.c)
 *     SHIsSameObject @ 0x18002748C (SHIsSameObject.c)
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x180058EA0 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     ?SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4VisibilityOverrideSource@@@Z @ 0x18005BBE0 (-SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4V.c)
 *     ?ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSource@@@Z @ 0x18005BC24 (-ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSour.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CImmersiveApp::ReportVisibilityOverride(unsigned __int64 a1, int a2, __int64 a3, int a4, char a5)
{
  int v7; // ebx
  char IsReportingEnabled; // bp
  _BYTE *v9; // r14
  int v10; // eax
  struct IImmersiveMonitor *v11; // rcx
  int v13; // [rsp+28h] [rbp-30h] BYREF
  __int64 v14; // [rsp+30h] [rbp-28h]
  struct IImmersiveMonitor *v15; // [rsp+60h] [rbp+8h] BYREF

  v7 = 0;
  IsReportingEnabled = 0;
  v9 = (_BYTE *)(a1 + 152);
  if ( *(_BYTE *)(a1 + 336) && !*(_BYTE *)(a1 + 337) || a2 == 2 )
  {
    v10 = *(_DWORD *)(a1 + 512);
    IsReportingEnabled = a2 != v10;
    if ( a2 != v10 )
    {
      if ( a2 == 2 )
      {
        v15 = 0LL;
        (*(void (__fastcall **)(unsigned __int64, struct IImmersiveMonitor **))(*(_QWORD *)a1 + 464LL))(a1, &v15);
        IsReportingEnabled = CReportWindowVisibilityChange::IsReportingEnabled(
                               (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
                               v15,
                               (struct IImmersiveApplicationInternal *)(a1 & -(__int64)(a1 != 112)));
        v11 = v15;
        if ( v15 )
        {
          v15 = 0LL;
          (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
      else
      {
        if ( a4 != 2
          && (unsigned int)SHIsSameObject(
                             (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(a1 & -(__int64)(a1 != 112)),
                             (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))CApplicationManagerUtility::g_pIAMGlobals[7].Ptr) )
        {
          return 0;
        }
        IsReportingEnabled = 1;
      }
    }
    if ( IsReportingEnabled )
    {
      *(_DWORD *)(a1 + 512) = a2;
      if ( a2 == 1 )
        CImmersiveApp::CImmersiveWindowCollection::SetVisibilityOverride(v9, 1LL, 1LL);
      else
        CImmersiveApp::CImmersiveWindowCollection::ClearVisibilityOverride(v9, 1LL);
      if ( (a5 & 1) != 0 && v9[184] && !v9[185] )
      {
        LOBYTE(v7) = a2 != 2;
        v13 = v7 + 13;
        v14 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)a1 + 384LL))(a1);
        CImmersiveApp::_ScheduleApplicationNotifications(
          (CImmersiveApp *)(a1 - 112),
          (const struct APP_CHANGE_INFO *const)&v13,
          1uLL);
      }
    }
  }
  return IsReportingEnabled;
}
