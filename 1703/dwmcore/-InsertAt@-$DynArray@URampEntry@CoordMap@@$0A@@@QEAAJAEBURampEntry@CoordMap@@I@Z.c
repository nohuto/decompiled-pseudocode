/*
 * XREFs of ?InsertAt@?$DynArray@URampEntry@CoordMap@@$0A@@@QEAAJAEBURampEntry@CoordMap@@I@Z @ 0x1800C5800
 * Callers:
 *     ?AddEntry@CoordMap@@AEAAJAEAV?$DynArray@URampEntry@CoordMap@@$0A@@@HAEBURampPair@1@W4RampMergeMode@1@@Z @ 0x180057F88 (-AddEntry@CoordMap@@AEAAJAEAV-$DynArray@URampEntry@CoordMap@@$0A@@@HAEBURampPair@1@W4RampMergeMo.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180071020 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall DynArray<CoordMap::RampEntry,0>::InsertAt(__int64 a1, unsigned __int64 a2, unsigned int a3)
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
  if ( a3 > *(_DWORD *)(a1 + 24) )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x1C2u);
  }
  else
  {
    v13 = (_OWORD *)a2;
    v5 = DynArrayImpl<0>::Grow(a1, 0x10u, 1, 0, (unsigned __int64 *)&v13);
    v6 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x1CCu);
    }
    else
    {
      v7 = *(unsigned int *)(a1 + 24);
      v8 = *(_QWORD *)a1;
      *(_DWORD *)(a1 + 24) = v7 + 1;
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
      if ( v13 >= v10 && (unsigned __int64)v13 < v8 + 16 * (unsigned __int64)*(unsigned int *)(a1 + 24) - 16 )
        v9 = v13 + 1;
      *v10 = *v9;
    }
  }
  return v6;
}
