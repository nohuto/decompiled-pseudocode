/*
 * XREFs of ?EnsureUpdatedSysMemBuffer@CBitmapOfDeviceBitmaps@@AEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801AC0C8
 * Callers:
 *     ?Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1801AC840 (-Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 * Callees:
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x18000A5D4 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ @ 0x18007DDA0 (-CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z @ 0x1800823A0 (--$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180088768 (-DoesContain@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800887B0 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?CalculateSubtractionRectangles@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x1801ABE7C (-CalculateSubtractionRectangles@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_.c)
 *     ?EnsureRgnData@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJXZ @ 0x1801AC088 (-EnsureRgnData@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJXZ.c)
 *     ?CopyPixelsToBitmap@CHwDeviceBitmapColorSource@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x1801B6994 (-CopyPixelsToBitmap@CHwDeviceBitmapColorSource@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectU.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::EnsureUpdatedSysMemBuffer(__int64 a1, __m128i *a2)
{
  struct IBitmapSource *v2; // rsi
  __m128i *v3; // r13
  unsigned int v5; // edi
  unsigned int v6; // r12d
  __int64 v7; // r15
  __int64 v8; // rbx
  __int32 v9; // eax
  __int32 v10; // r11d
  unsigned __int32 v11; // r13d
  unsigned int v12; // r10d
  bool v13; // cc
  bool v14; // cf
  bool DoesContain; // al
  unsigned __int32 v16; // r10d
  unsigned int v17; // r11d
  __int32 v18; // edx
  signed int v19; // eax
  signed int v20; // eax
  __int64 v21; // rdx
  int v22; // r8d
  int v23; // r9d
  signed int v24; // eax
  __int64 v25; // rax
  signed int v26; // eax
  __int64 v27; // r8
  int v28; // eax
  struct IUnknown *v30; // [rsp+30h] [rbp-49h]
  char v31; // [rsp+40h] [rbp-39h]
  __m128i v32; // [rsp+48h] [rbp-31h] BYREF
  unsigned __int32 v33; // [rsp+58h] [rbp-21h]
  unsigned int v34; // [rsp+5Ch] [rbp-1Dh]
  __m128i *v35; // [rsp+60h] [rbp-19h]
  unsigned int v36; // [rsp+68h] [rbp-11h]
  struct IBitmapSource *v37; // [rsp+70h] [rbp-9h] BYREF
  __int64 v38; // [rsp+78h] [rbp-1h] BYREF
  __int128 v39; // [rsp+80h] [rbp+7h] BYREF

  v2 = 0LL;
  v35 = a2;
  v38 = 0LL;
  v3 = a2;
  v37 = 0LL;
  v5 = 0;
  CBitmapOfDeviceBitmaps::CleanupInvalidSources((CBitmapOfDeviceBitmaps *)a1);
  v6 = 0;
  v36 = *(_DWORD *)(a1 + 336);
  if ( v36 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      v8 = v7 + *(_QWORD *)(a1 + 312);
      if ( *(_BYTE *)(v8 + 88) )
        break;
LABEL_38:
      ++v6;
      v7 += 96LL;
      if ( v6 >= v36 )
        goto LABEL_45;
    }
    v32 = *v3;
    v9 = v32.m128i_i32[1];
    v10 = v32.m128i_i32[2];
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
    v33 = v9;
    if ( v14 )
      v11 = *(_DWORD *)(v8 + 36);
    v32.m128i_i32[1] = v9;
    v32.m128i_i64[1] = __PAIR64__(v11, v10);
    if ( !TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(&v32) )
    {
      DoesContain = TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain(v8 + 56, (__int64)&v32);
      v18 = v33;
      if ( DoesContain )
      {
        v31 = 0;
        if ( *(_DWORD *)(v8 + 72) > v16 )
          v16 = *(_DWORD *)(v8 + 72);
        v13 = *(_DWORD *)(v8 + 76) <= v33;
        v34 = v16;
        if ( !v13 )
          v18 = *(_DWORD *)(v8 + 76);
        v14 = *(_DWORD *)(v8 + 80) < v17;
        v32.m128i_i32[0] = v16;
        if ( v14 )
          v17 = *(_DWORD *)(v8 + 80);
        v14 = *(_DWORD *)(v8 + 84) < v11;
        v32.m128i_i32[1] = v18;
        if ( v14 )
          v11 = *(_DWORD *)(v8 + 84);
        v32.m128i_i64[1] = __PAIR64__(v11, v17);
        if ( TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(&v32) )
          goto LABEL_37;
      }
      else
      {
        v31 = 1;
      }
      v19 = HrCreateBitmapFromMemoryEx(
              v17 - v34,
              v11 - v18,
              (const struct PixelFormatInfo *)(a1 + 184),
              *(_DWORD *)(a1 + 300),
              *(_DWORD *)(a1 + 296) - (v18 * *(_DWORD *)(a1 + 300) + v16 * *(_DWORD *)(a1 + 304)),
              (unsigned __int8 *)(v18 * *(_DWORD *)(a1 + 300) + v16 * *(_DWORD *)(a1 + 304) + *(_QWORD *)(a1 + 288)),
              v30,
              &v37);
      v5 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v19, 0x58Du);
        v2 = v37;
        goto LABEL_45;
      }
      v2 = v37;
      v20 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, __int64 *))v37)(
              v37,
              &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
              &v38);
      v5 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v20, 0x590u);
        goto LABEL_45;
      }
      v22 = 0;
      v23 = 0;
      if ( *(_QWORD *)(v8 + 40) )
      {
        v24 = CBitmapOfDeviceBitmaps::DeviceBitmapInfo::EnsureRgnData(
                (CBitmapOfDeviceBitmaps::DeviceBitmapInfo *)v8,
                v21,
                0LL);
        v5 = v24;
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v24, 0x59Cu);
          goto LABEL_45;
        }
        v25 = *(_QWORD *)(v8 + 48);
        v22 = *(_DWORD *)(v25 + 8);
        v23 = v25 + 32;
      }
      v26 = CHwDeviceBitmapColorSource::CopyPixelsToBitmap(*(_QWORD *)(v8 + 16), (unsigned int)&v32, v22, v23, v38);
      v5 = v26;
      if ( v26 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v26, 0x5A9u);
        goto LABEL_45;
      }
      if ( v31 )
        goto LABEL_34;
      v28 = TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::CalculateSubtractionRectangles(
              (_DWORD *)(v8 + 72),
              &v32,
              v27,
              &v39,
              1u);
      if ( v28 == 1 )
      {
        *(_OWORD *)(v8 + 72) = v39;
        goto LABEL_37;
      }
      if ( v28 )
LABEL_34:
        *(__m128i *)(v8 + 56) = v32;
      *(_QWORD *)(v8 + 80) = 0LL;
      *(_QWORD *)(v8 + 72) = 0LL;
      if ( TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::DoesContain((__int64)&v32, v8 + 24) )
        *(_BYTE *)(v8 + 88) = 0;
    }
LABEL_37:
    v3 = v35;
    goto LABEL_38;
  }
LABEL_45:
  ReleaseInterfaceNoNULL<CManipulationManager>(v38);
  ReleaseInterfaceNoNULL<ID2D1Bitmap1>((__int64)v2);
  return v5;
}
