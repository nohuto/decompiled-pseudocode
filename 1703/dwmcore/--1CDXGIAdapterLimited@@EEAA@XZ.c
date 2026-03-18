/*
 * XREFs of ??1CDXGIAdapterLimited@@EEAA@XZ @ 0x1800B59A4
 * Callers:
 *     ??_GCDXGIAdapterLimited@@EEAAPEAXI@Z @ 0x1800B53A0 (--_GCDXGIAdapterLimited@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDXGIAdapterLimited::~CDXGIAdapterLimited(CDXGIAdapterLimited *this)
{
  unsigned int v2; // esi
  __int64 v3; // rcx
  __int64 v4; // rbx

  *(_QWORD *)this = &CDXGIAdapterLimited::`vftable';
  v2 = 0;
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  ReleaseInterfaceNoNULL<CD2DPencil>(*((_QWORD *)this + 4));
  if ( *((_DWORD *)this + 98) )
  {
    do
    {
      v4 = 272LL * v2;
      ReleaseInterfaceNoNULL<CD2DPencil>(*(_QWORD *)(*((_QWORD *)this + 46) + v4));
      ReleaseInterfaceNoNULL<CD2DPencil>(*(_QWORD *)(*((_QWORD *)this + 46) + v4 + 8));
      ++v2;
    }
    while ( v2 < *((_DWORD *)this + 98) );
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 46);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
