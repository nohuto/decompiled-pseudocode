/*
 * XREFs of ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x1801CAFC4
 * Callers:
 *     ?DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@@Z @ 0x18003F694 (-DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180017080 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180034D74 (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x180034E90 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x1800354D0 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x18007816C (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x18009E574 (-CMilRectLFromMilRectF@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniquene.c)
 *     ??2CRectanglesShape@@SAPEAX_K@Z @ 0x1800B9E18 (--2CRectanglesShape@@SAPEAX_K@Z.c)
 *     ?IsPixelAligned@@YA_NAEBUMilRectF@@@Z @ 0x1800BC2C8 (-IsPixelAligned@@YA_NAEBUMilRectF@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?BuildFromRectFs@CRectanglesShape@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18011C43C (-BuildFromRectFs@CRectanglesShape@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 */

__int64 __fastcall CShape::BuildFromRectFs(char *a1, __int64 a2, CRegionShape **a3)
{
  double v3; // xmm2_8
  CRegionShape *v4; // rsi
  unsigned __int64 v5; // rdi
  CRectanglesShape *v6; // rbx
  CInputSinkStruct::InputQueueInfo *v7; // r15
  unsigned int v8; // r10d
  struct CRectanglesShape *v11; // rcx
  int v12; // r10d
  CInputSinkStruct::InputQueueInfo *v13; // rax
  CRectanglesShape *v14; // rax
  unsigned int v15; // edi
  signed int v16; // eax
  CInputSinkStruct::InputQueueInfo *v17; // rbp
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
  __int64 v34; // r9
  __int64 v35; // rax
  signed int v36; // eax
  int v38[4]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v39[64]; // [rsp+40h] [rbp-88h] BYREF

  v4 = 0LL;
  v5 = (unsigned int)a2;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  if ( !(_DWORD)a2 )
  {
LABEL_4:
    `vector constructor iterator'(
      (CInputSinkStruct::InputQueueInfo *)v39,
      16LL,
      4LL,
      (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
    if ( (unsigned int)v5 <= 4 )
    {
      v17 = (CInputSinkStruct::InputQueueInfo *)v39;
    }
    else
    {
      v13 = (CInputSinkStruct::InputQueueInfo *)operator new(saturated_mul(v5, 0x10uLL));
      v7 = v13;
      if ( v13 )
        `vector constructor iterator'(
          v13,
          16LL,
          v5,
          (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
      else
        v7 = 0LL;
      if ( !v7 )
      {
        v15 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x43u);
        goto LABEL_46;
      }
      v17 = v7;
    }
    if ( (_DWORD)v5 )
    {
      do
      {
        v18 = CMilRectLFromMilRectF(v38, (__int64)a1);
        a1 += 16;
        *v19 = *(_OWORD *)v18;
      }
      while ( v20 != 1 );
    }
    if ( (unsigned int)v5 <= 1 )
    {
LABEL_33:
      v29 = (CRegionShape *)operator new(0x10uLL);
      v4 = v29;
      if ( v29 )
      {
        *((_QWORD *)v29 + 1) = 0LL;
        *(_QWORD *)v29 = &CRegionShape::`vftable';
      }
      else
      {
        v4 = 0LL;
      }
      v30 = 0;
      if ( v4 )
      {
        if ( (_DWORD)v5 )
        {
          v31 = v17;
          do
          {
            if ( !TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(v31) )
            {
              v35 = 2LL * v30++;
              *(_OWORD *)((char *)v17 + 8 * v35) = *v32;
            }
            v31 = (CInputSinkStruct::InputQueueInfo *)(v33 + 16);
          }
          while ( v34 != 1 );
        }
        v36 = CRegionShape::BuildFromRects((__int64)v4, (__int64)v17, v30);
        v15 = v36;
        if ( v36 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v36, 0x89u);
        }
        else
        {
          *a3 = v4;
          v4 = 0LL;
        }
      }
      else
      {
        v15 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x78u);
      }
      goto LABEL_46;
    }
    v21 = v5;
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
  while ( IsPixelAligned((const struct MilRectF *)&a1[16 * v8], a2, v3) )
  {
    v8 = v12 + 1;
    if ( v8 >= (unsigned int)v5 )
      goto LABEL_4;
  }
  v14 = (CRectanglesShape *)CRectanglesShape::operator new(v11);
  v6 = v14;
  if ( v14 )
  {
    *(_QWORD *)v14 = &CRectanglesShape::`vftable';
    *((_DWORD *)v14 + 8) = 0;
    *((_QWORD *)v14 + 1) = (char *)v14 + 40;
    *((_QWORD *)v14 + 2) = (char *)v14 + 40;
    *((_DWORD *)v14 + 6) = 1;
    *((_DWORD *)v14 + 7) = 1;
    *((_QWORD *)v14 + 7) = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    v16 = CRectanglesShape::BuildFromRectFs(v6, a1, v5);
    v15 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v16, 0x95u);
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
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x90u);
  }
LABEL_46:
  WPF::ProcessHeapImpl::Free(v7);
  if ( v4 )
    CRegionShape::`vector deleting destructor'(v4, 1);
  if ( v6 )
    CRectanglesShape::`scalar deleting destructor'(v6, 1);
  return v15;
}
