/*
 * XREFs of ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x180030084
 * Callers:
 *     ?SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJXZ @ 0x18002FFB8 (-SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJXZ.c)
 *     ?GetSampledStartingValue@CKeyframeAnimation@@UEAAJPEAM@Z @ 0x180030200 (-GetSampledStartingValue@CKeyframeAnimation@@UEAAJPEAM@Z.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180030350 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x180020C3C (-ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z.c)
 *     ?GetProperty@CPropertyBagBase@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180031300 (-GetProperty@CPropertyBagBase@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CKeyframeAnimation::SampleStartingValue(CKeyframeAnimation *this)
{
  __int64 v2; // rbx
  CPropertyBagBase *v3; // rcx
  __int64 v4; // rdx
  __int64 (__fastcall *v5)(CPropertyBagBase *__hidden, unsigned int, struct CExpressionValue *); // rax
  int Property; // eax
  unsigned int v7; // edi
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  unsigned int v20; // [rsp+28h] [rbp-19h]
  __int128 v21; // [rsp+38h] [rbp-9h] BYREF
  __int128 v22; // [rsp+48h] [rbp+7h]
  __int128 v23; // [rsp+58h] [rbp+17h]
  __int128 v24; // [rsp+68h] [rbp+27h]
  int v25; // [rsp+78h] [rbp+37h]
  char v26; // [rsp+7Ch] [rbp+3Bh]

  memset_0(&v21, 0, 0x40uLL);
  v2 = *((_QWORD *)this + 33);
  v25 = 18;
  v26 = 0;
  if ( *(_DWORD *)v2 )
    return 0;
  v3 = (CPropertyBagBase *)*((_QWORD *)this + 21);
  if ( v3 )
    v3 = (CPropertyBagBase *)*((_QWORD *)v3 + 1);
  v4 = *((unsigned int *)this + 44);
  v5 = *(__int64 (__fastcall **)(CPropertyBagBase *__hidden, unsigned int, struct CExpressionValue *))(*(_QWORD *)v3 + 88LL);
  if ( v5 == CPropertyBagBase::GetProperty )
    Property = CPropertyBagBase::GetProperty(v3, v4, (struct CExpressionValue *)&v21);
  else
    Property = v5(v3, v4, (struct CExpressionValue *)&v21);
  v7 = Property;
  if ( Property < 0 )
  {
    v20 = 1925;
    goto LABEL_32;
  }
  v8 = *((_QWORD *)this + 23);
  if ( v8 )
  {
    if ( *(_BYTE *)(v8 + 4) )
    {
      v13 = CExpressionValue::ApplyMaskToValue((CExpressionValue *)&v21, (struct SubchannelMaskInfo *)v8);
      v7 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x793u);
        return v7;
      }
    }
  }
  v9 = *((_DWORD *)this + 34);
  *(_DWORD *)v2 = v9;
  v10 = v9 - 17;
  if ( !v10 )
  {
    *(_BYTE *)(v2 + 8) = v21;
    return 0;
  }
  v11 = v10 - 1;
  if ( v11 )
  {
    v14 = v11 - 17;
    if ( !v14 )
    {
      *(_QWORD *)(v2 + 8) = v21;
      return 0;
    }
    v15 = v14 - 17;
    if ( !v15 )
    {
      *(_QWORD *)(v2 + 8) = v21;
      *(_DWORD *)(v2 + 16) = DWORD2(v21);
      return 0;
    }
    v16 = v15 - 17;
    if ( !v16 || (v17 = v16 - 1) == 0 || (v18 = v17 - 1) == 0 )
    {
      *(_OWORD *)(v2 + 8) = v21;
      return 0;
    }
    v19 = v18 - 33;
    if ( !v19 )
    {
      *(_OWORD *)(v2 + 8) = v21;
      *(_QWORD *)(v2 + 24) = v22;
      return 0;
    }
    if ( v19 == 161 )
    {
      *(_OWORD *)(v2 + 8) = v21;
      *(_OWORD *)(v2 + 24) = v22;
      *(_OWORD *)(v2 + 40) = v23;
      *(_OWORD *)(v2 + 56) = v24;
      return 0;
    }
    v7 = -2147024809;
    v20 = 1989;
LABEL_32:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, v20);
    return v7;
  }
  *(_DWORD *)(v2 + 8) = v21;
  return 0;
}
