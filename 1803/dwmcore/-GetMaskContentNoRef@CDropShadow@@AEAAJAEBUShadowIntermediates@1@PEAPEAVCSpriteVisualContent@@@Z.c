/*
 * XREFs of ?GetMaskContentNoRef@CDropShadow@@AEAAJAEBUShadowIntermediates@1@PEAPEAVCSpriteVisualContent@@@Z @ 0x18018A30C
 * Callers:
 *     ?GenerateMaskIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEAUShadowIntermediates@1@@Z @ 0x180189860 (-GenerateMaskIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEAUShadowInter.c)
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ @ 0x18018A428 (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??2CColorBrush@@SAPEAX_K@Z @ 0x1800C6244 (--2CColorBrush@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z @ 0x180193400 (--4-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z.c)
 */

__int64 __fastcall CDropShadow::GetMaskContentNoRef(
        CDropShadow *this,
        const struct CDropShadow::ShadowIntermediates *a2,
        struct CSpriteVisualContent **a3)
{
  struct CSpriteVisualContent *v3; // rax
  unsigned int v4; // ebx
  struct CSpriteVisualContent **v7; // rdi
  _DWORD *v8; // rdx
  __int64 v9; // rax
  struct CSpriteVisualContent *v10; // rcx
  int v11; // eax
  __int64 v13; // [rsp+30h] [rbp-38h] BYREF
  int v14; // [rsp+38h] [rbp-30h]
  float v15; // [rsp+3Ch] [rbp-2Ch]

  v3 = (struct CSpriteVisualContent *)*((_QWORD *)a2 + 4);
  v4 = 0;
  if ( v3 )
  {
    *a3 = v3;
  }
  else
  {
    v7 = (struct CSpriteVisualContent **)((char *)this + 232);
    if ( *((_QWORD *)this + 29) )
      goto LABEL_12;
    v8 = CColorBrush::operator new();
    if ( v8 )
    {
      v9 = *((_QWORD *)this + 2);
      v8[2] = 0;
      *((_QWORD *)v8 + 2) = v9;
      *((_QWORD *)v8 + 3) = 0LL;
      *((_QWORD *)v8 + 5) = 0LL;
      v8[8] = 0;
      *((_QWORD *)v8 + 8) = 0LL;
      *(_QWORD *)v8 = &CColorBrush::`vftable'{for `CContent'};
      *((_QWORD *)v8 + 7) = &CLinearGradientBrush::`vftable'{for `IVisualListenerInfoProvider'};
    }
    else
    {
      v8 = 0LL;
    }
    Microsoft::WRL::ComPtr<CConditionalExpression>::operator=(v7, v8);
    v10 = *v7;
    if ( !*v7 )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x350u);
      return v4;
    }
    v14 = 0;
    v13 = 0LL;
    v15 = FLOAT_1_0;
    v11 = (*(__int64 (__fastcall **)(struct CSpriteVisualContent *, _QWORD, __int64, __int64 *))(*(_QWORD *)v10 + 88LL))(
            v10,
            0LL,
            70LL,
            &v13);
    v4 = v11;
    if ( v11 >= 0 )
LABEL_12:
      *a3 = *v7;
    else
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x358u);
  }
  return v4;
}
