/*
 * XREFs of ?HandleFramePositionAndSizeUpdateCompleted@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x1802520F0
 * Callers:
 *     ?OnFramePositionAndSizeUpdateCompleted@TabTipAdapter@KeyboardHosting@@QEAAJAEBUtagRECT@@@Z @ 0x18024A7E8 (-OnFramePositionAndSizeUpdateCompleted@TabTipAdapter@KeyboardHosting@@QEAAJAEBUtagRECT@@@Z.c)
 * Callees:
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x18005FEB0 (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@QEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1800F3430 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@QEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_InputHostingRS4Enhancement@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802414B0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_InputHostingRS4Enhancement@@@wil@@CA.c)
 *     ?GetCurrentMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@URect@Foundation@Windows@@@Z @ 0x180251BEC (-GetCurrentMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@URect@Foundation@Win.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DesktopXAMLKeyboardAnimation@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802528D4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DesktopXAMLKeyboardAnimation@@@wil@@.c)
 *     ?SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXAEBUPoint@Foundation@Windows@@I@Z @ 0x180252AA8 (-SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXAEBUPoint@Foundation@Windo.c)
 *     ?SaveGlobalPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXAEBUPoint@Foundation@Windows@@@Z @ 0x18025313C (-SaveGlobalPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXAEBUPoint@Foundation@Windows@@@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleFramePositionAndSizeUpdateCompleted(
        KeyboardHosting::TabTipAdapterPolicy *this,
        __int64 a2,
        _QWORD *a3,
        _DWORD *a4)
{
  char v8; // bp
  __int64 v9; // rcx
  HMONITOR CurrentMonitor; // rax
  HMONITOR v11; // rdi
  KeyboardHosting::MonitorInformation *v12; // rcx
  int PositionAndSizeOptions; // edi
  __int64 v14; // rdx
  unsigned int v16; // r8d
  int v17; // ecx
  int v18; // xmm1_4
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22[4]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v24; // [rsp+60h] [rbp+8h] BYREF
  int v25; // [rsp+64h] [rbp+Ch]

  *a3 = 0LL;
  *a4 = 0;
  if ( *((_BYTE *)this + 392) )
  {
    wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::ReportUsageToService(
      (__int64)this,
      a2,
      (__int64)a3);
    v8 = 0;
    *(_OWORD *)v22 = *(_OWORD *)a2;
    CurrentMonitor = KeyboardHosting::TabTipAdapterPolicy::GetCurrentMonitor(v9, (__int128 *)v22);
    v11 = CurrentMonitor;
    if ( *((HMONITOR *)this + 28) != CurrentMonitor )
    {
      *((_QWORD *)this + 28) = CurrentMonitor;
      KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 224));
      v8 = 1;
    }
    if ( *((_BYTE *)this + 448) )
    {
      v12 = (KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 280);
      if ( *((HMONITOR *)this + 35) != v11 )
      {
        *(_QWORD *)v12 = v11;
        KeyboardHosting::MonitorInformation::UpdateMonitorInfo(v12);
        v8 = 1;
      }
    }
    if ( v8 )
    {
      PositionAndSizeOptions = KeyboardHosting::TabTipAdapterPolicy::GetPositionAndSizeOptions(this, a3);
      if ( PositionAndSizeOptions < 0 )
      {
        v14 = 214LL;
LABEL_10:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
          (const char *)(unsigned int)PositionAndSizeOptions);
        return (unsigned int)PositionAndSizeOptions;
      }
      *a4 = 3;
    }
    wil::Feature<__WilFeatureTraits_Feature_DesktopXAMLKeyboardAnimation>::ReportUsageToService();
    PositionAndSizeOptions = KeyboardHosting::TabTipAdapterPolicy::GetPositionAndSizeOptions(this, a3);
    if ( PositionAndSizeOptions < 0 )
    {
      v14 = 238LL;
      goto LABEL_10;
    }
    *a4 = 3;
    v16 = *((_DWORD *)this + 124);
    if ( (v16 & 0xFFFFFFFA) == 0 && v16 != 1 && *((_DWORD *)this + 113) == 1 )
    {
      v17 = *((_DWORD *)this + 118);
      if ( ((v17 - 1) & 0xFFFFFFF6) == 0 && v17 != 9 && (*((_BYTE *)this + 476) || *((_BYTE *)this + 477)) )
      {
        v18 = *(_DWORD *)(a2 + 4);
        v24 = *(_DWORD *)a2;
        v25 = v18;
        KeyboardHosting::TabTipAdapterPolicy::SaveFloatingBottomPosition(
          this,
          (const struct Windows::Foundation::Point *)&v24,
          v16);
        wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::ReportUsageToService(v20, v19, v21);
        if ( *((_BYTE *)this + 448) )
          KeyboardHosting::TabTipAdapterPolicy::SaveGlobalPosition(
            this,
            (const struct Windows::Foundation::Point *)&v24);
      }
    }
    if ( *((_DWORD *)this + 113) == 2 && (*((_BYTE *)this + 476) || *((_BYTE *)this + 477)) )
    {
      *((_DWORD *)this + 100) = *(_DWORD *)a2;
      *((_DWORD *)this + 101) = *(_DWORD *)(a2 + 4);
      *((_BYTE *)this + 408) = 1;
    }
    *((_BYTE *)this + 393) = 1;
  }
  return 0LL;
}
