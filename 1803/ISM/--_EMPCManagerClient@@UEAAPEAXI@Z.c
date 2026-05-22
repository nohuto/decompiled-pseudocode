/*
 * XREFs of ??_EMPCManagerClient@@UEAAPEAXI@Z @ 0x180026690
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000F0F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAVSpatialNavigationUpdatedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002A0E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

MPCManagerClient *__fastcall MPCManagerClient::`vector deleting destructor'(MPCManagerClient *this, char a2)
{
  volatile signed __int32 *v4; // rcx
  volatile signed __int32 *v5; // rcx
  __int64 v6; // rcx
  void (__fastcall ***v7)(_QWORD); // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx

  *(_QWORD *)this = &MPCManagerClient::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &MPCManagerClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IMPCManager,IWeakReferenceSource,Windows::Internal::Input::MPCManager::IMPCManagerClient>'};
  *((_QWORD *)this + 2) = &MPCManagerClient::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &MPCManagerClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Input::MPCManager::IMPCManagerClient>'};
  EnterCriticalSection(&MPCManagerClient::s_creationLock);
  MPCManagerClient::s_instance = 0LL;
  LeaveCriticalSection(&MPCManagerClient::s_creationLock);
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 136);
  if ( v4 )
  {
    *((_QWORD *)this + 136) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v4);
  }
  v5 = (volatile signed __int32 *)*((_QWORD *)this + 133);
  if ( v5 )
  {
    *((_QWORD *)this + 133) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v5);
  }
  v6 = *((_QWORD *)this + 132);
  if ( v6 )
  {
    v7 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 40LL))(v6);
    (**v7)(v7);
  }
  v8 = *((_QWORD *)this + 131);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v9 = *((_QWORD *)this + 130);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = *((_QWORD *)this + 5);
  if ( v10 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>>::Release(2 * v10);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
