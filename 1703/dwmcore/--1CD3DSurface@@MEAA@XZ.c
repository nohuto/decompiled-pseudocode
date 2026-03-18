/*
 * XREFs of ??1CD3DSurface@@MEAA@XZ @ 0x1800732F0
 * Callers:
 *     ??_ECD3DSurface@@MEAAPEAXI@Z @ 0x180073380 (--_ECD3DSurface@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DSurface::~CD3DSurface(CD3DSurface *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CD3DSurface::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 3) = &CD3DSurface::`vftable'{for `IDeviceResource'};
  *((_QWORD *)this + 16) = &CD3DSurface::`vftable';
  ReleaseInterfaceNoNULL<CD2DPencil>(*((_QWORD *)this + 17));
  v2 = *((_QWORD *)this + 25);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  ReleaseInterfaceNoNULL<CD2DPencil>(*((_QWORD *)this + 26));
  ReleaseInterfaceNoNULL<CD2DPencil>(*((_QWORD *)this + 27));
  v3 = *((_QWORD *)this + 28);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  CD3DResource::~CD3DResource(this);
}
