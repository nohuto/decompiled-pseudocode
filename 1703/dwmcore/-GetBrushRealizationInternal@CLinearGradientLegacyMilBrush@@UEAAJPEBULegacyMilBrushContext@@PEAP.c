/*
 * XREFs of ?GetBrushRealizationInternal@CLinearGradientLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x18017B700
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??$GetGradientColorData@VCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KAJPEAVCLinearGradientLegacyMilBrush@@PEAVCGradientColorData@@@Z @ 0x18017B5B0 (--$GetGradientColorData@VCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KAJPEAVCLinear.c)
 *     ?GetLinearGradientRealization@CLinearGradientLegacyMilBrush@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCGradientColorData@@PEAVCMILBrushLinearGradient@@@Z @ 0x18017B8C4 (-GetLinearGradientRealization@CLinearGradientLegacyMilBrush@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?ReleaseResources@CMILResourceCache@@QEAAJXZ @ 0x1801ADFDC (-ReleaseResources@CMILResourceCache@@QEAAJXZ.c)
 */

__int64 __fastcall CLinearGradientLegacyMilBrush::GetBrushRealizationInternal(
        CLinearGradientLegacyMilBrush *this,
        const struct LegacyMilBrushContext *a2,
        struct CMILBrush **a3)
{
  __int64 v3; // r12
  int GradientColor; // eax
  int v8; // edi
  int LinearGradientRealization; // eax
  __int64 v10; // rax
  int v11; // eax
  __int128 v12; // xmm0
  __int128 v14; // [rsp+30h] [rbp-39h] BYREF
  int v15; // [rsp+40h] [rbp-29h]
  int v16; // [rsp+44h] [rbp-25h]
  unsigned int v17; // [rsp+48h] [rbp-21h]
  __int128 v18; // [rsp+50h] [rbp-19h] BYREF
  int v19; // [rsp+60h] [rbp-9h]
  int v20; // [rsp+64h] [rbp-5h]
  int v21; // [rsp+68h] [rbp-1h]
  __int128 v22; // [rsp+70h] [rbp+7h]

  v3 = (__int64)*a3;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v14 = 0LL;
  v18 = 0LL;
  GradientColor = CGradientLegacyMilBrush::GetGradientColorData<CLinearGradientLegacyMilBrush>(
                    (__int64)this,
                    (CGradientColorData *)&v14);
  v8 = GradientColor;
  if ( GradientColor < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, GradientColor, 0x41u);
  }
  else
  {
    if ( v17 < 2 )
    {
      if ( v17 == 1 )
      {
        v10 = *((_QWORD *)this + 54);
        *((_OWORD *)this + 29) = *(_OWORD *)v14;
        (*(void (**)(void))(v10 + 48))();
        v8 = 0;
        *a3 = (struct CMILBrush *)(((unsigned __int64)this + 432) & -(__int64)((CLinearGradientLegacyMilBrush *)((char *)this + 408) != 0LL));
      }
      else
      {
        *a3 = 0LL;
      }
    }
    else
    {
      LinearGradientRealization = CLinearGradientLegacyMilBrush::GetLinearGradientRealization(
                                    this,
                                    (char *)a2 + 144,
                                    &v14,
                                    (char *)this + 176);
      v8 = LinearGradientRealization;
      if ( LinearGradientRealization < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, LinearGradientRealization, 0x48u);
        goto LABEL_15;
      }
      *a3 = (struct CMILBrush *)(((unsigned __int64)this + 200) & -(__int64)((CLinearGradientLegacyMilBrush *)((char *)this + 176) != 0LL));
    }
    if ( v3 == (((unsigned __int64)this + 200) & -(__int64)((CLinearGradientLegacyMilBrush *)((char *)this + 176) != 0LL))
      && (!*a3
       || *a3 == (struct CMILBrush *)(((unsigned __int64)this + 432) & -(__int64)((CLinearGradientLegacyMilBrush *)((char *)this + 408) != 0LL))) )
    {
      v11 = CMILResourceCache::ReleaseResources((CLinearGradientLegacyMilBrush *)((char *)this + 224));
      v8 = v11;
      if ( v11 >= 0 )
        goto LABEL_16;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x6Cu);
    }
  }
LABEL_15:
  if ( v8 < 0 )
  {
    v12 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v22 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    goto LABEL_18;
  }
LABEL_16:
  v12 = *((_OWORD *)a2 + 9);
LABEL_18:
  *(_OWORD *)((char *)this + 72) = v12;
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v18);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v14);
  return (unsigned int)v8;
}
