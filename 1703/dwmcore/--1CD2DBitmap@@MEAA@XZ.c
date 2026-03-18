/*
 * XREFs of ??1CD2DBitmap@@MEAA@XZ @ 0x18007AB48
 * Callers:
 *     ??1CSecondaryD2DBitmap@@MEAA@XZ @ 0x180006E2C (--1CSecondaryD2DBitmap@@MEAA@XZ.c)
 *     ??_GCD2DBitmap@@MEAAPEAXI@Z @ 0x18007AC40 (--_GCD2DBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DBitmap::~CD2DBitmap(CD2DBitmap *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CD2DBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CSecondaryD2DBitmap::`vftable'{for `IDeviceResource'};
  *((_QWORD *)this + 13) = &CD2DBitmap::`vftable'{for `ID2DBitmap'};
  *((_QWORD *)this + 14) = &CD2DBitmap::`vftable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 15) = &CSecondaryD2DBitmap::`vftable'{for `IBitmapUnlock'};
  ReleaseInterfaceNoNULL<CD2DPencil>(*((_QWORD *)this + 16));
  ReleaseInterfaceNoNULL<CD2DPencil>(*((_QWORD *)this + 17));
  v2 = *((_QWORD *)this + 18);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  ReleaseInterfaceNoNULL<CD2DPencil>(*((_QWORD *)this + 19));
  ReleaseInterfaceNoNULL<CD2DPencil>(*((_QWORD *)this + 20));
  CD2DResource::~CD2DResource(this);
}
