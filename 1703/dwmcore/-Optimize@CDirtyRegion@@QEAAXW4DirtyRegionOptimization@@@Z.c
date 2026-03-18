/*
 * XREFs of ?Optimize@CDirtyRegion@@QEAAXW4DirtyRegionOptimization@@@Z @ 0x180091258
 * Callers:
 *     ?PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z @ 0x1800B6D20 (-PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FBC0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18006FE88 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?Merge@CDirtyRegion@@AEAAXII@Z @ 0x180091550 (-Merge@CDirtyRegion@@AEAAXII@Z.c)
 *     ?CalcOvehead@@YAMAEBUMilRectF@@0@Z @ 0x1800C1B2C (-CalcOvehead@@YAMAEBUMilRectF@@0@Z.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

char __fastcall CDirtyRegion::Optimize(__int64 a1, int a2)
{
  _UNKNOWN **v2; // rax
  __int64 v5; // rbp
  unsigned int v6; // edi
  char v7; // r13
  __int64 v8; // rdx
  unsigned int v9; // eax
  float *v10; // r9
  int v11; // edx
  _OWORD *v12; // r8
  __int64 v13; // r9
  __int64 v14; // rsi
  float *v15; // r14
  float *v16; // rcx
  const struct MilRectF *v17; // rcx
  __int64 v18; // r8
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  v2 = &retaddr;
  if ( *(_BYTE *)(a1 + 2724) )
  {
    *(_DWORD *)(a1 + 1120) = 1;
  }
  else
  {
    v5 = 0LL;
    memset_0((void *)(a1 + 960), 0, 0x80uLL);
    v6 = 0;
    do
    {
      v7 = 0;
      if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)(16LL * v6 + a1 + 24)) )
      {
        v14 = v6 + 1;
        if ( (unsigned int)v14 < 8 )
        {
          v15 = (float *)(a1 + 4 * (v8 + 8 * v14 + 134));
          while ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)(16LL * (unsigned int)v14
                                                                                      + a1
                                                                                      + 24))
               || a2 != 2
               && !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                     (float *)(16LL * v6 + a1 + 24),
                     v16)
               && (!a2 || *v15 < 0.86000001 && CalcOvehead(v17, (const struct MilRectF *)(v18 + a1 + 24)) >= 50000.0) )
          {
            LODWORD(v14) = v14 + 1;
            v15 += 8;
            if ( (unsigned int)v14 >= 8 )
              goto LABEL_4;
          }
          CDirtyRegion::Merge((CDirtyRegion *)a1, v6, v14);
          v7 = 1;
        }
      }
LABEL_4:
      v9 = v6 + 1;
      v6 = 0;
      if ( !v7 )
        v6 = v9;
    }
    while ( v6 < 8 );
    v10 = (float *)(a1 + 24);
    do
    {
      LOBYTE(v2) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(v10);
      if ( !(_BYTE)v2 )
      {
        LOBYTE(v2) = 2 * (v5 + 60);
        *(_OWORD *)(a1 + 16 * (v5 + 60)) = *v12;
        *(_DWORD *)(a1 + 4 * v5 + 1088) = v11;
        v5 = (unsigned int)(v5 + 1);
      }
      v10 = (float *)(v13 + 16);
    }
    while ( (unsigned int)(v11 + 1) < 8 );
    *(_DWORD *)(a1 + 1120) = v5;
  }
  *(_BYTE *)(a1 + 2726) = 1;
  return (char)v2;
}
