/*
 * XREFs of ??1DWMInputTarget@@UEAA@XZ @ 0x1800211A4
 * Callers:
 *     ??_GDWMInputTarget@@UEAAPEAXI@Z @ 0x180020FA0 (--_GDWMInputTarget@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1PropertyMap@Input@@UEAA@XZ @ 0x180016C64 (--1PropertyMap@Input@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall DWMInputTarget::~DWMInputTarget(DWMInputTarget *this)
{
  void *v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &DWMInputTarget::`vftable'{for `IInputTarget'};
  *((_QWORD *)this + 1) = &DWMInputTarget::`vftable'{for `IDCompInputTarget'};
  *((_QWORD *)this + 2) = &DWMInputTarget::`vftable'{for `IDWMPnPTarget'};
  *((_QWORD *)this + 3) = &DWMInputTarget::`vftable'{for `IFocusInputTarget'};
  *((_QWORD *)this + 4) = &DWMInputTarget::`vftable'{for `IInputTarget2'};
  *((_QWORD *)this + 5) = &DWMInputTarget::`vftable'{for `IDWMSupportedInputTarget'};
  *((_QWORD *)this + 6) = &DWMInputTarget::`vftable'{for `RefCountedObject'};
  if ( !*((_BYTE *)this + 152) )
  {
    v2 = (void *)*((_QWORD *)this + 10);
    if ( v2 )
    {
      CloseHandle(v2);
      *((_QWORD *)this + 10) = 0LL;
    }
    *((_DWORD *)this + 22) = 0;
    if ( *((_BYTE *)this + 140) )
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 8) + 144LL))(
        *((_QWORD *)this + 8),
        *((_QWORD *)this + 9));
    *((_QWORD *)this + 9) = 0LL;
  }
  *((_QWORD *)this + 9) = 0LL;
  Input::PropertyMap::~PropertyMap((void **)this + 21);
  v3 = *((_QWORD *)this + 8);
  if ( v3 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  *((_QWORD *)this + 6) = &RefCountedObject::`vftable';
}
