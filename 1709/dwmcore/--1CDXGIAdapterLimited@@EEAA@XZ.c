/*
 * XREFs of ??1CDXGIAdapterLimited@@EEAA@XZ @ 0x1800758C8
 * Callers:
 *     ??_GCDXGIAdapterLimited@@EEAAPEAXI@Z @ 0x1800752A0 (--_GCDXGIAdapterLimited@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CDXGIAdapterLimited::~CDXGIAdapterLimited(CDXGIAdapterLimited *this)
{
  unsigned int i; // esi
  __int64 v3; // rbx

  *(_QWORD *)this = &CDXGIAdapterLimited::`vftable';
  ReleaseInterfaceNoNULL<CManipulationManager>(*((_QWORD *)this + 3));
  ReleaseInterfaceNoNULL<CManipulationManager>(*((_QWORD *)this + 4));
  for ( i = 0; i < *((_DWORD *)this + 98); ++i )
  {
    v3 = 272LL * i;
    ReleaseInterfaceNoNULL<CManipulationManager>(*(_QWORD *)(*((_QWORD *)this + 46) + v3));
    ReleaseInterfaceNoNULL<CManipulationManager>(*(_QWORD *)(*((_QWORD *)this + 46) + v3 + 8));
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 46);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
