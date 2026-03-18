/*
 * XREFs of ?Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x18007DA60
 * Callers:
 *     <none>
 * Callees:
 *     ?HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAUtagRECT@@@Z @ 0x18005675C (-HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAUtagRECT@@@Z.c)
 *     ?HrLock@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x1800568D8 (-HrLock@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetRequiredBufferSize@@YAIW4DXGI_FORMAT@@IPEBUWICRect@@@Z @ 0x18007DF6C (-GetRequiredBufferSize@@YAIW4DXGI_FORMAT@@IPEBUWICRect@@@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18007E584 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?HrLockUnaligned@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1801A990C (-HrLockUnaligned@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitm.c)
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
  unsigned int v11; // r15d
  unsigned int v12; // r9d
  unsigned int v13; // ebx
  enum DXGI_FORMAT v14; // ecx
  void *v15; // r13
  int v16; // r11d
  __int64 (__fastcall **v17)(CBitmap *, GUID *, struct WICRect *); // rcx
  int v18; // eax
  int v19; // eax
  int v21; // eax
  int v23; // [rsp+64h] [rbp-35h]
  unsigned int RequiredBufferSize; // [rsp+68h] [rbp-31h]
  int v25; // [rsp+6Ch] [rbp-2Dh]
  struct WICRect v26; // [rsp+70h] [rbp-29h] BYREF
  struct IBitmapLock **v27; // [rsp+80h] [rbp-19h]
  LPCRITICAL_SECTION v28; // [rsp+88h] [rbp-11h] BYREF
  struct tagRECT v29; // [rsp+90h] [rbp-9h] BYREF

  v4 = (CSystemMemoryBitmap *)((char *)this - 24);
  v27 = a4;
  v28 = (LPCRITICAL_SECTION)(((unsigned __int64)this + 96) & -(__int64)(this != (CSystemMemoryBitmap *)24));
  EnterCriticalSection(v28);
  v7 = CBitmap::HrCheckPixelRect(v4, a2, &v29);
  v8 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x52u);
  PixelFormatSize = GetPixelFormatSize(*((enum DXGI_FORMAT *)this + 40));
  v10 = v29.left * PixelFormatSize;
  v11 = (LOBYTE(v29.left) * PixelFormatSize) & 7;
  if ( v8 >= 0 )
  {
    v12 = *((_DWORD *)this + 54);
    v13 = v29.right - v29.left;
    v26.X = 0;
    v26.Y = 0;
    v23 = v29.bottom - v29.top;
    v26.Height = v29.bottom - v29.top;
    v14 = *((_DWORD *)this + 40);
    v25 = v29.right - v29.left;
    v15 = (void *)(*((_QWORD *)this + 26) + v10 / 8 + (__int64)(int)(v29.top * v12));
    v26.Width = v29.right - v29.left;
    RequiredBufferSize = GetRequiredBufferSize(v14, v12, &v26);
    if ( v11 )
    {
      v21 = CBitmap::HrLockUnaligned(
              v4,
              v13,
              v23,
              (CSystemMemoryBitmap *)((char *)this + 160),
              v11,
              v29.right * v16 - v10,
              *((_DWORD *)this + 54),
              RequiredBufferSize,
              v15,
              a3,
              v27);
      v8 = v21;
      if ( v21 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x9Cu);
    }
    else
    {
      v17 = *(__int64 (__fastcall ***)(CBitmap *, GUID *, struct WICRect *))v4;
      *(_QWORD *)&v26.X = 0LL;
      v18 = (*v17)(v4, &IID_IUnknown, &v26);
      v8 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x7Bu);
      }
      else
      {
        v19 = CBitmap::HrLock(
                v4,
                v25,
                v23,
                (CSystemMemoryBitmap *)((char *)this + 160),
                *((_DWORD *)this + 54),
                RequiredBufferSize,
                v15,
                a3,
                v27,
                0,
                *(struct IUnknown **)&v26.X);
        v8 = v19;
        if ( v19 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x87u);
      }
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v28);
  return (unsigned int)v8;
}
