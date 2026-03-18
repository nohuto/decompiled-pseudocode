/*
 * XREFs of ?vFillGRectDIB32BGRA@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C00AC0D0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

void __fastcall vFillGRectDIB32BGRA(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  int v2; // ebp
  __int64 v3; // rsi
  int v5; // r15d
  __int64 v6; // rax
  __int64 v7; // r11
  __int64 v8; // r14
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r10
  __int64 v14; // r13
  __int64 v15; // r11
  void *v16; // r12
  unsigned int v17; // ebp
  unsigned __int64 v18; // r14
  __int64 v19; // r12
  int v20; // ecx
  int *v21; // r14
  unsigned __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdi
  unsigned __int64 v25; // r8
  __int64 v26; // r13
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // r11
  __int64 v30; // r15
  unsigned __int64 v31; // rax
  int v32; // r10d
  unsigned __int64 v33; // rax
  int v34; // r9d
  char *v35; // rdi
  char *i; // rsi
  __int64 v37; // [rsp+20h] [rbp-68h]
  unsigned __int64 v38; // [rsp+30h] [rbp-58h]
  __int64 v39; // [rsp+90h] [rbp+8h]
  int v40; // [rsp+98h] [rbp+10h]
  __int64 v41; // [rsp+98h] [rbp+10h]
  __int64 v42; // [rsp+A0h] [rbp+18h]
  __int64 v43; // [rsp+A0h] [rbp+18h]
  __int64 v44; // [rsp+A8h] [rbp+20h]

  v2 = *((_DWORD *)a1 + 22);
  v3 = 0LL;
  v5 = *((_DWORD *)a2 + 11);
  v40 = v5;
  if ( *((_DWORD *)a2 + 38) )
  {
    v6 = *((int *)a2 + 45);
    v7 = *((_QWORD *)a2 + 11);
    v8 = *((_QWORD *)a2 + 12);
    v9 = *((_QWORD *)a2 + 13);
    v10 = *((_QWORD *)a2 + 6);
    v11 = *((_QWORD *)a2 + 7);
    v12 = *((_QWORD *)a2 + 8);
    v13 = *((_QWORD *)a2 + 9);
    v14 = *((_QWORD *)a2 + 10);
    v39 = *((_QWORD *)a2 + 11);
    v41 = v8;
    v42 = v9;
    if ( (int)v6 > 0 )
    {
      v10 += v14 * v6;
      v11 += v7 * v6;
      v12 += v8 * v6;
      v13 += v9 * v6;
    }
    v15 = *((_QWORD *)a1 + 10) + 4 * *((_DWORD *)a2 + 8) + (__int64)(v2 * *((_DWORD *)a2 + 9));
    if ( v5 )
    {
      v44 = *((int *)a1 + 22);
      while ( 1 )
      {
        --v5;
        v16 = (void *)v15;
        v17 = BYTE6(v12) | ((BYTE6(v11) | ((BYTE6(v10) | (BYTE6(v13) << 8)) << 8)) << 8);
        v18 = (unsigned __int64)(4 * *((_DWORD *)a2 + 10)) >> 2;
        if ( v18 )
        {
          if ( (v15 & 4) == 0 )
            goto LABEL_8;
          *(_DWORD *)v15 = v17;
          if ( --v18 )
            break;
        }
LABEL_10:
        v11 += v39;
        v10 += v14;
        v12 += v41;
        v13 += v42;
        v15 += v44;
        if ( !v5 )
          return;
      }
      v16 = (void *)(v15 + 4);
LABEL_8:
      memset64(v16, v17 | ((unsigned __int64)v17 << 32), v18 >> 1);
      if ( (v18 & 1) != 0 )
        *((_DWORD *)v16 + v18 - 1) = v17;
      goto LABEL_10;
    }
  }
  else
  {
    v19 = *((_QWORD *)a1 + 10) + v2 * *((_DWORD *)a2 + 9);
    v20 = *((_DWORD *)a2 + 10);
    if ( (unsigned int)(v20 - 1) <= 0x9C3FFF )
    {
      v38 = AllocFreeTmpBuffer((unsigned int)(4 * v20));
      v21 = (int *)v38;
      if ( v38 )
      {
        v22 = *((_QWORD *)a2 + 6);
        v23 = *((_QWORD *)a2 + 7);
        v24 = *((_QWORD *)a2 + 8);
        v25 = *((_QWORD *)a2 + 9);
        v26 = *((_QWORD *)a2 + 14);
        v43 = *((_QWORD *)a2 + 17);
        v27 = *((int *)a2 + 44);
        if ( (int)v27 > 0 )
        {
          v22 += v26 * v27;
          v23 += *((_QWORD *)a2 + 15) * v27;
          v24 += *((_QWORD *)a2 + 16) * v27;
          v25 += v43 * v27;
        }
        v28 = *((int *)a2 + 10);
        v29 = (unsigned __int64)(4 * v28 + 3) >> 2;
        if ( v38 > v38 + 4 * v28 )
          v29 = 0LL;
        if ( v29 )
        {
          v37 = *((_QWORD *)a2 + 16);
          v30 = *((_QWORD *)a2 + 15);
          do
          {
            ++v3;
            v31 = HIWORD(v25);
            v25 += v43;
            v32 = (unsigned __int8)v31;
            v33 = HIWORD(v22);
            v22 += v26;
            BYTE6(v33) = BYTE6(v23);
            v23 += v30;
            v34 = BYTE6(v33);
            BYTE6(v33) = BYTE6(v24);
            v24 += v37;
            *v21++ = BYTE6(v33) | ((v34 | (((unsigned __int8)v33 | (v32 << 8)) << 8)) << 8);
          }
          while ( v3 != v29 );
          v21 = (int *)v38;
          v5 = v40;
        }
        v35 = (char *)(v19 + 4LL * *((int *)a2 + 8));
        for ( i = &v35[v2 * v5]; v35 != i; v35 += v2 )
          memmove(v35, v21, 4 * *((_DWORD *)a2 + 10));
        FreeTmpBuffer(v21);
      }
    }
  }
}
