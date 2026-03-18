/*
 * XREFs of ?EnsureBlackColorBrush@CProjectedShadowReceiver@@AEAAJXZ @ 0x1801A1338
 * Callers:
 *     ?GetEffectiveMaskBrush@CProjectedShadowReceiver@@QEAAPEAVCSpriteVisualContent@@XZ @ 0x1801A1618 (-GetEffectiveMaskBrush@CProjectedShadowReceiver@@QEAAPEAVCSpriteVisualContent@@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??2CColorBrush@@SAPEAX_K@Z @ 0x1800C6244 (--2CColorBrush@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z @ 0x180193400 (--4-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z.c)
 */

__int64 __fastcall CProjectedShadowReceiver::EnsureBlackColorBrush(CProjectedShadowReceiver *this)
{
  unsigned int v1; // ebx
  __int64 *v2; // rdi
  _DWORD *v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  int v10; // [rsp+38h] [rbp-20h]
  float v11; // [rsp+3Ch] [rbp-1Ch]

  v1 = 0;
  v2 = (__int64 *)((char *)this + 112);
  if ( !*((_QWORD *)this + 14) )
  {
    v4 = CColorBrush::operator new();
    if ( v4 )
    {
      v5 = *((_QWORD *)this + 2);
      v4[2] = 0;
      *((_QWORD *)v4 + 2) = v5;
      *((_QWORD *)v4 + 3) = 0LL;
      *((_QWORD *)v4 + 5) = 0LL;
      v4[8] = 0;
      *((_QWORD *)v4 + 8) = 0LL;
      *(_QWORD *)v4 = &CColorBrush::`vftable'{for `CContent'};
      *((_QWORD *)v4 + 7) = &CLinearGradientBrush::`vftable'{for `IVisualListenerInfoProvider'};
    }
    else
    {
      v4 = 0LL;
    }
    Microsoft::WRL::ComPtr<CConditionalExpression>::operator=(v2, (__int64)v4);
    v6 = *v2;
    if ( *v2 )
    {
      v10 = 0;
      v9 = 0LL;
      v11 = FLOAT_1_0;
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v6 + 88LL))(v6, 0LL, 70LL, &v9);
      v1 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x154u);
    }
    else
    {
      v1 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x14Cu);
    }
  }
  return v1;
}
