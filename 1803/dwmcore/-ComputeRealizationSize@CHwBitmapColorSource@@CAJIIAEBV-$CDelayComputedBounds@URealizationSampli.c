/*
 * XREFs of ?ComputeRealizationSize@CHwBitmapColorSource@@CAJIIAEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVCMILMatrix@@W4Enum@MilBitmapWrapMode@@HMHAEAURealizationParameters@1@@Z @ 0x1801EEF38
 * Callers:
 *     ?ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVCMILMatrix@@W4DXGI_FORMAT@@W4Enum@MilBitmapWrapMode@@W47MilBitmapInterpolationMode@@HMPEBVCColorKey@@HAEAURealizationParameters@1@@Z @ 0x1801EEBCC (-ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RoundToPow2@@YAII@Z @ 0x1801C6930 (-RoundToPow2@@YAII@Z.c)
 *     ?ComputePrefilteringDimensions@CMILMatrix@@QEBAXIIMAEAI0@Z @ 0x1801C6D9C (-ComputePrefilteringDimensions@CMILMatrix@@QEBAXIIMAEAI0@Z.c)
 *     ?ComputeMinimumRealizationBounds@CHwBitmapColorSource@@CA_NAEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@AEBUInternalRealizationParameters@1@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801EE804 (-ComputeMinimumRealizationBounds@CHwBitmapColorSource@@CA_NAEBV-$CDelayComputedBounds@URealizati.c)
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
  struct MilRectF *v12; // r10
  unsigned int v13; // ecx
  _DWORD *v14; // rdx
  unsigned int v15; // eax
  unsigned int *v16; // r14
  unsigned int *v17; // rsi
  unsigned int v18; // ecx
  _DWORD *v19; // r15

  v10 = 0;
  v12 = a3;
  v13 = *(_DWORD *)(a9 + 76);
  v14 = (_DWORD *)(a9 + 72);
  if ( (unsigned int)(*(_DWORD *)(a9 + 72) - 4) <= 1 )
  {
    if ( v13 < a1 )
    {
      if ( a6 || a5 )
      {
        v16 = (unsigned int *)(a9 + 12);
        *(_DWORD *)(a9 + 12) = RoundToPow2(v13);
      }
      else
      {
        v16 = (unsigned int *)(a9 + 12);
        *(_DWORD *)(a9 + 12) = v13;
      }
    }
    else
    {
      v16 = (unsigned int *)(a9 + 12);
      *(_DWORD *)(a9 + 12) = a1;
    }
    v18 = *(_DWORD *)(a9 + 80);
    if ( v18 < a2 )
    {
      if ( a6 || a5 )
      {
        v17 = (unsigned int *)(a9 + 16);
        *(_DWORD *)(a9 + 16) = RoundToPow2(v18);
      }
      else
      {
        v17 = (unsigned int *)(a9 + 16);
        *(_DWORD *)(a9 + 16) = v18;
      }
    }
    else
    {
      v17 = (unsigned int *)(a9 + 16);
      *(_DWORD *)(a9 + 16) = a2;
    }
    *(_BYTE *)(a9 + 88) = 1;
  }
  else
  {
    v15 = *(_DWORD *)(a9 + 80);
    v16 = (unsigned int *)(a9 + 12);
    v17 = (unsigned int *)(a9 + 16);
    if ( !a6 )
    {
      *v16 = v13;
      *v17 = v15;
      goto LABEL_19;
    }
    CMILMatrix::ComputePrefilteringDimensions(a4, v13, v15, a7, (unsigned int *)(a9 + 12), v17);
    v12 = a3;
  }
  v15 = *v17;
  v14 = (_DWORD *)(a9 + 72);
  v13 = *v16;
LABEL_19:
  *(_BYTE *)(a9 + 20) = 0;
  v19 = (_DWORD *)(a9 + 28);
  *(_DWORD *)(a9 + 28) = 0;
  *(_DWORD *)(a9 + 32) = 0;
  *(_DWORD *)(a9 + 36) = v13;
  *(_DWORD *)(a9 + 40) = v15;
  if ( v13 > a1 || v15 > a2 )
  {
    *(_BYTE *)(a9 + 88) = 1;
    if ( CHwBitmapColorSource::ComputeMinimumRealizationBounds(v12, v14, (int *)(a9 + 28)) )
    {
      if ( *(_DWORD *)(a9 + 36) - *(_DWORD *)(a9 + 28) <= a1 && *(_DWORD *)(a9 + 40) - *(_DWORD *)(a9 + 32) <= a2 )
        goto LABEL_36;
    }
    if ( a8 && a6 )
    {
      v10 = -2147467263;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467263, 0x436u);
      return v10;
    }
    if ( *(_DWORD *)(a9 + 36) - *(_DWORD *)(a9 + 28) <= a1 )
    {
      if ( *v19 || *(_DWORD *)(a9 + 36) < *v16 )
        *(_BYTE *)(a9 + 20) = 1;
    }
    else
    {
      *v16 = a1;
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
LABEL_36:
      *(_BYTE *)(a9 + 20) = 1;
  }
  return v10;
}
