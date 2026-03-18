/*
 * XREFs of ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x1800A3CE0
 * Callers:
 *     ?SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z @ 0x1800A3BC4 (-SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?GetSampledStartingValue@CKeyframeAnimation@@QEAAJPEAVCExpressionValue@@@Z @ 0x1800A3F14 (-GetSampledStartingValue@CKeyframeAnimation@@QEAAJPEAVCExpressionValue@@@Z.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A3FA0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x18018766C (-ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::SampleStartingValue(CKeyframeAnimation *this)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  signed int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  unsigned int v18; // [rsp+28h] [rbp-19h]
  __int128 v19; // [rsp+38h] [rbp-9h] BYREF
  __int128 v20; // [rsp+48h] [rbp+7h]
  __int128 v21; // [rsp+58h] [rbp+17h]
  __int128 v22; // [rsp+68h] [rbp+27h]
  int v23; // [rsp+78h] [rbp+37h]
  char v24; // [rsp+7Ch] [rbp+3Bh]

  memset_0(&v19, 0, 0x40uLL);
  v2 = *((_QWORD *)this + 38);
  v23 = 18;
  v24 = 0;
  if ( !*(_DWORD *)v2 )
  {
    v3 = *((_QWORD *)this + 21);
    if ( v3 )
      v4 = *(_QWORD *)(v3 + 8);
    else
      v4 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v4 + 96LL))(
           v4,
           *((unsigned int *)this + 44),
           &v19);
    v6 = v5;
    if ( v5 < 0 )
    {
      v18 = 1659;
      goto LABEL_30;
    }
    v7 = *((_QWORD *)this + 23);
    if ( v7 )
    {
      if ( *(_BYTE *)(v7 + 4) )
      {
        v5 = CExpressionValue::ApplyMaskToValue((CExpressionValue *)&v19, (struct SubchannelMaskInfo *)v7);
        v6 = v5;
        if ( v5 < 0 )
        {
          v18 = 1673;
LABEL_30:
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, v18);
          return v6;
        }
      }
    }
    v8 = *((_DWORD *)this + 34);
    *(_DWORD *)v2 = v8;
    v9 = v8 - 17;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v12 = v10 - 17;
        if ( v12 )
        {
          v13 = v12 - 17;
          if ( v13 )
          {
            v14 = v13 - 17;
            if ( v14 && (v15 = v14 - 1) != 0 && (v16 = v15 - 1) != 0 )
            {
              v17 = v16 - 33;
              if ( v17 )
              {
                if ( v17 != 161 )
                {
                  v6 = -2147024809;
                  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x6BBu);
                  return v6;
                }
                *(_OWORD *)(v2 + 8) = v19;
                *(_OWORD *)(v2 + 24) = v20;
                *(_OWORD *)(v2 + 40) = v21;
                *(_OWORD *)(v2 + 56) = v22;
              }
              else
              {
                *(_OWORD *)(v2 + 8) = v19;
                *(_QWORD *)(v2 + 24) = v20;
              }
            }
            else
            {
              *(_OWORD *)(v2 + 8) = v19;
            }
          }
          else
          {
            *(_QWORD *)(v2 + 8) = v19;
            *(_DWORD *)(v2 + 16) = DWORD2(v19);
          }
        }
        else
        {
          *(_QWORD *)(v2 + 8) = v19;
        }
      }
      else
      {
        *(_DWORD *)(v2 + 8) = v19;
      }
    }
    else
    {
      *(_BYTE *)(v2 + 8) = v19;
    }
  }
  return 0;
}
