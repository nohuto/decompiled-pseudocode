/*
 * XREFs of ??_GDWMCursorBroker@@MEAAPEAXI@Z @ 0x180024C3C
 * Callers:
 *     ??_EDWMCursorBroker@@OBI@EAAPEAXI@Z @ 0x180026400 (--_EDWMCursorBroker@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001840 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
DWMCursorBroker *__fastcall DWMCursorBroker::`scalar deleting destructor'(DWMCursorBroker *this, char a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx

  *(_QWORD *)this = &DWMCursorBroker::`vftable'{for `ICursorBroker'};
  *((_QWORD *)this + 1) = &DWMCursorBroker::`vftable'{for `IInputDisplayOrientationListener'};
  *((_QWORD *)this + 2) = &DWMCursorBroker::`vftable'{for `IRemoteCursorBroker'};
  *((_QWORD *)this + 3) = &DWMCursorBroker::`vftable'{for `RefCountedObject'};
  v4 = (_QWORD *)((char *)this + 1328);
  v5 = 10LL;
  do
  {
    if ( *v4 )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 161) + 144LL))(*((_QWORD *)this + 161));
      *v4 = 0LL;
    }
    v4 += 2;
    --v5;
  }
  while ( v5 );
  v6 = *((_QWORD *)this + 164);
  if ( v6 )
  {
    *((_QWORD *)this + 164) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 163);
  if ( v7 )
  {
    *((_QWORD *)this + 163) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 162);
  if ( v8 )
  {
    *((_QWORD *)this + 162) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *((_QWORD *)this + 161);
  if ( v9 )
  {
    *((_QWORD *)this + 161) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  operator delete(*((void **)this + 158));
  v10 = *((_QWORD *)this + 5);
  if ( v10 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCClickerProcessor::Uninitialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
