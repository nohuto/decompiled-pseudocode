/*
 * XREFs of ?GetAllHollowRects@CoordMap@@QEBAJAEAV?$DynArray@UD2D_RECT_F@@$0A@@@@Z @ 0x1800044C8
 * Callers:
 *     ?Initialize@CNineGridDrawListBrush@@AEAAJXZ @ 0x180004F0C (-Initialize@CNineGridDrawListBrush@@AEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@UD2D_RECT_F@@$0A@@@QEAAJPEFBUD2D_RECT_F@@I@Z @ 0x18000638C (-AddMultipleAndSet@-$DynArray@UD2D_RECT_F@@$0A@@@QEAAJPEFBUD2D_RECT_F@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CoordMap::GetAllHollowRects(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  *(_DWORD *)(a2 + 24) = 0;
  v2 = DynArray<D2D_RECT_F,0>::AddMultipleAndSet(a2, *(_QWORD *)(a1 + 384), *(unsigned int *)(a1 + 408));
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x13Bu);
  else
    return 0;
  return v3;
}
