/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UtagRECT@@$0A@@@QEAAJPEFBUtagRECT@@I@Z @ 0x18006A1D4
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DE70 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?NotifyVisitedContent@COverlayContext@@QEAAJPEAVCVisual@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180067244 (-NotifyVisitedContent@COverlayContext@@QEAAJPEAVCVisual@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180068650 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<tagRECT,0>::AddMultipleAndSet(__int64 a1, _OWORD *a2, unsigned int a3)
{
  unsigned int v3; // r8d
  unsigned int v5; // ecx
  unsigned int v6; // eax
  int v7; // ebx
  _OWORD *v9; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+50h] [rbp+18h]

  v10 = a3;
  v3 = *(_DWORD *)(a1 + 24);
  v5 = v10;
  v6 = v3 + 1;
  if ( v3 + 1 >= v3 )
    v5 = v3 + 1;
  v7 = v6 < v3 ? 0x80070216 : 0;
  if ( v6 < v3 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xB5u);
  }
  else if ( v5 > *(_DWORD *)(a1 + 20) )
  {
    v9 = a2;
    v7 = DynArrayImpl<0>::Grow(a1, 0x10u, 1, 0, (unsigned __int64 *)&v9);
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xC0u);
    else
      *(_OWORD *)(*(_QWORD *)a1 + (unsigned int)(16 * (*(_DWORD *)(a1 + 24))++)) = *v9;
  }
  else
  {
    *(_OWORD *)(*(_QWORD *)a1 + 16LL * v3) = *a2;
    *(_DWORD *)(a1 + 24) = v5;
  }
  return (unsigned int)v7;
}
