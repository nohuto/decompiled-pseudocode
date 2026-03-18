/*
 * XREFs of VidSchiCheckPreemptionPolicy @ 0x1C0006F90
 * Callers:
 *     VidSchiSwitchContextWithCheck @ 0x1C000B470 (VidSchiSwitchContextWithCheck.c)
 * Callees:
 *     VidSchiUpdateNodeRunningTime @ 0x1C00034A4 (VidSchiUpdateNodeRunningTime.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000A8D0 (VidSchiProfilePerformanceTick.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 */

_BOOL8 __fastcall VidSchiCheckPreemptionPolicy(__int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  __int64 v4; // rbx
  int v5; // eax
  int v8; // esi
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  unsigned int MostSignificantBit; // ecx
  __int64 v15; // rax
  __int64 v16; // r8
  int v17; // eax
  int v18; // ecx
  bool v19; // zf
  __int64 v20; // rax
  int v21; // r8d
  __int64 v22; // rcx
  int v23; // edx
  bool v24; // cc
  _OWORD v25[2]; // [rsp+40h] [rbp-58h] BYREF
  _OWORD v26[2]; // [rsp+60h] [rbp-38h] BYREF

  v4 = *(_QWORD *)(a1 + 96);
  v5 = *(_DWORD *)(a1 + 184);
  *a2 = -1LL;
  v8 = 0;
  v9 = *(_QWORD *)(v4 + 24);
  if ( (v5 & 2) != 0 )
  {
    if ( a1 == *(_QWORD *)(v4 + 8LL * *(unsigned int *)(v4 + 1552) + 1560) )
    {
      v8 = 15;
      goto LABEL_4;
    }
    v8 = -18;
  }
  if ( !*(_DWORD *)(v4 + 2828) )
  {
    v8 = 2;
    goto LABEL_4;
  }
  if ( (*(_DWORD *)(v9 + 2192) & 1) == 0 )
  {
    v8 = 3;
    goto LABEL_4;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v9 + 972));
  if ( _InterlockedIncrement((volatile signed __int32 *)(v4 + 2832)) != 1 )
  {
    v8 = 13;
    goto LABEL_16;
  }
  if ( *(_DWORD *)(v9 + 1156) )
    v8 = -14;
  MostSignificantBit = RtlFindMostSignificantBit(*(unsigned int *)(v4 + 1740));
  v15 = *(unsigned int *)(a1 + 404);
  if ( MostSignificantBit <= (unsigned int)v15 )
  {
    if ( MostSignificantBit != (_DWORD)v15 )
    {
      if ( *(_BYTE *)(v4 + 1992) && gulPriorityToYieldPriorityBand[v15] != 3 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v4 + 2832));
        v8 = 11;
        _InterlockedDecrement((volatile signed __int32 *)(v9 + 972));
        goto LABEL_4;
      }
      goto LABEL_19;
    }
    v16 = *(_QWORD *)(v4 + 8LL * *(unsigned int *)(v4 + 1552) + 1560);
    if ( v16 && *(_QWORD *)(*(_QWORD *)(v16 + 104) + 40LL) == *(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL) )
    {
      v17 = *(_DWORD *)(a1 + 408);
      v18 = *(_DWORD *)(v16 + 408);
      if ( v17 < v18 )
        goto LABEL_15;
      if ( v17 > v18 )
      {
        v8 = -17;
        goto LABEL_4;
      }
    }
    memset(v26, 0, sizeof(v26));
    v19 = VidSchiUpdateNodeRunningTime(v4, v26) == 0;
    v20 = *((_QWORD *)&v26[0] + 1);
    if ( !v19 )
    {
      v8 = 11;
      *a2 = *(_QWORD *)(*((_QWORD *)&v26[0] + 1) + 472LL);
      _InterlockedDecrement((volatile signed __int32 *)(v4 + 2832));
      _InterlockedDecrement((volatile signed __int32 *)(v9 + 972));
      goto LABEL_4;
    }
    if ( !*((_QWORD *)&v26[0] + 1) )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v4 + 2832));
      v8 = 2;
      _InterlockedDecrement((volatile signed __int32 *)(v9 + 972));
      goto LABEL_4;
    }
    v21 = DWORD1(v26[1]);
    v22 = *(_QWORD *)&v26[1];
  }
  else
  {
    if ( !*(_BYTE *)(v4 + 1992) )
    {
LABEL_15:
      v8 = 10;
LABEL_16:
      _InterlockedDecrement((volatile signed __int32 *)(v4 + 2832));
      _InterlockedDecrement((volatile signed __int32 *)(v9 + 972));
      goto LABEL_4;
    }
    memset(v25, 0, sizeof(v25));
    v19 = VidSchiUpdateNodeRunningTime(v4, v25) == 0;
    v20 = *((_QWORD *)&v25[0] + 1);
    if ( !v19 )
    {
      v8 = 11;
      *a2 = *(_QWORD *)(*((_QWORD *)&v25[0] + 1) + 472LL);
      _InterlockedDecrement((volatile signed __int32 *)(v4 + 2832));
      _InterlockedDecrement((volatile signed __int32 *)(v9 + 972));
      goto LABEL_4;
    }
    if ( !*((_QWORD *)&v25[0] + 1) )
    {
      v8 = 2;
      goto LABEL_16;
    }
    v21 = DWORD1(v25[1]);
    v22 = *(_QWORD *)&v25[1];
  }
  v23 = *(_DWORD *)(v20 + 476);
  v24 = v23 <= v21;
  if ( v23 == v21 )
  {
    if ( *(_DWORD *)(v20 + 472) > (unsigned int)v22 )
    {
LABEL_34:
      v8 = 12;
      *a2 = *(_QWORD *)(v20 + 472) - v22;
      _InterlockedDecrement((volatile signed __int32 *)(v4 + 2832));
      _InterlockedDecrement((volatile signed __int32 *)(v9 + 972));
      goto LABEL_4;
    }
    v24 = v23 <= v21;
  }
  if ( !v24 )
    goto LABEL_34;
LABEL_19:
  if ( !v8 )
    v8 = 1;
LABEL_4:
  VidSchiProfilePerformanceTick(1, v9, v4, a4, a1, 0LL, 0LL, v8);
  v12 = (_QWORD *)WdLogNewEntry5_WdEvent(v11, v10);
  v12[3] = v4;
  v12[4] = *(_QWORD *)(v4 + 96);
  v12[5] = *(_QWORD *)(v4 + 152);
  v12[6] = a1;
  v12[7] = v8;
  WdLogEvent5_WdEvent(v12);
  return v8 < 0 || v8 == 1;
}
