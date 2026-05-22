/*
 * XREFs of ??1PointerProcessor@@MEAA@XZ @ 0x180070C08
 * Callers:
 *     ??_GMobileTouchProcessor@@MEAAPEAXI@Z @ 0x18006A858 (--_GMobileTouchProcessor@@MEAAPEAXI@Z.c)
 *     ??1MouseProcessor@@MEAA@XZ @ 0x18006B6D8 (--1MouseProcessor@@MEAA@XZ.c)
 *     ??_EPointerProcessor@@MEAAPEAXI@Z @ 0x180070BC4 (--_EPointerProcessor@@MEAAPEAXI@Z.c)
 *     ??_GTouchProcessor@@MEAAPEAXI@Z @ 0x180072DC8 (--_GTouchProcessor@@MEAAPEAXI@Z.c)
 *     _MouseProcessor::MouseProcessor_::_1_::dtor$0 @ 0x1800CFB92 (_MouseProcessor--MouseProcessor_--_1_--dtor$0.c)
 *     _MouseProcessor::_MouseProcessor_::_1_::dtor$0 @ 0x1800CFBFD (_MouseProcessor--_MouseProcessor_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PointerProcessor::~PointerProcessor(PointerProcessor *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &PointerProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &PointerProcessor::`vftable'{for `RefCountedObject'};
  v2 = *((_QWORD *)this + 9);
  if ( v2 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *((_QWORD *)this + 7);
  if ( v3 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *((_QWORD *)this + 6);
  if ( v4 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 5);
  if ( v5 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
}
