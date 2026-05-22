/*
 * XREFs of ??_GDWMCursorBroker@@MEAAPEAXI@Z @ 0x1800898A0
 * Callers:
 *     ??_EDWMCursorBroker@@OBA@EAAPEAXI@Z @ 0x18008AB90 (--_EDWMCursorBroker@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
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
  *((_QWORD *)this + 1) = &DWMCursorBroker::`vftable'{for `IRemoteCursorBroker'};
  *((_QWORD *)this + 2) = &DWMCursorBroker::`vftable'{for `RefCountedObject'};
  v4 = (_QWORD *)((char *)this + 1320);
  v5 = 10LL;
  do
  {
    if ( *v4 )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 160) + 144LL))(*((_QWORD *)this + 160));
      *v4 = 0LL;
    }
    v4 += 2;
    --v5;
  }
  while ( v5 );
  v6 = *((_QWORD *)this + 163);
  if ( v6 )
  {
    *((_QWORD *)this + 163) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 162);
  if ( v7 )
  {
    *((_QWORD *)this + 162) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 161);
  if ( v8 )
  {
    *((_QWORD *)this + 161) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *((_QWORD *)this + 160);
  if ( v9 )
  {
    *((_QWORD *)this + 160) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  operator delete(*((void **)this + 157));
  v10 = *((_QWORD *)this + 4);
  if ( v10 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      operator delete(this);
    else
      free(this);
  }
  return this;
}
