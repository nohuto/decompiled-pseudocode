/*
 * XREFs of ??1CImmersiveWindowFactoryBase@@MEAA@XZ @ 0x1801919B0
 * Callers:
 *     ??_ECImmersiveWindowFactoryBase@@MEAAPEAXI@Z @ 0x180191980 (--_ECImmersiveWindowFactoryBase@@MEAAPEAXI@Z.c)
 *     ??_ECImmersiveWindowFactory@@EEAAPEAXI@Z @ 0x180191D60 (--_ECImmersiveWindowFactory@@EEAAPEAXI@Z.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveWindowFactoryBase@@VNil@Details@23@V5623@V5623@V5623@V5623@V5623@V5623@V5623@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180192420 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VCImmersiveWindowFactoryBase@@VNil@De.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CImmersiveWindowFactoryBase::~CImmersiveWindowFactoryBase(CImmersiveWindowFactoryBase *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CImmersiveWindowFactoryBase::`vftable';
  *((_QWORD *)this + 1) = &CImmersiveWindowFactoryBase::`vftable'{for `CWrlLightweightHandlerBase'};
  *((_QWORD *)this + 5) = &CImmersiveWindowFactoryBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<IStdMarshalInfo>,Microsoft::WRL::Details::Nil>,1,0>'};
  *((_QWORD *)this + 6) = &CImmersiveWindowFactoryBase::`vftable'{for `IConfigureWindowFactory'};
  *((_QWORD *)this + 7) = &CImmersiveWindowFactoryBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<ICoreWindowFactoryPriv>,Microsoft::WRL::Details::Nil>,1,0>'};
  CoTaskMemFree(*((LPVOID *)this + 13));
  v2 = *((_QWORD *)this + 16);
  if ( v2 )
  {
    *((_QWORD *)this + 16) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
