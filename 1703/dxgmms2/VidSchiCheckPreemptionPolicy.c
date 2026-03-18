/*
 * XREFs of VidSchiCheckPreemptionPolicy @ 0x1C0006030
 * Callers:
 *     VidSchiSwitchContextWithCheck @ 0x1C00098D0 (VidSchiSwitchContextWithCheck.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C00093B0 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateNodeRunningTime @ 0x1C0012220 (VidSchiUpdateNodeRunningTime.c)
 */

_BOOL8 __fastcall VidSchiCheckPreemptionPolicy(__int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  __int64 v4; // rbx
  int v5; // eax
  int v8; // ebp
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  unsigned int MostSignificantBit; // ecx
  unsigned int v15; // eax
  __int64 v16; // r8
  int v17; // eax
  int v18; // ecx
  bool v19; // zf
  __int64 v20; // rax
  int v21; // r8d
  __int64 v22; // rcx
  int v23; // edx
  bool v24; // cc
  _BYTE v25[8]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v26; // [rsp+48h] [rbp-50h]
  __int64 v27; // [rsp+50h] [rbp-48h]
  __int64 v28; // [rsp+58h] [rbp-40h]
  _BYTE v29[8]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v30; // [rsp+68h] [rbp-30h]
  __int64 v31; // [rsp+70h] [rbp-28h]
  __int64 v32; // [rsp+78h] [rbp-20h]

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
      goto LABEL_4;
    }
    v8 = -18;
  }
  if ( !*(_DWORD *)(v4 + 2772) )
  {
    v8 = 2;
    goto LABEL_4;
  }
  if ( (*(_DWORD *)(v9 + 2152) & 1) == 0 )
  {
    v8 = 3;
    goto LABEL_4;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v9 + 956));
  if ( _InterlockedIncrement((volatile signed __int32 *)(v4 + 2776)) != 1 )
  {
    v8 = 13;
    goto LABEL_18;
  }
  if ( *(_DWORD *)(v9 + 1024) )
    v8 = -14;
  if ( *(_DWORD *)(v9 + 968) )
    v8 = -8;
  MostSignificantBit = RtlFindMostSignificantBit(*(unsigned int *)(v4 + 1692));
  v15 = *(_DWORD *)(a1 + 396);
  if ( MostSignificantBit <= v15 )
  {
    if ( MostSignificantBit != v15 )
    {
      if ( *(_BYTE *)(v4 + 1944) )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v4 + 2776));
        v8 = 11;
        _InterlockedDecrement((volatile signed __int32 *)(v9 + 956));
        goto LABEL_4;
      }
      goto LABEL_22;
    }
    v16 = *(_QWORD *)(v4 + 8LL * *(unsigned int *)(v4 + 1552) + 1560);
    if ( v16 && *(_QWORD *)(*(_QWORD *)(v16 + 104) + 40LL) == *(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL) )
    {
      v17 = *(_DWORD *)(a1 + 400);
      v18 = *(_DWORD *)(v16 + 400);
      if ( v17 < v18 )
        goto LABEL_17;
      if ( v17 > v18 )
      {
        v8 = -17;
        goto LABEL_4;
      }
    }
    v30 = 0LL;
    v31 = 0LL;
    v32 = 0LL;
    v19 = (unsigned __int8)VidSchiUpdateNodeRunningTime(v4, v29) == 0;
    v20 = v30;
    if ( !v19 )
    {
      v8 = 11;
      *a2 = *(_QWORD *)(v30 + 488);
      _InterlockedDecrement((volatile signed __int32 *)(v4 + 2776));
      _InterlockedDecrement((volatile signed __int32 *)(v9 + 956));
      goto LABEL_4;
    }
    if ( !v30 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v4 + 2776));
      v8 = 2;
      _InterlockedDecrement((volatile signed __int32 *)(v9 + 956));
      goto LABEL_4;
    }
    v21 = HIDWORD(v31);
    v22 = v31;
  }
  else
  {
    if ( !*(_BYTE *)(v4 + 1944) )
    {
LABEL_17:
      v8 = 10;
LABEL_18:
      _InterlockedDecrement((volatile signed __int32 *)(v4 + 2776));
      _InterlockedDecrement((volatile signed __int32 *)(v9 + 956));
      goto LABEL_4;
    }
    v26 = 0LL;
    v27 = 0LL;
    v28 = 0LL;
    v19 = (unsigned __int8)VidSchiUpdateNodeRunningTime(v4, v25) == 0;
    v20 = v26;
    if ( !v19 )
    {
      v8 = 11;
      *a2 = *(_QWORD *)(v26 + 488);
      _InterlockedDecrement((volatile signed __int32 *)(v4 + 2776));
      _InterlockedDecrement((volatile signed __int32 *)(v9 + 956));
      goto LABEL_4;
    }
    if ( !v26 )
    {
      v8 = 2;
      goto LABEL_18;
    }
    v21 = HIDWORD(v27);
    v22 = v27;
  }
  v23 = *(_DWORD *)(v20 + 492);
  v24 = v23 <= v21;
  if ( v23 == v21 )
  {
    if ( *(_DWORD *)(v20 + 488) > (unsigned int)v22 )
    {
LABEL_35:
      v8 = 12;
      *a2 = *(_QWORD *)(v20 + 488) - v22;
      _InterlockedDecrement((volatile signed __int32 *)(v4 + 2776));
      _InterlockedDecrement((volatile signed __int32 *)(v9 + 956));
      goto LABEL_4;
    }
    v24 = v23 <= v21;
  }
  if ( !v24 )
    goto LABEL_35;
LABEL_22:
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
