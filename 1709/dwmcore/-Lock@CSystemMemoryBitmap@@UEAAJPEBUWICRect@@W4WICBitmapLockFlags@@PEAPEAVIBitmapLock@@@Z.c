/*
 * XREFs of ?Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x18000A970
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRequiredBufferSize@@YAIW4DXGI_FORMAT@@IPEBUWICRect@@@Z @ 0x18000AEE8 (-GetRequiredBufferSize@@YAIW4DXGI_FORMAT@@IPEBUWICRect@@@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18000BC20 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAUtagRECT@@@Z @ 0x18008CAEC (-HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAUtagRECT@@@Z.c)
 *     ?HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x18008CC68 (-HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1801C4AAC (-HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitm.c)
 */

__int64 __fastcall CSystemMemoryBitmap::Lock(
        CSystemMemoryBitmap *this,
        const struct WICRect *a2,
        enum WICBitmapLockFlags a3,
        struct IBitmapLock **a4)
{
  CBitmap *v4; // rdi
  int v7; // eax
  int v8; // ebx
  unsigned __int8 PixelFormatSize; // al
  int v10; // esi
  unsigned int v11; // r14d
  unsigned int v12; // r9d
  unsigned int v13; // r12d
  enum DXGI_FORMAT v14; // ecx
  void *v15; // rbx
  unsigned int RequiredBufferSize; // eax
  int v17; // r11d
  const struct PixelFormatInfo *v18; // r9
  int v19; // eax
  int v21; // eax
  int v23; // [rsp+64h] [rbp-25h]
  WICRect v25; // [rsp+70h] [rbp-19h] BYREF
  LPCRITICAL_SECTION v26; // [rsp+80h] [rbp-9h] BYREF
  struct tagRECT v27; // [rsp+88h] [rbp-1h] BYREF

  v4 = (CSystemMemoryBitmap *)((char *)this - 24);
  v26 = (LPCRITICAL_SECTION)(((unsigned __int64)this + 96) & -(__int64)(this != (CSystemMemoryBitmap *)24));
  EnterCriticalSection(v26);
  v7 = CBitmap::HrCheckPixelRect(v4, a2, &v27);
  v8 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x52u);
  PixelFormatSize = GetPixelFormatSize(*((enum DXGI_FORMAT *)this + 40));
  v10 = v27.left * PixelFormatSize;
  v11 = (LOBYTE(v27.left) * PixelFormatSize) & 7;
  if ( v8 >= 0 )
  {
    v12 = *((_DWORD *)this + 54);
    v13 = v27.right - v27.left;
    v25.X = 0;
    v25.Y = 0;
    v23 = v27.bottom - v27.top;
    v25.Height = v27.bottom - v27.top;
    v14 = *((_DWORD *)this + 40);
    v25.Width = v27.right - v27.left;
    v15 = (void *)(*((_QWORD *)this + 26) + v10 / 8 + (__int64)(int)(v27.top * v12));
    RequiredBufferSize = GetRequiredBufferSize(v14, v12, &v25);
    v18 = (CSystemMemoryBitmap *)((char *)this + 160);
    if ( v11 )
    {
      v21 = CBitmap::HrLockUnaligned(
              v4,
              v13,
              v23,
              v18,
              v11,
              v27.right * v17 - v10,
              *((_DWORD *)this + 54),
              RequiredBufferSize,
              v15,
              a3,
              a4);
      v8 = v21;
      if ( v21 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x9Fu);
    }
    else
    {
      v19 = CBitmap::HrLock(
              v4,
              v13,
              v23,
              v18,
              *((_DWORD *)this + 54),
              RequiredBufferSize,
              v15,
              a3,
              a4,
              0,
              (struct IUnknown *)v4);
      v8 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x85u);
      else
        (*(void (__fastcall **)(CBitmap *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v26);
  return (unsigned int)v8;
}
