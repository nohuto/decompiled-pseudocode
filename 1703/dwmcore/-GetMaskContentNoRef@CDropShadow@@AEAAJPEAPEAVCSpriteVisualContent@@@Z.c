/*
 * XREFs of ?GetMaskContentNoRef@CDropShadow@@AEAAJPEAPEAVCSpriteVisualContent@@@Z @ 0x180171B18
 * Callers:
 *     ?GenerateMaskIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18017122C (-GenerateMaskIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??2CEffectGroup@@KAPEAX_K@Z @ 0x1800C68B8 (--2CEffectGroup@@KAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z @ 0x180167B20 (--4-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z.c)
 */

__int64 __fastcall CDropShadow::GetMaskContentNoRef(CDropShadow *this, struct CSpriteVisualContent **a2)
{
  struct CSpriteVisualContent *v2; // rax
  unsigned int v3; // ebx
  __int64 *v6; // rdi
  _DWORD *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v12; // [rsp+30h] [rbp-38h] BYREF
  int v13; // [rsp+38h] [rbp-30h]
  float v14; // [rsp+3Ch] [rbp-2Ch]

  v2 = (struct CSpriteVisualContent *)*((_QWORD *)this + 17);
  v3 = 0;
  if ( v2 )
  {
    *a2 = v2;
  }
  else
  {
    v6 = (__int64 *)((char *)this + 168);
    if ( *((_QWORD *)this + 21) )
      goto LABEL_12;
    v7 = CEffectGroup::operator new();
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
    Microsoft::WRL::ComPtr<CConditionalExpression>::operator=(v6, (__int64)v7);
    v9 = *v6;
    if ( !*v6 )
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x341u);
      return v3;
    }
    v13 = 0;
    v12 = 0LL;
    v14 = FLOAT_1_0;
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v9 + 80LL))(v9, 0LL, 70LL, &v12);
    v3 = v10;
    if ( v10 >= 0 )
LABEL_12:
      *a2 = (struct CSpriteVisualContent *)*v6;
    else
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x349u);
  }
  return v3;
}
