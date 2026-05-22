/*
 * XREFs of ??_GHapticsEngine@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z @ 0x1800DA5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAVSpatialNavigationUpdatedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002A0E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

Windows::Internal::SpatialInteractions::HapticsEngine *__fastcall Windows::Internal::SpatialInteractions::HapticsEngine::`scalar deleting destructor'(
        Windows::Internal::SpatialInteractions::HapticsEngine *this,
        __int64 a2)
{
  char v2; // si
  char *v4; // rdi
  char *v5; // rcx
  __int64 v6; // rcx
  void *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx

  v2 = a2;
  v4 = (char *)this + 128;
  v5 = (char *)*((_QWORD *)this + 23);
  if ( v5 )
  {
    LOBYTE(a2) = v5 != v4;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v5 + 32LL))(v5, a2);
    *((_QWORD *)v4 + 7) = 0LL;
  }
  v6 = *((_QWORD *)this + 15);
  if ( v6 )
  {
    *((_QWORD *)this + 15) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = (void *)*((_QWORD *)this + 14);
  if ( v7 )
    operator delete(v7);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  v8 = *((_QWORD *)this + 8);
  if ( v8 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>>::Release((volatile signed __int32 *)(2 * v8));
  v9 = *((_QWORD *)this + 6);
  if ( v9 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
