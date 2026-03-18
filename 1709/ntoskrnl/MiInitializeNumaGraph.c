/*
 * XREFs of MiInitializeNumaGraph @ 0x140829DFC
 * Callers:
 *     MiCreatePfnDatabase @ 0x140829C3C (MiCreatePfnDatabase.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     qsort @ 0x14015F450 (qsort.c)
 */

void __fastcall MiInitializeNumaGraph(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int *v2; // rdx
  unsigned int v3; // edi
  unsigned int v4; // r8d
  unsigned int v5; // esi
  unsigned int *v6; // r15
  _QWORD *v7; // r14
  unsigned int i; // edx
  unsigned __int16 v9; // ax
  __int64 v10; // rcx
  size_t v11; // rdx
  unsigned int v12; // r10d
  __int16 *p_Base; // r11
  int v14; // r9d
  __int16 v15; // cx
  __int64 v16; // rdx
  unsigned int v17; // r8d
  _QWORD *v18; // rcx
  unsigned int j; // r9d
  __int64 v20; // rcx
  unsigned int v21; // eax
  int Base; // [rsp+20h] [rbp-428h] BYREF
  _QWORD v23[127]; // [rsp+28h] [rbp-420h] BYREF

  v1 = 0;
  v2 = *(unsigned int **)(*(_QWORD *)(a1 + 240) + 192LL);
  if ( v2 )
  {
    v3 = *v2;
    v4 = (unsigned __int16)KeNumberNodes;
    v5 = *v2;
    if ( *v2 > (unsigned __int16)KeNumberNodes )
      v5 = (unsigned __int16)KeNumberNodes;
    v6 = &v2[v3 + 1];
    if ( v5 > 0x40 )
      v5 = 64;
    if ( v5 )
    {
      v7 = v23;
      do
      {
        for ( i = 0; i < v3; v23[v10] = v9 )
        {
          if ( i >= 0x40 )
            break;
          v9 = *((_WORD *)v6 + v1 * v3 + i);
          if ( !v9 )
            v9 = 1;
          v10 = 2LL * i;
          LODWORD(v23[v10]) = i++;
        }
        if ( i < v4 )
        {
          v18 = &v23[2 * i];
          do
          {
            if ( i >= 0x40 )
              break;
            *v18 = -1LL;
            *((_DWORD *)v18 - 2) = i++;
            v18 += 2;
          }
          while ( i < v4 );
        }
        v11 = (unsigned __int16)KeNumberNodes;
        *v7 = 0LL;
        qsort(&Base, v11, 0x10uLL, MiNodeCostSort);
        v4 = (unsigned __int16)KeNumberNodes;
        v12 = 0;
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
            *((_WORD *)qword_140388508 + v16) = v15;
          }
          while ( v12 < v4 );
        }
        ++v1;
        v7 += 2;
      }
      while ( v1 < v5 );
    }
  }
  v17 = (unsigned __int16)KeNumberNodes;
  while ( v1 < v17 )
  {
    for ( j = v1; j < v17 + v1; *((_WORD *)qword_140388508 + v20) = (v21 % v17) & 0x3F )
    {
      v20 = v1 * (v17 - 1) + j;
      v21 = j++;
    }
    ++v1;
  }
}
