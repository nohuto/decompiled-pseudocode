/*
 * XREFs of ?StCompactionPickPriority@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE@1@K1K@Z @ 0x14026AFE8
 * Callers:
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x14026AD74 (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactionPickPriority(
        __int64 a1,
        unsigned __int16 **a2,
        unsigned int a3,
        void *a4)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v8; // r9
  int v9; // r8d
  unsigned int v10; // ecx
  __int64 v11; // r10
  __int64 v12; // rcx
  __int64 v13; // r11
  unsigned __int16 *v14; // rdx
  int v15; // r10d
  _DWORD *v16; // rdx
  unsigned int v17; // r9d
  int i; // ecx
  unsigned int v19; // r8d
  unsigned int v20; // ebx
  _QWORD v22[40]; // [rsp+20h] [rbp-178h] BYREF

  v4 = a3;
  memset(v22, 0, sizeof(v22));
  v8 = 0LL;
  if ( a2 > &a2[v4] )
    v4 = 0LL;
  if ( v4 )
  {
    v9 = (unsigned __int8)*(_DWORD *)(a1 + 776);
    do
    {
      if ( v9 )
        v10 = 0;
      else
        v10 = **a2 >> 13;
      v11 = v10;
      v12 = 5LL * v10;
      v13 = LODWORD(v22[v12]);
      if ( (unsigned int)v13 < 4 )
      {
        v14 = *a2;
        LODWORD(v22[v12]) = v13 + 1;
        HIDWORD(v22[v12]) += *v14 & 0x1FFF;
        v22[5 * v11 + 1 + v13] = v14;
      }
      ++a2;
      ++v8;
    }
    while ( v8 < v4 );
  }
  v15 = -1;
  v16 = (_DWORD *)&v22[35] + 1;
  v17 = 0;
  for ( i = 7; i >= 0; --i )
  {
    v19 = *(v16 - 1);
    if ( v19 > 1 && v17 < v19 * *(_DWORD *)(a1 + 816) - *v16 )
    {
      v17 = v19 * *(_DWORD *)(a1 + 816) - *v16;
      v15 = i;
    }
    v16 -= 10;
  }
  v20 = v22[5 * v15];
  if ( v20 > 4 )
    v20 = 4;
  memmove(a4, &v22[5 * v15 + 1], 8LL * v20);
  return v20;
}
