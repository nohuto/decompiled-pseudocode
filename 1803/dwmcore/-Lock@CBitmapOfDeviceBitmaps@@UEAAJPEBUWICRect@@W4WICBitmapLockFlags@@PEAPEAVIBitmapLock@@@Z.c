/*
 * XREFs of ?Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1801E95D0
 * Callers:
 *     ?Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@KPEAPEAUIWICBitmapLock@@@Z @ 0x1801E9540 (-Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@KPEAPEAUIWICBitmapLock@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAUtagRECT@@@Z @ 0x180081E6C (-HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAUtagRECT@@@Z.c)
 *     ?HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x180081FE8 (-HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?EnsureUpdatedSysMemBuffer@CBitmapOfDeviceBitmaps@@AEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801E8D7C (-EnsureUpdatedSysMemBuffer@CBitmapOfDeviceBitmaps@@AEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@Re.c)
 *     ?PrepareSysMemBufferAsSourcePixels@CBitmapOfDeviceBitmaps@@AEAAJXZ @ 0x1801E97C4 (-PrepareSysMemBufferAsSourcePixels@CBitmapOfDeviceBitmaps@@AEAAJXZ.c)
 *     ?TryFastWarpLock@CBitmapOfDeviceBitmaps@@AEAA_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAEPEAI2PEAPEAUIUnknown@@@Z @ 0x1801E9C00 (-TryFastWarpLock@CBitmapOfDeviceBitmaps@@AEAA_NAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniquen.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::Lock(
        void **this,
        const struct WICRect *a2,
        enum WICBitmapLockFlags a3,
        struct IBitmapLock **a4)
{
  struct IUnknown *v4; // rsi
  int v7; // ebx
  CBitmap *v8; // r14
  int v9; // r11d
  char *v10; // r9
  unsigned int v11; // ebx
  unsigned int v12; // eax
  __int64 v13; // rcx
  struct IUnknown *v15; // [rsp+60h] [rbp-9h] BYREF
  int v16; // [rsp+68h] [rbp-1h] BYREF
  unsigned int v17; // [rsp+6Ch] [rbp+3h] BYREF
  int v18[2]; // [rsp+70h] [rbp+7h] BYREF
  struct tagRECT v19; // [rsp+78h] [rbp+Fh] BYREF

  v4 = 0LL;
  v15 = 0LL;
  if ( a3 != WICBitmapLockRead )
  {
    v7 = -2003292287;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292287, 0xE6u);
    return (unsigned int)v7;
  }
  v8 = (CBitmap *)(this - 3);
  v7 = CBitmap::HrCheckPixelRect((CBitmap *)(this - 3), a2, &v19);
  if ( v7 < 0 )
  {
    v12 = 233;
  }
  else
  {
    if ( (unsigned __int8)CBitmapOfDeviceBitmaps::TryFastWarpLock(
                            (int)v8,
                            (int)&v19,
                            (int)v18,
                            (int)&v17,
                            (struct CWarpLockSubresource *)&v16,
                            (__int64)&v15) )
    {
      operator delete(this[33]);
      this[33] = 0LL;
      v9 = v16;
      v10 = *(char **)v18;
      v11 = v17;
LABEL_12:
      v4 = v15;
      v13 = v11 * v19.top + v19.left * *((_DWORD *)this + 70);
      v7 = CBitmap::HrLock(
             v8,
             v19.right - v19.left,
             v19.bottom - v19.top,
             (const struct PixelFormatInfo *)(this + 20),
             v11,
             v9 - (int)v13,
             &v10[v13],
             WICBitmapLockRead,
             a4,
             0,
             v15);
      if ( v7 >= 0 )
        return (unsigned int)v7;
      v12 = 296;
      goto LABEL_16;
    }
    if ( this[33] || (v7 = CBitmapOfDeviceBitmaps::PrepareSysMemBufferAsSourcePixels(v8), v7 >= 0) )
    {
      v7 = CBitmapOfDeviceBitmaps::EnsureUpdatedSysMemBuffer((__int64)v8, (__m128i *)&v19);
      if ( v7 >= 0 )
      {
        v10 = (char *)this[33];
        v11 = *((_DWORD *)this + 69);
        v9 = *((_DWORD *)this + 68);
        goto LABEL_12;
      }
      v12 = 272;
    }
    else
    {
      v12 = 269;
    }
    v4 = v15;
  }
LABEL_16:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v12);
  if ( v4 )
    ((void (__fastcall *)(struct IUnknown *))v4->lpVtbl->Release)(v4);
  return (unsigned int)v7;
}
