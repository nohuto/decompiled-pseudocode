/*
 * XREFs of ?ComputeAppViewData@ImmersiveApplicationLayout@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@PEBUtagRECT@@1PEAUAPPLICATION_VIEW_DATA@@@Z @ 0x1801CCDDC
 * Callers:
 *     ?_ComputeApplicationViewData@CFrameApplicationPresentation@@AEAAJAEBUtagRECT@@PEAUAPPLICATION_VIEW_DATA@@@Z @ 0x180069A7C (-_ComputeApplicationViewData@CFrameApplicationPresentation@@AEAAJAEBUtagRECT@@PEAUAPPLICATION_VI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ImmersiveApplicationLayout::ComputeAppViewData(
        ImmersiveApplicationLayout *this,
        const struct LAYOUT_ENVIRONMENT_DETAILS *a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  LONG v4; // r10d
  int v7; // r8d
  int v8; // edi
  LONG v9; // esi
  LONG v10; // ebp
  char v11; // cl
  char v12; // al
  char v13; // cl
  LONG v14; // eax
  bool v15; // cc
  char v16; // al
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  __int64 result; // rax

  v4 = 0;
  *(_QWORD *)&a4->left = 0LL;
  *(_QWORD *)&a4->right = 0LL;
  *(_QWORD *)&a4[1].left = 0LL;
  *(_QWORD *)&a4[1].right = 0LL;
  a4[2].left = 3;
  v7 = *((_DWORD *)a2 + 2) - *(_DWORD *)a2;
  v8 = *((_DWORD *)this + 4);
  v9 = *(_DWORD *)this;
  v10 = *((_DWORD *)this + 2);
  if ( v7 < 320 * v8 / 100 || v7 >= 5 * v8 )
  {
    if ( v7 >= *((_DWORD *)a2 + 3) - *((_DWORD *)a2 + 1) )
    {
      if ( a3->left > v9 || (v11 = 1, v9 > *(_DWORD *)a2) )
        v11 = 0;
      if ( *((_DWORD *)a2 + 2) > v10 || (v12 = 1, v10 > a3->right) )
        v12 = 0;
      a4->left = !v11 || !v12;
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
  a4->top = *((_DWORD *)a2 + 2) - *(_DWORD *)a2 < *((_DWORD *)a2 + 3) - *((_DWORD *)a2 + 1);
  a4->right = 0;
  if ( a3->left > *(_DWORD *)this || (v13 = 1, *(_DWORD *)this > *(_DWORD *)a2) )
    v13 = 0;
  v14 = *((_DWORD *)this + 2);
  if ( *((_DWORD *)a2 + 2) > v14 || (v15 = v14 <= a3->right, v16 = 1, !v15) )
    v16 = 0;
  if ( v13 )
  {
    v17 = 2 - (v16 != 0);
  }
  else
  {
    v17 = 0;
    if ( v16 )
      v17 = 3;
  }
  v18 = v17 - 1;
  if ( v18 )
  {
    v19 = v18 - 1;
    if ( v19 )
    {
      if ( v19 == 1 )
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
  LOBYTE(v4) = *((_DWORD *)this + 5) == 1;
  result = 0LL;
  a4->bottom = v4;
  return result;
}
