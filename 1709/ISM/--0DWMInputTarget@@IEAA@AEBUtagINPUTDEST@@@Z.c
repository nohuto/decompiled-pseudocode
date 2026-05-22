/*
 * XREFs of ??0DWMInputTarget@@IEAA@AEBUtagINPUTDEST@@@Z @ 0x1800210C0
 * Callers:
 *     ?CreateFromINPUTDEST@DWMInputTarget@@SAJAEBUtagINPUTDEST@@PEAPEAUIInputTarget@@@Z @ 0x1800214AC (-CreateFromINPUTDEST@DWMInputTarget@@SAJAEBUtagINPUTDEST@@PEAPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ??0PropertyMap@Input@@QEAA@XZ @ 0x180016B84 (--0PropertyMap@Input@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
DWMInputTarget *__fastcall DWMInputTarget::DWMInputTarget(DWMInputTarget *this, const struct tagINPUTDEST *a2)
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
  *((_QWORD *)this + 9) = *((_QWORD *)a2 + 2);
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_OWORD *)this + 6) = *(_OWORD *)((char *)a2 + 40);
  *((_OWORD *)this + 7) = *(_OWORD *)((char *)a2 + 56);
  *((_QWORD *)this + 16) = *((_QWORD *)a2 + 9);
  *((_DWORD *)this + 34) = -1;
  *((_BYTE *)this + 140) = 1;
  *((_QWORD *)this + 18) = *(_QWORD *)((char *)a2 + 4);
  *((_BYTE *)this + 152) = 1;
  *(_QWORD *)((char *)this + 156) = 0LL;
  Input::PropertyMap::PropertyMap((DWMInputTarget *)((char *)this + 168));
  return this;
}
