/*
 * XREFs of ?SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800A3C30
 * Callers:
 *     ?UpdateAnimateValues@CAnimation@@UEAAXXZ @ 0x18002D090 (-UpdateAnimateValues@CAnimation@@UEAAXXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800A188C (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     ?UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z @ 0x1800A4FC0 (-UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?AdjustAllKeyframeTime@CKeyframeAnimation@@AEAAXM@Z @ 0x18016F460 (-AdjustAllKeyframeTime@CKeyframeAnimation@@AEAAXM@Z.c)
 *     ?SetInitialDelay@CKeyframeAnimation@@AEAAJM@Z @ 0x18016F644 (-SetInitialDelay@CKeyframeAnimation@@AEAAJM@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::SetProperty(__int64 a1, int a2, int a3, float *a4)
{
  __int64 v5; // rax
  unsigned int v6; // ebx
  int updated; // eax
  DWORD v9; // r9d
  UINT32 v10; // r10d
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  UINT32 v13; // r10d
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  UINT32 cData; // [rsp+20h] [rbp-19h]
  float v17; // [rsp+30h] [rbp-9h] BYREF
  float v18[3]; // [rsp+34h] [rbp-5h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  float *v20; // [rsp+60h] [rbp+27h]
  UINT32 v21; // [rsp+68h] [rbp+2Fh]
  int v22; // [rsp+6Ch] [rbp+33h]
  float *v23; // [rsp+70h] [rbp+37h]
  UINT32 v24; // [rsp+78h] [rbp+3Fh]
  int v25; // [rsp+7Ch] [rbp+43h]

  if ( a3 == 18 )
  {
    if ( a2 == 24 )
    {
      v5 = *(_QWORD *)(a1 + 368);
      *(float *)(a1 + 432) = fminf(fmaxf(*a4, 0.0), 1.0);
      if ( (*(_BYTE *)(v5 + 112) & 4) != 0 )
      {
        if ( *(_DWORD *)(a1 + 436) )
        {
          updated = CKeyframeAnimation::UpdatePlaybackState(a1, 0LL, 0LL, 0LL);
          v6 = updated;
          if ( updated < 0 )
          {
            cData = 1761;
LABEL_10:
            v9 = updated;
LABEL_26:
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, cData);
            return v6;
          }
        }
      }
      return 0;
    }
LABEL_25:
    v6 = -2147024809;
    cData = 1808;
    v9 = -2147024809;
    goto LABEL_26;
  }
  if ( a3 != 42 )
    goto LABEL_25;
  if ( a2 != 16 )
  {
    if ( a2 == 30 )
    {
      v17 = *a4;
      if ( v17 >= 1.0 )
      {
        CKeyframeAnimation::AdjustAllKeyframeTime((CKeyframeAnimation *)a1, v17);
        if ( (*(_DWORD *)(*(_QWORD *)(a1 + 264) + 4LL) & 0x40000000) != 0
          && dword_18026D7B0 > 4u
          && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 4uLL) )
        {
          v22 = 0;
          v25 = 0;
          LODWORD(v18[0]) = CBaseExpression::GetTracingCookie((CBaseExpression *)a1);
          v20 = v18;
          v23 = &v17;
          v21 = v13;
          v24 = v13;
          TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_180213B22, v14, v15, v13, &pData);
        }
      }
      return 0;
    }
    goto LABEL_25;
  }
  v18[0] = *a4;
  if ( v18[0] > 0.0 )
  {
    updated = CKeyframeAnimation::SetInitialDelay((CKeyframeAnimation *)a1, v18[0]);
    v6 = updated;
    if ( updated < 0 )
    {
      cData = 1770;
      goto LABEL_10;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 264) + 4LL) & 0x40000000) != 0
      && dword_18026D7B0 > 4u
      && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 4uLL) )
    {
      v22 = 0;
      v25 = 0;
      LODWORD(v17) = CBaseExpression::GetTracingCookie((CBaseExpression *)a1);
      v20 = &v17;
      v23 = v18;
      v21 = v10;
      v24 = v10;
      TlgWrite((TraceLoggingHProvider)&dword_18026D7B0, &unk_180213AE0, v11, v12, v10, &pData);
    }
  }
  return 0;
}
