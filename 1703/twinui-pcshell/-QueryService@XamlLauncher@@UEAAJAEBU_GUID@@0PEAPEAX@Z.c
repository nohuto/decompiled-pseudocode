/*
 * XREFs of ?QueryService@XamlLauncher@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18014B190
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x18014B890 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 *     ?DidHolographicHandleHotKey@XamlLauncher@@AEAA_NXZ @ 0x18014D750 (-DidHolographicHandleHotKey@XamlLauncher@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall XamlLauncher::QueryService(
        XamlLauncher *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  IUnknown *v5; // rcx

  *a4 = 0LL;
  if ( *(_OWORD *)a2 == *(_OWORD *)&SID_ImmersiveLauncher.Revision )
    return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CWRLObjectWithSite,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveLauncher,IImmersiveLauncherTrayNotify,IImmersiveSessionIdleNotification,IImmersiveShellHookNotification,IServiceProvider,IImmersiveShellComponent,IImmersiveLauncherCortana,IXamlLauncherStateCallback,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
             (char *)this - 48,
             a3,
             a4);
  v5 = (IUnknown *)*((_QWORD *)this - 5);
  if ( v5 )
    return IUnknown_QueryService(v5, a2, a3, a4);
  else
    return -2147467262;
}
