/*
 * XREFs of ?ComputeAppViewData@ImmersiveApplicationLayout@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@PEBUtagRECT@@1PEAUAPPLICATION_VIEW_DATA@@@Z @ 0x18017F3AC
 * Callers:
 *     ?_ComputeApplicationViewData@CFrameApplicationPresentation@@AEAAJAEBUtagRECT@@PEAUAPPLICATION_VIEW_DATA@@@Z @ 0x180067658 (-_ComputeApplicationViewData@CFrameApplicationPresentation@@AEAAJAEBUtagRECT@@PEAUAPPLICATION_VI.c)
 * Callees:
 *     ?InitAppViewData@ImmersiveApplicationLayout@@YAXPEAUAPPLICATION_VIEW_DATA@@@Z @ 0x18017F518 (-InitAppViewData@ImmersiveApplicationLayout@@YAXPEAUAPPLICATION_VIEW_DATA@@@Z.c)
 */

__int64 __fastcall ImmersiveApplicationLayout::ComputeAppViewData(
        ImmersiveApplicationLayout *this,
        const struct LAYOUT_ENVIRONMENT_DETAILS *a2,
        const struct tagRECT *a3,
        struct tagRECT *a4)
{
  int v8; // r9d
  LONG v9; // r8d
  int v10; // ebp
  LONG v11; // r10d
  LONG v12; // r11d
  char v13; // cl
  char v14; // al
  char v15; // cl
  LONG v16; // eax
  bool v17; // cc
  char v18; // al
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx

  ImmersiveApplicationLayout::InitAppViewData((ImmersiveApplicationLayout *)a4, a2);
  v8 = *((_DWORD *)this + 4);
  v9 = 0;
  v10 = *((_DWORD *)a2 + 2) - *(_DWORD *)a2;
  v11 = *(_DWORD *)this;
  v12 = *((_DWORD *)this + 2);
  if ( v10 < 320 * v8 / 100 || v10 >= 5 * v8 )
  {
    if ( *((_DWORD *)a2 + 2) - *(_DWORD *)a2 >= *((_DWORD *)a2 + 3) - *((_DWORD *)a2 + 1) )
    {
      if ( a3->left > v11 || (v13 = 1, v11 > *(_DWORD *)a2) )
        v13 = 0;
      if ( *((_DWORD *)a2 + 2) > v12 || (v14 = 1, v12 > a3->right) )
        v14 = 0;
      a4->left = !v13 || !v14;
    }
    else
    {
      a4->left = 3;
    }
  }
  else
  {
    a4->left = 2;
  }
  *(_QWORD *)&a4->top = *((_DWORD *)a2 + 2) - *(_DWORD *)a2 < *((_DWORD *)a2 + 3) - *((_DWORD *)a2 + 1);
  if ( a3->left > *(_DWORD *)this || (v15 = 1, *(_DWORD *)this > *(_DWORD *)a2) )
    v15 = 0;
  v16 = *((_DWORD *)this + 2);
  if ( *((_DWORD *)a2 + 2) > v16 || (v17 = v16 <= a3->right, v18 = 1, !v17) )
    v18 = 0;
  if ( v15 )
  {
    v19 = 2 - (v18 != 0);
  }
  else
  {
    v19 = 0;
    if ( v18 )
      v19 = 3;
  }
  v20 = v19 - 1;
  if ( v20 )
  {
    v21 = v20 - 1;
    if ( v21 )
    {
      if ( v21 == 1 )
        a4->right = 2;
    }
    else
    {
      a4->right = 1;
    }
  }
  else
  {
    a4->right = 3;
  }
  LOBYTE(v9) = *((_DWORD *)this + 5) == 1;
  a4->bottom = v9;
  return 0LL;
}
