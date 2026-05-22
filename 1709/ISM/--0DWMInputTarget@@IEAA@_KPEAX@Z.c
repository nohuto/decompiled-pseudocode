/*
 * XREFs of ??0DWMInputTarget@@IEAA@_KPEAX@Z @ 0x180020FE4
 * Callers:
 *     ?UpdateInputTarget@EdgeGestureTarget@@QEAAJ_KPEAX@Z @ 0x18002D03C (-UpdateInputTarget@EdgeGestureTarget@@QEAAJ_KPEAX@Z.c)
 * Callees:
 *     ??0PropertyMap@Input@@QEAA@XZ @ 0x180016B84 (--0PropertyMap@Input@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
DWMInputTarget *__fastcall DWMInputTarget::DWMInputTarget(DWMInputTarget *this, __int64 a2, void *a3)
{
  *((_QWORD *)this + 6) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 14) = 1;
  *(_QWORD *)this = &DWMInputTarget::`vftable'{for `IInputTarget'};
  *((_QWORD *)this + 1) = &DWMInputTarget::`vftable'{for `IDCompInputTarget'};
  *((_QWORD *)this + 2) = &DWMInputTarget::`vftable'{for `IDWMPnPTarget'};
  *((_QWORD *)this + 3) = &DWMInputTarget::`vftable'{for `IFocusInputTarget'};
  *((_QWORD *)this + 4) = &DWMInputTarget::`vftable'{for `IInputTarget2'};
  *((_QWORD *)this + 5) = &DWMInputTarget::`vftable'{for `IDWMSupportedInputTarget'};
  *((_QWORD *)this + 6) = &DWMInputTarget::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_BYTE *)this + 152) = 0;
  *((_DWORD *)this + 39) = 0;
  *((_DWORD *)this + 40) = 0;
  Input::PropertyMap::PropertyMap((DWMInputTarget *)((char *)this + 168));
  *((_QWORD *)this + 9) = a2;
  *((_QWORD *)this + 10) = a3;
  *((_BYTE *)this + 140) = 0;
  *((_DWORD *)this + 34) = -1;
  *((_DWORD *)this + 22) = 0;
  return this;
}
