/*
 * XREFs of ?IsEqualByProxy@CApplicationFrameWrapper@@UEAA_NPEAUIApplicationFrameProxy@@@Z @ 0x180016C00
 * Callers:
 *     CApplicationFrameService::_FindFrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed___ @ 0x1800811E0 (CApplicationFrameService--_FindFrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed___.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$ChainInterfaces@UIApplicationFrameProxy@@UIApplicationFrame@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationFrameTabs@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180017050 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$ChainInterfaces.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

char __fastcall CApplicationFrameWrapper::IsEqualByProxy(
        CApplicationFrameWrapper *this,
        struct IApplicationFrameProxy *a2)
{
  struct IApplicationFrameProxy *v2; // r9
  char v3; // bl
  __int64 v5; // rax
  __int64 (__fastcall *v6)(); // rax
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  int v9; // edi
  void (*v10)(void); // rax
  void (*v11)(void); // rax
  char *v13; // [rsp+30h] [rbp+8h] BYREF
  char *v14; // [rsp+40h] [rbp+18h] BYREF

  v2 = (CApplicationFrameWrapper *)((char *)this - 8);
  v3 = 0;
  if ( this != (CApplicationFrameWrapper *)8 && a2 )
  {
    if ( v2 == a2 )
      return 1;
    v5 = *(_QWORD *)v2;
    v13 = 0LL;
    v14 = 0LL;
    if ( *(__int64 (__fastcall **)())v5 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Windows::Internal::ComposableShell::Tabs::IApplicationFrameTabs,Microsoft::WRL::FtmBase>::QueryInterface )
    {
      v6 = *(__int64 (__fastcall **)())(v5 + 8);
      v13 = (char *)this - 8;
      if ( v6 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Windows::Internal::ComposableShell::Tabs::IApplicationFrameTabs,Microsoft::WRL::FtmBase>::AddRef )
      {
        v7 = *((_QWORD *)v2 + 9);
        while ( v7 >= 0 )
        {
          if ( (_DWORD)v7 != 0x7FFFFFFF )
          {
            v8 = v7;
            v7 = _InterlockedCompareExchange64((volatile signed __int64 *)v2 + 9, v7 + 1, v7);
            if ( v8 != v7 )
              continue;
          }
          goto LABEL_14;
        }
        Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v7 + 16));
      }
      else
      {
        ((void (__fastcall *)(struct IApplicationFrameProxy *))v6)(v2);
      }
    }
    else if ( (*(int (__fastcall **)(struct IApplicationFrameProxy *, GUID *, char **))v5)(
                v2,
                &GUID_00000000_0000_0000_c000_000000000046,
                &v13) < 0 )
    {
      return v3;
    }
LABEL_14:
    v9 = (**(__int64 (__fastcall ***)(struct IApplicationFrameProxy *, GUID *, char **))a2)(
           a2,
           &GUID_00000000_0000_0000_c000_000000000046,
           &v14);
    if ( v9 >= 0 )
    {
      v10 = *(void (**)(void))(*(_QWORD *)v14 + 16LL);
      if ( (char *)v10 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Windows::Internal::ComposableShell::Tabs::IApplicationFrameTabs,Microsoft::WRL::FtmBase>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Windows::Internal::ComposableShell::Tabs::IApplicationFrameTabs,Microsoft::WRL::FtmBase>::Release();
      else
        v10();
    }
    v11 = *(void (**)(void))(*(_QWORD *)v13 + 16LL);
    if ( (char *)v11 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Windows::Internal::ComposableShell::Tabs::IApplicationFrameTabs,Microsoft::WRL::FtmBase>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Windows::Internal::ComposableShell::Tabs::IApplicationFrameTabs,Microsoft::WRL::FtmBase>::Release();
    else
      v11();
    if ( v9 >= 0 && v13 == v14 )
      return 1;
  }
  return v3;
}
