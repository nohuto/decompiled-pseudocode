/*
 * XREFs of ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1800572A0
 * Callers:
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x180041704 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?GetHwBrush@CHwBrushPool@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@@Z @ 0x18004AC38 (-GetHwBrush@CHwBrushPool@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@@Z.c)
 * Callees:
 *     ?TryForDeviceBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorSource@@AEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEAVCMILBrushBitmap@@AEAPEAV3@@Z @ 0x1800437F8 (-TryForDeviceBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorSou.c)
 *     ?TryForLastUsedBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorSource@@AEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEAVCMILBrushBitmap@@AEAPEAV3@3@Z @ 0x180043A00 (-TryForLastUsedBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorS.c)
 *     ?CalcTextureTransform@CHwBitmapColorSource@@AEAAJPEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@@Z @ 0x180044DD8 (-CalcTextureTransform@CHwBitmapColorSource@@AEAAJPEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@.c)
 *     ?RetrieveFromBitmapSource@CHwBitmapCache@@SAJPEAVIBitmapSource@@PEBVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180056E58 (-RetrieveFromBitmapSource@CHwBitmapCache@@SAJPEAVIBitmapSource@@PEBVCD3DDeviceLevel1@@PEAPEAV1@@.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180057184 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEAVCHwBitmapCache@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVMILMatrix3x2@@PEBVCMILMatrix@@PEBUBitmapToXSpaceTransform@@MHPEBUD2DVector2@@AEAUCacheContextParameters@1@PEAPEAVCHwTexturedColorSource@@@Z @ 0x18007C0EC (-DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PE.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?CheckAndSetReusableSource@CHwBitmapColorSource@@AEAAXPEAV1@@Z @ 0x18019ED9C (-CheckAndSetReusableSource@CHwBitmapColorSource@@AEAAXPEAV1@@Z.c)
 */

__int64 __fastcall CHwBitmapColorSource::DeriveFromBrushAndContext(
        struct CD3DDeviceLevel1 *a1,
        struct CMILBrushBitmap *a2,
        const struct CHwBrushContext *a3,
        struct CHwTexturedColorSource **a4)
{
  const struct CMILMatrix *v4; // rbx
  struct CMILBrushBitmap *v6; // r8
  int v7; // eax
  CHwBitmapColorSource *v8; // rdi
  CMILRefCountBase *v9; // rsi
  volatile signed __int32 *v10; // r13
  __m128 v11; // xmm1
  __m128 v12; // xmm2
  __m128 v13; // xmm3
  __int128 v14; // xmm0
  __int128 v15; // xmm3
  __int128 v16; // xmm2
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  const struct CMILMatrix *v19; // r10
  __int128 v20; // xmm0
  int v21; // edx
  int v22; // eax
  int v23; // r9d
  char v24; // cl
  int v25; // ebx
  bool v26; // dl
  int v27; // r12d
  struct IBitmapSource *v28; // rcx
  struct IBitmapSource *v29; // r14
  __int64 v30; // rax
  int v31; // eax
  _QWORD *v32; // rdx
  struct CHwBitmapColorSource *v33; // r15
  CMILRefCountBase *v34; // rcx
  int v35; // eax
  unsigned int v36; // ebx
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  struct CHwBitmapColorSource *v43; // rbx
  void (__fastcall ***v44)(_QWORD, struct CHwBitmapCache *); // r8
  unsigned int v45; // [rsp+20h] [rbp-E0h]
  CHwBitmapColorSource *v46; // [rsp+60h] [rbp-A0h] BYREF
  CMILRefCountBase *v47; // [rsp+68h] [rbp-98h]
  struct IBitmapSource *v48; // [rsp+70h] [rbp-90h]
  struct CMILBrushBitmap *v49; // [rsp+78h] [rbp-88h]
  struct CHwBitmapCache *v50; // [rsp+80h] [rbp-80h] BYREF
  __int64 v51; // [rsp+88h] [rbp-78h]
  struct CD3DDeviceLevel1 *v52; // [rsp+90h] [rbp-70h]
  _DWORD v53[6]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v54; // [rsp+B0h] [rbp-50h] BYREF
  int v55; // [rsp+B8h] [rbp-48h]
  char v56; // [rsp+BCh] [rbp-44h]
  int v57; // [rsp+C0h] [rbp-40h]
  bool v58; // [rsp+C4h] [rbp-3Ch]
  int v59; // [rsp+C8h] [rbp-38h]
  int v60; // [rsp+CCh] [rbp-34h]
  int v61; // [rsp+D0h] [rbp-30h]
  int v62; // [rsp+D4h] [rbp-2Ch]
  int v63; // [rsp+D8h] [rbp-28h]
  char v64; // [rsp+DCh] [rbp-24h]
  __int128 v65; // [rsp+E0h] [rbp-20h]
  __int128 v66; // [rsp+F0h] [rbp-10h]
  int v67; // [rsp+100h] [rbp+0h]
  __int64 v68[2]; // [rsp+110h] [rbp+10h] BYREF
  __int128 v69; // [rsp+120h] [rbp+20h]
  __int128 v70; // [rsp+130h] [rbp+30h]
  __int128 v71; // [rsp+140h] [rbp+40h]
  int v72; // [rsp+150h] [rbp+50h]
  __int64 v73[2]; // [rsp+160h] [rbp+60h] BYREF
  __int128 v74; // [rsp+170h] [rbp+70h]
  __int128 v75; // [rsp+180h] [rbp+80h]
  __int128 v76; // [rsp+190h] [rbp+90h]
  int v77; // [rsp+1A0h] [rbp+A0h]
  __m128 v78; // [rsp+1B0h] [rbp+B0h]
  __m128 v79; // [rsp+1C0h] [rbp+C0h]
  __int128 v80; // [rsp+1D0h] [rbp+D0h]
  __m128 v81; // [rsp+1E0h] [rbp+E0h]
  int v82; // [rsp+1F0h] [rbp+F0h]
  __int128 v83; // [rsp+200h] [rbp+100h] BYREF
  __int64 *v84; // [rsp+210h] [rbp+110h]
  char v85; // [rsp+218h] [rbp+118h]

