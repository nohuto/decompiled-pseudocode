/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@ULightInfo@@$0A@@@QEAAJPEFBULightInfo@@I@Z @ 0x1800BB248
 * Callers:
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x18009E9C8 (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<LightInfo,0>::AddMultipleAndSet(__int64 a1, _OWORD *a2, unsigned int a3)
{
  __int64 v4; // rcx
  unsigned int v5; // eax
  DWORD v6; // ebx
  _OWORD *v7; // rcx
  __int128 v8; // xmm0
  _OWORD *v9; // rdx
  signed int v11; // eax

  v4 = *(unsigned int *)(a1 + 24);
  v5 = v4 + 1;
  if ( (int)v4 + 1 >= (unsigned int)v4 )
    a3 = v4 + 1;
  v6 = v5 < (unsigned int)v4 ? 0x80070216 : 0;
  if ( v5 < (unsigned int)v4 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0xB5u);
  }
  else if ( a3 > *(_DWORD *)(a1 + 20) )
  {
    v11 = DynArrayImpl<0>::AddMultipleAndSet(a1, 0xE8u, 1, a2);
    v6 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0xC0u);
  }
  else
  {
    v7 = (_OWORD *)(*(_QWORD *)a1 + 232 * v4);
    *v7 = *a2;
    v7[1] = a2[1];
    v7[2] = a2[2];
    v7[3] = a2[3];
    v7[4] = a2[4];
    v7[5] = a2[5];
    v7[6] = a2[6];
    v7 += 8;
    v8 = a2[7];
    v9 = a2 + 8;
    *(v7 - 1) = v8;
    *v7 = *v9;
    v7[1] = v9[1];
    v7[2] = v9[2];
    v7[3] = v9[3];
    v7[4] = v9[4];
    v7[5] = v9[5];
    *((_QWORD *)v7 + 12) = *((_QWORD *)v9 + 12);
    *(_DWORD *)(a1 + 24) = a3;
  }
  return v6;
}
