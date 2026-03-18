/*
 * XREFs of ?GetRects@?$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x1800737D0
 * Callers:
 *     ?CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180052FA0 (-CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitm.c)
 *     ?GetAdditionalDirtyRects@CVisual@@IEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z @ 0x18014C770 (-GetAdditionalDirtyRects@CVisual@@IEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z.c)
 *     ?GetWindowNodeDirtyRects@CWindowNode@@QEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z @ 0x18014D054 (-GetWindowNodeDirtyRects@CWindowNode@@QEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z.c)
 * Callees:
 *     ?SwapExisting@?$CMergedRectBase@$03@@IEAAXII@Z @ 0x18007385C (-SwapExisting@-$CMergedRectBase@$03@@IEAAXII@Z.c)
 *     ?Optimize@?$CMergedRectBase@$03@@IEAAX_N@Z @ 0x1800738D4 (-Optimize@-$CMergedRectBase@$03@@IEAAX_N@Z.c)
 */

bool __fastcall CMergedRectBase<4>::GetRects(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  _DWORD *v3; // r15
  unsigned int v4; // esi
  __int64 v7; // r9
  int v8; // ecx
  bool result; // al
  __int64 v10; // r8
  _BYTE *v11; // rbp

  v3 = a2;
  LOBYTE(a2) = 1;
  v4 = 0;
  CMergedRectBase<4>::Optimize(a1, a2);
  if ( (unsigned int)(*(_DWORD *)(a1 + 72) - 2) <= 1 )
  {
    v10 = 0LL;
    v11 = (_BYTE *)(a1 + 64);
    do
    {
      if ( *v11 )
      {
        if ( (_DWORD)v10 != v4 )
          CMergedRectBase<4>::SwapExisting(a1, v4, v10, v7);
        ++v4;
      }
      v10 = (unsigned int)(v10 + 1);
      ++v11;
    }
    while ( (unsigned int)v10 < 4 );
  }
  v8 = *(_DWORD *)(a1 + 72);
  result = v8 != 0;
  *v3 = v8;
  *a3 = a1;
  return result;
}
