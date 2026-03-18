/*
 * XREFs of ScaleRGB @ 0x1C023DDDC
 * Callers:
 *     ComputeBGRMappingTable @ 0x1C023D020 (ComputeBGRMappingTable.c)
 * Callees:
 *     DivFD6 @ 0x1C0034DF8 (DivFD6.c)
 */

__int64 __fastcall ScaleRGB(_DWORD *a1)
{
  int v2; // ecx
  int v3; // ebx
  int v4; // r14d
  __int64 result; // rax
  int v6; // r15d
  int v7; // ebp
  int v8; // r14d
  int v9; // edi
  int v10; // ebx

  v2 = *a1;
  v3 = a1[1];
  if ( v2 <= v3 )
  {
    v4 = a1[1];
    result = (unsigned int)v2;
  }
  else
  {
    v4 = v2;
    result = (unsigned int)v3;
  }
  v6 = a1[2];
  if ( v6 > v4 )
    v4 = a1[2];
  if ( v6 < (int)result )
    result = (unsigned int)v6;
  v7 = 0;
  if ( v4 > 1000000 || (int)result < 0 )
  {
    if ( (int)result < 1000000 )
    {
      if ( v4 > 0 )
      {
        if ( v4 < 1000000 )
          v4 = 1000000;
        if ( (int)result <= 0 )
          v7 = result;
        v8 = v4 - v7;
        v9 = DivFD6(v2 - v7, v8);
        v10 = DivFD6(v3 - v7, v8);
        result = DivFD6(v6 - v7, v8);
        a1[2] = result;
        *a1 = v9;
        a1[1] = v10;
      }
      else
      {
        *(_QWORD *)(a1 + 1) = 0LL;
        *a1 = 0;
      }
    }
    else
    {
      a1[2] = 1000000;
      a1[1] = 1000000;
      *a1 = 1000000;
    }
  }
  return result;
}
