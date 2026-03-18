/*
 * XREFs of ?Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1801AC840
 * Callers:
 *     ?Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@KPEAPEAUIWICBitmapLock@@@Z @ 0x1801AC7B0 (-Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@KPEAPEAUIWICBitmapLock@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAUtagRECT@@@Z @ 0x18008CAEC (-HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAUtagRECT@@@Z.c)
 *     ?HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x18008CC68 (-HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureUpdatedSysMemBuffer@CBitmapOfDeviceBitmaps@@AEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801AC0C8 (-EnsureUpdatedSysMemBuffer@CBitmapOfDeviceBitmaps@@AEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@Re.c)
 *     ?PrepareSysMemBufferAsSourcePixels@CBitmapOfDeviceBitmaps@@AEAAJXZ @ 0x1801ACA54 (-PrepareSysMemBufferAsSourcePixels@CBitmapOfDeviceBitmaps@@AEAAJXZ.c)
 *     ?TryFastWarpLock@CBitmapOfDeviceBitmaps@@AEAA_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAEPEAI2PEAPEAUIUnknown@@@Z @ 0x1801ACE94 (-TryFastWarpLock@CBitmapOfDeviceBitmaps@@AEAA_NAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniquen.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::Lock(
        void **this,
        const struct WICRect *a2,
        enum WICBitmapLockFlags a3,
        struct IBitmapLock **a4)
{
  struct IUnknown *v4; // rsi
  unsigned int v7; // ebx
  CBitmap *v8; // r14
  signed int v9; // eax
  int v10; // r11d
  char *v11; // r9
  unsigned int v12; // ebx
  signed int v13; // eax
  signed int v14; // eax
  __int64 v15; // rcx
  signed int v16; // eax
  struct IUnknown *v18; // [rsp+60h] [rbp-9h] BYREF
  int v19; // [rsp+68h] [rbp-1h] BYREF
  unsigned int v20; // [rsp+6Ch] [rbp+3h] BYREF
  int v21[2]; // [rsp+70h] [rbp+7h] BYREF
  struct tagRECT v22; // [rsp+78h] [rbp+Fh] BYREF

  v4 = 0LL;
  v18 = 0LL;
  if ( a3 != WICBitmapLockRead )
  {
    v7 = -2003292287;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88982F81, 0xE6u);
    return v7;
  }
  v8 = (CBitmap *)(this - 3);
  v9 = CBitmap::HrCheckPixelRect((CBitmap *)(this - 3), a2, &v22);
  v7 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0xE9u);
  }
  else
  {
    if ( (unsigned __int8)CBitmapOfDeviceBitmaps::TryFastWarpLock(
                            (int)v8,
                            (int)&v22,
                            (int)v21,
                            (int)&v20,
                            (struct CWarpLockSubresource *)&v19,
                            (__int64)&v18) )
    {
      WPF::ProcessHeapImpl::Free(this[33]);
      this[33] = 0LL;
      v10 = v19;
      v11 = *(char **)v21;
      v12 = v20;
LABEL_12:
      v4 = v18;
      v15 = v12 * v22.top + v22.left * *((_DWORD *)this + 70);
      v16 = CBitmap::HrLock(
              v8,
              v22.right - v22.left,
              v22.bottom - v22.top,
              (const struct PixelFormatInfo *)(this + 20),
              v12,
              v10 - (int)v15,
              &v11[v15],
              WICBitmapLockRead,
              a4,
              0,
              v18);
      v7 = v16;
      if ( v16 >= 0 )
        return v7;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v16, 0x128u);
      goto LABEL_16;
    }
    if ( this[33] || (v13 = CBitmapOfDeviceBitmaps::PrepareSysMemBufferAsSourcePixels(v8), v7 = v13, v13 >= 0) )
    {
      v14 = CBitmapOfDeviceBitmaps::EnsureUpdatedSysMemBuffer((__int64)v8, (__m128i *)&v22);
      v7 = v14;
      if ( v14 >= 0 )
      {
        v11 = (char *)this[33];
        v12 = *((_DWORD *)this + 69);
        v10 = *((_DWORD *)this + 68);
        goto LABEL_12;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0x110u);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x10Du);
    }
    v4 = v18;
  }
LABEL_16:
  if ( v4 )
    ((void (__fastcall *)(struct IUnknown *))v4->lpVtbl->Release)(v4);
  return v7;
}
