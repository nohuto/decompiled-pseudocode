/*
 * XREFs of ?EnsureUpdatedSysMemBuffer@CBitmapOfDeviceBitmaps@@AEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18019AE44
 * Callers:
 *     ?Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x18019B520 (-Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x180001C80 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ @ 0x1800B2458 (-CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800B3F9C (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800C5C58 (-HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?CalculateSubtractionRectangles@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x18019ABF8 (-CalculateSubtractionRectangles@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_.c)
 *     ?EnsureRgnData@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJXZ @ 0x18019AE04 (-EnsureRgnData@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJXZ.c)
 *     ?CopyPixelsToBitmap@CHwDeviceBitmapColorSource@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x18019F674 (-CopyPixelsToBitmap@CHwDeviceBitmapColorSource@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectU.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::EnsureUpdatedSysMemBuffer(__int64 a1, __m128i *a2)
{
  struct IBitmapSource *v2; // rsi
  __m128i *v3; // r15
  unsigned int v5; // edi
  unsigned int v6; // r13d
  __int64 v7; // r12
  __int64 v8; // rbx
  unsigned __int32 v9; // r15d
  unsigned __int32 v10; // r10d
  unsigned __int32 v11; // r11d
  unsigned int v12; // eax
  bool v13; // cc
  bool v14; // cf
  bool DoesContain; // al
  unsigned __int32 v16; // r10d
  unsigned __int32 v17; // r11d
  unsigned __int32 v18; // edx
  __int64 v19; // rcx
  int v20; // eax
  int v21; // eax
  __int64 v22; // rdx
  int v23; // r8d
  int v24; // r9d
  int v25; // eax
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // r8
  int v29; // eax
  char v31; // [rsp+40h] [rbp-39h]
  __m128i v32; // [rsp+48h] [rbp-31h] BYREF
  __m128i *v33; // [rsp+58h] [rbp-21h]
  unsigned int v34; // [rsp+60h] [rbp-19h]
  unsigned __int32 v35; // [rsp+64h] [rbp-15h]
  unsigned int v36; // [rsp+68h] [rbp-11h]
  struct IBitmapSource *v37; // [rsp+70h] [rbp-9h] BYREF
  __int64 v38; // [rsp+78h] [rbp-1h] BYREF
  __int128 v39; // [rsp+80h] [rbp+7h] BYREF

  v2 = 0LL;
  v33 = a2;
  v38 = 0LL;
  v3 = a2;
  v37 = 0LL;
  v5 = 0;
  CBitmapOfDeviceBitmaps::CleanupInvalidSources((CBitmapOfDeviceBitmaps *)a1);
  v6 = 0;
  v36 = *(_DWORD *)(a1 + 288);
  if ( v36 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      v8 = v7 + *(_QWORD *)(a1 + 264);
      if ( *(_BYTE *)(v8 + 88) )
        break;
LABEL_40:
      ++v6;
      v7 += 96LL;
      if ( v6 >= v36 )
        goto LABEL_47;
    }
    v32 = *v3;
    v9 = v32.m128i_u32[1];
    v10 = v32.m128i_u32[2];
    v11 = v32.m128i_u32[3];
    v12 = _mm_cvtsi128_si32(v32);
    if ( *(_DWORD *)(v8 + 24) > v12 )
      v12 = *(_DWORD *)(v8 + 24);
    v13 = *(_DWORD *)(v8 + 28) <= v32.m128i_i32[1];
    v34 = v12;
    if ( !v13 )
      v9 = *(_DWORD *)(v8 + 28);
    v14 = *(_DWORD *)(v8 + 32) < v32.m128i_i32[2];
    v32.m128i_i32[0] = v12;
    if ( v14 )
      v10 = *(_DWORD *)(v8 + 32);
    v14 = *(_DWORD *)(v8 + 36) < v32.m128i_i32[3];
    v32.m128i_i32[1] = v9;
    if ( v14 )
      v11 = *(_DWORD *)(v8 + 36);
    v35 = v10;
    v32.m128i_i64[1] = __PAIR64__(v11, v10);
    if ( v10 > v12 && v11 > v9 )
    {
      DoesContain = TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain(v8 + 56, (__int64)&v32);
      v18 = v34;
      if ( DoesContain )
      {
        v31 = 0;
        if ( *(_DWORD *)(v8 + 72) > v34 )
          v18 = *(_DWORD *)(v8 + 72);
        v13 = *(_DWORD *)(v8 + 76) <= v9;
        v32.m128i_i32[0] = v18;
        if ( !v13 )
          v9 = *(_DWORD *)(v8 + 76);
        v14 = *(_DWORD *)(v8 + 80) < v16;
        v32.m128i_i32[1] = v9;
        if ( v14 )
          v16 = *(_DWORD *)(v8 + 80);
        v14 = *(_DWORD *)(v8 + 84) < v17;
        v35 = v16;
        if ( v14 )
          v17 = *(_DWORD *)(v8 + 84);
        v32.m128i_i64[1] = __PAIR64__(v17, v16);
        if ( v16 <= v18 || v17 <= v9 )
          goto LABEL_39;
      }
      else
      {
        v31 = 1;
      }
      v19 = v9 * *(_DWORD *)(a1 + 252) + v18 * *(_DWORD *)(a1 + 256);
      v20 = HrCreateBitmapFromMemoryEx(
              v35 - v18,
              v17 - v9,
              (enum DXGI_FORMAT *)(a1 + 184),
              *(_DWORD *)(a1 + 252),
              *(_DWORD *)(a1 + 248) - (int)v19,
              (unsigned __int8 *)(v19 + *(_QWORD *)(a1 + 240)),
              0LL,
              &v37);
      v5 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x5D0u);
        v2 = v37;
        goto LABEL_47;
      }
      v2 = v37;
      v21 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, __int64 *))v37)(
              v37,
              &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
              &v38);
      v5 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x5D3u);
        goto LABEL_47;
      }
      v23 = 0;
      v24 = 0;
      if ( *(_QWORD *)(v8 + 40) )
      {
        v25 = CBitmapOfDeviceBitmaps::DeviceBitmapInfo::EnsureRgnData(
                (CBitmapOfDeviceBitmaps::DeviceBitmapInfo *)v8,
                v22,
                0LL);
        v5 = v25;
        if ( v25 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x5DFu);
          goto LABEL_47;
        }
        v26 = *(_QWORD *)(v8 + 48);
        v23 = *(_DWORD *)(v26 + 8);
        v24 = v26 + 32;
      }
      v27 = CHwDeviceBitmapColorSource::CopyPixelsToBitmap(*(_QWORD *)(v8 + 16), (unsigned int)&v32, v23, v24, v38);
      v5 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x5ECu);
        goto LABEL_47;
      }
      if ( v31 )
        goto LABEL_36;
      v29 = TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::CalculateSubtractionRectangles(
              (_DWORD *)(v8 + 72),
              &v32,
              v28,
              &v39,
              1u);
      if ( v29 == 1 )
      {
        *(_OWORD *)(v8 + 72) = v39;
        goto LABEL_39;
      }
      if ( v29 )
LABEL_36:
        *(__m128i *)(v8 + 56) = v32;
      *(_QWORD *)(v8 + 80) = 0LL;
      *(_QWORD *)(v8 + 72) = 0LL;
      if ( TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain((__int64)&v32, v8 + 24) )
        *(_BYTE *)(v8 + 88) = 0;
    }
LABEL_39:
    v3 = v33;
    goto LABEL_40;
  }
LABEL_47:
  ReleaseInterfaceNoNULL<CD2DPencil>(v38);
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v2);
  return v5;
}
