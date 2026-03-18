/*
 * XREFs of ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x180209D10
 * Callers:
 *     ?DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@@Z @ 0x18015ECE0 (-DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU.c)
 * Callees:
 *     ?IsPixelAligned@@YA_NAEBUMilRectF@@@Z @ 0x180004114 (-IsPixelAligned@@YA_NAEBUMilRectF@@@Z.c)
 *     ??2CRectanglesShape@@SAPEAX_K@Z @ 0x18001D1D8 (--2CRectanglesShape@@SAPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x1800292D8 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180063D14 (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x180063E50 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x180064290 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x180094DF4 (-CMilRectLFromMilRectF@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniquene.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800CD620 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?BuildFromRectFs@CRectanglesShape@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18013F2D4 (-BuildFromRectFs@CRectanglesShape@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 */

__int64 __fastcall CShape::BuildFromRectFs(char *a1, unsigned int a2, CRegionShape **a3)
{
  unsigned __int64 v3; // rbp
  CRegionShape *v6; // rdi
  CRectanglesShape *v7; // rbx
  CInputSinkStruct::InputQueueInfo *v8; // r12
  unsigned int v9; // r9d
  struct CRectanglesShape *v10; // rcx
  int v11; // r9d
  unsigned __int64 v12; // r14
  CInputSinkStruct::InputQueueInfo *v13; // rax
  _QWORD *v14; // rax
  unsigned int v15; // esi
  int v16; // eax
  CInputSinkStruct::InputQueueInfo *v17; // rsi
  int *v18; // rax
  _OWORD *v19; // r8
  __int64 v20; // r9
  unsigned int v21; // r9d
  unsigned int v22; // r10d
  unsigned int v23; // r8d
  _DWORD *v24; // rcx
  CInputSinkStruct::InputQueueInfo *v25; // rdx
  int v26; // r11d
  bool v27; // cc
  __int128 v28; // xmm0
  CRegionShape *v29; // rax
  unsigned int v30; // r8d
  CInputSinkStruct::InputQueueInfo *v31; // rcx
  _OWORD *v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  int v35; // eax
  int v37[4]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v38[64]; // [rsp+40h] [rbp-88h] BYREF

  v3 = a2;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0;
  if ( !a2 )
  {
LABEL_4:
    `vector constructor iterator'(
      (CInputSinkStruct::InputQueueInfo *)v38,
      16LL,
      4LL,
      (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
    v12 = v3;
    if ( (unsigned int)v3 <= 4 )
    {
      v17 = (CInputSinkStruct::InputQueueInfo *)v38;
    }
    else
    {
      v13 = (CInputSinkStruct::InputQueueInfo *)operator new(saturated_mul(v3, 0x10uLL));
      v8 = v13;
      if ( v13 )
        `vector constructor iterator'(
          v13,
          16LL,
          v3,
          (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
      else
        v8 = 0LL;
      if ( !v8 )
      {
        v15 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x43u);
        goto LABEL_46;
      }
      v17 = v8;
    }
    if ( (_DWORD)v3 )
    {
      do
      {
        v18 = CMilRectLFromMilRectF(v37, (__int64)a1);
        a1 += 16;
        *v19 = *(_OWORD *)v18;
      }
      while ( v20 != 1 );
    }
    if ( (unsigned int)v3 <= 1 )
    {
LABEL_33:
      v29 = (CRegionShape *)operator new(0x18uLL);
      v6 = v29;
      if ( v29 )
      {
        *((_QWORD *)v29 + 1) = 0LL;
        *((_QWORD *)v29 + 2) = 0LL;
        *(_QWORD *)v29 = &CRegionShape::`vftable';
      }
      else
      {
        v6 = 0LL;
      }
      v30 = 0;
      if ( v6 )
      {
        if ( (_DWORD)v3 )
        {
          v31 = v17;
          do
          {
            if ( !TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(v31) )
            {
              v34 = 2LL * v30++;
              *(_OWORD *)((char *)v17 + 8 * v34) = *v32;
            }
            v31 = (CInputSinkStruct::InputQueueInfo *)(v33 + 16);
            --v12;
          }
          while ( v12 );
        }
        v35 = CRegionShape::BuildFromRects((__int64)v6, (__int64)v17, v30);
        v15 = v35;
        if ( v35 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0x89u);
        }
        else
        {
          *a3 = v6;
          v6 = 0LL;
        }
      }
      else
      {
        v15 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x78u);
      }
      goto LABEL_46;
    }
    v21 = v3;
    while ( 1 )
    {
      v22 = 0;
      v23 = 1;
      if ( v21 > 1 )
        break;
LABEL_32:
      v21 = v22;
      if ( !v22 )
        goto LABEL_33;
    }
    v24 = (_DWORD *)((char *)v17 + 16);
    v25 = v17;
    while ( 1 )
    {
      v26 = v24[1];
      v27 = *((_DWORD *)v25 + 1) <= v26;
      if ( *((_DWORD *)v25 + 1) == v26 )
      {
        if ( *(_DWORD *)v25 > *v24 )
          goto LABEL_30;
        v27 = *((_DWORD *)v25 + 1) <= v26;
      }
      if ( !v27 )
      {
LABEL_30:
        v22 = v23;
        v28 = *(_OWORD *)v25;
        *(_OWORD *)v25 = *(_OWORD *)v24;
        *(_OWORD *)v24 = v28;
      }
      ++v23;
      v25 = (CInputSinkStruct::InputQueueInfo *)((char *)v25 + 16);
      v24 += 4;
      if ( v23 >= v21 )
        goto LABEL_32;
    }
  }
  while ( IsPixelAligned((const struct MilRectF *)&a1[16 * v9]) )
  {
    v9 = v11 + 1;
    if ( v9 >= (unsigned int)v3 )
      goto LABEL_4;
  }
  v14 = CRectanglesShape::operator new(v10);
  v7 = (CRectanglesShape *)v14;
  if ( v14 )
  {
    v14[1] = 0LL;
    *v14 = &CRectanglesShape::`vftable';
    v14[2] = v14 + 6;
    v14[3] = v14 + 6;
    *((_DWORD *)v14 + 8) = 1;
    *(_QWORD *)((char *)v14 + 36) = 1LL;
    v14[8] = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    v16 = CRectanglesShape::BuildFromRectFs(v7, a1, v3);
    v15 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x95u);
    }
    else
    {
      *a3 = v7;
      v7 = 0LL;
    }
  }
  else
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x90u);
  }
LABEL_46:
  operator delete(v8);
  if ( v6 )
    CRegionShape::`vector deleting destructor'(v6, 1);
  if ( v7 )
    CRectanglesShape::`scalar deleting destructor'(v7, 1);
  return v15;
}
