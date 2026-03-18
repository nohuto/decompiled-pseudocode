/*
 * XREFs of ??1CHwBitmapBrush@@UEAA@XZ @ 0x18004D404
 * Callers:
 *     ??_GCHwBitmapBrush@@UEAAPEAXI@Z @ 0x18004D440 (--_GCHwBitmapBrush@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwBitmapBrush::~CHwBitmapBrush(CHwBitmapBrush *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CHwBitmapBrush::`vftable';
  ReleaseInterfaceNoNULL<CD2DPencil>(*((_QWORD *)this + 3));
  v2 = *((_QWORD *)this + 4);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
}
