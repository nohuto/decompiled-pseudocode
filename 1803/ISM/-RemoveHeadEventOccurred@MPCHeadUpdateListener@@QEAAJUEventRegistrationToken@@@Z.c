/*
 * XREFs of ?RemoveHeadEventOccurred@MPCHeadUpdateListener@@QEAAJUEventRegistrationToken@@@Z @ 0x180060E78
 * Callers:
 *     ?Unregister@SpectrumListener@@QEAAXXZ @ 0x18005F7B4 (-Unregister@SpectrumListener@@QEAAXXZ.c)
 *     ?SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUIMessageSession@@@Z @ 0x180070114 (-SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windows@@PEAVHomeGestureEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x180026CBC (-Remove@-$EventSource@U-$ITypedEventHandler@PEAVMPCManagerClient@MPCManager@Input@Internal@Windo.c)
 */

__int64 __fastcall MPCHeadUpdateListener::RemoveHeadEventOccurred(RTL_SRWLOCK *this, struct EventRegistrationToken a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)&this[17];
  EnterCriticalSection((LPCRITICAL_SECTION)&this[17]);
  v5 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Input::MPCManager::MPCManagerClient *,Windows::Internal::Input::MPCManager::HomeGestureEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
         this,
         (struct IUnknown *)a2.value);
  v6 = v5;
  if ( v5 >= 0 )
    v6 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x97,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadupdatelistener.cpp",
      (const char *)(unsigned int)v5);
  if ( v2 )
    LeaveCriticalSection(v2);
  return v6;
}
