/*
 * XREFs of ?GetSingleContributorToRealizationAreaNoRef@CBitmapOfDeviceBitmaps@@QEAA_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@AEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x18007DDF0
 * Callers:
 *     ?TryForDeviceBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorSource@@AEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEAVCMILBrushBitmap@@AEAPEAV3@@Z @ 0x18007EA84 (-TryForDeviceBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorSou.c)
 *     ?TryFastWarpLock@CBitmapOfDeviceBitmaps@@AEAA_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAEPEAI2PEAPEAUIUnknown@@@Z @ 0x1801ACE94 (-TryFastWarpLock@CBitmapOfDeviceBitmaps@@AEAA_NAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniquen.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800887B0 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

char __fastcall CBitmapOfDeviceBitmaps::GetSingleContributorToRealizationAreaNoRef(
        __int64 a1,
        const RECT *a2,
        _QWORD *a3)
{
  unsigned int v3; // r12d
  char v4; // bl
  unsigned int v5; // ebp
  __int64 v9; // rdi
  __int64 v10; // r15
  _DWORD *v11; // rdx
  HRGN v12; // rcx

  v3 = *(_DWORD *)(a1 + 336);
  v4 = 0;
  v5 = 0;
  if ( !v3 )
    goto LABEL_16;
  v9 = 0LL;
  while ( 1 )
  {
    v10 = *(_QWORD *)(a1 + 312);
    if ( (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(v9 + v10 + 24) )
      goto LABEL_12;
    if ( (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(a2) )
      goto LABEL_12;
    if ( v11[8] <= a2->left )
      goto LABEL_12;
    if ( a2->right <= v11[6] )
      goto LABEL_12;
    if ( v11[9] <= a2->top )
      goto LABEL_12;
    if ( a2->bottom <= v11[7] )
      goto LABEL_12;
    v12 = *(HRGN *)(v9 + v10 + 40);
    if ( v12 )
    {
      if ( !RectInRegion(v12, a2) )
        goto LABEL_12;
    }
    if ( v4 )
      break;
    v4 = 1;
    *a3 = *(_QWORD *)(v9 + v10 + 16);
LABEL_12:
    ++v5;
    v9 += 96LL;
    if ( v5 >= v3 )
      goto LABEL_13;
  }
  v4 = 0;
LABEL_13:
  if ( !v4 )
LABEL_16:
    *a3 = 0LL;
  return v4;
}
