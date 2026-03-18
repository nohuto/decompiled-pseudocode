/*
 * XREFs of ?Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@KPEAPEAUIWICBitmapLock@@@Z @ 0x1801AC7B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1801AC840 (-Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::Lock(
        CBitmapOfDeviceBitmaps *this,
        const struct WICRect *a2,
        enum WICBitmapLockFlags a3,
        struct IWICBitmapLock **a4)
{
  signed int v5; // eax
  struct IBitmapLock *v6; // rdi
  unsigned int v7; // ebx
  signed int v8; // eax
  struct IBitmapLock *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  v5 = CBitmapOfDeviceBitmaps::Lock((CBitmapOfDeviceBitmaps *)((char *)this - 16), a2, a3, &v10);
  v6 = v10;
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x6Cu);
  }
  else
  {
    v8 = (**(__int64 (__fastcall ***)(struct IBitmapLock *, GUID *, struct IWICBitmapLock **))v10)(
           v10,
           &IID_IWICBitmapLock,
           a4);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x6Fu);
  }
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v6);
  return v7;
}
