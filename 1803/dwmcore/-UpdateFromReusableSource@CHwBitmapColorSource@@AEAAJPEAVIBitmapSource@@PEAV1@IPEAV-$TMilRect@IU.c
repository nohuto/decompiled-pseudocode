/*
 * XREFs of ?UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAIPEAPEAV3@IPEBQEAV?$DynArray@V?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@$0A@@@3@Z @ 0x1801F0AA4
 * Callers:
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x1801EFC8C (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     ?GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z @ 0x1800218B0 (-GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z @ 0x180021E58 (--$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x180075370 (-CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x180079844 (-AddMultiple@-$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800839A8 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?CalculateSubtractionRectangles@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x1801E8B30 (-CalculateSubtractionRectangles@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_.c)
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x1801EFC8C (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 *     ?IsRealizationValid@CHwBitmapColorSource@@AEBA_NXZ @ 0x1801F0104 (-IsRealizationValid@CHwBitmapColorSource@@AEBA_NXZ.c)
 */

__int64 __fastcall CHwBitmapColorSource::UpdateFromReusableSource(
        __int64 a1,
        struct IUnknown *a2,
        CHwBitmapColorSource *a3,
        unsigned int a4,
        struct tagRECT *a5,
        unsigned int *a6,
        struct tagRECT **a7,
        int a8,
        __int64 a9,
        unsigned int *a10)
{
  __int64 v11; // rdx
  struct CD3DSurface *v12; // r13
  unsigned int v13; // r15d
  __int64 v14; // rax
  __int64 v15; // r8
  int v16; // eax
  int v17; // ebx
  int v18; // eax
  unsigned int v20; // ecx
  unsigned int v21; // r12d
  __int64 v22; // rsi
  struct tagRECT *v23; // rax
  unsigned int v24; // ecx
  LONG top; // ecx
  LONG right; // ecx
  LONG bottom; // ecx
  int v28; // edx
  unsigned int v29; // ecx
  unsigned int v30; // r8d
  unsigned int v31; // eax
  struct tagRECT *v32; // r9
  int v33; // eax
  int v34; // eax
  __int64 v35; // r8
  CHwBitmapColorSource *v36; // rbx
  __int64 v37; // rdx
  int v38; // eax
  int D3DSurfaceLevel; // eax
  __int64 v40; // rdx
  int v41; // eax
  int v42; // eax
  int v43; // ecx
  int v44; // eax
  int v46[4]; // [rsp+38h] [rbp-81h] BYREF
  struct tagRECT v47; // [rsp+48h] [rbp-71h] BYREF
  unsigned int v48; // [rsp+58h] [rbp-61h]
  unsigned int v49; // [rsp+68h] [rbp-51h]
  unsigned int *v50; // [rsp+78h] [rbp-41h] BYREF
  struct CD3DSurface *v51; // [rsp+80h] [rbp-39h] BYREF
  struct CD3DSurface *v52; // [rsp+88h] [rbp-31h] BYREF
  struct tagPOINT v53; // [rsp+90h] [rbp-29h] BYREF
  __int64 v54; // [rsp+98h] [rbp-21h]
  _DWORD *v55; // [rsp+A0h] [rbp-19h] BYREF
  __m128i v56; // [rsp+A8h] [rbp-11h]
  int v61; // [rsp+140h] [rbp+87h]

  v52 = 0LL;
  v11 = *(_QWORD *)(a1 + 216);
  v12 = 0LL;
  v13 = *a10;
  v14 = *(_QWORD *)a3;
  v15 = *(unsigned int *)(a1 + 160);
  v51 = 0LL;
  v16 = (*(__int64 (__fastcall **)(CHwBitmapColorSource *, __int64, __int64, int *, unsigned int **))(v14 + 72))(
          a3,
          v11,
          v15,
          v46,
          &v50);
  v17 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xE39u);
    goto LABEL_45;
  }
  v18 = v46[0];
  v20 = a4;
  if ( v46[0] )
  {
    while ( 1 )
    {
      v46[0] = v18 - 1;
      v21 = 0;
      v22 = *(_QWORD *)(a9 + 8LL * v13);
      v61 = 0;
      *(_DWORD *)(v22 + 24) = 0;
      if ( v20 )
        break;
LABEL_35:
      a5 = *(struct tagRECT **)v22;
      v13 = ((_BYTE)v13 - 1) & 1;
      v20 = v21;
      a4 = v21;
      if ( !v21 )
        goto LABEL_38;
      v50 += 4;
      v18 = v46[0];
      if ( !v46[0] )
        goto LABEL_37;
    }
    v23 = a5;
    v54 = (__int64)a5;
    while ( 1 )
    {
      v47 = *v23;
      v24 = _mm_cvtsi128_si32((__m128i)v47);
      if ( *v50 > v24 )
        v24 = *v50;
      v47.left = v24;
      v49 = v24;
      top = v47.top;
      if ( v50[1] > v47.top )
        top = v50[1];
      v47.top = top;
      right = v47.right;
      if ( v50[2] < v47.right )
        right = v50[2];
      v47.right = right;
      bottom = v47.bottom;
      if ( v50[3] < v47.bottom )
        bottom = v50[3];
      v47.bottom = bottom;
      if ( TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(&v47) )
        break;
      v34 = DynArrayImpl<0>::AddMultiple(v22, 0x10u, 4, &v55);
      v17 = v34;
      if ( v34 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0xE56u);
        goto LABEL_45;
      }
      v21 += TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::CalculateSubtractionRectangles(
               &a5[v61].left,
               &v47,
               v35,
               v55,
               4u);
      *(_DWORD *)(v22 + 24) = v21;
      if ( !v12 )
      {
        v36 = a3;
        if ( !CHwBitmapColorSource::IsRealizationValid(a3) )
        {
          v38 = CHwBitmapColorSource::FillTextureWithTransformedSource(a3, a2);
          v17 = v38;
          if ( v38 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0xE6Eu);
            goto LABEL_45;
          }
          v36 = a3;
        }
        D3DSurfaceLevel = CD3DTexture::GetD3DSurfaceLevel(*((CD3DTexture **)v36 + 21), v37, &v52);
        v17 = D3DSurfaceLevel;
        if ( D3DSurfaceLevel < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D3DSurfaceLevel, 0xE72u);
          goto LABEL_45;
        }
        v41 = CD3DTexture::GetD3DSurfaceLevel(*(CD3DTexture **)(a1 + 168), v40, &v51);
        v17 = v41;
        if ( v41 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0xE75u);
          v12 = v51;
          goto LABEL_45;
        }
        v12 = v51;
      }
      v56 = (__m128i)v47;
      v42 = *((_DWORD *)a3 + 32);
      v43 = -*((_DWORD *)a3 + 33);
      v47.top -= *((_DWORD *)a3 + 33);
      v44 = -v42;
      v47.bottom += v43;
      v47.right += v44;
      v53.y = v56.m128i_i32[1] - *(_DWORD *)(a1 + 132);
      v47.left = v44 + v49;
      v53.x = _mm_cvtsi128_si32(v56) - *(_DWORD *)(a1 + 128);
      CD3DDeviceLevel1::CopySurfaceRect(*(CD3DDeviceLevel1 **)(a1 + 16), v52, &v47, v12, &v53);
      v28 = v61;
