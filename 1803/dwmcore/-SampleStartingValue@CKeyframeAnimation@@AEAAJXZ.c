/*
 * XREFs of ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x18003D2F0
 * Callers:
 *     ?SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z @ 0x18003D1D0 (-SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?GetSampledStartingValue@CKeyframeAnimation@@QEAAJPEAVCExpressionValue@@@Z @ 0x18003D610 (-GetSampledStartingValue@CKeyframeAnimation@@QEAAJPEAVCExpressionValue@@@Z.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18003D670 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x18018B994 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x1801AE054 (-ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::SampleStartingValue(CKeyframeAnimation *this)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // rcx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  unsigned int v19; // [rsp+28h] [rbp-19h]
  __int128 v20; // [rsp+38h] [rbp-9h] BYREF
  __int128 v21; // [rsp+48h] [rbp+7h]
  __int128 v22; // [rsp+58h] [rbp+17h]
  __int128 v23; // [rsp+68h] [rbp+27h]
  __int64 v24; // [rsp+78h] [rbp+37h]
  int v25; // [rsp+80h] [rbp+3Fh]
  char v26; // [rsp+84h] [rbp+43h]

  memset_0(&v20, 0, 0x40uLL);
  v2 = *((_QWORD *)this + 40);
  v24 = 0LL;
  v25 = 18;
  v26 = 0;
  if ( *(_DWORD *)v2 )
    return 0;
  v3 = *((_QWORD *)this + 22);
  if ( v3 )
    v4 = *(_QWORD *)(v3 + 8);
  else
    v4 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v4 + 96LL))(
         v4,
         *((unsigned int *)this + 46),
         &v20);
  v6 = v5;
  if ( v5 < 0 )
  {
    v19 = 1944;
    goto LABEL_38;
  }
  v7 = *((_QWORD *)this + 24);
  if ( !v7
    || !*(_BYTE *)(v7 + 4)
    || (v5 = CExpressionValue::ApplyMaskToValue((CExpressionValue *)&v20, (struct SubchannelMaskInfo *)v7),
        v6 = v5,
        v5 >= 0) )
  {
    v8 = *((_DWORD *)this + 36);
    *(_DWORD *)v2 = v8;
    if ( v8 > 52 )
    {
      v15 = v8 - 69;
      if ( !v15 || (v16 = v15 - 1) == 0 || (v17 = v16 - 1) == 0 )
      {
        *(_OWORD *)(v2 + 8) = v20;
        goto LABEL_12;
      }
      v18 = v17 - 33;
      if ( !v18 )
      {
        *(_OWORD *)(v2 + 8) = v20;
        *(_QWORD *)(v2 + 24) = v21;
        goto LABEL_12;
      }
      if ( v18 == 161 )
      {
        *(_OWORD *)(v2 + 8) = v20;
        *(_OWORD *)(v2 + 24) = v21;
        *(_OWORD *)(v2 + 40) = v22;
        *(_OWORD *)(v2 + 56) = v23;
        goto LABEL_12;
      }
    }
    else
    {
      if ( v8 == 52 )
      {
        *(_QWORD *)(v2 + 8) = v20;
        *(_DWORD *)(v2 + 16) = DWORD2(v20);
        goto LABEL_12;
      }
      v9 = v8 - 11;
      if ( !v9 )
      {
        Microsoft::WRL::ComPtr<CPathData>::operator=(v2 + 8, v24);
        goto LABEL_12;
      }
      v10 = v9 - 6;
      if ( !v10 )
      {
        *(_BYTE *)(v2 + 8) = v20;
        goto LABEL_12;
      }
      v11 = v10 - 1;
      if ( !v11 )
      {
        *(_DWORD *)(v2 + 8) = v20;
LABEL_12:
        v6 = 0;
        goto LABEL_13;
      }
      v14 = v11 - 17;
      if ( !v14 )
      {
        *(_QWORD *)(v2 + 8) = v20;
        goto LABEL_12;
      }
      if ( v14 == 7 )
      {
        *(_DWORD *)(v2 + 8) = v20;
        goto LABEL_12;
      }
    }
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x7E0u);
    goto LABEL_13;
  }
  v19 = 1958;
LABEL_38:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, v19);
LABEL_13:
  v12 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return v6;
}
