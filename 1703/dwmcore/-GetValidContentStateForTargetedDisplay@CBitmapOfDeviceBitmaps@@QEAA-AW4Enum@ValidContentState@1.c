/*
 * XREFs of ?GetValidContentStateForTargetedDisplay@CBitmapOfDeviceBitmaps@@QEAA?AW4Enum@ValidContentState@1@VDisplayId@@@Z @ 0x1800B24A8
 * Callers:
 *     ?DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEAVCHwBitmapCache@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVMILMatrix3x2@@PEBVCMILMatrix@@PEBUBitmapToXSpaceTransform@@MHPEBUD2DVector2@@AEAUCacheContextParameters@1@PEAPEAVCHwTexturedColorSource@@@Z @ 0x18007C0EC (-DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PE.c)
 * Callees:
 *     ?CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ @ 0x1800B2458 (-CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3FEC (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::GetValidContentStateForTargetedDisplay(__int64 a1, int a2)
{
  unsigned int v4; // esi
  unsigned int v5; // edx
  unsigned int v6; // r10d
  __int64 v7; // rdi
  char v9; // r8
  char v10; // r9
  int v11; // r10d
  __int64 v12; // r11
  int v13; // eax

  CBitmapOfDeviceBitmaps::CleanupInvalidSources((CBitmapOfDeviceBitmaps *)a1);
  v4 = *(_DWORD *)(a1 + 288);
  v5 = 0;
  v6 = 0;
  if ( !v4 )
    return v5;
  v7 = *(_QWORD *)(a1 + 264);
  while ( (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(96LL * v6 + v7 + 24) )
  {
LABEL_3:
    v6 = v11 + 1;
    if ( v6 >= v4 )
      goto LABEL_4;
  }
  v13 = *(_DWORD *)(v12 + v7 + 4);
  if ( v13 == DisplayId::None )
  {
    v9 = 1;
    goto LABEL_3;
  }
  v10 = 1;
  if ( v13 != a2 )
    goto LABEL_3;
  v9 = 1;
LABEL_4:
  if ( v9 )
    return (unsigned int)(v10 != 0) + 1;
  return v5;
}
