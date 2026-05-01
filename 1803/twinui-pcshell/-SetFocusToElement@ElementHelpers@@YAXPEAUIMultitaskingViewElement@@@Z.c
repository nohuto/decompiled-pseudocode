/*
 * XREFs of ?SetFocusToElement@ElementHelpers@@YAXPEAUIMultitaskingViewElement@@@Z @ 0x180294D78
 * Callers:
 *     ?KeyDown@CVirtualDesktopBarElement@@UEAA_NIW4ModifierKeys@@@Z @ 0x180295E00 (-KeyDown@CVirtualDesktopBarElement@@UEAA_NIW4ModifierKeys@@@Z.c)
 *     ?Invoke@AccessibleElementBase@@UEAAJXZ @ 0x18029B930 (-Invoke@AccessibleElementBase@@UEAAJXZ.c)
 *     ?ItemAddedInternal@CVirtualDesktopContainerElement@@IEAAXPEAUIObservableItem@@@Z @ 0x1802A7470 (-ItemAddedInternal@CVirtualDesktopContainerElement@@IEAAXPEAUIObservableItem@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18007150C (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800F7750 (--4-$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEA.c)
 */

void __fastcall ElementHelpers::SetFocusToElement(ElementHelpers *this, struct IMultitaskingViewElement *a2)
{
  ElementHelpers *v2; // rbx
  __int64 *v3; // rax
  __int64 v4; // [rsp+30h] [rbp+10h] BYREF
  ElementHelpers *v5; // [rsp+38h] [rbp+18h] BYREF
  __int64 v6; // [rsp+40h] [rbp+20h] BYREF

  v2 = this;
  v5 = this;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v5);
  (*(void (__fastcall **)(ElementHelpers *, __int64 *))(*(_QWORD *)v2 + 24LL))(v2, &v4);
  while ( v4 )
  {
    (*(void (__fastcall **)(__int64, ElementHelpers *))(*(_QWORD *)v4 + 288LL))(v4, v2);
    Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=((__int64 *)&v5, &v4);
    v3 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 24LL))(v4, &v6);
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>::operator=(&v4, v3);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
    v2 = v5;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v5);
}
