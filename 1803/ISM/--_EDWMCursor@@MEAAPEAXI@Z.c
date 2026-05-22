/*
 * XREFs of ??_EDWMCursor@@MEAAPEAXI@Z @ 0x18008AD40
 * Callers:
 *     ??_EDWMCursor@@OBA@EAAPEAXI@Z @ 0x18008B6B0 (--_EDWMCursor@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CommandRegistrationToken@TestCommandHost@@QEAA@XZ @ 0x1800098AC (--1CommandRegistrationToken@TestCommandHost@@QEAA@XZ.c)
 *     ?UnregisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x18008A5C0 (-UnregisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
DWMCursor *__fastcall DWMCursor::`vector deleting destructor'(DWMCursor *this, char a2)
{
  char *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)this = &DWMCursor::`vftable'{for `ICursor3D'};
  *((_QWORD *)this + 1) = &DWMCursor::`vftable'{for `IGetClosestInteractiveBounds'};
  *((_QWORD *)this + 2) = &DWMCursor::`vftable'{for `RefCountedObject'};
  if ( *((_BYTE *)this + 57) )
    DWMCursorBroker::UnregisterCursor(*((DWMCursorBroker **)this + 4), this);
  TestCommandHost::CommandRegistrationToken::~CommandRegistrationToken((DWMCursor *)((char *)this + 128));
  v4 = (char *)*((_QWORD *)this + 10);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  v5 = *((_QWORD *)this + 9);
  if ( v5 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 8);
  if ( v6 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 4);
  if ( v7 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
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
