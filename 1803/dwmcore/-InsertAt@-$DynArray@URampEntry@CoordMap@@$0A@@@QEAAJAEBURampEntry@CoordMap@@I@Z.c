/*
 * XREFs of ?InsertAt@?$DynArray@URampEntry@CoordMap@@$0A@@@QEAAJAEBURampEntry@CoordMap@@I@Z @ 0x180004DE0
 * Callers:
 *     ?AddEntry@CoordMap@@AEAAJAEAV?$DynArray@URampEntry@CoordMap@@$0A@@@HAEBURampPair@1@W4RampMergeMode@1@@Z @ 0x180004414 (-AddEntry@CoordMap@@AEAAJAEAV-$DynArray@URampEntry@CoordMap@@$0A@@@HAEBURampPair@1@W4RampMergeMo.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800794F0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall DynArray<CoordMap::RampEntry,0>::InsertAt(__int64 *a1, _OWORD *a2, unsigned int a3)
{
  __int64 v4; // rsi
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // r8
  _OWORD *v9; // rcx
  _OWORD *v10; // rdx
  _OWORD *v12; // rdx
  _OWORD *v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = a3;
  if ( a3 > *((_DWORD *)a1 + 6) )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x1CBu);
  }
  else
  {
    v13 = a2;
    v5 = DynArrayImpl<0>::Grow((_DWORD)a1, 16, 1, 0, (__int64)&v13);
    v6 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x1D5u);
    }
    else
    {
      v7 = *((unsigned int *)a1 + 6);
      v8 = *a1;
      *((_DWORD *)a1 + 6) = v7 + 1;
      if ( (unsigned int)v7 > (unsigned int)v4 )
      {
        v12 = (_OWORD *)(v8 + 16 * v7);
        do
        {
          LODWORD(v7) = v7 - 1;
          *v12-- = *(_OWORD *)(v8 + 16LL * (unsigned int)v7);
        }
        while ( (unsigned int)v7 > (unsigned int)v4 );
      }
      v9 = v13;
      v10 = (_OWORD *)(v8 + 16 * v4);
      if ( v13 >= v10 && (unsigned __int64)v13 < v8 + 16 * (unsigned __int64)*((unsigned int *)a1 + 6) - 16 )
        v9 = v13 + 1;
      *v10 = *v9;
    }
  }
  return v6;
}
