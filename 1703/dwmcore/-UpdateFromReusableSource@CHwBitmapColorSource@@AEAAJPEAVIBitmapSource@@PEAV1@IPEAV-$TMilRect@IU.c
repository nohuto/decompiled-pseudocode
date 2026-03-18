/*
 * XREFs of ?UpdateFromReusableSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@PEAV1@IPEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAIPEAPEAV3@IPEBQEAV?$DynArray@V?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@$0A@@@3@Z @ 0x18019F284
 * Callers:
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x1800447F8 (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x1800447F8 (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 *     ?IsRealizationValid@CHwBitmapColorSource@@AEBA_NXZ @ 0x180044C88 (-IsRealizationValid@CHwBitmapColorSource@@AEBA_NXZ.c)
 *     ?GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z @ 0x180045DB0 (-GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x180070F50 (-AddMultiple@-$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x180077A48 (-CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?CalculateSubtractionRectangles@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x18019ABF8 (-CalculateSubtractionRectangles@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_.c)
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
  struct CD3DSurface *v12; // rsi
  struct CD3DSurface *v13; // r15
  unsigned int v14; // r14d
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 (__fastcall *v17)(CHwBitmapColorSource *, __int64, __int64, int *, unsigned int **); // rax
  int v18; // eax
  int v19; // ebx
  int v20; // eax
  unsigned int v22; // r13d
  __int64 v23; // r14
  unsigned int v24; // ecx
  struct tagRECT *v25; // rax
  unsigned int top; // edx
  unsigned int right; // r10d
  unsigned int bottom; // r8d
  unsigned int v29; // r9d
  bool v30; // cc
  bool v31; // cf
  int v32; // eax
  __int64 v33; // r8
  CHwBitmapColorSource *v34; // rbx
  __int64 v35; // rdx
  int v36; // eax
  int D3DSurfaceLevel; // eax
  __int64 v38; // rdx
  int v39; // eax
  int v40; // eax
  int v41; // ecx
  int v42; // eax
  unsigned int v43; // edx
  __int64 v44; // r9
  unsigned int v45; // ecx
  struct tagRECT *v46; // r9
  unsigned int v47; // eax
  int v48; // eax
  unsigned int v49; // ecx
  struct tagRECT v51; // [rsp+38h] [rbp-71h] BYREF
  unsigned int v52; // [rsp+48h] [rbp-61h]
  unsigned int v53; // [rsp+4Ch] [rbp-5Dh]
  CMILPoolResource *v54; // [rsp+50h] [rbp-59h] BYREF
  unsigned int v55; // [rsp+58h] [rbp-51h]
  unsigned int v56; // [rsp+68h] [rbp-41h]
  unsigned int *v57; // [rsp+70h] [rbp-39h] BYREF
  CMILPoolResource *v58; // [rsp+78h] [rbp-31h] BYREF
  struct tagPOINT v59; // [rsp+80h] [rbp-29h] BYREF
  __int64 v60; // [rsp+88h] [rbp-21h]
  _DWORD *v61; // [rsp+90h] [rbp-19h] BYREF
  __m128i v62; // [rsp+98h] [rbp-11h]

  v11 = *(_QWORD *)(a1 + 208);
  v12 = 0LL;
  v13 = 0LL;
  v14 = *a10;
  v15 = *(_QWORD *)a3;
  v16 = *(unsigned int *)(a1 + 152);
  v54 = 0LL;
  v58 = 0LL;
  v17 = *(__int64 (__fastcall **)(CHwBitmapColorSource *, __int64, __int64, int *, unsigned int **))(v15 + 64);
  v53 = v14;
  v18 = v17(a3, v11, v16, &a8, &v57);
  v19 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xE4Cu);
  }
  else
  {
    v20 = a8;
    if ( a8 )
    {
      while ( 1 )
      {
        a8 = v20 - 1;
        v22 = 0;
        v23 = *(_QWORD *)(a9 + 8LL * v14);
        v24 = 0;
        v52 = 0;
        *(_DWORD *)(v23 + 24) = 0;
        if ( a4 )
        {
          v25 = a5;
          v60 = (__int64)a5;
          do
          {
            v51 = *v25;
            top = v51.top;
            right = v51.right;
            bottom = v51.bottom;
            v29 = _mm_cvtsi128_si32((__m128i)v51);
            if ( *v57 > v29 )
              v29 = *v57;
            v30 = v57[1] <= v51.top;
            v55 = v29;
            if ( !v30 )
              top = v57[1];
            v31 = v57[2] < v51.right;
            v51.left = v29;
            if ( v31 )
              right = v57[2];
            v31 = v57[3] < v51.bottom;
            v51.top = top;
            if ( v31 )
              bottom = v57[3];
            v51.bottom = bottom;
            v51.right = right;
            if ( right <= v29 || bottom <= top )
            {
              v43 = v56;
              v44 = v24;
              v45 = *(_DWORD *)(v23 + 24);
              v46 = &a5[v44];
              v47 = v45 + 1;
              if ( v45 + 1 >= v45 )
                v43 = v45 + 1;
              v19 = v47 < v45 ? 0x80070216 : 0;
              v56 = v43;
              if ( v47 < v45 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xB5u);
              }
              else if ( v43 > *(_DWORD *)(v23 + 20) )
              {
                v48 = DynArrayImpl<0>::AddMultipleAndSet(v23, 0x10u, 1, v46);
                v19 = v48;
                if ( v48 < 0 )
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v48, 0xC0u);
              }
              else
              {
                *(struct tagRECT *)(*(_QWORD *)v23 + 16LL * v45) = *v46;
                *(_DWORD *)(v23 + 24) = v43;
              }
              if ( v19 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xE5Fu);
                goto LABEL_47;
              }
              ++v22;
            }
            else
            {
              v32 = DynArrayImpl<0>::AddMultiple(v23, 16, 4, &v61);
              v19 = v32;
              if ( v32 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0xE69u);
                goto LABEL_47;
              }
              v22 += TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::CalculateSubtractionRectangles(
                       &a5[v52].left,
                       &v51,
                       v33,
                       v61,
                       4u);
              *(_DWORD *)(v23 + 24) = v22;
              if ( !v13 )
              {
                v34 = a3;
                if ( !CHwBitmapColorSource::IsRealizationValid(a3) )
                {
                  v36 = CHwBitmapColorSource::FillTextureWithTransformedSource(a3, a2);
                  v19 = v36;
                  if ( v36 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0xE81u);
                    goto LABEL_47;
                  }
                  v34 = a3;
                }
                D3DSurfaceLevel = CD3DTexture::GetD3DSurfaceLevel(*((CD3DTexture **)v34 + 20), v35, &v54);
                v19 = D3DSurfaceLevel;
                if ( D3DSurfaceLevel < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DSurfaceLevel, 0xE85u);
                  v12 = v54;
                  goto LABEL_47;
                }
                v39 = CD3DTexture::GetD3DSurfaceLevel(*(CD3DTexture **)(a1 + 160), v38, &v58);
                v19 = v39;
                if ( v39 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v39, 0xE88u);
                  v12 = v54;
                  v13 = v58;
                  goto LABEL_47;
                }
                v12 = v54;
                v13 = v58;
              }
              v62 = (__m128i)v51;
              v40 = *((_DWORD *)a3 + 30);
              v41 = -*((_DWORD *)a3 + 31);
              v51.top -= *((_DWORD *)a3 + 31);
              v42 = -v40;
              v51.bottom += v41;
              v51.right += v42;
              v59.y = v62.m128i_i32[1] - *(_DWORD *)(a1 + 124);
              v51.left = v42 + v55;
              v59.x = _mm_cvtsi128_si32(v62) - *(_DWORD *)(a1 + 120);
              CD3DDeviceLevel1::CopySurfaceRect(*(CD3DDeviceLevel1 **)(a1 + 16), v12, &v51, v13, &v59);
            }
            v24 = v52 + 1;
            v25 = (struct tagRECT *)(v60 + 16);
            v52 = v24;
            v60 += 16LL;
          }
          while ( v24 < a4 );
        }
        a5 = *(struct tagRECT **)v23;
        v49 = v22;
        a4 = v22;
        v14 = ((_BYTE)v53 - 1) & 1;
        v53 = v14;
        if ( !v22 )
          break;
        v57 += 4;
        v20 = a8;
        if ( !a8 )
          goto LABEL_44;
      }
    }
    else
    {
      v49 = a4;
LABEL_44:
      a8 = -1;
    }
    *a6 = v49;
    *a7 = a5;
    *a10 = v14;
  }
LABEL_47:
  if ( v12 )
    CMILPoolResource::Release(v12);
  if ( v13 )
    CMILPoolResource::Release(v13);
  return (unsigned int)v19;
}
