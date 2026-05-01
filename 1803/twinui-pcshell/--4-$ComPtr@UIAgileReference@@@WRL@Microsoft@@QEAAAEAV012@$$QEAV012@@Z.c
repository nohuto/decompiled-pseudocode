/*
 * XREFs of ??4?$ComPtr@UIAgileReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180091F9C
 * Callers:
 *     ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x180096048 (--B-$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ.c)
 *     ??4?$GitPtrSupportsAgile@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Internal@Windows@@QEAAAEAV012@$$QEAV012@@Z @ 0x18009E878 (--4-$GitPtrSupportsAgile@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Wi.c)
 *     ??$AsAgile@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@YAJPEAUIAsyncCallbackDispatcher@@PEAVAgileRef@01@@Z @ 0x18018C8E4 (--$AsAgile@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@YAJPEAUIAsyncCallbackDispatcher@@PEAVAgile.c)
 *     ??$CreateAgileHelper@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@@Details@WRL@Microsoft@@YAJPEAUIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@PEAPEAU34567@@Z @ 0x1801E3A84 (--$CreateAgileHelper@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@@Details@.c)
 *     ??$CreateAgileHelper@U?$ITypedEventHandler@PEAUIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktopCollectionChangedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAUIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktopCollectionChangedEventArgs@2345@@Foundation@Windows@@PEAPEAU345@@Z @ 0x18025BBD0 (--$CreateAgileHelper@U-$ITypedEventHandler@PEAUIVirtualDesktopDataSource@Multitasking@Composable.c)
 *     ??$CreateAgileHelper@U?$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopProperty@2345@@Foundation@Windows@@PEAPEAU345@@Z @ 0x180261754 (--$CreateAgileHelper@U-$ITypedEventHandler@PEAUIVirtualDesktop@Multitasking@ComposableShell@Inte.c)
 *     ??$AsAgile@UISplashScreen@@@WRL@Microsoft@@YAJPEAUISplashScreen@@PEAVAgileRef@01@@Z @ 0x1802B16C4 (--$AsAgile@UISplashScreen@@@WRL@Microsoft@@YAJPEAUISplashScreen@@PEAVAgileRef@01@@Z.c)
 *     ??$AsAgile@UIUnknown@@@WRL@Microsoft@@YAJPEAUIUnknown@@PEAVAgileRef@01@@Z @ 0x1802B411C (--$AsAgile@UIUnknown@@@WRL@Microsoft@@YAJPEAUIUnknown@@PEAVAgileRef@01@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IAgileReference>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( &v7 != a2 )
  {
    v4 = *a2;
    *a2 = 0LL;
    v3 = v4;
  }
  v5 = *a1;
  *a1 = v3;
  v7 = v5;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v7);
  return a1;
}
