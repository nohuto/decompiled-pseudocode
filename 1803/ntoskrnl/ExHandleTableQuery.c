/*
 * XREFs of ExHandleTableQuery @ 0x1405658E4
 * Callers:
 *     ObGetProcessHandleCount @ 0x14056588C (ObGetProcessHandleCount.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExHandleTableQuery(unsigned int *a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int *v3; // r9
  __int64 v4; // rbx
  __int64 v5; // r11
  unsigned __int64 v7; // r10
  __int64 v9; // rax
  int v10; // ecx
  __int64 v11; // rdx
  int v12; // ecx
  __int64 result; // rax

  v3 = a1 + 16;
  v4 = 0LL;
  v5 = 0LL;
  v7 = (unsigned __int64)&a1[16 * (unsigned __int64)(unsigned int)ExpFreeListCount + 16];
  while ( (unsigned __int64)v3 < v7 )
  {
    v9 = (int)v3[6];
    v10 = v3[7];
    if ( (int)v9 > v10 )
      v10 = v3[6];
    v4 += v9;
    v5 += (unsigned int)v10;
    v3 += 16;
  }
  v11 = 0LL;
  if ( v4 >= 0 )
    v11 = v4;
  if ( v11 > 0xFFFFFFFFLL )
    v11 = 0xFFFFFFFFLL;
  v12 = v11;
  if ( v5 > 0xFFFFFFFFLL )
    v5 = 0xFFFFFFFFLL;
  result = (unsigned int)((255 * ((unsigned __int64)*a1 >> 2)) >> 8);
  if ( v11 <= result )
    result = v11;
  else
    v12 = (255 * ((unsigned __int64)*a1 >> 2)) >> 8;
  if ( v5 > result )
    LODWORD(v5) = result;
  if ( a2 )
    *a2 = v12;
  if ( a3 )
    *a3 = v5;
  return result;
}
