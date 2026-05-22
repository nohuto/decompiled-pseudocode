/*
 * XREFs of ??0MPCManagerClient@@QEAA@PEAVMPCManagerClientConnection@@@Z @ 0x180026800
 * Callers:
 *     ?Create@MPCManagerClient@@SAJPEAPEAV1@@Z @ 0x1800264A0 (-Create@MPCManagerClient@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBamoConnection@Bamo@2@@Z @ 0x18000AD9C (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBamoConnection@Bamo@2@@Z.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMPCManager@@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002A150 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMPCM_ea_18002A150.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
MPCManagerClient *__fastcall MPCManagerClient::MPCManagerClient(
        MPCManagerClient *this,
        struct MPCManagerClientConnection *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rbx
  void (__fastcall ***v6)(_QWORD); // rax
  void (__fastcall ***v7)(_QWORD); // rcx
  __int64 v8; // rax
  __int64 v9; // rbx
  _QWORD *v11; // [rsp+58h] [rbp+10h]

  *((_QWORD *)this + 5) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient>::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IMPCManager,IWeakReferenceSource,Windows::Internal::Input::MPCManager::IMPCManagerClient>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Input::MPCManager::IMPCManagerClient>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &MPCManagerClient::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &MPCManagerClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IMPCManager,IWeakReferenceSource,Windows::Internal::Input::MPCManager::IMPCManagerClient>'};
  *((_QWORD *)this + 2) = &MPCManagerClient::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &MPCManagerClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Input::MPCManager::IMPCManagerClient>'};
  memset_0((char *)this + 48, 0, 0x3D8uLL);
  *((_DWORD *)this + 14) = 984;
  *((_DWORD *)this + 258) = 0;
  *((_QWORD *)this + 130) = 0LL;
  *((_QWORD *)this + 131) = 0LL;
  *((_QWORD *)this + 132) = 0LL;
  *((_QWORD *)this + 133) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 134);
  InitializeSRWLock((PSRWLOCK)this + 135);
  *((_QWORD *)this + 136) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 137);
  InitializeSRWLock((PSRWLOCK)this + 138);
  v11 = operator new(0x40uLL);
  *v11 = &BamoMPCManagerClientPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v11[1] = &BamoMPCManagerClientPrincipal::`vftable'{for `IMPCManagerClientPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((Microsoft::BamoImpl::BamoPrincipalImpl *)(v11 + 2), a2);
  v11[2] = &BamoImpl::BamoMPCManagerClientPrincipalImpl::`vftable';
  *v11 = &MPCManagerClientPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v11[1] = &BamoMPCManagerClientPrincipal::`vftable'{for `IMPCManagerClientPrincipal'};
  v11[7] = this;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient>::AddRef(this);
  v4 = *((_QWORD *)this + 131);
  *((_QWORD *)this + 131) = v11;
  (*(void (__fastcall **)(_QWORD *))*v11)(v11);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = *((_QWORD *)this + 132);
  *((_QWORD *)this + 132) = a2;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)((*(__int64 (__fastcall **)(struct MPCManagerClientConnection *))(*(_QWORD *)a2 + 40LL))(a2)
                                                    + 8));
  if ( v5 )
  {
    v6 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 40LL))(v5);
    (**v6)(v6);
  }
  v7 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 131);
  v8 = *((_QWORD *)this + 132);
  v9 = *(_QWORD *)(v8 + 152);
  *(_QWORD *)(v8 + 152) = v7;
  if ( v7 )
    (**v7)(v7);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  return this;
}
