/*
 * XREFs of ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x18004F904
 * Callers:
 *     ?DrawBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1MHW4Enum@MilCompositingMode@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@_NPEA_N@Z @ 0x1800A7D20 (-DrawBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1MHW4Enum@.c)
 *     ?DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@PEA_N@Z @ 0x1800A84D0 (-DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?IsPixelAligned@@YA_NAEBUMilRectF@@@Z @ 0x18004FB1C (-IsPixelAligned@@YA_NAEBUMilRectF@@@Z.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x18004FCA8 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x18004FDD0 (-CMilRectLFromMilRectF@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniquene.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x18006F290 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18006F2DC (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 *     ?BuildFromRectFs@CRectanglesShape@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180093F10 (-BuildFromRectFs@CRectanglesShape@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x180094110 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800B3474 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??2CRectanglesShape@@SAPEAX_K@Z @ 0x1800C456C (--2CRectanglesShape@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CShape::BuildFromRectFs(__int64 a1, unsigned int a2, CRegionShape **a3)
{
  CRegionShape *v3; // rsi
  unsigned __int64 v4; // rdi
  CRectanglesShape *v5; // rbx
  CInputSinkStruct::InputQueueInfo *v6; // r15
  unsigned int v7; // r10d
  unsigned __int64 v10; // rcx
  int v11; // r10d
  CInputSinkStruct::InputQueueInfo *v12; // rbp
  CInputSinkStruct::InputQueueInfo *v13; // r8
  unsigned __int64 v14; // r9
  _OWORD *v15; // rax
  _OWORD *v16; // r8
  __int64 v17; // r9
  CRegionShape *v18; // rax
  __int64 v19; // r8
  CInputSinkStruct::InputQueueInfo *v20; // rdx
  CInputSinkStruct::InputQueueInfo *v21; // rcx
  unsigned __int64 v22; // r9
  _OWORD *v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r9
  __int64 v26; // rax
  int v27; // eax
  unsigned int v28; // edi
  unsigned int v30; // r9d
  unsigned int v31; // r10d
  unsigned int v32; // r8d
  _BYTE *v33; // rcx
  CInputSinkStruct::InputQueueInfo *v34; // rdx
  int v35; // r11d
  bool v36; // cc
  CRectanglesShape *v37; // rax
  int v38; // r9d
  CInputSinkStruct::InputQueueInfo *v39; // rax
  __int128 v40; // xmm0
  unsigned int v41; // [rsp+20h] [rbp-A8h]
  char v42[16]; // [rsp+30h] [rbp-98h] BYREF
  char v43; // [rsp+40h] [rbp-88h] BYREF

  v3 = 0LL;
  v4 = a2;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0;
  if ( !a2 )
  {
LABEL_4:
    if ( (unsigned int)v4 > 4 )
    {
      v39 = (CInputSinkStruct::InputQueueInfo *)operator new(saturated_mul(v4, 0x10uLL));
      v6 = v39;
      if ( v39 )
        `vector constructor iterator'(
          v39,
          0x10uLL,
          v4,
          (void *(*)(void *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
      else
        v6 = 0LL;
      if ( !v6 )
      {
        v38 = -2147024882;
        v41 = 67;
        v28 = -2147024882;
        goto LABEL_54;
      }
      v12 = v6;
    }
    else
    {
      v12 = (CInputSinkStruct::InputQueueInfo *)&v43;
    }
    if ( (_DWORD)v4 )
    {
      v13 = v12;
      v14 = v4;
      do
      {
        v15 = (_OWORD *)CMilRectLFromMilRectF(v42, a1, v13, v14);
        a1 += 16LL;
        *v16 = *v15;
        v13 = (CInputSinkStruct::InputQueueInfo *)(v16 + 1);
        v14 = v17 - 1;
      }
      while ( v14 );
    }
    if ( (unsigned int)v4 <= 1 )
    {
LABEL_10:
      v18 = (CRegionShape *)operator new(0x10uLL);
      v3 = v18;
      if ( v18 )
      {
        *((_QWORD *)v18 + 1) = 0LL;
        *(_QWORD *)v18 = &CRegionShape::`vftable';
      }
      else
      {
        v3 = 0LL;
      }
      v19 = 0LL;
      if ( !v3 )
      {
        v28 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x78u);
        goto LABEL_20;
      }
      if ( (_DWORD)v4 )
      {
        v20 = v12;
        v21 = v12;
        v22 = v4;
        do
        {
          if ( !(unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(v21, v20, v19, v22) )
          {
            v26 = 2LL * (unsigned int)v19;
            v19 = (unsigned int)(v19 + 1);
            *(_OWORD *)((char *)v12 + 8 * v26) = *v23;
          }
          v21 = (CInputSinkStruct::InputQueueInfo *)(v24 + 16);
          v20 = (CInputSinkStruct::InputQueueInfo *)(v23 + 1);
          v22 = v25 - 1;
        }
        while ( v22 );
      }
      v27 = CRegionShape::BuildFromRects(v3, v12, v19);
      v28 = v27;
      if ( v27 >= 0 )
      {
        *a3 = v3;
        v3 = 0LL;
        goto LABEL_20;
      }
      v41 = 137;
      goto LABEL_53;
    }
    v30 = v4;
    while ( 1 )
    {
      v31 = 0;
      v32 = 1;
      if ( v30 > 1 )
        break;
LABEL_31:
      v30 = v31;
      if ( !v31 )
        goto LABEL_10;
    }
    v33 = (char *)v12 + 16;
    v34 = v12;
    while ( 1 )
    {
      v35 = *((_DWORD *)v33 + 1);
      v36 = *((_DWORD *)v34 + 1) <= v35;
      if ( *((_DWORD *)v34 + 1) == v35 )
      {
        if ( *(_DWORD *)v34 > *(_DWORD *)v33 )
        {
LABEL_49:
          v31 = v32;
          v40 = *(_OWORD *)v34;
          *(_OWORD *)v34 = *(_OWORD *)v33;
          *(_OWORD *)v33 = v40;
          goto LABEL_30;
        }
        v36 = *((_DWORD *)v34 + 1) <= v35;
      }
      if ( !v36 )
        goto LABEL_49;
LABEL_30:
      ++v32;
      v34 = (CInputSinkStruct::InputQueueInfo *)((char *)v34 + 16);
      v33 += 16;
      if ( v32 >= v30 )
        goto LABEL_31;
    }
  }
  while ( IsPixelAligned((const struct MilRectF *)(a1 + 16LL * v7)) )
  {
    v7 = v11 + 1;
    if ( v7 >= (unsigned int)v4 )
      goto LABEL_4;
  }
  v37 = (CRectanglesShape *)CRectanglesShape::operator new(v10);
  v5 = v37;
  if ( v37 )
  {
    *(_QWORD *)v37 = &CRectanglesShape::`vftable';
    *((_DWORD *)v37 + 8) = 0;
    *((_QWORD *)v37 + 1) = (char *)v37 + 40;
    *((_QWORD *)v37 + 2) = (char *)v37 + 40;
    *((_DWORD *)v37 + 6) = 1;
    *((_DWORD *)v37 + 7) = 1;
    *((_QWORD *)v37 + 7) = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v27 = CRectanglesShape::BuildFromRectFs(v5, a1, (unsigned int)v4);
    v28 = v27;
    if ( v27 >= 0 )
    {
      *a3 = v5;
      v5 = 0LL;
      goto LABEL_20;
    }
    v41 = 149;
LABEL_53:
    v38 = v27;
    goto LABEL_54;
  }
  v38 = -2147024882;
  v41 = 144;
  v28 = -2147024882;
LABEL_54:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, v41);
LABEL_20:
  WPF::ProcessHeapImpl::Free(v6);
  if ( v3 )
    CRegionShape::`vector deleting destructor'(v3, 1u);
  if ( v5 )
    CRectanglesShape::`scalar deleting destructor'(v5, 1u);
  return v28;
}
