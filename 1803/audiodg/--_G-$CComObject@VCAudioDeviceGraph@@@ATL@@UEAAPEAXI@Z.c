/*
 * XREFs of ??_G?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAPEAXI@Z @ 0x140012F40
 * Callers:
 *     ?Release@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAKXZ @ 0x140012EB0 (-Release@-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAKXZ.c)
 * Callees:
 *     ?FinalRelease@CAudioDeviceGraph@@QEAAXXZ @ 0x14000F2DC (-FinalRelease@CAudioDeviceGraph@@QEAAXXZ.c)
 *     ??1CAudioDeviceGraph@@QEAA@XZ @ 0x14000F300 (--1CAudioDeviceGraph@@QEAA@XZ.c)
 *     ?Unlock@CAudioDGModule@@UEAAJXZ @ 0x140014800 (-Unlock@CAudioDGModule@@UEAAJXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C304 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CAudioDeviceGraph *__fastcall ATL::CComObject<CAudioDeviceGraph>::`scalar deleting destructor'(
        CAudioDeviceGraph *this,
        char a2)
{
  __int64 (__fastcall *v4)(CAudioDGModule *__hidden); // rax

  *(_QWORD *)this = &ATL::CComObject<CAudioDeviceGraph>::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)this + 1) = &ATL::CComObject<CAudioDeviceGraph>::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)this + 2) = &ATL::CComObject<CAudioDeviceGraph>::`vftable'{for `IAudioDeviceGraphInternal'};
  *((_DWORD *)this + 6) = -1073741823;
  CAudioDeviceGraph::FinalRelease(this);
  v4 = *(__int64 (__fastcall **)(CAudioDGModule *__hidden))(*(_QWORD *)ATL::_pAtlModule + 16LL);
  if ( v4 == CAudioDGModule::Unlock )
    CAudioDGModule::Unlock(ATL::_pAtlModule);
  else
    v4(ATL::_pAtlModule);
  CAudioDeviceGraph::~CAudioDeviceGraph(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
