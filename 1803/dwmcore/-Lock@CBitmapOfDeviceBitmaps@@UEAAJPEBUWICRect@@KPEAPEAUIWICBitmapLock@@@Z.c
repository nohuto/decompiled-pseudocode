/*
 * XREFs of ?Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@KPEAPEAUIWICBitmapLock@@@Z @ 0x1801E9540
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1801E95D0 (-Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::Lock(
        CBitmapOfDeviceBitmaps *this,
        const struct WICRect *a2,
        enum WICBitmapLockFlags a3,
        struct IWICBitmapLock **a4)
{
  int v5; // eax
  struct IBitmapLock *v6; // rdi
  unsigned int v7; // ebx
  int v8; // eax
  struct IBitmapLock *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  v5 = CBitmapOfDeviceBitmaps::Lock((CBitmapOfDeviceBitmaps *)((char *)this - 16), a2, a3, &v10);
  v6 = v10;
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x6Cu);
  }
  else
  {
    v8 = (**(__int64 (__fastcall ***)(struct IBitmapLock *, GUID *, struct IWICBitmapLock **))v10)(
           v10,
           &IID_IWICBitmapLock,
           a4);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x6Fu);
  }
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v6);
  return v7;
}
