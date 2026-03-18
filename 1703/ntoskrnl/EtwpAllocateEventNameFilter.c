/*
 * XREFs of EtwpAllocateEventNameFilter @ 0x1405C1A20
 * Callers:
 *     EtwpAllocateFilter @ 0x1405C19A4 (EtwpAllocateFilter.c)
 * Callees:
 *     strnlen @ 0x14016B760 (strnlen.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     EtwpFreeEventNameFilter @ 0x140712F20 (EtwpFreeEventNameFilter.c)
 */

__int64 __fastcall EtwpAllocateEventNameFilter(_DWORD *a1, _QWORD *a2)
{
  unsigned int v2; // ebp
  unsigned int v3; // ebx
  __int64 v4; // rdi
  unsigned int v5; // r15d
  __int64 v6; // rbp
  __int64 v7; // r12
  char *PoolWithTag; // rsi
  char *v9; // r14
  char v10; // al
  __int64 v11; // rax
  char *v12; // r12
  unsigned int v13; // r14d
  unsigned int v14; // eax
  const char *v15; // r12
  unsigned int v16; // eax
  unsigned int v17; // r11d
  __int64 v18; // r9
  unsigned __int8 *v19; // rdi
  __int64 v20; // r8
  unsigned __int64 v21; // r10
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // r9d
  int v25; // r9d
  int v26; // r9d
  int v27; // r9d
  int v28; // r9d
  int v29; // r9d
  _QWORD *v30; // r9
  unsigned int v31; // edi
  __int64 v32; // rcx
  __int64 v33; // rdx
  unsigned int v35; // [rsp+70h] [rbp+8h]
  _QWORD *v37; // [rsp+80h] [rbp+18h]
  __int64 v38; // [rsp+80h] [rbp+18h]
  char *v39; // [rsp+88h] [rbp+20h]

  v2 = a1[2];
  v3 = 0;
  if ( v2 < 0x18 )
    return 3221225485LL;
  v4 = *(_QWORD *)a1;
  v5 = *(unsigned __int16 *)(*(_QWORD *)a1 + 18LL);
  if ( !*(_WORD *)(*(_QWORD *)a1 + 18LL) )
    return 3221225485LL;
  v6 = v2 - 20;
  if ( (unsigned int)v6 < 2 * v5 )
    return 3221225485LL;
  v7 = 24 * v5;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v7 + v6 + 40, 0x46777445u);
  if ( PoolWithTag )
  {
    v9 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x100uLL, 0x46777445u);
    if ( v9 )
    {
      *PoolWithTag = *(_BYTE *)(v4 + 17);
      v10 = *(_BYTE *)(v4 + 16);
      if ( !v10 )
        v10 = -1;
      PoolWithTag[1] = v10;
      v11 = *(_QWORD *)v4;
      if ( !*(_QWORD *)v4 )
        v11 = -1LL;
      *((_QWORD *)PoolWithTag + 1) = v11;
      *((_QWORD *)PoolWithTag + 2) = *(_QWORD *)(v4 + 8);
      v12 = &PoolWithTag[v7 + 40];
      v37 = PoolWithTag + 40;
      v39 = v12;
      memmove(v12, (const void *)(v4 + 20), (unsigned int)v6);
      *((_DWORD *)PoolWithTag + 6) = 0;
      *((_QWORD *)PoolWithTag + 4) = v9;
      *((_DWORD *)PoolWithTag + 7) = 1024;
      if ( (v9 + 256 >= v9 ? 0x20 : 0) != 0 )
        memset64(v9, (unsigned __int64)(PoolWithTag + 24) | 1, v9 + 256 >= v9 ? 0x20 : 0);
      v35 = 0;
      v13 = 0;
      if ( v5 )
      {
        v14 = v6 - 1;
        while ( 1 )
        {
          if ( v13 >= v14 )
            goto LABEL_45;
          v15 = &v12[v13];
          v16 = v15 ? strnlen(v15, (unsigned int)v6 - v13) : 0;
          v17 = v16 + 1;
          if ( v16 + 1 > (unsigned int)v6 - v13 || v16 == -1 )
            goto LABEL_45;
          v18 = v16;
          v19 = (unsigned __int8 *)v15;
          v20 = 314159LL;
          if ( v16 >= 8uLL )
          {
            v21 = (unsigned __int64)v16 >> 3;
            v18 = v16 - 8 * v21;
            do
            {
              v22 = v19[6]
                  + 37
                  * (v19[5] + 37 * (v19[4] + 37 * (v19[3] + 37 * (v19[2] + 37 * (v19[1] + 37 * (*v19 + 37 * v20))))));
              v23 = v19[7];
              v19 += 8;
              v20 = v23 + 37 * v22;
              --v21;
            }
            while ( v21 );
          }
          if ( (unsigned __int64)(v18 - 1) <= 6 )
          {
            v24 = v18 - 1;
            if ( !v24 )
              goto LABEL_36;
            v25 = v24 - 1;
            if ( !v25 )
              goto LABEL_35;
            v26 = v25 - 1;
            if ( !v26 )
              goto LABEL_34;
            v27 = v26 - 1;
            if ( !v27 )
              goto LABEL_33;
            v28 = v27 - 1;
            if ( !v28 )
              goto LABEL_32;
            v29 = v28 - 1;
            if ( !v29 )
              goto LABEL_31;
            if ( v29 == 1 )
              break;
          }
LABEL_37:
          v30 = v37;
          v13 += v17;
          v37[2] = v15;
          v12 = v39;
          v37[1] = v20;
          v31 = *((_DWORD *)PoolWithTag + 7);
          v38 = v20 & (-1LL << (v31 & 0x1F));
          v32 = *((_QWORD *)PoolWithTag + 4);
          v33 = (37
               * (BYTE6(v38)
                + 37
                * (BYTE5(v38)
                 + 37
                 * (BYTE4(v38)
                  + 37
                  * ((((unsigned int)v20 & (-1 << (v31 & 0x1F))) >> 24)
                   + 37 * (BYTE2(v38) + 37 * (BYTE1(v38) + 37 * ((unsigned __int8)v38 + 11623883)))))))
               + HIBYTE(v38)) & ((v31 >> 5) - 1);
          *v30 = *(_QWORD *)(v32 + 8 * v33);
          v14 = v6 - 1;
          *(_QWORD *)(v32 + 8 * v33) = v30;
          ++*((_DWORD *)PoolWithTag + 6);
          ++v35;
          v37 = v30 + 3;
          if ( v35 >= v5 )
            goto LABEL_38;
        }
        v20 = *v19++ + 37 * v20;
LABEL_31:
        v20 = *v19++ + 37 * v20;
LABEL_32:
        v20 = *v19++ + 37 * v20;
LABEL_33:
        v20 = *v19++ + 37 * v20;
LABEL_34:
        v20 = *v19++ + 37 * v20;
LABEL_35:
        v20 = *v19++ + 37 * v20;
LABEL_36:
        v20 = *v19 + 37 * v20;
        goto LABEL_37;
      }
LABEL_38:
      if ( v13 == (_DWORD)v6 )
      {
        *a2 = PoolWithTag;
        return v3;
      }
LABEL_45:
      v3 = -1073741811;
    }
    else
    {
      v3 = -1073741801;
    }
    EtwpFreeEventNameFilter(PoolWithTag);
    return v3;
  }
  return 3221225495LL;
}
