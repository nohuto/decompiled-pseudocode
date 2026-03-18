/*
 * XREFs of MiInitializeNumaGraph @ 0x1407FFE68
 * Callers:
 *     MiCreatePfnDatabase @ 0x1407FFCB0 (MiCreatePfnDatabase.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     qsort @ 0x14016AA40 (qsort.c)
 */

void __fastcall MiInitializeNumaGraph(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int *v2; // rdx
  unsigned __int16 v3; // r10
  unsigned int v4; // esi
  unsigned int v5; // r8d
  unsigned int v6; // ebp
  unsigned int *v7; // r15
  _QWORD *v8; // r14
  unsigned int i; // edx
  unsigned __int16 v10; // ax
  __int64 v11; // rcx
  unsigned int v12; // r11d
  __int16 *p_Base; // rdi
  int v14; // r9d
  __int16 v15; // cx
  __int64 v16; // rdx
  unsigned int j; // r9d
  __int64 v18; // rcx
  unsigned int v19; // eax
  _QWORD *v20; // rcx
  int Base; // [rsp+20h] [rbp-428h] BYREF
  _QWORD v22[127]; // [rsp+28h] [rbp-420h] BYREF

  v1 = 0;
  v2 = *(unsigned int **)(*(_QWORD *)(a1 + 240) + 192LL);
  if ( v2 )
  {
    v3 = KeNumberNodes;
    v4 = *v2;
    v5 = (unsigned __int16)KeNumberNodes;
    v6 = *v2;
    if ( *v2 > (unsigned __int16)KeNumberNodes )
      v6 = (unsigned __int16)KeNumberNodes;
    v7 = &v2[v4 + 1];
    if ( v6 > 0x40 )
      v6 = 64;
    if ( v6 )
    {
      v8 = v22;
      do
      {
        for ( i = 0; i < v4; v22[v11] = v10 )
        {
          if ( i >= 0x40 )
            break;
          v10 = *((_WORD *)v7 + v1 * v4 + i);
          if ( !v10 )
            v10 = 1;
          v11 = 2LL * i;
          LODWORD(v22[v11]) = i++;
        }
        if ( i < v5 )
        {
          v20 = &v22[2 * i];
          do
          {
            if ( i >= 0x40 )
              break;
            *v20 = -1LL;
            *((_DWORD *)v20 - 2) = i++;
            v20 += 2;
          }
          while ( i < v5 );
        }
        *v8 = 0LL;
        qsort(&Base, v3, 0x10uLL, (int (__cdecl *)(const void *, const void *))MiNodeCostSort);
        v3 = KeNumberNodes;
        v12 = 0;
        v5 = (unsigned __int16)KeNumberNodes;
        if ( KeNumberNodes )
        {
          p_Base = (__int16 *)&Base;
          v14 = v1 * (unsigned __int16)KeNumberNodes;
          do
          {
            v15 = *p_Base;
            v16 = v14 + v12;
            p_Base += 8;
            ++v12;
            *((_WORD *)qword_14036C1C0 + v16) = v15;
          }
          while ( v12 < v5 );
        }
        ++v1;
        v8 += 2;
      }
      while ( v1 < v6 );
    }
  }
  else
  {
    v3 = KeNumberNodes;
  }
  while ( v1 < v3 )
  {
    for ( j = v1; j < v3 + v1; *((_WORD *)qword_14036C1C0 + v18) = (v19 % v3) & 0x3F )
    {
      v18 = v1 * (v3 - 1) + j;
      v19 = j++;
    }
    ++v1;
  }
}
