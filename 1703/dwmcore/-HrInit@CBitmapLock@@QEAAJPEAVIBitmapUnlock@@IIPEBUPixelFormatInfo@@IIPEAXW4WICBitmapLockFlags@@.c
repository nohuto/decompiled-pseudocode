/*
 * XREFs of ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x18007E694
 * Callers:
 *     ?LockForRead@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180024A50 (-LockForRead@CSecondarySysmemBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@.c)
 *     ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180026710 (-LockForRead@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBi.c)
 *     ?HrLock@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x1800568D8 (-HrLock@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 *     ?HrInit@CBitmapLockUnaligned@@QEAAJPEAVCBitmap@@IIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@II@Z @ 0x1801A9F90 (-HrInit@CBitmapLockUnaligned@@QEAAJPEAVCBitmap@@IIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlag.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z @ 0x18007E494 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapLock::HrInit(
        CBitmapLock *this,
        struct IBitmapUnlock *a2,
        __int64 a3,
        __int64 a4,
        const struct PixelFormatInfo *a5,
        unsigned int a6,
        unsigned int a7,
        void *a8,
        enum WICBitmapLockFlags a9,
        bool a10,
        struct IUnknown *a11)
{
  int v13; // ebp
  int v14; // r15d
  int v15; // eax
  unsigned int v16; // esi

  v13 = a4;
  v14 = a3;
  v15 = HrCheckBufferSize((enum DXGI_FORMAT)*(_DWORD *)a5, a6, a3, a4, a7);
  v16 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x5Fu);
  }
  else
  {
    *((_BYTE *)this + 73) = a10;
    *((_QWORD *)this + 10) = a11;
    *((_BYTE *)this + 72) = 1;
    *((_DWORD *)this + 22) = v14;
    *((_DWORD *)this + 23) = v13;
    *(_QWORD *)((char *)this + 100) = *(_QWORD *)a5;
    *((_DWORD *)this + 27) = *((_DWORD *)a5 + 2);
    *((_QWORD *)this + 14) = a8;
    *((_DWORD *)this + 24) = a6;
    *((_DWORD *)this + 30) = a7;
    *((_QWORD *)this + 17) = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IBitmapUnlock *))(*(_QWORD *)a2 + 8LL))(a2);
    *((_DWORD *)this + 32) = a9;
  }
  return v16;
}
