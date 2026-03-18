/*
 * XREFs of ??1CDXGIEnumeration@@MEAA@XZ @ 0x18008C1A0
 * Callers:
 *     ??_ECDXGIEnumeration@@MEAAPEAXI@Z @ 0x18008C260 (--_ECDXGIEnumeration@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x180074928 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDXGIEnumeration::~CDXGIEnumeration(CDXGIEnumeration *this)
{
  unsigned int v2; // edi
  void *v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &CDXGIEnumeration::`vftable';
  v2 = 0;
  v3 = (void *)*((_QWORD *)this + 12);
  if ( v3 )
  {
    if ( !*((_DWORD *)this + 27) )
    {
      v4 = *((_QWORD *)this + 2);
      if ( !v4 )
        goto LABEL_6;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 184LL))(v4, *((unsigned int *)this + 26));
      v3 = (void *)*((_QWORD *)this + 12);
    }
    CloseHandle(v3);
  }
LABEL_6:
  if ( *((_DWORD *)this + 22) )
  {
    do
      ReleaseInterfaceNoNULL<CPolygon>(*(_QWORD *)(*((_QWORD *)this + 8) + 8LL * v2++));
    while ( v2 < *((_DWORD *)this + 22) );
  }
  ReleaseInterfaceNoNULL<CManipulationManager>(*((_QWORD *)this + 2));
  ReleaseInterfaceNoNULL<CManipulationManager>(*((_QWORD *)this + 3));
  ReleaseInterfaceNoNULL<CManipulationManager>(*((_QWORD *)this + 4));
  ReleaseInterfaceNoNULL<CManipulationManager>(*((_QWORD *)this + 5));
  ReleaseInterfaceNoNULL<CManipulationManager>(*((_QWORD *)this + 6));
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 8);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
