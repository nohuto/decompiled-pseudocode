/*
 * XREFs of ?GetRects@?$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x1800BD684
 * Callers:
 *     ?CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180092BE0 (-CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitm.c)
 *     ?GetAdditionalDirtyRects@CVisual@@IEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z @ 0x180161850 (-GetAdditionalDirtyRects@CVisual@@IEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z.c)
 *     ?GetWindowNodeDirtyRects@CWindowNode@@QEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z @ 0x180161B58 (-GetWindowNodeDirtyRects@CWindowNode@@QEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z.c)
 * Callees:
 *     ?SwapExisting@?$CMergedRectBase@$03@@IEAAXII@Z @ 0x1800BD710 (-SwapExisting@-$CMergedRectBase@$03@@IEAAXII@Z.c)
 *     ?Optimize@?$CMergedRectBase@$03@@IEAAX_N@Z @ 0x1800BD788 (-Optimize@-$CMergedRectBase@$03@@IEAAX_N@Z.c)
 */

bool __fastcall CMergedRectBase<4>::GetRects(__int64 a1, unsigned int *a2, _QWORD *a3, __int64 a4)
{
  unsigned int *v4; // r15
  unsigned int v7; // esi
  unsigned int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // ebx
  _BYTE *v11; // rbp
  bool result; // al

  v4 = a2;
  LOBYTE(a2) = 1;
  v7 = 0;
  CMergedRectBase<4>::Optimize(a1, a2, a3, a4);
  v8 = *(_DWORD *)(a1 + 72);
  v9 = v8;
  if ( v8 > 1 && v8 < 4 )
  {
    v10 = 0;
    v11 = (_BYTE *)(a1 + 64);
    do
    {
      if ( *v11 )
      {
        if ( v10 != v7 )
          CMergedRectBase<4>::SwapExisting(a1, v7, v10);
        ++v7;
      }
      ++v10;
      ++v11;
    }
    while ( v10 < 4 );
    v9 = *(_DWORD *)(a1 + 72);
  }
  *v4 = v9;
  result = v9 != 0;
  *a3 = a1;
  return result;
}
