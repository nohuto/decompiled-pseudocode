/*
 * XREFs of ??$CreateClassFactory@VXamlLauncherFactory@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180225030
 * Callers:
 *     <none>
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?AddRef@?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x18008DCA0 (-AddRef@-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ.c)
 *     ?Release@?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x18008DCF0 (-Release@-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$05@WRL@Microsoft@@$0A@UIClassFactory@@VNil@Details@23@V5623@V5623@V5623@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18008DDE4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$05@WRL@Microsoft@@$0A@UIClassFactory@@VNil@D.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VXamlLauncherFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVXamlLauncherFactory@@@Z @ 0x18022539C (--$MakeAndInitialize@VXamlLauncherFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVXamlLauncherF.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateClassFactory<XamlLauncherFactory>(
        _DWORD *a1,
        __int64 a2,
        _DWORD *a3,
        __int64 *a4)
{
  int v7; // eax
  volatile int *v8; // rdx
  _DWORD *v9; // rbx
  int CanCastTo; // edi
  void (*v11)(void); // rax
  _DWORD *v13; // [rsp+20h] [rbp-18h] BYREF

  v13 = 0LL;
  v7 = Microsoft::WRL::Details::MakeAndInitialize<XamlLauncherFactory,XamlLauncherFactory,>(&v13);
  v9 = v13;
  CanCastTo = v7;
  if ( v7 >= 0 )
  {
    v13[5] = *a1;
    *a4 = 0LL;
    if ( InlineIsEqualGUID(a3, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a4 = (__int64)v9;
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 8LL))(v9);
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<6>,0,IClassFactory,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
                    (__int64)v9,
                    a3);
      if ( CanCastTo >= 0 )
      {
        v11 = *(void (**)(void))(*(_QWORD *)*a4 + 8LL);
        if ( (char *)v11 == (char *)Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AddRef )
          Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AddRef(
            *a4,
            (volatile int *)Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AddRef);
        else
          v11();
      }
    }
    if ( (*(_BYTE *)a1 & 1) != 0 )
    {
      if ( CanCastTo < 0 )
      {
        v9[5] &= 0xFFFFFFFA;
      }
      else if ( (*(_BYTE *)a1 & 4) != 0 )
      {
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
      else
      {
        v9 = 0LL;
      }
    }
  }
  if ( v9 )
    Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
      (__int64)v9,
      v8);
  return (unsigned int)CanCastTo;
}
