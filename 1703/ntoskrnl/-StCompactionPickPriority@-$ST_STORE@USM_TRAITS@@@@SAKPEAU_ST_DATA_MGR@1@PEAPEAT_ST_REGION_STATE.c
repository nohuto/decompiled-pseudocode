/*
 * XREFs of ?StCompactionPickPriority@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE@1@K1K@Z @ 0x1401397E0
 * Callers:
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x14013958C (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactionPickPriority(
        __int64 a1,
        unsigned __int16 **a2,
        unsigned int a3,
        void *a4)
{
  __int64 v4; // rbx
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // r9
  int v10; // ebx
  unsigned int v11; // ecx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r10
  int v15; // r10d
  _DWORD *v16; // rdx
  unsigned int v17; // r9d
  int i; // ecx
  unsigned int v19; // r8d
  unsigned int v20; // ebx
  unsigned __int16 *v22; // rdx
  _QWORD v23[40]; // [rsp+20h] [rbp-178h] BYREF

  v4 = a3;
  memset(v23, 0, sizeof(v23));
  v8 = (unsigned __int64)(8 * v4 + 7) >> 3;
  v9 = 0LL;
  if ( a2 > &a2[v4] )
    v8 = 0LL;
  if ( v8 )
  {
    v10 = (unsigned __int8)*(_DWORD *)(a1 + 776);
    do
    {
      if ( v10 )
        v11 = 0;
      else
        v11 = **a2 >> 13;
      v12 = v11;
      v13 = 5LL * v11;
      v14 = LODWORD(v23[v13]);
      if ( (unsigned int)v14 < 4 )
      {
        v22 = *a2;
        LODWORD(v23[v13]) = v14 + 1;
        HIDWORD(v23[v13]) += *v22 & 0x1FFF;
        v23[5 * v12 + 1 + v14] = v22;
      }
      ++a2;
      ++v9;
    }
    while ( v9 < v8 );
  }
  v15 = -1;
  v16 = (_DWORD *)&v23[35] + 1;
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
  v20 = v23[5 * v15];
  if ( v20 > 4 )
    v20 = 4;
  memmove(a4, &v23[5 * v15 + 1], 8LL * v20);
  return v20;
}
