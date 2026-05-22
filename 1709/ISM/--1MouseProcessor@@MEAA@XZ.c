/*
 * XREFs of ??1MouseProcessor@@MEAA@XZ @ 0x18006B6D8
 * Callers:
 *     ??_GMouseProcessor@@MEAAPEAXI@Z @ 0x18006B640 (--_GMouseProcessor@@MEAAPEAXI@Z.c)
 *     ??_EPTPProcessor@@MEAAPEAXI@Z @ 0x18006E018 (--_EPTPProcessor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall MouseProcessor::~MouseProcessor(MouseProcessor *this)
{
  char *v2; // rsi
  int (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  *(_QWORD *)this = &MouseProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &MouseProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 21) = &MouseProcessor::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 22) = &MouseProcessor::`vftable'{for `IMouseProcessorForwarding'};
  *((_QWORD *)this + 23) = &MouseProcessor::`vftable'{for `ICursorBasedInputProcessor'};
  *((_QWORD *)this + 24) = &MouseProcessor::`vftable'{for `IGetClosestInteractiveBounds'};
  v2 = (char *)this + 200;
  *((_QWORD *)this + 25) = &MouseProcessor::`vftable'{for `IDisplayBindingObserver'};
  v13 = 0LL;
  v3 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3)
                                                                                          + 64LL))(*((_QWORD *)this + 3));
  v4 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( (**v3)(v3, &GUID_fb9e888a_e52b_424f_8fab_f05676d1b357, &v13) >= 0 )
    (*(void (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v13 + 64LL))(v13, 2LL, v2);
  if ( *((_QWORD *)this + 34) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 56LL))(*((_QWORD *)this + 3));
    operator delete(*((void **)this + 34));
    *((_QWORD *)this + 34) = 0LL;
  }
  v5 = *((_QWORD *)this + 71);
  if ( v5 )
  {
    *((_QWORD *)this + 71) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *((_QWORD *)this + 32) = 0LL;
  v6 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 71);
  if ( v7 )
  {
    *((_QWORD *)this + 71) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 69);
  if ( v8 )
  {
    *((_QWORD *)this + 69) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *((_QWORD *)this + 68);
  if ( v9 )
  {
    *((_QWORD *)this + 68) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = *((_QWORD *)this + 31);
  if ( v10 )
  {
    *((_QWORD *)this + 31) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = *((_QWORD *)this + 30);
  if ( v11 )
  {
    *((_QWORD *)this + 30) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = *((_QWORD *)this + 29);
  if ( v12 )
  {
    *((_QWORD *)this + 29) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  PointerProcessor::~PointerProcessor(this);
}
