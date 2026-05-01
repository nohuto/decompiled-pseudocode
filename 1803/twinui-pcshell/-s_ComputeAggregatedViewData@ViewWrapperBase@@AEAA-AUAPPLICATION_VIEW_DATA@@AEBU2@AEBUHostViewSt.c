/*
 * XREFs of ?s_ComputeAggregatedViewData@ViewWrapperBase@@AEAA?AUAPPLICATION_VIEW_DATA@@AEBU2@AEBUHostViewStateOverrides@@@Z @ 0x18004EC34
 * Callers:
 *     ?ChangeBounds@ViewWrapperBase@@UEAAJUViewBounds@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18004FF50 (-ChangeBounds@ViewWrapperBase@@UEAAJUViewBounds@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 *     ?ViewCreated@ViewWrapperBase@@UEAAXPEAUIUnknown@@@Z @ 0x1801E7360 (-ViewCreated@ViewWrapperBase@@UEAAXPEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewWrapperBase::s_ComputeAggregatedViewData(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  bool v4; // zf
  int v5; // eax
  __int128 v6; // xmm1

  v4 = *a4 == 1;
  v5 = *(_DWORD *)(a3 + 32);
  v6 = *(_OWORD *)(a3 + 16);
  *(_OWORD *)a2 = *(_OWORD *)a3;
  *(_OWORD *)(a2 + 16) = v6;
  *(_DWORD *)(a2 + 32) = v5;
  if ( v4 )
    *(_DWORD *)(a2 + 24) = a4[1];
  return a2;
}
