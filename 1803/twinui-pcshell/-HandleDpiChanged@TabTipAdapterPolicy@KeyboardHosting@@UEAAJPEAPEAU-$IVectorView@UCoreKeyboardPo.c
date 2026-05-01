/*
 * XREFs of ?HandleDpiChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@6@@Z @ 0x180251FB0
 * Callers:
 *     ?OnDpiChanged@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x18024A50C (-OnDpiChanged@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 * Callees:
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x18005FEB0 (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@QEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1800F3430 (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@QEAAJPEAPEAU-$IVectorView@UCoreK.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleDpiChanged(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  int PositionAndSizeOptions; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  *a3 = 0;
  KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::MonitorInformation *)(a1 + 208));
  KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::MonitorInformation *)(a1 + 264));
  KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::MonitorInformation *)(a1 + 320));
  PositionAndSizeOptions = KeyboardHosting::TabTipAdapterPolicy::GetPositionAndSizeOptions(
                             (KeyboardHosting::TabTipAdapterPolicy *)(a1 - 16),
                             a2);
  v7 = PositionAndSizeOptions;
  if ( PositionAndSizeOptions >= 0 )
  {
    *a3 = 3;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x254,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)PositionAndSizeOptions);
    return v7;
  }
}
