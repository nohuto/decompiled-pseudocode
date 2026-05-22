/*
 * XREFs of ??_EMPCExclusiveInputTarget@@MEAAPEAXI@Z @ 0x180087340
 * Callers:
 *     ??_EMPCExclusiveInputTarget@@OBI@EAAPEAXI@Z @ 0x180088360 (--_EMPCExclusiveInputTarget@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

MPCExclusiveInputTarget *__fastcall MPCExclusiveInputTarget::`vector deleting destructor'(
        MPCExclusiveInputTarget *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  *(_QWORD *)this = &MPCExclusiveInputTarget::`vftable'{for `IMPCInputTarget'};
  *((_QWORD *)this + 1) = &MPCExclusiveInputTarget::`vftable'{for `IFocusInputTarget'};
  *((_QWORD *)this + 2) = &MPCExclusiveInputTarget::`vftable'{for `IDCompInputTarget'};
  *((_QWORD *)this + 3) = &MPCExclusiveInputTarget::`vftable'{for `RefCountedObject'};
  v4 = *((_QWORD *)this + 10);
  if ( v4 )
    NtCloseCompositionInputSink(v4);
  v5 = *((_QWORD *)this + 6);
  if ( v5 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 5);
  if ( v6 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
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
