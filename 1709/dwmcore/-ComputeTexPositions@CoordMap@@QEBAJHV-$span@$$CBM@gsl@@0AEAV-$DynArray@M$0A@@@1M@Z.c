/*
 * XREFs of ?ComputeTexPositions@CoordMap@@QEBAJHV?$span@$$CBM@gsl@@0AEAV?$DynArray@M$0A@@@1M@Z @ 0x180155634
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800491D0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x1800647B0 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEAAJP6AJPEAVCDrawListBrush@@PEAX@Z1@Z @ 0x18009F190 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEAAJP6AJPEAVCDrawListBrush@@PEAX@Z1@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180068650 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?ComputeTexPositionsWorker@CoordMap@@KAXV?$span@$$CBM@gsl@@V?$span@$$CBURampPair@CoordMap@@@3@AEAV?$DynArray@M$0A@@@M@Z @ 0x1801557F0 (-ComputeTexPositionsWorker@CoordMap@@KAXV-$span@$$CBM@gsl@@V-$span@$$CBURampPair@CoordMap@@@3@AE.c)
 *     ?GetRampValues@CoordMap@@AEBAJAEBV?$DynArray@URampEntry@CoordMap@@$0A@@@HAEAV?$DynArray@URampPair@CoordMap@@$0A@@@@Z @ 0x180155A08 (-GetRampValues@CoordMap@@AEBAJAEBV-$DynArray@URampEntry@CoordMap@@$0A@@@HAEAV-$DynArray@URampPai.c)
 */

__int64 __fastcall CoordMap::ComputeTexPositions(
        __int64 a1,
        unsigned int a2,
        __int128 *a3,
        __int128 *a4,
        __int64 a5,
        __int64 a6)
{
  signed int v10; // eax
  unsigned int v11; // ebx
  signed int v12; // eax
  __int64 v13; // rcx
  signed int RampValues; // eax
  __int128 v15; // xmm1
  __int64 v16; // rcx
  signed int v17; // eax
  __int128 v18; // xmm1
  __int128 v20; // [rsp+30h] [rbp-A1h] BYREF
  __int128 v21; // [rsp+40h] [rbp-91h] BYREF
  void *v22[2]; // [rsp+50h] [rbp-81h] BYREF
  int v23; // [rsp+60h] [rbp-71h]
  __int64 v24; // [rsp+64h] [rbp-6Dh]
  _BYTE v25[80]; // [rsp+70h] [rbp-61h] BYREF

  v22[0] = v25;
  v22[1] = v25;
  v23 = 6;
  v24 = 6LL;
  *(_DWORD *)(a5 + 24) = 0;
  *(_DWORD *)(a6 + 24) = 0;
  v10 = DynArrayImpl<0>::Grow(a5, 4u, *((_DWORD *)a3 + 2), 0, 0LL);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x317u);
  }
  else
  {
    v12 = DynArrayImpl<0>::Grow(a6, 4u, *((_DWORD *)a4 + 2), 0, 0LL);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x318u);
    }
    else
    {
      RampValues = CoordMap::GetRampValues(v13, a1, a2, v22);
      v11 = RampValues;
      if ( RampValues < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, RampValues, 0x31Bu);
      }
      else
      {
        v15 = *a3;
        *(void **)&v20 = v22[0];
        *((_QWORD *)&v20 + 1) = HIDWORD(v24);
        v21 = v15;
        CoordMap::ComputeTexPositionsWorker(&v21, &v20, a5);
        v17 = CoordMap::GetRampValues(v16, a1 + 192, a2, v22);
        v11 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v17, 0x323u);
        }
        else
        {
          v18 = *a4;
          *(void **)&v20 = v22[0];
          *((_QWORD *)&v20 + 1) = HIDWORD(v24);
          v21 = v20;
          v20 = v18;
          CoordMap::ComputeTexPositionsWorker(&v20, &v21, a6);
          v11 = 0;
        }
      }
    }
  }
  DynArrayImpl<1>::~DynArrayImpl<1>(v22);
  return v11;
}
