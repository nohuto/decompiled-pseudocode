/*
 * XREFs of ?GetBounds@CEffectBrush@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAV2@@Z @ 0x18000A570
 * Callers:
 *     ?GetBoundsWithEffects@CVisual@@UEBAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180049FD0 (-GetBoundsWithEffects@CVisual@@UEBAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 * Callees:
 *     ?GetSourceInputBounds@CEffectBrush@@AEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEAV?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@@Z @ 0x18000A32C (-GetSourceInputBounds@CEffectBrush@@AEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectBrush::GetBounds(__int64 a1, _OWORD *a2, __int64 a3, _OWORD *a4)
{
  unsigned int v4; // ebx
  int SourceInputBounds; // eax
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  int v10; // [rsp+40h] [rbp-18h]
  int v11; // [rsp+44h] [rbp-14h]
  unsigned int v12; // [rsp+48h] [rbp-10h]

  v4 = 0;
  *a4 = *a2;
  if ( *(_QWORD *)(a1 + 96) )
  {
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v9 = 0LL;
    SourceInputBounds = CEffectBrush::GetSourceInputBounds(a1, a2, a3, (__int64 *)&v9);
    v4 = SourceInputBounds;
    if ( SourceInputBounds < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SourceInputBounds, 0x271u);
    else
      v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _OWORD *))(**(_QWORD **)(a1 + 96) + 88LL))(
             *(_QWORD *)(a1 + 96),
             v9,
             v12,
             a4);
    DynArrayImpl<0>::~DynArrayImpl<0>(&v9);
  }
  return v4;
}
