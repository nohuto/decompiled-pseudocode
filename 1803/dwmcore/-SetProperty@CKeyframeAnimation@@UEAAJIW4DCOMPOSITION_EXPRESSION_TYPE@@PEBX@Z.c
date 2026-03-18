/*
 * XREFs of ?SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18003D240
 * Callers:
 *     ?UpdateAnimateValues@CAnimation@@UEAAXXZ @ 0x18003FCC0 (-UpdateAnimateValues@CAnimation@@UEAAXXZ.c)
 * Callees:
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x18003B008 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     ?SetProgress@CKeyframeAnimation@@AEAAXM@Z @ 0x18003CF4C (-SetProgress@CKeyframeAnimation@@AEAAXM@Z.c)
 *     ?SetPlaybackRate@CKeyframeAnimation@@AEAAXM@Z @ 0x18003CF64 (-SetPlaybackRate@CKeyframeAnimation@@AEAAXM@Z.c)
 *     ?UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z @ 0x18003E75C (-UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?AdjustAllKeyframeTime@CKeyframeAnimation@@AEAAXM@Z @ 0x180197668 (-AdjustAllKeyframeTime@CKeyframeAnimation@@AEAAXM@Z.c)
 *     ?SetInitialDelay@CKeyframeAnimation@@AEAAJM@Z @ 0x180197DFC (-SetInitialDelay@CKeyframeAnimation@@AEAAJM@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::SetProperty(__int64 a1, int a2, int a3, float *a4)
{
  __int64 v5; // rax
  unsigned int v6; // ebx
  int updated; // eax
  int v9; // r9d
  float v10; // eax
  UINT32 v11; // r10d
  float v12; // eax
  UINT32 v13; // r10d
  UINT32 cData; // [rsp+20h] [rbp-19h]
  float v15; // [rsp+30h] [rbp-9h] BYREF
  float v16[3]; // [rsp+34h] [rbp-5h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  float *v18; // [rsp+60h] [rbp+27h]
  UINT32 v19; // [rsp+68h] [rbp+2Fh]
  int v20; // [rsp+6Ch] [rbp+33h]
  float *v21; // [rsp+70h] [rbp+37h]
  UINT32 v22; // [rsp+78h] [rbp+3Fh]
  int v23; // [rsp+7Ch] [rbp+43h]

  if ( a3 == 18 )
  {
    switch ( a2 )
    {
      case 24:
        v5 = *(_QWORD *)(a1 + 384);
        *(float *)(a1 + 484) = fminf(fmaxf(*a4, 0.0), 1.0);
        if ( (*(_BYTE *)(v5 + 112) & 4) != 0 )
        {
          if ( *(_DWORD *)(a1 + 488) )
          {
            updated = CKeyframeAnimation::UpdatePlaybackState(a1, 0LL, 0LL, 0LL);
            v6 = updated;
            if ( updated < 0 )
            {
              cData = 2054;
LABEL_10:
              v9 = updated;
LABEL_30:
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, cData);
              return v6;
            }
          }
        }
        return 0;
      case 31:
        CKeyframeAnimation::SetPlaybackRate((CKeyframeAnimation *)a1, *a4);
        return 0;
      case 33:
        CKeyframeAnimation::SetProgress((CKeyframeAnimation *)a1, *a4);
        return 0;
    }
LABEL_29:
    v6 = -2147024809;
    cData = 2111;
    v9 = -2147024809;
    goto LABEL_30;
  }
  if ( a3 != 42 )
    goto LABEL_29;
  if ( a2 != 16 )
  {
    if ( a2 == 30 )
    {
      v15 = *a4;
      if ( v15 >= 1.0 )
      {
        CKeyframeAnimation::AdjustAllKeyframeTime((CKeyframeAnimation *)a1, v15);
        if ( (*(_DWORD *)(*(_QWORD *)(a1 + 280) + 4LL) & 0x40000000) != 0
          && dword_1802D3FE0 > 4u
          && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 4uLL) )
        {
          LODWORD(v12) = CBaseExpression::GetTracingCookie((CBaseExpression *)a1);
          v20 = 0;
          v23 = 0;
          v16[0] = v12;
          v18 = v16;
          v21 = &v15;
          v19 = v13;
          v22 = v13;
          TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A86DC, 0LL, 0LL, v13, &pData);
        }
      }
      return 0;
    }
    goto LABEL_29;
  }
  v16[0] = *a4;
  if ( v16[0] > 0.0 )
  {
    updated = CKeyframeAnimation::SetInitialDelay((CKeyframeAnimation *)a1, v16[0]);
    v6 = updated;
    if ( updated < 0 )
    {
      cData = 2063;
      goto LABEL_10;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 280) + 4LL) & 0x40000000) != 0
      && dword_1802D3FE0 > 4u
      && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 4uLL) )
    {
      LODWORD(v10) = CBaseExpression::GetTracingCookie((CBaseExpression *)a1);
      v20 = 0;
      v23 = 0;
      v15 = v10;
      v18 = &v15;
      v21 = v16;
      v19 = v11;
      v22 = v11;
      TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A8720, 0LL, 0LL, v11, &pData);
    }
  }
  return 0;
}
