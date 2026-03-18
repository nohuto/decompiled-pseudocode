/*
 * XREFs of ??1CHwBitmapBrush@@UEAA@XZ @ 0x1800D9914
 * Callers:
 *     ??_GCHwBitmapBrush@@UEAAPEAXI@Z @ 0x1800D9950 (--_GCHwBitmapBrush@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwBitmapBrush::~CHwBitmapBrush(CHwBitmapBrush *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CHwBitmapBrush::`vftable';
  ReleaseInterfaceNoNULL<IWICBitmap>(*((_QWORD *)this + 3));
  v2 = *((_QWORD *)this + 4);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
}
