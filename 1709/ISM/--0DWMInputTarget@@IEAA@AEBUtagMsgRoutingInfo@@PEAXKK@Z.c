/*
 * XREFs of ??0DWMInputTarget@@IEAA@AEBUtagMsgRoutingInfo@@PEAXKK@Z @ 0x180020E80
 * Callers:
 *     ?Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@PEAXKKPEAPEAUIInputTarget@@@Z @ 0x180021364 (-Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@PEAXKKPEAPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ??0PropertyMap@Input@@QEAA@XZ @ 0x180016B84 (--0PropertyMap@Input@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
DWMInputTarget *__fastcall DWMInputTarget::DWMInputTarget(
        DWMInputTarget *this,
        const struct tagMsgRoutingInfo *a2,
        void *a3,
        int a4,
        unsigned int a5)
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
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = a3;
  *((_OWORD *)this + 6) = *(_OWORD *)a2;
  *((_OWORD *)this + 7) = *((_OWORD *)a2 + 1);
  *((_QWORD *)this + 16) = *((_QWORD *)a2 + 4);
  *((_DWORD *)this + 22) = 0;
  *((_BYTE *)this + 140) = 1;
  *((_DWORD *)this + 34) = -1;
  *((_DWORD *)this + 39) = a4;
  *((_DWORD *)this + 40) = a5;
  return this;
}
