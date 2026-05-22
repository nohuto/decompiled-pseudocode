/*
 * XREFs of ??_GSpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z @ 0x180072330
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18005D838 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

Windows::Internal::SpatialInteractions::SpatialRimDevice *__fastcall Windows::Internal::SpatialInteractions::SpatialRimDevice::`scalar deleting destructor'(
        Windows::Internal::SpatialInteractions::SpatialRimDevice *this,
        char a2)
{
  void *v4; // rcx
  void *v5; // rcx
  __int64 v6; // rcx
  signed int LastError; // eax
  unsigned __int64 v9; // rcx
  signed int v10; // eax
  unsigned __int64 v11; // rcx

  *((_QWORD *)this + 20) = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits>::`vftable';
  v4 = (void *)*((_QWORD *)this + 21);
  if ( v4 )
  {
    if ( !CloseHandle(v4) )
    {
      LastError = GetLastError();
      v9 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v9 = (unsigned int)LastError;
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v9);
      goto LABEL_15;
    }
    *((_QWORD *)this + 21) = 0LL;
  }
  *((_QWORD *)this + 18) = &Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits>::`vftable';
  v5 = (void *)*((_QWORD *)this + 19);
  if ( !v5 )
    goto LABEL_7;
  if ( !CloseHandle(v5) )
  {
LABEL_15:
    v10 = GetLastError();
    v11 = (unsigned __int16)v10 | 0x80070000;
    if ( v10 <= 0 )
      v11 = (unsigned int)v10;
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v11);
    JUMPOUT(0x180072435LL);
  }
  *((_QWORD *)this + 19) = 0LL;
LABEL_7:
  WindowsDeleteString(*((HSTRING *)this + 8));
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 11) = -1073741823;
  v6 = *((_QWORD *)this + 4);
  if ( v6 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
