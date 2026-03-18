/*
 * XREFs of ?ApplySpeedBumpAndCornerLock@CCursorClip@@AEAAXUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x1C012A090
 * Callers:
 *     ?BoundPointToMonitors@CCursorClip@@AEAAXUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x1C00724B8 (-BoundPointToMonitors@CCursorClip@@AEAAXUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCursorClip::ApplySpeedBumpAndCornerLock(__int64 a1, __int64 a2, char a3, int *a4)
{
  int *v5; // r9
  int v7; // r11d
  bool v8; // cf
  int v9; // r8d
  int v10; // ebx
  int *v11; // rax
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // r9
  __int64 result; // rax
  int v16; // edx
  int v17; // ecx

  *(_QWORD *)a4 = a2;
  v5 = *(int **)(a1 + 56);
  v7 = (a3 & 2) != 0 ? 6 : 0;
  v8 = (a3 & 1) != 0;
  v9 = a4[1];
  v10 = v8 ? 6 : 0;
  if ( v9 < v7 + v5[1] || v9 >= v5[3] - v7 || (int)abs32(a2 - *v5) < v10 || (int)abs32(a2 - v5[2]) < v10 )
  {
    v11 = *(int **)(a1 + 56);
    if ( *a4 > *v5 )
      v11 = a4;
    v12 = *v11;
    v13 = v5[2] - 1;
    if ( v12 < v13 )
    {
      if ( *a4 > *v5 )
        v5 = a4;
      v13 = *v5;
    }
    *a4 = v13;
  }
  v14 = *(_DWORD **)(a1 + 56);
  if ( *a4 < v7 + *v14
    || *a4 >= v14[2] - v7
    || (int)abs32(v9 - v14[1]) < v10
    || (result = abs32(v9 - v14[3]), (int)result < v10) )
  {
    v16 = v14[1];
    v17 = v16;
    if ( v9 > v16 )
      v17 = v9;
    result = (unsigned int)(v14[3] - 1);
    if ( v17 >= (int)result )
    {
      v16 = v14[3] - 1;
    }
    else if ( v9 > v16 )
    {
      v16 = v9;
    }
    a4[1] = v16;
  }
  return result;
}
