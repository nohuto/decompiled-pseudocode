/*
 * XREFs of ?ComputeTexPositions@CoordMap@@QEBAJHV?$ArrayRef@M@@0AEAV?$DynArray@M$0A@@@1M@Z @ 0x18015F5BC
 * Callers:
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x18003CCC0 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x180058A44 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEAAJP6AJPEAVCDrawListBrush@@PEAX@Z1@Z @ 0x1801BA440 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEAAJP6AJPEAVCDrawListBrush@@PEAX@Z1@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180071020 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?ComputeTexPositionsWorker@CoordMap@@KAXV?$ArrayRef@M@@V?$ArrayRef@URampPair@CoordMap@@@@AEAV?$DynArray@M$0A@@@M@Z @ 0x18015F76C (-ComputeTexPositionsWorker@CoordMap@@KAXV-$ArrayRef@M@@V-$ArrayRef@URampPair@CoordMap@@@@AEAV-$D.c)
 *     ?GetRampValues@CoordMap@@AEBAJAEBV?$DynArray@URampEntry@CoordMap@@$0A@@@HAEAV?$DynArray@URampPair@CoordMap@@$0A@@@@Z @ 0x18015F95C (-GetRampValues@CoordMap@@AEBAJAEBV-$DynArray@URampEntry@CoordMap@@$0A@@@HAEAV-$DynArray@URampPai.c)
 */

__int64 __fastcall CoordMap::ComputeTexPositions(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rcx
  int RampValues; // eax
  __int64 v15; // rcx
  int v16; // eax
  void *v18; // [rsp+30h] [rbp-A1h] BYREF
  int v19; // [rsp+38h] [rbp-99h]
  void *v20; // [rsp+40h] [rbp-91h] BYREF
  int v21; // [rsp+48h] [rbp-89h]
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
  v10 = DynArrayImpl<0>::Grow(a5, 4u, *(_DWORD *)(a3 + 8), 0, 0LL);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x317u);
  }
  else
  {
    v12 = DynArrayImpl<0>::Grow(a6, 4u, *(_DWORD *)(a4 + 8), 0, 0LL);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x318u);
    }
    else
    {
      RampValues = CoordMap::GetRampValues(v13, a1, a2, v22);
      v11 = RampValues;
      if ( RampValues < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, RampValues, 0x31Bu);
      }
      else
      {
        v19 = HIDWORD(v24);
        v18 = v22[0];
        v21 = *(_DWORD *)(a3 + 8);
        v20 = *(void **)a3;
        CoordMap::ComputeTexPositionsWorker(&v20, &v18, a5);
        v16 = CoordMap::GetRampValues(v15, a1 + 192, a2, v22);
        v11 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x323u);
        }
        else
        {
          v21 = HIDWORD(v24);
          v20 = v22[0];
          v19 = *(_DWORD *)(a4 + 8);
          v18 = *(void **)a4;
          CoordMap::ComputeTexPositionsWorker(&v18, &v20, a6);
          v11 = 0;
        }
      }
    }
  }
  DynArrayImpl<1>::~DynArrayImpl<1>(v22);
  return v11;
}
