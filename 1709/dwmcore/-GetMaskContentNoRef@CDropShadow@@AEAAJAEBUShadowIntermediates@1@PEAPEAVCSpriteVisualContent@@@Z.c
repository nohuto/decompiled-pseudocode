/*
 * XREFs of ?GetMaskContentNoRef@CDropShadow@@AEAAJAEBUShadowIntermediates@1@PEAPEAVCSpriteVisualContent@@@Z @ 0x180160A68
 * Callers:
 *     ?GenerateMaskIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEAUShadowIntermediates@1@@Z @ 0x18015FFB4 (-GenerateMaskIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEAUShadowInter.c)
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ @ 0x180160B84 (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??2KeyframeValue@@SAPEAX_K@Z @ 0x180092B60 (--2KeyframeValue@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z @ 0x18016AA10 (--4-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z.c)
 */

__int64 __fastcall CDropShadow::GetMaskContentNoRef(
        CDropShadow *this,
        struct CSpriteVisualContent **a2,
        struct CSpriteVisualContent **a3)
{
  unsigned int v3; // ebx
  struct CSpriteVisualContent **v6; // rdi
  _DWORD *v7; // rdx
  __int64 v8; // rax
  struct CSpriteVisualContent *v9; // rcx
  signed int v10; // eax
  __int64 v12; // [rsp+30h] [rbp-38h] BYREF
  int v13; // [rsp+38h] [rbp-30h]
  float v14; // [rsp+3Ch] [rbp-2Ch]

  v3 = 0;
  if ( *a2 )
  {
    *a3 = *a2;
  }
  else
  {
    v6 = (struct CSpriteVisualContent **)((char *)this + 232);
    if ( *((_QWORD *)this + 29) )
      goto LABEL_12;
    v7 = KeyframeValue::operator new();
    if ( v7 )
    {
      v8 = *((_QWORD *)this + 2);
      v7[2] = 0;
      *((_QWORD *)v7 + 2) = v8;
      *((_QWORD *)v7 + 3) = 0LL;
      *((_QWORD *)v7 + 5) = 0LL;
      v7[8] = 0;
      *((_QWORD *)v7 + 8) = 0LL;
      *(_QWORD *)v7 = &CColorBrush::`vftable'{for `CContent'};
      *((_QWORD *)v7 + 7) = &CLinearGradientBrush::`vftable'{for `IVisualListenerInfoProvider'};
    }
    else
    {
      v7 = 0LL;
    }
    Microsoft::WRL::ComPtr<CConditionalExpression>::operator=(v6, v7);
    v9 = *v6;
    if ( !*v6 )
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x3BBu);
      return v3;
    }
    v13 = 0;
    v12 = 0LL;
    v14 = FLOAT_1_0;
    v10 = (*(__int64 (__fastcall **)(struct CSpriteVisualContent *, _QWORD, __int64, __int64 *))(*(_QWORD *)v9 + 88LL))(
            v9,
            0LL,
            70LL,
            &v12);
    v3 = v10;
    if ( v10 >= 0 )
LABEL_12:
      *a3 = *v6;
    else
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x3C3u);
  }
  return v3;
}