  v51 = (__int64)a4;
  v4 = (struct CMILBrushBitmap *)((char *)a2 + 120);
  v6 = a2;
  v7 = *((_DWORD *)a2 + 46);
  v8 = 0LL;
  v49 = a2;
  v9 = 0LL;
  v52 = a1;
  v10 = 0LL;
  v46 = 0LL;
  v11 = *(__m128 *)((char *)a2 + 120);
  v47 = 0LL;
  v12 = *(__m128 *)((char *)a2 + 136);
  v50 = 0LL;
  v13 = *(__m128 *)((char *)a2 + 168);
  v72 = 0;
  v14 = *(_OWORD *)((char *)a2 + 152);
  v77 = 0;
  v53[0] = v11.m128_i32[0];
  v53[2] = v12.m128_i32[0];
  v53[4] = v13.m128_i32[0];
  v78 = v11;
  v79 = v12;
  v81 = v13;
  v53[1] = _mm_shuffle_ps(v11, v11, 85).m128_u32[0];
  v53[3] = _mm_shuffle_ps(v12, v12, 85).m128_u32[0];
  v53[5] = _mm_shuffle_ps(v13, v13, 85).m128_u32[0];
  v80 = v14;
  v82 = v7;
  if ( *((_DWORD *)a2 + 29) )
  {
    CMILMatrix::Multiply(v4, *((const struct CMILMatrix **)a3 + 1), (struct CMILMatrix *)v73);
    v7 = v77;
    v15 = v76;
    v16 = v75;
    v17 = v74;
    v18 = *(_OWORD *)v73;
    v6 = v49;
  }
  else
  {
    v18 = *(_OWORD *)v4;
    v77 = v7;
    v17 = *(_OWORD *)((char *)a2 + 136);
    v16 = *(_OWORD *)((char *)a2 + 152);
    v15 = *(_OWORD *)((char *)a2 + 168);
    *(_OWORD *)v73 = v18;
    v74 = v17;
    v75 = v16;
    v76 = v15;
  }
  v19 = *(const struct CMILMatrix **)a3;
  v85 = 0;
  if ( *((_BYTE *)v19 + 68) )
  {
    v7 = *((_DWORD *)v4 + 16);
    v38 = *((_OWORD *)v4 + 1);
    *(_OWORD *)v68 = *(_OWORD *)v4;
    v39 = *((_OWORD *)v4 + 2);
    v69 = v38;
    v40 = *((_OWORD *)v4 + 3);
    v70 = v39;
    v71 = v40;
  }
  else
  {
    *(_OWORD *)v68 = v18;
    v69 = v17;
    v70 = v16;
    v71 = v15;
  }
  v20 = *(_OWORD *)((char *)a3 + 36);
  v21 = *((_DWORD *)a3 + 6);
  v72 = v7;
  v84 = v68;
  v22 = *((_DWORD *)a3 + 7);
  v83 = v20;
  if ( !v21 || (v23 = 2, v21 != 1) )
    v23 = 1;
  v24 = *((_BYTE *)v19 + 200);
  v25 = *((_DWORD *)v6 + 64);
  v26 = *((_DWORD *)a3 + 5) == 1;
  v27 = *((_DWORD *)v19 + 45);
  v60 = v22;
  v62 = *((_DWORD *)v6 + 28);
  v63 = *((_DWORD *)v6 + 50);
  v58 = v26;
  v56 = v24;
  v57 = *((_DWORD *)a3 + 4);
  v65 = _xmm;
  v66 = 0LL;
  LOBYTE(v67) = 0;
  v54 = (__int64)v6;
  v55 = v27;
  v59 = v23;
  v61 = v25;
  if ( (-(__int64)((v25 & 2) != 0) & ((unsigned __int64)v6 + 220)) != 0 )
  {
    v64 = 1;
    v41 = *(_OWORD *)(((unsigned __int64)v6 + 220) & -(__int64)((v25 & 2) != 0));
    v42 = *(_OWORD *)((((unsigned __int64)v6 + 220) & -(__int64)((v25 & 2) != 0)) + 0x10);
    v67 = *(_DWORD *)((((unsigned __int64)v6 + 220) & -(__int64)((v25 & 2) != 0)) + 0x20);
    v65 = v41;
    v66 = v42;
  }
  else
  {
    v64 = 0;
  }
  v28 = (struct IBitmapSource *)*((_QWORD *)v6 + 24);
  v29 = 0LL;
  v48 = 0LL;
  if ( !v28 )
  {
    v36 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0xB5u);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0xE0u);
    goto LABEL_27;
  }
  v30 = *(_QWORD *)v28;
  v29 = v28;
  v48 = v28;
  (*(void (**)(void))(v30 + 8))();
  v31 = CHwBitmapCache::RetrieveFromBitmapSource(v29, v52, &v50);
  v10 = (volatile signed __int32 *)v50;
  if ( v31 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0xE9u);
