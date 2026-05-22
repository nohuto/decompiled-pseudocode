/*
 * XREFs of ??_GTouchProcessor@@MEAAPEAXI@Z @ 0x180072DC8
 * Callers:
 *     ??_ETouchProcessor@@O7EAAPEAXI@Z @ 0x180073B20 (--_ETouchProcessor@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001840 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1PointerProcessor@@MEAA@XZ @ 0x180070C08 (--1PointerProcessor@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

TouchProcessor *__fastcall TouchProcessor::`scalar deleting destructor'(TouchProcessor *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)this = &TouchProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &TouchProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 21) = &TouchProcessor::`vftable';
  v4 = *((_QWORD *)this + 125);
  if ( v4 )
  {
    *((_QWORD *)this + 125) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 124);
  if ( v5 )
  {
    *((_QWORD *)this + 124) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 123);
  if ( v6 )
  {
    *((_QWORD *)this + 123) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 122);
  if ( v7 )
  {
    *((_QWORD *)this + 122) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  PointerProcessor::~PointerProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
