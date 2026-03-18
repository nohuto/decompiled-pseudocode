/*
 * XREFs of ?Initialize@CBitmapColorKey@@AEAAJPEAVIBitmapSource@@PEBVCColorKey@@@Z @ 0x1801A1C0C
 * Callers:
 *     ?Create@CBitmapColorKey@@SAJPEAVIBitmapSource@@PEBVCColorKey@@PEAPEAV1@@Z @ 0x1801A184C (-Create@CBitmapColorKey@@SAJPEAVIBitmapSource@@PEBVCColorKey@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA?AU_D3DCOLORVALUE@@PEBU1@@Z @ 0x1800C3DB0 (-Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA-AU_D3DCOLORVALUE@@PEBU1@@Z.c)
 *     ?Convert_scRGB_Channel_To_sRGB_Byte@@YAEM@Z @ 0x1800C4B44 (-Convert_scRGB_Channel_To_sRGB_Byte@@YAEM@Z.c)
 *     floor_0 @ 0x1800D5366 (floor_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?InitPixelFormatInfo@CBitmapColorKey@@AEAAJPEAVIPixelFormat@@@Z @ 0x1801A1B74 (-InitPixelFormatInfo@CBitmapColorKey@@AEAAJPEAVIPixelFormat@@@Z.c)
 *     ?IsSupportedColorKeyFormat@CBitmapColorKey@@CAJW4DXGI_FORMAT@@@Z @ 0x1801A2470 (-IsSupportedColorKeyFormat@CBitmapColorKey@@CAJW4DXGI_FORMAT@@@Z.c)
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x1801AB890 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 */

