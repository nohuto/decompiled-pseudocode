/*
 * XREFs of ??1DWMCursor@@MEAA@XZ @ 0x1800266A0
 * Callers:
 *     ??_EDWMCursor@@MEAAPEAXI@Z @ 0x180026640 (--_EDWMCursor@@MEAAPEAXI@Z.c)
 *     ??_GDWMHardwareCursor@@MEAAPEAXI@Z @ 0x1800274F0 (--_GDWMHardwareCursor@@MEAAPEAXI@Z.c)
 *     _DWMHardwareCursor::DWMHardwareCursor_::_1_::dtor$2 @ 0x1800CDAF8 (_DWMHardwareCursor--DWMHardwareCursor_--_1_--dtor$2.c)
 * Callees:
 *     ??1CommandRegistrationToken@TestCommandHost@@QEAA@XZ @ 0x180009B84 (--1CommandRegistrationToken@TestCommandHost@@QEAA@XZ.c)
 *     ?UnregisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x180025C24 (-UnregisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall DWMCursor::~DWMCursor(DWMCursor *this)
{
  char *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  *(_QWORD *)this = &DWMCursor::`vftable'{for `ICursor3D'};
  *((_QWORD *)this + 1) = &DWMCursor::`vftable'{for `IGetClosestInteractiveBounds'};
  *((_QWORD *)this + 2) = &DWMCursor::`vftable'{for `RefCountedObject'};
  if ( *((_BYTE *)this + 65) )
    DWMCursorBroker::UnregisterCursor(*((DWMCursorBroker **)this + 5), this);
  TestCommandHost::CommandRegistrationToken::~CommandRegistrationToken((DWMCursor *)((char *)this + 136));
  v2 = (char *)*((_QWORD *)this + 11);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
  v3 = *((_QWORD *)this + 10);
  if ( v3 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *((_QWORD *)this + 9);
  if ( v4 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 5);
  if ( v5 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 4);
  if ( v6 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
}
