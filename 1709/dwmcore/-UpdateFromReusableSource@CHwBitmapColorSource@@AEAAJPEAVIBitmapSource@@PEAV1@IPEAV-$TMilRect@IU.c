/*
 * XREFs of ?UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAIPEAPEAV3@IPEBQEAV?$DynArray@V?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@$0A@@@3@Z @ 0x1801B650C
 * Callers:
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x1801B56F8 (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     ?CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x18002086C (-CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x1800685D8 (-AddMultiple@-$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z @ 0x180081D60 (-GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z @ 0x1800824B8 (--$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800887B0 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?CalculateSubtractionRectangles@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x1801ABE7C (-CalculateSubtractionRectangles@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_.c)
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x1801B56F8 (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 *     ?IsRealizationValid@CHwBitmapColorSource@@AEBA_NXZ @ 0x1801B5B60 (-IsRealizationValid@CHwBitmapColorSource@@AEBA_NXZ.c)
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
  struct CD3DSurface *v12; // r12
  unsigned int v13; // r13d
  __int64 v14; // rax
  __int64 v15; // r8
  signed int v16; // eax
  signed int v17; // ebx
  int v18; // eax
  unsigned int v20; // ecx
  unsigned int v21; // r15d
  __int64 v22; // rsi
  struct tagRECT *v23; // rax
  unsigned int v24; // ecx
  LONG top; // ecx
  LONG right; // ecx
  LONG bottom; // ecx
  int v28; // edx
  unsigned int v29; // r10d
  unsigned int v30; // ecx
  struct tagRECT *v31; // r9
  unsigned int v32; // eax
  unsigned int v33; // r8d
  signed int v34; // eax
  signed int v35; // eax
  __int64 v36; // r8
  CHwBitmapColorSource *v37; // rbx
  __int64 v38; // rdx
  signed int v39; // eax
  signed int D3DSurfaceLevel; // eax
  __int64 v41; // rdx
  signed int v42; // eax
  int v43; // eax
  int v44; // ecx
  int v45; // eax
  int v47[4]; // [rsp+38h] [rbp-81h] BYREF
  struct tagRECT v48; // [rsp+48h] [rbp-71h] BYREF
  unsigned int v49; // [rsp+58h] [rbp-61h]
  unsigned int v50; // [rsp+68h] [rbp-51h]
  unsigned int *v51; // [rsp+78h] [rbp-41h] BYREF
  struct CD3DSurface *v52; // [rsp+80h] [rbp-39h] BYREF
  struct CD3DSurface *v53; // [rsp+88h] [rbp-31h] BYREF
  struct tagPOINT v54; // [rsp+90h] [rbp-29h] BYREF
  __int64 v55; // [rsp+98h] [rbp-21h]
  _DWORD *v56; // [rsp+A0h] [rbp-19h] BYREF
  __m128i v57; // [rsp+A8h] [rbp-11h]
  int v62; // [rsp+140h] [rbp+87h]

  v53 = 0LL;
  v11 = *(_QWORD *)(a1 + 216);
  v12 = 0LL;
  v13 = *a10;
  v14 = *(_QWORD *)a3;
  v15 = *(unsigned int *)(a1 + 160);
  v52 = 0LL;
  v16 = (*(__int64 (__fastcall **)(CHwBitmapColorSource *, __int64, __int64, int *, unsigned int **))(v14 + 72))(
          a3,
          v11,
          v15,
          v47,
          &v51);
  v17 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v16, 0xE39u);
    goto LABEL_45;
  }
  v18 = v47[0];
  v20 = a4;
  if ( v47[0] )
  {
    while ( 1 )
    {
      v47[0] = v18 - 1;
      v21 = 0;
      v22 = *(_QWORD *)(a9 + 8LL * v13);
      v62 = 0;
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
      v51 += 4;
      v18 = v47[0];
      if ( !v47[0] )
        goto LABEL_37;
    }
    v23 = a5;
    v55 = (__int64)a5;
    while ( 1 )
    {
      v48 = *v23;
      v24 = _mm_cvtsi128_si32((__m128i)v48);
      if ( *v51 > v24 )
        v24 = *v51;
      v48.left = v24;
      v50 = v24;
      top = v48.top;
      if ( v51[1] > v48.top )
        top = v51[1];
      v48.top = top;
      right = v48.right;
      if ( v51[2] < v48.right )
        right = v51[2];
      v48.right = right;
      bottom = v48.bottom;
      if ( v51[3] < v48.bottom )
        bottom = v51[3];
      v48.bottom = bottom;
      if ( TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(&v48) )
        break;
      v35 = DynArrayImpl<0>::AddMultiple(v22, 16, 4, &v56);
      v17 = v35;
      if ( v35 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v35, 0xE56u);
        goto LABEL_45;
      }
      v21 += TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::CalculateSubtractionRectangles(
               &a5[v62].left,
               &v48,
               v36,
               v56,
               4u);
      *(_DWORD *)(v22 + 24) = v21;
      if ( !v12 )
      {
        v37 = a3;
        if ( !CHwBitmapColorSource::IsRealizationValid(a3) )
        {
          v39 = CHwBitmapColorSource::FillTextureWithTransformedSource(a3, a2);
          v17 = v39;
          if ( v39 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v39, 0xE6Eu);
            goto LABEL_45;
          }
          v37 = a3;
        }
        D3DSurfaceLevel = CD3DTexture::GetD3DSurfaceLevel(*((CD3DTexture **)v37 + 21), v38, &v53);
        v17 = D3DSurfaceLevel;
        if ( D3DSurfaceLevel < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, D3DSurfaceLevel, 0xE72u);
          goto LABEL_45;
        }
        v42 = CD3DTexture::GetD3DSurfaceLevel(*(CD3DTexture **)(a1 + 168), v41, &v52);
        v17 = v42;
        if ( v42 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v42, 0xE75u);
          v12 = v52;
          goto LABEL_45;
        }
        v12 = v52;
      }
      v57 = (__m128i)v48;
      v43 = *((_DWORD *)a3 + 32);
      v44 = -*((_DWORD *)a3 + 33);
      v48.top -= *((_DWORD *)a3 + 33);
      v45 = -v43;
      v48.bottom += v44;
      v48.right += v45;
      v54.y = v57.m128i_i32[1] - *(_DWORD *)(a1 + 132);
      v48.left = v45 + v50;
      v54.x = _mm_cvtsi128_si32(v57) - *(_DWORD *)(a1 + 128);
      CD3DDeviceLevel1::CopySurfaceRect(*(CD3DDeviceLevel1 **)(a1 + 16), v53, &v48, v12, &v54);
      v28 = v62;
LABEL_34:
      v23 = (struct tagRECT *)(v55 + 16);
      v62 = v28 + 1;
      v55 += 16LL;
      if ( v28 + 1 >= a4 )
        goto LABEL_35;
    }
    v30 = *(_DWORD *)(v22 + 24);
    v31 = &a5[v28];
    v32 = v30 + 1;
    v33 = v30 + 1;
    if ( v30 + 1 < v30 )
      v33 = v29;
    v17 = v32 < v30 ? 0x80070216 : 0;
    v49 = v33;
    if ( v32 < v30 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v17, 0xB5u);
    }
    else
    {
      if ( v33 <= *(_DWORD *)(v22 + 20) )
      {
        *(struct tagRECT *)(*(_QWORD *)v22 + 16LL * v30) = *v31;
        *(_DWORD *)(v22 + 24) = v33;
LABEL_23:
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v17, 0xE4Cu);
          goto LABEL_45;
        }
        ++v21;
        goto LABEL_34;
      }
      v34 = DynArrayImpl<0>::AddMultipleAndSet(v22, 0x10u, 1, v31);
      v17 = v34;
      if ( v34 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v34, 0xC0u);
    }
    v28 = v62;
    goto LABEL_23;
  }
LABEL_37:
  v47[0] = v18 - 1;
LABEL_38:
  *a6 = v20;
  *a7 = a5;
  *a10 = v13;
LABEL_45:
  ReleaseInterfaceNoNULL<CD3DSurface>((__int64)v53);
  ReleaseInterfaceNoNULL<CD3DSurface>((__int64)v12);
  return (unsigned int)v17;
}