__int64 __fastcall CBitmapColorKey::Initialize(CBitmapColorKey *this, struct IBitmapSource *a2, const __m128i *a3)
{
  int inited; // eax
  unsigned int v7; // ebx
  int v8; // ecx
  struct IPixelFormat **v9; // r15
  int v10; // r15d
  int v11; // ecx
  __m128i v12; // xmm0
  const __m128i *v13; // r12
  __m128i v14; // xmm1
  enum DXGI_FORMAT v15; // xmm9_4
  enum DXGI_FORMAT v16; // xmm8_4
  enum DXGI_FORMAT v17; // xmm7_4
  __m128 v18; // xmm6
  enum DXGI_FORMAT v19; // xmm5_4
  enum DXGI_FORMAT v20; // xmm4_4
  enum DXGI_FORMAT v21; // xmm3_4
  __m128 v22; // xmm2
  const __m128i *v23; // rax
  int v24; // eax
  int v25; // eax
  unsigned __int8 v26; // si
  unsigned __int8 v27; // r14
  int v28; // ebx
  int v29; // ebx
  int v30; // eax
  int v31; // ebx
  unsigned __int8 v32; // al
  int v33; // eax
  unsigned __int8 v34; // si
  unsigned __int8 v35; // r14
  int v36; // ebx
  int v37; // ebx
  int v38; // ebx
  int v39; // eax
  int v40; // ebx
  unsigned __int8 v41; // al
  int v42; // ebx
  unsigned int v43; // edx
  unsigned int v44; // ebx
  __int16 v45; // bx
  unsigned __int32 v46; // eax
  int v47; // ecx
  unsigned __int32 v48; // edx
  unsigned int v49; // ecx
  unsigned int v50; // edx
  int v51; // r11d
  __int16 v52; // r11
  unsigned int v53; // eax
  int v54; // ecx
  unsigned int v55; // edx
  unsigned int v56; // ecx
  unsigned int v57; // edx
  int v58; // r10d
  __int16 v59; // r10
  unsigned int v60; // eax
  int v61; // ecx
  unsigned int v62; // edx
  unsigned int v63; // ecx
  unsigned int v64; // edx
  int v65; // r8d
  __int16 v66; // r8
  unsigned int v67; // eax
  int v68; // ecx
  unsigned int v69; // edx
  unsigned int v70; // ecx
  unsigned int v71; // edx
  unsigned int v72; // ebx
  __int16 v73; // bx
  unsigned __int32 v74; // eax
  int v75; // ecx
  unsigned __int32 v76; // edx
  unsigned int v77; // ecx
  unsigned int v78; // edx
  int v79; // r11d
  __int16 v80; // r11
  unsigned int v81; // eax
  int v82; // ecx
  unsigned int v83; // edx
  unsigned int v84; // ecx
  unsigned int v85; // edx
  int v86; // r10d
  __int16 v87; // r10
  unsigned int v88; // eax
  int v89; // ecx
  unsigned int v90; // edx
  unsigned int v91; // ecx
  unsigned int v92; // edx
  int v93; // r8d
  __int16 v94; // r8
  unsigned int v95; // eax
  int v96; // esi
  unsigned int v97; // edx
  unsigned int v98; // ecx
  unsigned int v100; // [rsp+28h] [rbp-59h]
  __m128i v101; // [rsp+38h] [rbp-49h] BYREF
  __m128 v102; // [rsp+48h] [rbp-39h]
  struct _D3DCOLORVALUE v103; // [rsp+58h] [rbp-29h] BYREF
  struct _D3DCOLORVALUE v104; // [rsp+68h] [rbp-19h] BYREF
  enum DXGI_FORMAT v105; // [rsp+F0h] [rbp+6Fh] BYREF

  inited = (*(__int64 (__fastcall **)(struct IBitmapSource *, enum DXGI_FORMAT *))(*(_QWORD *)a2 + 24LL))(a2, &v105);
  v7 = inited;
  if ( inited < 0 )
  {
    v100 = 323;
    goto LABEL_113;
  }
  if ( (int)CBitmapColorKey::IsSupportedColorKeyFormat(v105) >= 0 || v8 == 2 )
  {
    v9 = (struct IPixelFormat **)((char *)this + 32);
    *((_QWORD *)this + 4) = a2;
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a2 + 8LL))(a2);
  }
  else
  {
    v101.m128i_i32[0] = 2;
    *(__int64 *)((char *)v101.m128i_i64 + 4) = 0LL;
    v101.m128i_i32[1] = (*(__int64 (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a2 + 32LL))(a2);
    v9 = (struct IPixelFormat **)((char *)this + 32);
    v101.m128i_i32[2] = (*(__int64 (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a2 + 40LL))(a2);
    inited = CFormatConverter::HrConvertBitmap(
               a2,
               (const struct PixelFormatInfo *)&v101,
               (struct IBitmapSource **)this + 4);
    v7 = inited;
    if ( inited < 0 )
    {
      v100 = 341;
LABEL_113:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, inited, v100);
      return v7;
    }
  }
  inited = CBitmapColorKey::InitPixelFormatInfo(this, *v9);
  v7 = inited;
  if ( inited < 0 )
  {
    v100 = 352;
    goto LABEL_113;
  }
  v10 = 0;
  v11 = *((_DWORD *)this + 12);
  *((_BYTE *)this + 52) = a3[2].m128i_i8[0];
  v101 = 0LL;
  if ( v11 )
  {
    if ( v11 != 1 )
    {
      v10 = -2003292288;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292288, 0x1B8u);
      v7 = -2003292288;
LABEL_110:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x165u);
      return v7;
    }
    v12 = _mm_loadu_si128(a3);
    v13 = a3 + 1;
    v14 = _mm_loadu_si128(a3 + 1);
    v101 = v12;
    v15 = v12.m128i_i32[3];
    v16 = v12.m128i_i32[2];
    v17 = v12.m128i_i32[1];
    v18.m128_i32[0] = v12.m128i_i32[0];
    v102 = (__m128)v14;
    v19 = v14.m128i_i32[3];
    v20 = v14.m128i_i32[2];
    v21 = v14.m128i_i32[1];
    v22.m128_i32[0] = v14.m128i_i32[0];
  }
  else
  {
    v13 = a3 + 1;
    v18 = (__m128)_mm_loadu_si128((const __m128i *)Convert_MilColorF_scRGB_To_MilColorF_sRGB(
                                                     &v103,
                                                     (const struct _D3DCOLORVALUE *)a3));
    v101.m128i_i32[0] = v18.m128_i32[0];
    v17 = _mm_shuffle_ps(v18, v18, 85).m128_u32[0];
    v16 = _mm_shuffle_ps(v18, v18, 170).m128_u32[0];
    v15 = _mm_shuffle_ps(v18, v18, 255).m128_u32[0];
    *(__int64 *)((char *)v101.m128i_i64 + 4) = __PAIR64__(v16, v17);
    v101.m128i_i32[3] = v15;
    v23 = (const __m128i *)Convert_MilColorF_scRGB_To_MilColorF_sRGB(&v104, (const struct _D3DCOLORVALUE *)&a3[1]);
    v12 = v101;
    v22 = (__m128)_mm_loadu_si128(v23);
    v102.m128_i32[0] = v22.m128_i32[0];
    v21 = _mm_shuffle_ps(v22, v22, 85).m128_u32[0];
    v20 = _mm_shuffle_ps(v22, v22, 170).m128_u32[0];
    v19 = _mm_shuffle_ps(v22, v22, 255).m128_u32[0];
    *(unsigned __int64 *)((char *)v102.m128_u64 + 4) = __PAIR64__(v20, v21);
    v102.m128_i32[3] = v19;
    v14 = (__m128i)v102;
  }
  v24 = *((_DWORD *)this + 10);
  switch ( v24 )
  {
    case 2:
      *(__m128i *)((char *)this + 72) = v12;
      *(__m128i *)((char *)this + 104) = v14;
      break;
    case 10:
      v105 = v18.m128_i32[0];
      v43 = v18.m128_i32[0] & 0x7FFFFFFF;
      v44 = HIWORD(v18.m128_i32[0]) & 0x8000;
      if ( (v18.m128_i32[0] & 0x7FFFFFFFu) <= 0x47FFEFFF )
      {
        v46 = v18.m128_i32[0] & 0x7FFFFFFF;
        if ( v43 >= 0x38800000 )
        {
          v49 = v43 - 939520001;
        }
        else
        {
          v47 = 113 - (v43 >> 23);
          if ( v47 >= 24 )
            v48 = 0;
          else
            v48 = (v18.m128_i32[0] & 0x7FFFFF | 0x800000u) >> v47;
          v46 = v48;
          v49 = v48 + 4095;
        }
        v45 = ((((v46 >> 13) & 1) + v49) >> 13) | v44;
      }
      else
      {
        v45 = v44 | 0x7FFF;
      }
      v105 = v17;
      v50 = v17 & 0x7FFFFFFF;
      v51 = ((unsigned int)v17 >> 16) & 0x8000;
      if ( (v17 & 0x7FFFFFFFu) <= 0x47FFEFFF )
      {
        v53 = v17 & 0x7FFFFFFF;
        if ( v50 >= 0x38800000 )
        {
          v56 = v50 - 939520001;
        }
        else
        {
          v54 = 113 - (v50 >> 23);
          if ( v54 >= 24 )
            v55 = 0;
          else
            v55 = (v17 & 0x7FFFFF | 0x800000u) >> v54;
          v53 = v55;
          v56 = v55 + 4095;
        }
        v52 = ((((v53 >> 13) & 1) + v56) >> 13) | v51;
      }
      else
      {
        v52 = v51 | 0x7FFF;
      }
      v105 = v16;
      v57 = v16 & 0x7FFFFFFF;
      v58 = ((unsigned int)v16 >> 16) & 0x8000;
      if ( (v16 & 0x7FFFFFFFu) <= 0x47FFEFFF )
      {
        v60 = v16 & 0x7FFFFFFF;
        if ( v57 >= 0x38800000 )
        {
          v63 = v57 - 939520001;
        }
        else
        {
          v61 = 113 - (v57 >> 23);
          if ( v61 >= 24 )
            v62 = 0;
          else
            v62 = (v16 & 0x7FFFFF | 0x800000u) >> v61;
          v60 = v62;
          v63 = v62 + 4095;
        }
        v59 = ((((v60 >> 13) & 1) + v63) >> 13) | v58;
      }
      else
      {
        v59 = v58 | 0x7FFF;
      }
      v105 = v15;
      v64 = v15 & 0x7FFFFFFF;
      v65 = ((unsigned int)v15 >> 16) & 0x8000;
      if ( (v15 & 0x7FFFFFFFu) <= 0x47FFEFFF )
      {
        v67 = v15 & 0x7FFFFFFF;
        if ( v64 >= 0x38800000 )
        {
          v70 = v64 - 939520001;
        }
        else
        {
          v68 = 113 - (v64 >> 23);
          if ( v68 >= 24 )
            v69 = 0;
          else
            v69 = (v15 & 0x7FFFFF | 0x800000u) >> v68;
          v67 = v69;
          v70 = v69 + 4095;
        }
        v66 = ((((v67 >> 13) & 1) + v70) >> 13) | v65;
      }
      else
      {
        v66 = v65 | 0x7FFF;
      }
      *((_WORD *)this + 32) = v45;
      v105 = v22.m128_i32[0];
      *((_WORD *)this + 34) = v59;
      *((_WORD *)this + 35) = v66;
      v71 = v22.m128_i32[0] & 0x7FFFFFFF;
      *((_WORD *)this + 33) = v52;
      v72 = HIWORD(v22.m128_i32[0]) & 0x8000;
      if ( (v22.m128_i32[0] & 0x7FFFFFFFu) <= 0x47FFEFFF )
      {
        v74 = v22.m128_i32[0] & 0x7FFFFFFF;
        if ( v71 >= 0x38800000 )
        {
          v77 = v71 - 939520001;
        }
        else
        {
          v75 = 113 - (v71 >> 23);
          if ( v75 >= 24 )
            v76 = 0;
          else
            v76 = (v22.m128_i32[0] & 0x7FFFFF | 0x800000u) >> v75;
          v74 = v76;
          v77 = v76 + 4095;
        }
        v73 = ((((v74 >> 13) & 1) + v77) >> 13) | v72;
      }
      else
      {
        v73 = v72 | 0x7FFF;
      }
      v105 = v21;
      v78 = v21 & 0x7FFFFFFF;
      v79 = ((unsigned int)v21 >> 16) & 0x8000;
      if ( (v21 & 0x7FFFFFFFu) <= 0x47FFEFFF )
      {
        v81 = v21 & 0x7FFFFFFF;
        if ( v78 >= 0x38800000 )
        {
          v84 = v78 - 939520001;
        }
        else
        {
          v82 = 113 - (v78 >> 23);
          if ( v82 >= 24 )
            v83 = 0;
          else
            v83 = (v21 & 0x7FFFFF | 0x800000u) >> v82;
          v81 = v83;
          v84 = v83 + 4095;
        }
        v80 = ((((v81 >> 13) & 1) + v84) >> 13) | v79;
      }
      else
      {
        v80 = v79 | 0x7FFF;
      }
      v105 = v20;
      v85 = v20 & 0x7FFFFFFF;
      v86 = ((unsigned int)v20 >> 16) & 0x8000;
      if ( (v20 & 0x7FFFFFFFu) <= 0x47FFEFFF )
      {
        v88 = v20 & 0x7FFFFFFF;
        if ( v85 >= 0x38800000 )
        {
          v91 = v85 - 939520001;
        }
        else
        {
          v89 = 113 - (v85 >> 23);
          if ( v89 >= 24 )
            v90 = 0;
          else
            v90 = (v20 & 0x7FFFFF | 0x800000u) >> v89;
          v88 = v90;
          v91 = v90 + 4095;
        }
        v87 = ((((v88 >> 13) & 1) + v91) >> 13) | v86;
      }
      else
      {
        v87 = v86 | 0x7FFF;
      }
      v105 = v19;
      v92 = v19 & 0x7FFFFFFF;
      v93 = ((unsigned int)v19 >> 16) & 0x8000;
      if ( (v19 & 0x7FFFFFFFu) <= 0x47FFEFFF )
      {
        v95 = v19 & 0x7FFFFFFF;
        if ( v92 >= 0x38800000 )
        {
          v98 = v92 - 939520001;
        }
        else
        {
          v96 = 113 - (v92 >> 23);
          if ( v96 >= 24 )
            v97 = 0;
          else
            v97 = (v19 & 0x7FFFFF | 0x800000u) >> v96;
          v95 = v97;
          v98 = v97 + 4095;
        }
        v94 = ((((v95 >> 13) & 1) + v98) >> 13) | v93;
      }
      else
      {
        v94 = v93 | 0x7FFF;
      }
      *((_WORD *)this + 48) = v73;
      *((_WORD *)this + 49) = v80;
      *((_WORD *)this + 50) = v87;
      *((_WORD *)this + 51) = v94;
      return 0;
    case 28:
      v102 = (__m128)_mm_loadu_si128(a3);
      v33 = (int)floor_0((float)(_mm_shuffle_ps(v102, v102, 255).m128_f32[0] * 255.0) + 0.5);
      v34 = -1;
      if ( v33 <= 255 )
      {
        v35 = 0;
        if ( v33 >= 0 )
          v35 = v33;
      }
      else
      {
        v35 = -1;
      }
      v36 = ((v35 << 8) | Convert_scRGB_Channel_To_sRGB_Byte(v102.m128_f32[0])) << 8;
      v37 = (Convert_scRGB_Channel_To_sRGB_Byte(v102.m128_f32[1]) | v36) << 8;
      v38 = Convert_scRGB_Channel_To_sRGB_Byte(v102.m128_f32[2]) | v37;
      *((_BYTE *)this + 62) = v38;
      *((_BYTE *)this + 60) = BYTE2(v38);
      *((_BYTE *)this + 61) = BYTE1(v38);
      *((_BYTE *)this + 63) = HIBYTE(v38);
      v102 = (__m128)_mm_loadu_si128(v13);
      v39 = (int)floor_0((float)(_mm_shuffle_ps(v102, v102, 255).m128_f32[0] * 255.0) + 0.5);
      if ( v39 <= 255 )
      {
        v34 = 0;
        if ( v39 >= 0 )
          v34 = v39;
      }
      v40 = ((v34 << 8) | Convert_scRGB_Channel_To_sRGB_Byte(v102.m128_f32[0])) << 8;
      v41 = Convert_scRGB_Channel_To_sRGB_Byte(v102.m128_f32[1]);
      v42 = Convert_scRGB_Channel_To_sRGB_Byte(v102.m128_f32[2]) | ((v41 | v40) << 8);
      *((_BYTE *)this + 94) = v42;
      *((_BYTE *)this + 92) = BYTE2(v42);
      *((_BYTE *)this + 95) = HIBYTE(v42);
      *((_BYTE *)this + 93) = BYTE1(v42);
      return 0;
    default:
      if ( (unsigned int)(v24 - 87) <= 1 )
      {
        v102 = (__m128)_mm_loadu_si128(a3);
        v25 = (int)floor_0((float)(_mm_shuffle_ps(v102, v102, 255).m128_f32[0] * 255.0) + 0.5);
        v26 = -1;
        if ( v25 <= 255 )
        {
          v27 = 0;
          if ( v25 >= 0 )
            v27 = v25;
        }
        else
        {
          v27 = -1;
        }
        v28 = ((v27 << 8) | Convert_scRGB_Channel_To_sRGB_Byte(v102.m128_f32[0])) << 8;
        v29 = (Convert_scRGB_Channel_To_sRGB_Byte(v102.m128_f32[1]) | v28) << 8;
        *((_DWORD *)this + 14) = Convert_scRGB_Channel_To_sRGB_Byte(v102.m128_f32[2]) | v29;
        v102 = (__m128)_mm_loadu_si128(v13);
        v30 = (int)floor_0((float)(_mm_shuffle_ps(v102, v102, 255).m128_f32[0] * 255.0) + 0.5);
        if ( v30 <= 255 )
        {
          v26 = 0;
          if ( v30 >= 0 )
            v26 = v30;
        }
        v31 = ((v26 << 8) | Convert_scRGB_Channel_To_sRGB_Byte(v102.m128_f32[0])) << 8;
        v32 = Convert_scRGB_Channel_To_sRGB_Byte(v102.m128_f32[1]);
        *((_DWORD *)this + 22) = Convert_scRGB_Channel_To_sRGB_Byte(v102.m128_f32[2]) | ((v32 | v31) << 8);
        return 0;
      }
      v10 = -2003292288;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292288, 0x20Du);
      break;
  }
  v7 = v10;
  if ( v10 < 0 )
    goto LABEL_110;
  return v7;
}
