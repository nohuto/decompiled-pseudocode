/*
 * XREFs of ?InternalRelease@?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@IEAAKXZ @ 0x180095790
 * Callers:
 *     _lambda_4181134c5161f261fff3e61f273c9fd8_::operator() @ 0x18001E090 (_lambda_4181134c5161f261fff3e61f273c9fd8_--operator().c)
 *     ?OnApplicationViewChanged@AgileApplicationViewChangeListenerConverter@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18001EBC0 (-OnApplicationViewChanged@AgileApplicationViewChangeListenerConverter@@UEAAJPEAUIApplicationView.c)
 *     ?RuntimeClassInitialize@AgileApplicationViewChangeListenerConverter@@QEAAJPEAUIApplicationViewChangeListener@@@Z @ 0x18001F0F8 (-RuntimeClassInitialize@AgileApplicationViewChangeListenerConverter@@QEAAJPEAUIApplicationViewCh.c)
 *     ?RegisterForApplicationViewChanges@CApplicationViewManager@@UEAAJPEAUIApplicationViewChangeListener@@PEAK@Z @ 0x18002E3D0 (-RegisterForApplicationViewChanges@CApplicationViewManager@@UEAAJPEAUIApplicationViewChangeListe.c)
 *     ?ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ @ 0x1800978D0 (-ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ.c)
 *     ??1?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@QEAA@XZ @ 0x180097C70 (--1-$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIApplicationViewChangeListener@@@@AEAAXXZ @ 0x180097D24 (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIApplicationViewChangeListener@@@@AEAAXXZ.c)
 *     ??1Iterator@?$ObjectArrayAdapter@UIApplicationViewChangeListener@@@@QEAA@XZ @ 0x180097DB0 (--1Iterator@-$ObjectArrayAdapter@UIApplicationViewChangeListener@@@@QEAA@XZ.c)
 *     ??_GAgileApplicationViewChangeListenerConverter@@UEAAPEAXI@Z @ 0x18013AF90 (--_GAgileApplicationViewChangeListenerConverter@@UEAAPEAXI@Z.c)
 *     ?RegisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationViewChangeListener@@PEAK@Z @ 0x18013DF00 (-RegisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicat.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall Microsoft::WRL::ComPtr<IApplicationViewChangeListener>::InternalRelease(__int64 *a1)
{
  unsigned int result; // eax
  __int64 v3; // rcx
  __int64 (*v4)(void); // rax

  result = 0;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    v4 = *(__int64 (**)(void))(*(_QWORD *)v3 + 16LL);
    if ( (char *)v4 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>::Release )
      return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>::Release(
               v3,
               (volatile int *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>::Release);
    else
      return v4();
  }
  return result;
}
