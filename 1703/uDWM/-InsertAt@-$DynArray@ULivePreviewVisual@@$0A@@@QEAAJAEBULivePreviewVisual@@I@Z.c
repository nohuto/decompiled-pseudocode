/*
 * XREFs of ?InsertAt@?$DynArray@ULivePreviewVisual@@$0A@@@QEAAJAEBULivePreviewVisual@@I@Z @ 0x180075144
 * Callers:
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x180038224 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18002C510 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<LivePreviewVisual,0>::InsertAt(__int64 a1, unsigned __int64 a2)
{
  int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r9
  __int128 v8; // xmm1
  __int64 v9; // xmm0_8
  unsigned __int64 v10; // rdx
  unsigned __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = a2;
  v3 = DynArrayImpl<0>::Grow(a1, 0x28u, 1, 0, &v12);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = *(unsigned int *)(a1 + 24);
    v6 = *(_QWORD *)a1;
    *(_DWORD *)(a1 + 24) = v5 + 1;
    if ( (_DWORD)v5 )
    {
      v7 = v6 + 40 * v5;
      do
      {
        LODWORD(v5) = v5 - 1;
        v8 = *(_OWORD *)(v6 + 40LL * (unsigned int)v5 + 16);
        *(_OWORD *)v7 = *(_OWORD *)(v6 + 40LL * (unsigned int)v5);
        v9 = *(_QWORD *)(v6 + 40LL * (unsigned int)v5 + 32);
        *(_OWORD *)(v7 + 16) = v8;
        *(_QWORD *)(v7 + 32) = v9;
        v7 -= 40LL;
      }
      while ( (_DWORD)v5 );
    }
    v10 = v12;
    if ( v12 >= v6 && v12 < v6 + 8 * (5LL * *(unsigned int *)(a1 + 24) - 5) )
      v10 = v12 + 40;
    *(_OWORD *)v6 = *(_OWORD *)v10;
    *(_OWORD *)(v6 + 16) = *(_OWORD *)(v10 + 16);
    *(_QWORD *)(v6 + 32) = *(_QWORD *)(v10 + 32);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x1CDu);
  }
  return v4;
}
