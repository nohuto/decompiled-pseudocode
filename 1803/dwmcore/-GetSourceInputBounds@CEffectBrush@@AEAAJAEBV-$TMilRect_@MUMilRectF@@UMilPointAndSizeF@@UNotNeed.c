/*
 * XREFs of ?GetSourceInputBounds@CEffectBrush@@AEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEAV?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@@Z @ 0x18000A32C
 * Callers:
 *     ?GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180009E58 (-GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CEffectBrush@@QEAA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEBVCMILMatrix@@0PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@3@Z @ 0x18000A3DC (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CEffectBrush@@QEAA_NAEBV-$TMil3DRect@M.c)
 *     ?GetBounds@CEffectBrush@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAV2@@Z @ 0x18000A570 (-GetBounds@CEffectBrush@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?GetSourceInputBoundsUnion@CEffectBrush@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAV2@@Z @ 0x18018B350 (-GetSourceInputBoundsUnion@CEffectBrush@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800794F0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrush::GetSourceInputBounds(__int64 a1, _OWORD *a2, __int64 a3, __int64 *a4)
{
  unsigned int v4; // esi
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // edi
  __int64 v11; // rbp
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v16; // eax

  v4 = *(_DWORD *)(a1 + 128);
  v8 = DynArrayImpl<0>::Grow((_DWORD)a4, 16, v4, 1, 0LL);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x32Fu);
    return v9;
  }
  v10 = 0;
  *((_DWORD *)a4 + 6) = v4;
  if ( v4 )
  {
    v11 = 0LL;
    v12 = 0LL;
    do
    {
      v13 = *a4;
      v14 = *(_QWORD *)(v12 + *(_QWORD *)(a1 + 104));
      if ( v14 )
      {
        v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v14 + 168LL))(
                v14,
                0LL,
                a3,
                v13 + 16LL * v10);
        v9 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x336u);
          return v9;
        }
      }
      else
      {
        *(_OWORD *)(v13 + v11) = *a2;
      }
      ++v10;
      v12 += 8LL;
      v11 += 16LL;
    }
    while ( v10 < v4 );
  }
  return v9;
}
