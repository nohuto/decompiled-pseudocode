/*
 * XREFs of ?HrInit@CBitmapLockUnaligned@@QEAAJPEAVCBitmap@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@II@Z @ 0x1801C5060
 * Callers:
 *     ?HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1801C4AAC (-HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitm.c)
 * Callees:
 *     ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x18000B264 (-HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18000BC20 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ReadUnalignedScanline@@YAXPEAEPEBEII@Z @ 0x1801C52D4 (-ReadUnalignedScanline@@YAXPEAEPEBEII@Z.c)
 */

__int64 __fastcall CBitmapLockUnaligned::HrInit(
        CBitmapLockUnaligned *this,
        struct CBitmap *a2,
        unsigned int a3,
        unsigned int a4,
        const struct PixelFormatInfo *a5,
        unsigned int a6,
        unsigned int a7,
        unsigned __int8 *a8,
        enum WICBitmapLockFlags a9,
        unsigned int a10,
        unsigned int a11)
{
  CBitmapLock *v11; // rbp
  enum WICBitmapLockFlags v12; // r12d
  struct CBitmap *v13; // r13
  __int64 v14; // r15
  unsigned __int8 PixelFormatSize; // al
  unsigned int v16; // r8d
  unsigned int v17; // edi
  unsigned __int8 *v18; // rsi
  signed int v19; // ebx
  SIZE_T v20; // r8
  unsigned int v21; // r14d
  unsigned __int8 *v22; // rbx
  __int64 v23; // r12
  const unsigned __int8 *v24; // r14
  signed int v25; // eax
  unsigned __int8 *v27; // [rsp+60h] [rbp-58h]

  v11 = this;
  v12 = a9;
  v13 = a2;
  *((_DWORD *)this + 38) = a6;
  *((_QWORD *)this + 18) = a8;
  *((_DWORD *)this + 39) = a7;
  *((_DWORD *)this + 41) = a10;
  *((_DWORD *)this + 40) = a11;
  *((_DWORD *)this + 32) = a9;
  v14 = a4;
  PixelFormatSize = GetPixelFormatSize(*(_DWORD *)a5);
  if ( PixelFormatSize && v16 <= 0x7FFFFFF8u / PixelFormatSize )
  {
    v17 = (((v16 * PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
    v18 = 0LL;
    v27 = 0LL;
    v19 = 0;
    if ( (_DWORD)v14 && v17 && v17 < 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v14 )
    {
      v20 = (unsigned int)v14 * (unsigned __int64)v17;
      if ( !v20 )
        v20 = 1LL;
      v27 = (unsigned __int8 *)HeapAlloc(WPF::g_processHeap, 0, v20);
      v18 = v27;
      if ( !v27 )
        v19 = -2147024882;
    }
    else
    {
      v19 = -2147024809;
    }
    if ( v19 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v19, 0xA3u);
  }
  else
  {
    v17 = 0;
    v19 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070216, 0x98u);
    v18 = 0LL;
    v27 = 0LL;
  }
  v21 = v14 * v17;
  if ( v19 < 0 )
    goto LABEL_22;
  if ( (a9 & 1) != 0 )
  {
    v22 = v18;
    if ( (_DWORD)v14 )
    {
      v23 = v14;
      v24 = a8;
      do
      {
        ReadUnalignedScanline(v22, v24, a11, a10);
        v24 += a6;
        v22 += v17;
        --v23;
      }
      while ( v23 );
      v18 = v27;
      v11 = this;
      v21 = v14 * v17;
      LODWORD(v14) = a4;
      v12 = a9;
      v13 = a2;
    }
  }
  v25 = CBitmapLock::HrInit(
          v11,
          (struct IBitmapUnlock *)(((unsigned __int64)v13 + 32) & -(__int64)(v13 != 0LL)),
          a3,
          v14,
          a5,
          v17,
          v21,
          v18,
          v12,
          0,
          0LL);
  v19 = v25;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v25, 0xD0u);
LABEL_22:
    WPF::ProcessHeapImpl::Free(v18);
  }
  return (unsigned int)v19;
}
