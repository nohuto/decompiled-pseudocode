/*
 * XREFs of ??1CImmersiveWindowFactoryBase@@MEAA@XZ @ 0x1801DFBA0
 * Callers:
 *     ??_ECImmersiveWindowFactoryBase@@MEAAPEAXI@Z @ 0x1801DFB70 (--_ECImmersiveWindowFactoryBase@@MEAAPEAXI@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveWindowFactoryBase@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1801E02E4 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveWindowFactory.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CImmersiveWindowFactoryBase::~CImmersiveWindowFactoryBase(CImmersiveWindowFactoryBase *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CImmersiveWindowFactoryBase::`vftable';
  *((_QWORD *)this + 1) = &CImmersiveWindowFactoryBase::`vftable'{for `CWrlLightweightHandlerBase'};
  *((_QWORD *)this + 7) = &CImmersiveWindowFactoryBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::CloakedIid<IStdMarshalInfo>>'};
  *((_QWORD *)this + 11) = &CImmersiveWindowFactoryBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IConfigureWindowFactory>'};
  *((_QWORD *)this + 12) = &CImmersiveWindowFactoryBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::CloakedIid<ICoreWindowFactoryPriv>>'};
  CoTaskMemFree(*((LPVOID *)this + 20));
  v2 = *((_QWORD *)this + 23);
  if ( v2 )
  {
    *((_QWORD *)this + 23) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
