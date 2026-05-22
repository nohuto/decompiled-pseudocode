/*
 * XREFs of ??_GMobileCursor@@MEAAPEAXI@Z @ 0x180030914
 * Callers:
 *     ??_EMobileCursor@@O7EAAPEAXI@Z @ 0x180030C30 (--_EMobileCursor@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001840 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ?DestroyCursor@MobileCursorBroker@@QEAAJPEAVMobileCursor@@@Z @ 0x18002FF40 (-DestroyCursor@MobileCursorBroker@@QEAAJPEAVMobileCursor@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
MobileCursor *__fastcall MobileCursor::`scalar deleting destructor'(MobileCursor *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned __int64 v8; // [rsp+28h] [rbp-20h]

  *(_QWORD *)this = &MobileCursor::`vftable'{for `ICursor'};
  *((_QWORD *)this + 1) = &MobileCursor::`vftable'{for `RefCountedObject'};
  MobileCursorBroker::DestroyCursor(*((MobileCursorBroker **)this + 3), this);
  v4 = *((_QWORD *)this + 3);
  if ( v4 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  LODWORD(v8) = 0;
  *(_OWORD *)((char *)this + 40) = v8;
  v5 = *((_QWORD *)this + 4);
  if ( v5 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 3);
  if ( v6 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
