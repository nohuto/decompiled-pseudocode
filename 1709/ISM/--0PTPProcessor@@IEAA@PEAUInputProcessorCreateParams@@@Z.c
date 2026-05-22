/*
 * XREFs of ??0PTPProcessor@@IEAA@PEAUInputProcessorCreateParams@@@Z @ 0x18006DEFC
 * Callers:
 *     ?Create@PTPProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18006E1B0 (-Create@PTPProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ??0MouseProcessor@@IEAA@PEAUInputProcessorCreateParams@@@Z @ 0x18006B4BC (--0MouseProcessor@@IEAA@PEAUInputProcessorCreateParams@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

PTPProcessor *__fastcall PTPProcessor::PTPProcessor(PTPProcessor *this, struct DeviceInfo **a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  MouseProcessor::MouseProcessor((PTPProcessor *)((char *)this + 8), a2);
  *(_QWORD *)this = &PTPProcessor::`vftable';
  *((_QWORD *)this + 1) = &PTPProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 2) = &PTPProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 22) = &PTPProcessor::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 23) = &PTPProcessor::`vftable'{for `IMouseProcessorForwarding'};
  *((_QWORD *)this + 24) = &PTPProcessor::`vftable'{for `ICursorBasedInputProcessor'};
  *((_QWORD *)this + 25) = &PTPProcessor::`vftable'{for `IGetClosestInteractiveBounds'};
  *((_QWORD *)this + 26) = &PTPProcessor::`vftable'{for `IDisplayBindingObserver'};
  *((_QWORD *)this + 80) = 0LL;
  *((_QWORD *)this + 81) = 0LL;
  *((_QWORD *)this + 82) = 0LL;
  *((_DWORD *)*a2 + 1) |= 2u;
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
  return this;
}