LABEL_34:
      v23 = (struct tagRECT *)(v54 + 16);
      v61 = v28 + 1;
      v54 += 16LL;
      if ( v28 + 1 >= a4 )
        goto LABEL_35;
    }
    v29 = *(_DWORD *)(v22 + 24);
    v30 = v48;
    v31 = v29 + 1;
    v32 = &a5[v28];
    if ( v29 + 1 >= v29 )
      v30 = v29 + 1;
    v17 = v31 < v29 ? 0x80070216 : 0;
    v48 = v30;
    if ( v31 < v29 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0xB5u);
    }
    else
    {
      if ( v30 <= *(_DWORD *)(v22 + 20) )
      {
        *(struct tagRECT *)(*(_QWORD *)v22 + 16LL * v29) = *v32;
        *(_DWORD *)(v22 + 24) = v30;
LABEL_23:
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0xE4Cu);
          goto LABEL_45;
        }
        ++v21;
        goto LABEL_34;
      }
      v33 = DynArrayImpl<0>::AddMultipleAndSet(v22, 0x10u, 1, v32);
      v17 = v33;
      if ( v33 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0xC0u);
    }
    v28 = v61;
    goto LABEL_23;
  }
LABEL_37:
  v46[0] = v18 - 1;
LABEL_38:
  *a6 = v20;
  *a7 = a5;
  *a10 = v13;
LABEL_45:
  ReleaseInterfaceNoNULL<CD3DSurface>((__int64)v52);
  ReleaseInterfaceNoNULL<CD3DSurface>((__int64)v12);
  return (unsigned int)v17;
}
