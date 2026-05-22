/*
 * XREFs of ??0HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@QEAA@KKK@Z @ 0x180029E10
 * Callers:
 *     ?OnHomeGestureDetected@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@II@Z @ 0x18002A660 (-OnHomeGestureDetected@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@II@Z.c)
 *     ?OnButtonsChangedDuringHomeGesture@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@III@Z @ 0x18002A710 (-OnButtonsChangedDuringHomeGesture@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180029500 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

Windows::Internal::Input::MPCManager::HomeGestureEventArgs *__fastcall Windows::Internal::Input::MPCManager::HomeGestureEventArgs::HomeGestureEventArgs(
        Windows::Internal::Input::MPCManager::HomeGestureEventArgs *this,
        int a2,
        int a3,
        int a4)
{
  _QWORD *v4; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v9; // rcx
  Windows::Internal::Input::MPCManager::HomeGestureEventArgs *result; // rax

  v4 = (_QWORD *)((char *)this + 16);
  Microsoft::WRL::FtmBase::FtmBase((Windows::Internal::Input::MPCManager::HomeGestureEventArgs *)((char *)this + 16));
  v9 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Windows::Internal::Input::MPCManager::IHomeGestureEventArgs,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Windows::Internal::Input::MPCManager::IHomeGestureEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *v4 = &Microsoft::WRL::RuntimeClass<Windows::Internal::Input::MPCManager::IHomeGestureEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 7) = 1LL;
  if ( v9 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v9 + 8LL))(v9);
  *((_DWORD *)this + 17) = a3;
  *(_QWORD *)this = &Windows::Internal::Input::MPCManager::HomeGestureEventArgs::`vftable';
  *((_QWORD *)this + 1) = &Windows::Internal::Input::MPCManager::HomeGestureEventArgs::`vftable'{for `IWeakReferenceSource'};
  *v4 = &Windows::Internal::Input::MPCManager::HomeGestureEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  result = this;
  *((_DWORD *)this + 18) = a4;
  *((_DWORD *)this + 16) = a2;
  return result;
}
