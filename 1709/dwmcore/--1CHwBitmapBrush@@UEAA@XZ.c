/*
 * XREFs of ??1CHwBitmapBrush@@UEAA@XZ @ 0x180086274
 * Callers:
 *     ??_GCHwBitmapBrush@@UEAAPEAXI@Z @ 0x1800862B0 (--_GCHwBitmapBrush@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwBitmapBrush::~CHwBitmapBrush(CHwBitmapBrush *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CHwBitmapBrush::`vftable';
  ReleaseInterfaceNoNULL<CManipulationManager>(*((_QWORD *)this + 3));
  v2 = *((_QWORD *)this + 4);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
}
