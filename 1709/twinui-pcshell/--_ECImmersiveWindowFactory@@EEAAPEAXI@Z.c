/*
 * XREFs of ??_ECImmersiveWindowFactory@@EEAAPEAXI@Z @ 0x1801DFF50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveWindowFactoryBase@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1801E02E4 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveWindowFactory.c)
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 */

CImmersiveWindowFactory *__fastcall CImmersiveWindowFactory::`vector deleting destructor'(
        CImmersiveWindowFactory *this,
        char a2)
{
  *(_QWORD *)this = &CImmersiveWindowFactory::`vftable'{for `CImmersiveWindowFactoryBase'};
  *((_QWORD *)this + 1) = &CImmersiveWindowFactory::`vftable'{for `CWrlLightweightHandlerBase'};
  *((_QWORD *)this + 7) = &CImmersiveWindowFactory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::CloakedIid<IStdMarshalInfo>>'};
  *((_QWORD *)this + 11) = &CImmersiveWindowFactory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IConfigureWindowFactory>'};
  *((_QWORD *)this + 12) = &CImmersiveWindowFactory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::CloakedIid<ICoreWindowFactoryPriv>>'};
  *((_QWORD *)this + 24) = &CImmersiveWindowFactory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveWindowFactoryBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveWindowFactoryBase>(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
