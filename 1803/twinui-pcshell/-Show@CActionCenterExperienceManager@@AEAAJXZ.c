/*
 * XREFs of ?Show@CActionCenterExperienceManager@@AEAAJXZ @ 0x18007C01C
 * Callers:
 *     ?OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18007BAD0 (-OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 *     ?HotKeyInvoked@CActionCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Windows@@@Z @ 0x18007C2F0 (-HotKeyInvoked@CActionCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Windo.c)
 * Callees:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18006BC78 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18007AE68 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?PositionView@CActionCenterExperienceManager@@AEAAJXZ @ 0x18007B700 (-PositionView@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ActionCenterLaunchSkippedDueToPolicy@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ @ 0x1801537A4 (-ActionCenterLaunchSkippedDueToPolicy@NotificationCenterTelemetry@NotificationCenterUITelemetry@.c)
 */

__int64 __fastcall CActionCenterExperienceManager::Show(CActionCenterExperienceManager *this)
{
  struct _TP_TIMER *ThreadpoolTimer; // rax
  struct _TP_TIMER *v3; // rcx
  int v4; // eax
  unsigned int v5; // edi
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 40) == 2 )
    return 0LL;
  if ( (unsigned int)SHWindowsPolicy(&POLID_DisableNotificationCenter) )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::ActionCenterLaunchSkippedDueToPolicy();
    return 2147943660LL;
  }
  else
  {
    if ( !*((_QWORD *)this + 63) )
    {
      ThreadpoolTimer = CreateThreadpoolTimer(
                          lambda_1c3b447f6acedbb56670dd3d7ac17fa7_::_lambda_invoker_cdecl_,
                          this,
                          0LL);
      wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
        (struct _TP_TIMER **)this + 63,
        ThreadpoolTimer);
      v3 = (struct _TP_TIMER *)*((_QWORD *)this + 63);
      pftDueTime = (struct _FILETIME)-50000000LL;
      SetThreadpoolTimer(v3, &pftDueTime, 0, 0);
    }
    if ( *((_QWORD *)this + 18) && (v4 = CActionCenterExperienceManager::PositionView(this), v5 = v4, v4 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x247,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v4,
        v9);
      return v5;
    }
    else
    {
      v6 = CSingleViewShellExperience::Show((__int64)this + 120, 0LL);
      v7 = v6;
      if ( v6 >= 0 )
        return 0LL;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x24A,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v6,
        v9);
      return v7;
    }
  }
}
