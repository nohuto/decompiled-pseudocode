/*
 * XREFs of ExHandleTableQuery @ 0x140441B68
 * Callers:
 *     ObGetProcessHandleCount @ 0x140441B10 (ObGetProcessHandleCount.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExHandleTableQuery(unsigned int *a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int *v3; // r11
  unsigned __int64 v4; // rbx
  __int64 v6; // r9
  __int64 v7; // r10
  __int64 v8; // rax
  int v9; // ecx
  __int64 result; // rax

  v3 = a1 + 16;
  v4 = (unsigned __int64)&a1[16 * (unsigned __int64)(unsigned int)ExpFreeListCount + 16];
  v6 = 0LL;
  v7 = 0LL;
  if ( (unsigned __int64)(a1 + 16) < v4 )
  {
    do
    {
      v8 = (int)v3[6];
      v9 = v3[7];
      if ( (int)v8 > v9 )
        v9 = v3[6];
      v6 += v8;
      v3 += 16;
      v7 += (unsigned int)v9;
    }
    while ( (unsigned __int64)v3 < v4 );
    if ( v6 < 0 )
      v6 = 0LL;
    if ( v6 > 0xFFFFFFFFLL )
      v6 = 0xFFFFFFFFLL;
    if ( v7 > 0xFFFFFFFFLL )
      v7 = 0xFFFFFFFFLL;
  }
  result = (unsigned int)((255 * ((unsigned __int64)*a1 >> 2)) >> 8);
  if ( v6 > result )
    v6 = (unsigned int)((255 * ((unsigned __int64)*a1 >> 2)) >> 8);
  if ( v7 > v6 )
    LODWORD(v7) = v6;
  if ( a2 )
    *a2 = v6;
  if ( a3 )
    *a3 = v7;
  return result;
}
