/*
 * XREFs of ?RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJXZ @ 0x180252930
 * Callers:
 *     ??$MakeAndInitialize@VTabTipAdapterPolicy@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTabTipAdapterPolicy@KeyboardHosting@@@Z @ 0x180246060 (--$MakeAndInitialize@VTabTipAdapterPolicy@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJPEA.c)
 * Callees:
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x18005FEB0 (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$MakeAllocator@VTaskFlowImmersiveShellBroker@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180097C44 (--1-$MakeAllocator@VTaskFlowImmersiveShellBroker@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_InputHostingRS4Enhancement@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802414B0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_InputHostingRS4Enhancement@@@wil@@CA.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ @ 0x180249C78 (-InternalRelease@-$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VPositionAndSizeOptionsProvider@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPositionAndSizeOptionsProvider@KeyboardHosting@@@Z @ 0x18025088C (--$MakeAndInitialize@VPositionAndSizeOptionsProvider@KeyboardHosting@@V12@$$V@Details@WRL@Micros.c)
 *     ??0ViewRectProvider@KeyboardHosting@@QEAA@XZ @ 0x180251738 (--0ViewRectProvider@KeyboardHosting@@QEAA@XZ.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18025257C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 *     ?LoadGlobalPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NPEAUHKEY__@@AEAUtagPOINT@@@Z @ 0x180252618 (-LoadGlobalPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NPEAUHKEY__@@AEAUtagPOINT@@@Z.c)
 *     ?UpdatePinState@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ @ 0x1802532D0 (-UpdatePinState@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::RuntimeClassInitialize(volatile int **this)
{
  volatile int **v1; // rbx
  int v3; // ebx
  __int64 v4; // rdx
  KeyboardHosting::ViewRectProvider *v6; // rax
  KeyboardHosting::ViewRectProvider *v7; // rax
  volatile int *v8; // rdx
  KeyboardHosting::ViewRectProvider *v9; // r10
  HMONITOR v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  HMONITOR v14; // rax
  KeyboardHosting::MonitorInformation *v15; // rcx
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  POINT pt; // [rsp+30h] [rbp+8h] BYREF

  v1 = this + 25;
  Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease(this + 25);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<KeyboardHosting::PositionAndSizeOptionsProvider,KeyboardHosting::PositionAndSizeOptionsProvider,>(v1);
  if ( v3 < 0 )
  {
    v4 = 25LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease(this + 27);
  this[27] = 0LL;
  v6 = (KeyboardHosting::ViewRectProvider *)operator new(0xB8uLL, (const struct std::nothrow_t *)&std::nothrow);
  pt = (POINT)v6;
  if ( !v6 )
  {
    Microsoft::WRL::Details::MakeAllocator<TaskFlowImmersiveShellBroker>::~MakeAllocator<TaskFlowImmersiveShellBroker>((void **)&pt);
    v4 = 26LL;
    v3 = -2147024882;
    goto LABEL_3;
  }
  v7 = KeyboardHosting::ViewRectProvider::ViewRectProvider(v6);
  pt = (POINT)v7;
  v9 = v7;
  if ( v7 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewIconLoaderNotifications>::InternalAddRef(
      (__int64)v7,
      v8);
  this[27] = (volatile int *)v9;
  Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease((volatile int **)&pt);
  v10 = MonitorFromWindow(0LL, 1u);
  this[28] = (volatile int *)v10;
  KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::MonitorInformation *)(this + 28));
  this[42] = (volatile int *)v10;
  KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::MonitorInformation *)(this + 42));
  wil::Feature<__WilFeatureTraits_Feature_InputHostingRS4Enhancement>::ReportUsageToService(v12, v11, v13);
  if ( KeyboardHosting::TabTipAdapterPolicy::LoadGlobalPosition(
         (KeyboardHosting::TabTipAdapterPolicy *)this,
         HKEY_CURRENT_USER,
         &pt)
    || KeyboardHosting::TabTipAdapterPolicy::LoadGlobalPosition(
         (KeyboardHosting::TabTipAdapterPolicy *)this,
         HKEY_LOCAL_MACHINE,
         &pt) )
  {
    v14 = MonitorFromPoint(pt, 1u);
  }
  else
  {
    v14 = 0LL;
  }
  v15 = (KeyboardHosting::MonitorInformation *)(this + 35);
  if ( v14 )
    v10 = v14;
  *(_QWORD *)v15 = v10;
  KeyboardHosting::MonitorInformation::UpdateMonitorInfo(v15);
  updated = KeyboardHosting::TabTipAdapterPolicy::UpdatePinState((KeyboardHosting::TabTipAdapterPolicy *)this);
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      28LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)updated);
  return 0LL;
}
