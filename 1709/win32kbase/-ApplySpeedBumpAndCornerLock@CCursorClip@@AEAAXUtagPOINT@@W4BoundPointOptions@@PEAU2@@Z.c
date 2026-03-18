/*
 * XREFs of ?ApplySpeedBumpAndCornerLock@CCursorClip@@AEAAXUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x1C01299E0
 * Callers:
 *     ?BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x1C005DBD8 (-BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCursorClip::ApplySpeedBumpAndCornerLock(_DWORD *a1, __int64 a2, char a3, int *a4)
{
  int v5; // r11d
  bool v6; // cf
  int v7; // r8d
  int v8; // ebx
  int v9; // edx
  int v10; // ecx
  __int64 result; // rax
  int v12; // edx
  int v13; // ecx

  *(_QWORD *)a4 = a2;
  v5 = (a3 & 2) != 0 ? 6 : 0;
  v6 = (a3 & 1) != 0;
  v7 = a4[1];
  v8 = v6 ? 6 : 0;
  if ( v7 < v5 + a1[13] || v7 >= a1[15] - v5 || (int)abs32(a2 - a1[12]) < v8 || (int)abs32(a2 - a1[14]) < v8 )
  {
    v9 = a1[12];
    v10 = v9;
    if ( *a4 > v9 )
      v10 = *a4;
    if ( v10 >= a1[14] - 1 )
    {
      v9 = a1[14] - 1;
    }
    else if ( *a4 > v9 )
    {
      v9 = *a4;
    }
    *a4 = v9;
  }
  if ( *a4 < v5 + a1[12]
    || *a4 >= a1[14] - v5
    || (int)abs32(v7 - a1[13]) < v8
    || (result = abs32(v7 - a1[15]), (int)result < v8) )
  {
    v12 = a1[13];
    v13 = v12;
    if ( v7 > v12 )
      v13 = v7;
    result = (unsigned int)(a1[15] - 1);
    if ( v13 >= (int)result )
    {
      v12 = a1[15] - 1;
    }
    else if ( v7 > v12 )
    {
      v12 = v7;
    }
    a4[1] = v12;
  }
  return result;
}
