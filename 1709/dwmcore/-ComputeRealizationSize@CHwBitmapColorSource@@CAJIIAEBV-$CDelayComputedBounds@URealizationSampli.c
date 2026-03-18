/*
 * XREFs of ?ComputeRealizationSize@CHwBitmapColorSource@@CAJIIAEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVCMILMatrix@@W4Enum@MilBitmapWrapMode@@HMHAEAURealizationParameters@1@@Z @ 0x1801B4C70
 * Callers:
 *     ?ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVCMILMatrix@@W4DXGI_FORMAT@@W4Enum@MilBitmapWrapMode@@W47MilBitmapInterpolationMode@@HMPEBVCColorKey@@HAEAURealizationParameters@1@@Z @ 0x1801B4904 (-ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ComputeMinimumRealizationBounds@CHwBitmapColorSource@@CA_NAEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@AEBUInternalRealizationParameters@1@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BEC10 (-ComputeMinimumRealizationBounds@CHwBitmapColorSource@@CA_NAEBV-$CDelayComputedBounds@URealizati.c)
 *     ?ComputePrefilteringDimensions@CMILMatrix@@QEBAXIIMAEAI0@Z @ 0x18018F870 (-ComputePrefilteringDimensions@CMILMatrix@@QEBAXIIMAEAI0@Z.c)
 *     ?RoundToPow2@@YAII@Z @ 0x180190FA8 (-RoundToPow2@@YAII@Z.c)
 */

__int64 __fastcall CHwBitmapColorSource::ComputeRealizationSize(
        unsigned int a1,
        unsigned int a2,
        struct MilRectF *a3,
        CMILMatrix *a4,
        int a5,
        int a6,
        float a7,
        int a8,
        __int64 a9)
{
  unsigned int v10; // edi
  struct MilRectF *v11; // r10
  _DWORD *v13; // rdx
  unsigned int v14; // ecx
  unsigned int *v15; // r14
  unsigned int v16; // ecx
  unsigned int *v17; // rsi
  unsigned int v18; // eax
  _DWORD *v19; // r15
  unsigned int v20; // ecx

  v10 = 0;
  v11 = a3;
  v13 = (_DWORD *)(a9 + 72);
  if ( (unsigned int)(*(_DWORD *)(a9 + 72) - 4) > 1 )
  {
    v17 = (unsigned int *)(a9 + 16);
    v15 = (unsigned int *)(a9 + 12);
    if ( a6 )
    {
      CMILMatrix::ComputePrefilteringDimensions(
        a4,
        *(_DWORD *)(a9 + 76),
        *(_DWORD *)(a9 + 80),
        a7,
        (unsigned int *)(a9 + 12),
        (unsigned int *)(a9 + 16));
      v11 = a3;
      v13 = (_DWORD *)(a9 + 72);
    }
    else
    {
      *v15 = *(_DWORD *)(a9 + 76);
      *v17 = *(_DWORD *)(a9 + 80);
    }
  }
  else
  {
    v14 = *(_DWORD *)(a9 + 76);
    if ( v14 < a1 )
    {
      if ( a6 || a5 )
      {
        v15 = (unsigned int *)(a9 + 12);
        *(_DWORD *)(a9 + 12) = RoundToPow2(v14);
      }
      else
      {
        v15 = (unsigned int *)(a9 + 12);
        *(_DWORD *)(a9 + 12) = v14;
      }
    }
    else
    {
      v15 = (unsigned int *)(a9 + 12);
      *(_DWORD *)(a9 + 12) = a1;
    }
    v16 = *(_DWORD *)(a9 + 80);
    if ( v16 < a2 )
    {
      if ( a6 || a5 )
      {
        v17 = (unsigned int *)(a9 + 16);
        *(_DWORD *)(a9 + 16) = RoundToPow2(v16);
      }
      else
      {
        v17 = (unsigned int *)(a9 + 16);
        *(_DWORD *)(a9 + 16) = v16;
      }
    }
    else
    {
      v17 = (unsigned int *)(a9 + 16);
      *(_DWORD *)(a9 + 16) = a2;
    }
    *(_BYTE *)(a9 + 88) = 1;
    v13 = (_DWORD *)(a9 + 72);
  }
  v18 = *v15;
  v19 = (_DWORD *)(a9 + 28);
  v20 = *v17;
  *(_DWORD *)(a9 + 28) = 0;
  *(_BYTE *)(a9 + 20) = 0;
  *(_DWORD *)(a9 + 32) = 0;
  *(_DWORD *)(a9 + 36) = v18;
  *(_DWORD *)(a9 + 40) = v20;
  if ( v18 > a1 || v20 > a2 )
  {
    *(_BYTE *)(a9 + 88) = 1;
    if ( CHwBitmapColorSource::ComputeMinimumRealizationBounds(v11, v13, (int *)(a9 + 28)) )
    {
      if ( *(_DWORD *)(a9 + 36) - *(_DWORD *)(a9 + 28) <= a1 && *(_DWORD *)(a9 + 40) - *(_DWORD *)(a9 + 32) <= a2 )
        goto LABEL_35;
    }
    if ( a8 && a6 )
    {
      v10 = -2147467263;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004001, 0x436u);
      return v10;
    }
    if ( *(_DWORD *)(a9 + 36) - *(_DWORD *)(a9 + 28) <= a1 )
    {
      if ( *v19 || *(_DWORD *)(a9 + 36) < *v15 )
        *(_BYTE *)(a9 + 20) = 1;
    }
    else
    {
      *v15 = a1;
      *v19 = 0;
      *(_DWORD *)(a9 + 36) = a1;
    }
    if ( *(_DWORD *)(a9 + 40) - *(_DWORD *)(a9 + 32) > a2 )
    {
      *v17 = a2;
      *(_DWORD *)(a9 + 32) = 0;
      *(_DWORD *)(a9 + 40) = a2;
      return v10;
    }
    if ( *(_DWORD *)(a9 + 32) || *(_DWORD *)(a9 + 40) < *v17 )
LABEL_35:
      *(_BYTE *)(a9 + 20) = 1;
  }
  return v10;
}
