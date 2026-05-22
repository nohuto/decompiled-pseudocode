/*
 * XREFs of ??_GLegacyInjectionRawInputProvider@@MEAAPEAXI@Z @ 0x18006B2D0
 * Callers:
 *     ??_ELegacyInjectionRawInputProvider@@OBI@EAAPEAXI@Z @ 0x18006BF00 (--_ELegacyInjectionRawInputProvider@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
LegacyInjectionRawInputProvider *__fastcall LegacyInjectionRawInputProvider::`scalar deleting destructor'(
        LegacyInjectionRawInputProvider *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx

  *(_QWORD *)this = &LegacyInjectionRawInputProvider::`vftable'{for `IRemoteInputInjection'};
  *((_QWORD *)this + 1) = &LegacyInjectionRawInputProvider::`vftable'{for `IMessageObjectOwner'};
  *((_QWORD *)this + 2) = &LegacyInjectionRawInputProvider::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 3) = &LegacyInjectionRawInputProvider::`vftable'{for `RefCountedObject'};
  if ( *((_QWORD *)this + 12)
    && (*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 56LL))(*((_QWORD *)this + 5)) >= 0 )
  {
    operator delete(*((void **)this + 12));
    *((_QWORD *)this + 12) = 0LL;
  }
  v4 = *((_QWORD *)this + 5);
  if ( v4 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 10);
  if ( v5 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 8);
  if ( v6 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 7);
  if ( v7 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 6);
  if ( v8 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *((_QWORD *)this + 5);
  if ( v9 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      operator delete(this);
    else
      free(this);
  }
  return this;
}