LABEL_38:
    v35 = CHwBitmapColorSource::DeriveFromBitmapAndContext(
            v52,
            v29,
            (__int64)v53,
            (__int64)v73,
            (__int64)v68,
            *(_DWORD *)(*(_QWORD *)a3 + 204LL),
            *((_DWORD *)a3 + 8),
            *((_QWORD *)a3 + 7),
            (__int64)&v54,
            v51);
    v36 = v35;
    if ( v35 >= 0 )
      goto LABEL_27;
    v45 = 278;
    goto LABEL_52;
  }
  if ( v27 > 1 )
    v27 = 1;
  v55 = v27;
  if ( !v50 )
    goto LABEL_38;
  v46 = 0LL;
  if ( !*((_QWORD *)v50 + 62)
    || (CHwBitmapCache::TryForDeviceBitmapColorSource(
          (__int64)v50,
          (unsigned int *)&v54,
          (__int64)&v83,
          (__int64)v49,
          &v46),
        (v8 = v46) == 0LL) )
  {
    CHwBitmapCache::TryForLastUsedBitmapColorSource((CHwBitmapCache *)v10, (__int64)&v54, (__int64)&v83);
    v8 = v46;
    v9 = v47;
    if ( !v46 )
      goto LABEL_38;
  }
  *((_DWORD *)v8 + 23) = v25;
  v32 = (_QWORD *)*((_QWORD *)a3 + 7);
  if ( v27 )
    *((_DWORD *)v8 + 6) = 2;
  else
    *((_DWORD *)v8 + 6) = 1;
  if ( v32 )
  {
    *(_QWORD *)((char *)v8 + 36) = *v32;
  }
  else
  {
    *((_DWORD *)v8 + 9) = 0;
    *((_DWORD *)v8 + 10) = 0;
  }
  v33 = v9;
  if ( v9 )
    (**(void (__fastcall ***)(CMILRefCountBase *))v9)(v9);
  v34 = (CMILRefCountBase *)*((_QWORD *)v8 + 33);
  if ( v34 )
  {
    CMILRefCountBase::Release(v34);
    *((_QWORD *)v8 + 33) = 0LL;
  }
  if ( v9 )
  {
    do
    {
      v43 = (struct CHwBitmapColorSource *)*((_QWORD *)v33 + 33);
      *((_QWORD *)v33 + 33) = 0LL;
      CHwBitmapColorSource::CheckAndSetReusableSource(v8, v33);
      CMILRefCountBase::Release(v33);
      v33 = v43;
    }
    while ( v43 );
  }
  v35 = CHwBitmapColorSource::CalcTextureTransform(
          v8,
          (const struct MILMatrix3x2 *)v53,
          (const struct BitmapToXSpaceTransform *)v68);
  v36 = v35;
  if ( v35 >= 0 )
  {
    *(_QWORD *)v51 = v8;
    v8 = 0LL;
    v46 = 0LL;
    goto LABEL_27;
  }
  v45 = 301;
LABEL_52:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v35, v45);
LABEL_27:
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
    {
      v44 = (void (__fastcall ***)(_QWORD, struct CHwBitmapCache *))*((_QWORD *)v50 + 2);
      if ( v44 )
        (**v44)(*((_QWORD *)v50 + 2), v50);
      else
        (*(void (__fastcall **)(struct CHwBitmapCache *, __int64))(*(_QWORD *)v50 + 16LL))(v50, 1LL);
    }
    v29 = v48;
    v8 = v46;
    v9 = v47;
  }
  if ( v9 )
    CMILRefCountBase::Release(v9);
  if ( v8 )
    CMILRefCountBase::Release(v8);
  if ( v29 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v29 + 16LL))(v29);
  return v36;
}
