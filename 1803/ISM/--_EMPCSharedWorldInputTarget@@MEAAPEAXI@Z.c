/*
 * XREFs of ??_EMPCSharedWorldInputTarget@@MEAAPEAXI@Z @ 0x180088690
 * Callers:
 *     ??_EMPCSharedWorldInputTarget@@OBI@EAAPEAXI@Z @ 0x180089770 (--_EMPCSharedWorldInputTarget@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
MPCSharedWorldInputTarget *__fastcall MPCSharedWorldInputTarget::`vector deleting destructor'(
        MPCSharedWorldInputTarget *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &MPCSharedWorldInputTarget::`vftable'{for `IMPCInputTarget'};
  *((_QWORD *)this + 1) = &MPCSharedWorldInputTarget::`vftable'{for `IFocusInputTarget'};
  *((_QWORD *)this + 2) = &MPCSharedWorldInputTarget::`vftable'{for `IDCompInputTarget'};
  *((_QWORD *)this + 3) = &MPCSharedWorldInputTarget::`vftable'{for `RefCountedObject'};
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 5) + 144LL))(
    *((_QWORD *)this + 5),
    *((_QWORD *)this + 13));
  *((_QWORD *)this + 13) = 0LL;
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
