/*
 * XREFs of ?GetValidContentStateForTargetedDisplay@CBitmapOfDeviceBitmaps@@QEAA?AW4Enum@ValidContentState@1@VDisplayId@@@Z @ 0x1801AC680
 * Callers:
 *     ?DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEAVCHwBitmapCache@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVMILMatrix3x2@@PEBVCMILMatrix@@PEBUBitmapToXSpaceTransform@@MHPEBUD2DVector2@@AEAUCacheContextParameters@1@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1801B50E0 (-DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PE.c)
 * Callees:
 *     ?CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ @ 0x18007DDA0 (-CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800887B0 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::GetValidContentStateForTargetedDisplay(__int64 a1, int a2)
{
  unsigned int v4; // esi
  unsigned int v5; // edx
  unsigned int v6; // r10d
  __int64 v7; // rdi
  char v8; // r8
  char v9; // r9
  int v10; // r10d
  __int64 v11; // r11
  int v12; // eax

  CBitmapOfDeviceBitmaps::CleanupInvalidSources((CBitmapOfDeviceBitmaps *)a1);
  v4 = *(_DWORD *)(a1 + 336);
  v5 = 0;
  v6 = 0;
  if ( !v4 )
    return v5;
  v7 = *(_QWORD *)(a1 + 312);
  while ( TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty((_DWORD *)(96LL * v6 + v7 + 24)) )
  {
LABEL_7:
    v6 = v10 + 1;
    if ( v6 >= v4 )
      goto LABEL_10;
  }
  v12 = *(_DWORD *)(v11 + v7 + 4);
  if ( v12 == DisplayId::None )
  {
    v8 = 1;
    goto LABEL_7;
  }
  v9 = 1;
  if ( v12 != a2 )
    goto LABEL_7;
  v8 = 1;
LABEL_10:
  if ( v8 )
    return (unsigned int)(v9 != 0) + 1;
  return v5;
}
