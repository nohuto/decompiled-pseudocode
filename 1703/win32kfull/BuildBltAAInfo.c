/*
 * XREFs of BuildBltAAInfo @ 0x1C00E6640
 * Callers:
 *     <none>
 * Callees:
 *     _ALIGN_MEM @ 0x1C00367DC (_ALIGN_MEM.c)
 */

_DWORD *BuildBltAAInfo(__int64 a1, __int64 a2, int *a3, int *a4, int a5, int a6, int a7, int *a8, int *a9, ...)
{
  int v9; // eax
  int v10; // edi
  int v11; // ebp
  int v12; // esi
  int v13; // r12d
  int v14; // r15d
  int v15; // r13d
  int v16; // r14d
  int v17; // ecx
  int v18; // ebx
  _DWORD *v19; // rax
  _DWORD *v20; // rdx
  int v21; // eax
  int v22; // ebp
  int v23; // eax
  int v25; // [rsp+20h] [rbp-48h]
  int v26; // [rsp+24h] [rbp-44h]
  int v29; // [rsp+98h] [rbp+30h]
  int v30; // [rsp+A0h] [rbp+38h]
  __int64 v31; // [rsp+B8h] [rbp+50h] BYREF
  va_list va; // [rsp+B8h] [rbp+50h]
  va_list va1; // [rsp+C0h] [rbp+58h] BYREF

  va_start(va1, a9);
  va_start(va, a9);
  v31 = va_arg(va1, _QWORD);
  v9 = *a4;
  v10 = *a3;
  v11 = 0;
  v12 = a6;
  v13 = *a4 - *a3;
  v14 = a7 - a6;
  v15 = 0;
  v16 = 0;
  if ( a7 - a6 > 0 )
  {
    v17 = *a3;
    if ( v10 < 0 )
      v17 = 0;
    v29 = v17;
    if ( v9 > a5 )
      v9 = a5;
    v18 = -1;
    v30 = v9;
    v25 = *a8;
    v26 = *a9;
    if ( *a8 < *a9 && v13 == v14 && (int)ALIGN_MEM((int *)va, v31) >= 0 && (unsigned int)v31 < 0xFFFFFF10 )
    {
      v19 = EngAllocMem(1u, (int)v31 + 240, 0x33355448u);
      v20 = v19;
      if ( !v19 )
        return v20;
      *((_QWORD *)v19 + 4) = v19 + 60;
      v21 = v14;
      do
      {
        --v21;
        if ( v12 < v25 || v12 >= v26 || v10 < v29 || v10 >= v30 )
        {
          if ( v18 != -1 )
            goto LABEL_21;
        }
        else
        {
          if ( v18 == -1 )
          {
            v18 = v10;
            v15 = v12;
          }
          v11 = v10;
          v16 = v12;
        }
        ++v12;
        ++v10;
      }
      while ( v21 );
      if ( v18 != -1 )
      {
LABEL_21:
        *a3 = v18;
        v20[30] = v18;
        *a4 = v11;
        v22 = v11 - v18;
        *a8 = v15;
        *a9 = v16;
        *v20 = v22 + 1;
        v20[31] = v22 + 1;
        v20[28] = v13;
        v20[29] = v14;
        v23 = v16 - v15 + 1;
        v20[1] = v23;
        v20[5] = v23;
        v20[4] = v23;
        return v20;
      }
      EngFreeMem(v20);
    }
  }
  return 0LL;
}
