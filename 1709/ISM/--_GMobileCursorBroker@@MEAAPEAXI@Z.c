/*
 * XREFs of ??_GMobileCursorBroker@@MEAAPEAXI@Z @ 0x18002F07C
 * Callers:
 *     ??_EMobileCursorBroker@@OCA@EAAPEAXI@Z @ 0x180030820 (--_EMobileCursorBroker@@OCA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001840 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

MobileCursorBroker *__fastcall MobileCursorBroker::`scalar deleting destructor'(MobileCursorBroker *this, char a2)
{
  HMODULE v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx

  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *(_QWORD *)this = &MobileCursorBroker::`vftable'{for `ICursorBroker'};
  *((_QWORD *)this + 1) = &MobileCursorBroker::`vftable'{for `ICursorManagerClient'};
  *((_QWORD *)this + 2) = &MobileCursorBroker::`vftable'{for `IInputDisplayOrientationListener'};
  *((_QWORD *)this + 3) = &MobileCursorBroker::`vftable'{for `IRemoteCursorBroker'};
  *((_QWORD *)this + 4) = &MobileCursorBroker::`vftable'{for `RefCountedObject'};
  v4 = (HMODULE)*((_QWORD *)this + 6);
  if ( v4 )
  {
    FreeLibrary(v4);
    *((_QWORD *)this + 6) = 0LL;
  }
  v5 = *((_QWORD *)this + 170);
  if ( v5 )
  {
    *((_QWORD *)this + 170) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 169);
  if ( v6 )
  {
    *((_QWORD *)this + 169) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 168);
  if ( v7 )
  {
    *((_QWORD *)this + 168) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 167);
  if ( v8 )
  {
    *((_QWORD *)this + 167) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  operator delete(*((void **)this + 164));
  v9 = *((_QWORD *)this + 11);
  if ( v9 )
  {
    *((_QWORD *)this + 11) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  *((_QWORD *)this + 4) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
