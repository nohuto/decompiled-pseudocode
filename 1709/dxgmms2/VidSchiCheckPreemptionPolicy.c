/*
 * XREFs of VidSchiCheckPreemptionPolicy @ 0x1C0006EA0
 * Callers:
 *     VidSchiSwitchContextWithCheck @ 0x1C000ADA0 (VidSchiSwitchContextWithCheck.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C000A200 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateNodeRunningTime @ 0x1C0014034 (VidSchiUpdateNodeRunningTime.c)
 */

__int64 __fastcall VidSchiCheckPreemptionPolicy(__int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  __int64 v4; // rsi
  int v5; // eax
  int v8; // edi
  __int64 v9; // r14
  unsigned int MostSignificantBit; // ecx
  __int64 v11; // rax
  bool v12; // zf
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // r8d
  int v16; // ecx
  bool v17; // cc
  __int64 v18; // r8
  int v19; // eax
  int v20; // ecx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 result; // rax
  _BYTE v26[8]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v27; // [rsp+48h] [rbp-50h]
  __int64 v28; // [rsp+50h] [rbp-48h]
  __int64 v29; // [rsp+58h] [rbp-40h]
  __int64 v30; // [rsp+60h] [rbp-38h] BYREF
  __int64 v31; // [rsp+68h] [rbp-30h]
  __int64 v32; // [rsp+70h] [rbp-28h]
  char v33; // [rsp+A0h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 96);
  v5 = *(_DWORD *)(a1 + 176);
  *a2 = -1LL;
  v8 = 0;
  v9 = *(_QWORD *)(v4 + 24);
  if ( (v5 & 2) != 0 )
  {
    if ( a1 == *(_QWORD *)(v4 + 8LL * *(unsigned int *)(v4 + 1552) + 1560) )
    {
      v8 = 15;
      goto LABEL_44;
    }
    v8 = -18;
  }
  if ( !*(_DWORD *)(v4 + 2796) )
  {
    v8 = 2;
    goto LABEL_44;
  }
  if ( (*(_DWORD *)(v9 + 2168) & 1) == 0 )
  {
    v8 = 3;
    goto LABEL_44;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v9 + 956));
  if ( _InterlockedIncrement((volatile signed __int32 *)(v4 + 2800)) != 1 )
  {
    v8 = 13;
    goto LABEL_43;
  }
  if ( *(_DWORD *)(v9 + 1032) )
    v8 = -14;
  MostSignificantBit = RtlFindMostSignificantBit(*(unsigned int *)(v4 + 1708));
  v11 = *(unsigned int *)(a1 + 396);
  if ( MostSignificantBit > (unsigned int)v11 )
  {
    if ( *(_BYTE *)(v4 + 1960) )
    {
      v27 = 0LL;
      v28 = 0LL;
      v29 = 0LL;
      v12 = (unsigned __int8)VidSchiUpdateNodeRunningTime(v4, v26) == 0;
      v13 = v27;
      if ( !v12 )
      {
        v8 = 11;
        *a2 = *(_QWORD *)(v27 + 464);
LABEL_43:
        _InterlockedDecrement((volatile signed __int32 *)(v4 + 2800));
        _InterlockedDecrement((volatile signed __int32 *)(v9 + 956));
        goto LABEL_44;
      }
      if ( !v27 )
      {
        v8 = 2;
        goto LABEL_43;
      }
      v14 = v28;
      v15 = HIDWORD(v28);
      goto LABEL_19;
    }
LABEL_30:
    v8 = 10;
    goto LABEL_43;
  }
  if ( MostSignificantBit != (_DWORD)v11 )
  {
    if ( *(_BYTE *)(v4 + 1960) && gulPriorityToYieldPriorityBand[v11] != 3 )
    {
      v8 = 11;
      goto LABEL_43;
    }
    goto LABEL_39;
  }
  v18 = *(_QWORD *)(v4 + 8LL * *(unsigned int *)(v4 + 1552) + 1560);
  if ( v18 && *(_QWORD *)(*(_QWORD *)(v18 + 104) + 40LL) == *(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL) )
  {
    v19 = *(_DWORD *)(a1 + 400);
    v20 = *(_DWORD *)(v18 + 400);
    if ( v19 > v20 )
    {
      v8 = -17;
      goto LABEL_44;
    }
    if ( v19 < v20 )
      goto LABEL_30;
  }
  v21 = *(_QWORD *)(v4 + 24);
  v33 = 0;
  v30 = v4;
  DpSynchronizeExecution(
    *(_QWORD *)(v21 + 24),
    VidSchiUpdateNodeRunningTimeAtISR,
    &v30,
    *(unsigned int *)(v21 + 32),
    &v33);
  v13 = v31;
  if ( v33 )
  {
    v8 = 11;
    *a2 = *(_QWORD *)(v31 + 464);
    goto LABEL_43;
  }
  if ( !v31 )
  {
    v8 = 2;
    goto LABEL_43;
  }
  v14 = v32;
  v15 = HIDWORD(v32);
LABEL_19:
  v16 = *(_DWORD *)(v13 + 468);
  v17 = v16 <= v15;
  if ( v16 == v15 )
  {
    if ( *(_DWORD *)(v13 + 464) > (unsigned int)v14 )
    {
LABEL_23:
      v8 = 12;
      *a2 = *(_QWORD *)(v13 + 464) - v14;
      goto LABEL_43;
    }
    v17 = v16 <= v15;
  }
  if ( !v17 )
    goto LABEL_23;
LABEL_39:
  if ( !v8 )
    v8 = 1;
LABEL_44:
  VidSchiProfilePerformanceTick(1, v9, v4, a4, a1, 0LL, 0LL, v8);
  v24 = (_QWORD *)WdLogNewEntry5_WdEvent(v23, v22);
  v24[3] = v4;
  v24[4] = *(_QWORD *)(v4 + 96);
  v24[5] = *(_QWORD *)(v4 + 152);
  v24[6] = a1;
  v24[7] = v8;
  WdLogEvent5_WdEvent(v24);
  if ( v8 < 0 )
    return 1LL;
  result = 0LL;
  if ( v8 == 1 )
    return 1LL;
  return result;
}
