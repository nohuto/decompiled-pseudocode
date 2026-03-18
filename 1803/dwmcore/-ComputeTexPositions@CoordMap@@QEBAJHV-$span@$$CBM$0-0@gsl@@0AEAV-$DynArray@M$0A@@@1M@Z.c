/*
 * XREFs of ?ComputeTexPositions@CoordMap@@QEBAJHV?$span@$$CBM$0?0@gsl@@0AEAV?$DynArray@M$0A@@@1M@Z @ 0x180004C68
 * Callers:
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z @ 0x1800050E0 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z.c)
 * Callees:
 *     ?GetRampValues@CoordMap@@AEBAJAEBV?$DynArray@URampEntry@CoordMap@@$0A@@@HAEAV?$DynArray@URampPair@CoordMap@@$0A@@@@Z @ 0x1800041D4 (-GetRampValues@CoordMap@@AEBAJAEBV-$DynArray@URampEntry@CoordMap@@$0A@@@HAEAV-$DynArray@URampPai.c)
 *     ?ComputeTexPositionsWorker@CoordMap@@KAXV?$span@$$CBM$0?0@gsl@@V?$span@$$CBURampPair@CoordMap@@$0?0@3@AEAV?$DynArray@M$0A@@@M@Z @ 0x180005704 (-ComputeTexPositionsWorker@CoordMap@@KAXV-$span@$$CBM$0-0@gsl@@V-$span@$$CBURampPair@CoordMap@@$.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800794F0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CoordMap::ComputeTexPositions(__int64 a1, __int64 a2, int *a3, _DWORD *a4, __int64 a5, __int64 a6)
{
  int v9; // r8d
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // r8d
  int RampValues; // eax
  __int128 v16; // xmm1
  __int64 v17; // rcx
  unsigned int v18; // r8d
  int v19; // eax
  __int128 v20; // xmm1
  __int128 v22; // [rsp+30h] [rbp-91h] BYREF
  __int128 v23; // [rsp+40h] [rbp-81h] BYREF
  __int64 v24[2]; // [rsp+50h] [rbp-71h] BYREF
  int v25; // [rsp+60h] [rbp-61h]
  int v26; // [rsp+64h] [rbp-5Dh]
  unsigned int v27; // [rsp+68h] [rbp-59h]
  _BYTE v28[80]; // [rsp+70h] [rbp-51h] BYREF

  v27 = 0;
  *(_DWORD *)(a5 + 24) = 0;
  *(_DWORD *)(a6 + 24) = 0;
  v9 = *a3;
  v24[0] = (__int64)v28;
  v24[1] = (__int64)v28;
  v25 = 6;
  v26 = 6;
  v10 = DynArrayImpl<0>::Grow(a5, 4, v9, 0, 0LL);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x317u);
  }
  else
  {
    v12 = DynArrayImpl<0>::Grow(a6, 4, *a4, 0, 0LL);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x318u);
    }
    else
    {
      RampValues = CoordMap::GetRampValues(v13, a1, v14, v24);
      v11 = RampValues;
      if ( RampValues < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RampValues, 0x31Bu);
      }
      else
      {
        v16 = *(_OWORD *)a3;
        *(_QWORD *)&v22 = v27;
        *((_QWORD *)&v22 + 1) = v24[0];
        v23 = v16;
        CoordMap::ComputeTexPositionsWorker(&v23, &v22, a5);
        v19 = CoordMap::GetRampValues(v17, a1 + 192, v18, v24);
        v11 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x323u);
        }
        else
        {
          v20 = *(_OWORD *)a4;
          *(_QWORD *)&v22 = v27;
          *((_QWORD *)&v22 + 1) = v24[0];
          v23 = v22;
          v22 = v20;
          CoordMap::ComputeTexPositionsWorker(&v22, &v23, a6);
          v11 = 0;
        }
      }
    }
  }
  DynArrayImpl<0>::~DynArrayImpl<0>(v24);
  return v11;
}
