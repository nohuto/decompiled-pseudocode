/*
 * XREFs of ??0MouseProcessor@@IEAA@PEAUInputProcessorCreateParams@@@Z @ 0x18006B4BC
 * Callers:
 *     ?Create@MouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18006BA60 (-Create@MouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 *     ??0PTPProcessor@@IEAA@PEAUInputProcessorCreateParams@@@Z @ 0x18006DEFC (--0PTPProcessor@@IEAA@PEAUInputProcessorCreateParams@@@Z.c)
 * Callees:
 *     ??0PointerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x180070B0C (--0PointerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
MouseProcessor *__fastcall MouseProcessor::MouseProcessor(MouseProcessor *this, struct DeviceInfo **a2)
{
  __int64 v4; // rcx
  struct DeviceInfo *v5; // rcx

  PointerProcessor::PointerProcessor(this, *a2, a2[1]);
  *(_QWORD *)this = &MouseProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &MouseProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 21) = &MouseProcessor::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 22) = &MouseProcessor::`vftable'{for `IMouseProcessorForwarding'};
  *((_QWORD *)this + 23) = &MouseProcessor::`vftable'{for `ICursorBasedInputProcessor'};
  *((_QWORD *)this + 24) = &MouseProcessor::`vftable'{for `IGetClosestInteractiveBounds'};
  *((_QWORD *)this + 25) = &MouseProcessor::`vftable'{for `IDisplayBindingObserver'};
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_DWORD *)this + 56) = 0;
  *((_BYTE *)this + 228) = 0;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_DWORD *)this + 130) = 0;
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_BYTE *)this + 560) = *((_BYTE *)a2 + 36);
  *((_QWORD *)this + 71) = 0LL;
  *((_WORD *)this + 288) = 0;
  *((_DWORD *)this + 56) = 0;
  *((_BYTE *)this + 264) = 0;
  *((_QWORD *)this + 34) = 0LL;
  v4 = *((_QWORD *)this + 71);
  if ( v4 )
  {
    *((_QWORD *)this + 71) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = a2[2];
  if ( v5
    && (**(int (__fastcall ***)(struct DeviceInfo *, GUID *, char *))v5)(
         v5,
         &GUID_9cc90918_33c0_4e97_85b4_faf84befe1a8,
         (char *)this + 256) >= 0 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 32) + 16LL))(*((_QWORD *)this + 32));
  }
  return this;
}
