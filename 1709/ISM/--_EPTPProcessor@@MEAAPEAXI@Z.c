/*
 * XREFs of ??_EPTPProcessor@@MEAAPEAXI@Z @ 0x18006E018
 * Callers:
 *     ??_EPTPProcessor@@OBA@EAAPEAXI@Z @ 0x18006F560 (--_EPTPProcessor@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001840 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??1MouseProcessor@@MEAA@XZ @ 0x18006B6D8 (--1MouseProcessor@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

PTPProcessor *__fastcall PTPProcessor::`vector deleting destructor'(PTPProcessor *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx

  *(_QWORD *)this = &PTPProcessor::`vftable';
  *((_QWORD *)this + 1) = &PTPProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 2) = &PTPProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 22) = &PTPProcessor::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 23) = &PTPProcessor::`vftable'{for `IMouseProcessorForwarding'};
  *((_QWORD *)this + 24) = &PTPProcessor::`vftable'{for `ICursorBasedInputProcessor'};
  *((_QWORD *)this + 25) = &PTPProcessor::`vftable'{for `IGetClosestInteractiveBounds'};
  *((_QWORD *)this + 26) = &PTPProcessor::`vftable'{for `IDisplayBindingObserver'};
  v4 = *((_QWORD *)this + 80);
  if ( v4 )
  {
    *((_QWORD *)this + 80) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 81);
  if ( v5 )
  {
    *((_QWORD *)this + 81) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *((_QWORD *)this + 440) = 0LL;
  v6 = *((_QWORD *)this + 82);
  if ( v6 )
  {
    *((_QWORD *)this + 82) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 82);
  if ( v7 )
  {
    *((_QWORD *)this + 82) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 81);
  if ( v8 )
  {
    *((_QWORD *)this + 81) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *((_QWORD *)this + 80);
  if ( v9 )
  {
    *((_QWORD *)this + 80) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  MouseProcessor::~MouseProcessor((PTPProcessor *)((char *)this + 8));
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
