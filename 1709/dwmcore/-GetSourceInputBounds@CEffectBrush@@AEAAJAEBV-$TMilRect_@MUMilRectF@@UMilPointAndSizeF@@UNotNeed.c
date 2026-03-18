/*
 * XREFs of ?GetSourceInputBounds@CEffectBrush@@AEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEAV?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@@Z @ 0x1800825D0
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CEffectBrush@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@3PEAV2@4@Z @ 0x180082780 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CEffectBrush@@QEAAXAEBV-$TMilRect_@MUM.c)
 *     ?GetBounds@CEffectBrush@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAV2@@Z @ 0x180082934 (-GetBounds@CEffectBrush@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800834F8 (-GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNot.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180068650 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrush::GetSourceInputBounds(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  signed int v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // edi
  __int64 v11; // rbp
  __int64 v12; // r14
  __int64 v13; // rcx
  signed int v15; // eax

  v4 = *(_DWORD *)(a1 + 136);
  v8 = DynArrayImpl<0>::Grow(a4, 0x10u, v4, 1, 0LL);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x2F1u);
    return v9;
  }
  v10 = 0;
  *(_DWORD *)(a4 + 24) = v4;
  if ( v4 )
  {
    v11 = 0LL;
    v12 = 0LL;
    do
    {
      v13 = *(_QWORD *)(v12 + *(_QWORD *)(a1 + 112));
      if ( v13 )
      {
        v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v13 + 168LL))(
                v13,
                0LL,
                a3,
                *(_QWORD *)a4 + 16LL * v10);
        v9 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0x2F8u);
          return v9;
        }
      }
      else
      {
        *(_OWORD *)(*(_QWORD *)a4 + v11) = *a2;
      }
      ++v10;
      v12 += 8LL;
      v11 += 16LL;
    }
    while ( v10 < v4 );
  }
  return v9;
}
