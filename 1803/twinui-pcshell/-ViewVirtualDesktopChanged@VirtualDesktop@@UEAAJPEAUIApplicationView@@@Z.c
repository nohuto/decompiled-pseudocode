/*
 * XREFs of ?ViewVirtualDesktopChanged@VirtualDesktop@@UEAAJPEAUIApplicationView@@@Z @ 0x18008A8E0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180054224 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180054260 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_ef2e29dadc09aecb7a7bd0b9bbc37d0e__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop_____ptr64_enum_Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty___ @ 0x180261840 (Microsoft--WRL--InvokeTraits_2_--InvokeDelegates__lambda_ef2e29dadc09aecb7a7bd0b9bbc37d0e__Windo.c)
 */

__int64 __fastcall VirtualDesktop::ViewVirtualDesktopChanged(RTL_SRWLOCK *this, struct IApplicationView *a2)
{
  RTL_SRWLOCK *v2; // rdi
  RTL_SRWLOCK *v3; // rbx
  __int64 v4; // rbx
  volatile int *v6; // rdx
  _QWORD v7[2]; // [rsp+20h] [rbp-10h] BYREF
  int v8; // [rsp+50h] [rbp+20h] BYREF
  __int64 v9; // [rsp+60h] [rbp+30h] BYREF
  RTL_SRWLOCK *v10; // [rsp+68h] [rbp+38h] BYREF

  v9 = 0LL;
  v10 = this - 2;
  v2 = this + 8;
  v8 = 3;
  v7[0] = &v10;
  v3 = this + 9;
  v7[1] = &v8;
  AcquireSRWLockExclusive(this + 9);
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v9, v2);
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  v4 = v9;
  if ( v9 )
  {
    Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_ef2e29dadc09aecb7a7bd0b9bbc37d0e__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop_____ptr64_enum_Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty___(
      v7,
      v9,
      v2);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v4, v6);
  }
  return 0LL;
}
