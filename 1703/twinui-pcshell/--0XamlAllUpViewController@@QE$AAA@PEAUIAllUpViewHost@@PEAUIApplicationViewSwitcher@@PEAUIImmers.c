/*
 * XREFs of ??0XamlAllUpViewController@@QE$AAA@PEAUIAllUpViewHost@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@@Z @ 0x180142780
 * Callers:
 *     ?Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x18012D0E0 (-Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW.c)
 * Callees:
 *     ??0XamlBaseViewController@@IE$AAA@XZ @ 0x180145538 (--0XamlBaseViewController@@IE$AAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall XamlAllUpViewController::XamlAllUpViewController(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rbx

  XamlBaseViewController::XamlBaseViewController(a1 + 1);
  *a1 = &XamlAllUpViewController::`vftable';
  a1[1] = &XamlAllUpViewController::`vftable'{for `__IXamlBaseViewControllerPublicNonVirtuals'};
  a1[2] = &XamlAllUpViewController::`vftable'{for `IXamlMultitaskingViewController'};
  a1[3] = &XamlAllUpViewController::`vftable'{for `IXamlSwitcherWindowInteractionEvents'};
  a1[4] = &XamlAllUpViewController::`vftable'{for `Platform::Object's `XamlBaseViewController'};
  a1[5] = &XamlAllUpViewController::`vftable'{for `__abi_IUnknown's `XamlBaseViewController'};
  a1[6] = &XamlAllUpViewController::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource's `XamlBaseViewController'};
  a1[16] = &XamlAllUpViewController::`vftable'{for `__abi_IUnknown's `Platform::Details::IWeakReferenceSource'};
  a1[17] = &XamlAllUpViewController::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  v8 = a1[8];
  a1[8] = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = a1[9];
  a1[9] = a4;
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = a1[7];
  a1[7] = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return a1;
}
