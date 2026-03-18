/*
 * XREFs of BuildTileAAInfo @ 0x1C0242D40
 * Callers:
 *     <none>
 * Callees:
 *     _ALIGN_MEM @ 0x1C0074F9C (_ALIGN_MEM.c)
 */

_DWORD *BuildTileAAInfo(__int64 a1, __int64 a2, int *a3, int *a4, int a5, int a6, int a7, int *a8, int *a9, ...)
{
  int v9; // r15d
  int v10; // edi
  int v11; // r14d
  int v12; // ebp
  int v13; // esi
  int v14; // r12d
  int v15; // ebx
  int v16; // r13d
  _DWORD *v17; // rax
  _DWORD *v18; // rdx
  int v19; // r8d
  int v20; // eax
  int v22; // r14d
  int v25; // [rsp+90h] [rbp+28h]
  __int64 v26; // [rsp+B8h] [rbp+50h] BYREF
  va_list va; // [rsp+B8h] [rbp+50h]
  va_list va1; // [rsp+C0h] [rbp+58h] BYREF

  va_start(va1, a9);
  va_start(va, a9);
  v26 = va_arg(va1, _QWORD);
  v9 = *a4;
  v10 = *a3;
  v11 = 0;
  v12 = a6;
  if ( *a3 < 0 )
    v10 = 0;
  v13 = v10;
  if ( v9 > a5 )
    v9 = a5;
  v14 = a7 - a6;
  if ( v9 - v10 <= 0 )
    return 0LL;
  if ( v14 <= 0 )
    return 0LL;
  v15 = -1;
  v16 = *a8;
  v25 = *a9;
  if ( *a8 >= *a9 || (int)ALIGN_MEM((int *)va, v26) < 0 || (unsigned int)v26 >= 0xFFFFFF10 )
    return 0LL;
  v17 = EngAllocMem(1u, (int)v26 + 240, 0x33355448u);
  v18 = v17;
  if ( v17 )
  {
    v19 = 0;
    *((_QWORD *)v17 + 4) = v17 + 60;
    v20 = a7 - a6;
    do
    {
      --v20;
      if ( v13 < v10 || v13 >= v9 || v12 < v16 || v12 >= v25 )
      {
        if ( v15 != -1 )
          goto LABEL_26;
      }
      else
      {
        if ( v15 == -1 )
        {
          v15 = v13;
          v19 = v12;
        }
        v11 = v12;
      }
      if ( ++v13 >= v9 )
        v13 = v10;
      ++v12;
    }
    while ( v20 );
    if ( v15 == -1 )
    {
      EngFreeMem(v18);
      return 0LL;
    }
LABEL_26:
    v18[6] = v15 - v10;
    *a3 = v10;
    v18[30] = v10;
    *a4 = v9 - 1;
    *a8 = v19;
    *a9 = v11;
    v22 = v11 - v19;
    *v18 = v9 - v10;
    v18[31] = v9 - v10;
    v18[29] = v14;
    v18[1] = v22 + 1;
    v18[5] = v22 + 1;
    v18[4] = v22 + 1;
    v18[28] = v9 - v10;
  }
  return v18;
}
