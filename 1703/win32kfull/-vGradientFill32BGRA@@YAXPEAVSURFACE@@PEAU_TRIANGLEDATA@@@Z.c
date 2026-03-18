/*
 * XREFs of ?vGradientFill32BGRA@@YAXPEAVSURFACE@@PEAU_TRIANGLEDATA@@@Z @ 0x1C012D910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vGradientFill32BGRA(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  __int64 v2; // r8
  struct _TRIANGLEDATA *v3; // rbx
  int v4; // edx
  struct SURFACE *v5; // r15
  int *v6; // rsi
  __int64 v7; // rdi
  int v8; // ecx
  __int64 v9; // r14
  int v10; // r11d
  struct _TRIANGLEDATA *v11; // r9
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // rbp
  unsigned __int64 v16; // r8
  _DWORD *v17; // r12
  int v18; // r10d
  unsigned __int64 v19; // r11
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // r9
  int v23; // r11d
  int v24; // r11d
  unsigned __int64 v25; // r9
  int v26; // r11d
  unsigned __int64 v27; // r9
  __int64 v28; // [rsp+0h] [rbp-78h]
  __int64 v29; // [rsp+8h] [rbp-70h]
  char *v30; // [rsp+10h] [rbp-68h]
  __int64 v31; // [rsp+18h] [rbp-60h]
  __int64 v32; // [rsp+20h] [rbp-58h]
  __int64 v35; // [rsp+90h] [rbp+18h]
  __int64 v36; // [rsp+98h] [rbp+20h]

  v2 = *((int *)a1 + 22);
  v3 = a2;
  v4 = *((_DWORD *)a2 + 28);
  v5 = a1;
  v6 = (int *)((char *)v3 + 168);
  v30 = (char *)v3 + 168;
  v7 = *((_QWORD *)a1 + 10) + (int)v2 * v4;
  v8 = *((_DWORD *)v3 + 29);
  v35 = *((_QWORD *)v3 + 2);
  if ( *((_DWORD *)v3 + 3) < v8 )
    v8 = *((_DWORD *)v3 + 3);
  v36 = *((_QWORD *)v3 + 3);
  v28 = *((_QWORD *)v3 + 4);
  v29 = *((_QWORD *)v3 + 5);
  if ( v4 < v8 )
  {
    v32 = v2;
    v9 = (unsigned int)(v8 - v4);
    v31 = v9;
    do
    {
      v10 = *((_DWORD *)v3 + 2);
      v11 = v3;
      v12 = *((_QWORD *)v6 + 1);
      v13 = *((_QWORD *)v6 + 2);
      if ( *v6 > *(_DWORD *)v3 )
        v11 = (struct _TRIANGLEDATA *)v6;
      v14 = *((_QWORD *)v6 + 3);
      if ( v6[1] < v10 )
        v10 = v6[1];
      v15 = *(int *)v11;
      v16 = *((_QWORD *)v6 + 4);
      if ( (int)v15 < v10 && *((_QWORD *)v5 + 9) <= (unsigned __int64)(v7 + v15) )
      {
        v17 = (_DWORD *)(v7 + 4 * v15);
        v18 = *(_DWORD *)v3 - *v6;
        v19 = v7 + 4LL * v10;
        if ( v18 > 0 )
        {
          v12 += v35 * v18;
          v13 += v36 * v18;
          v14 += v28 * v18;
          v16 += v29 * v18;
        }
        v20 = 0LL;
        v21 = (v19 - (unsigned __int64)v17 + 3) >> 2;
        if ( (unsigned __int64)v17 > v19 )
          v21 = 0LL;
        if ( v21 )
        {
          do
          {
            v22 = v12;
            v12 += v35;
            v23 = HIBYTE(v16) << 8;
            v16 += v29;
            ++v20;
            v24 = HIBYTE(v22) | v23;
            v25 = HIBYTE(v13);
            v13 += v36;
            v26 = v25 | (v24 << 8);
            v27 = HIBYTE(v14);
            v14 += v28;
            *v17++ = v27 | (v26 << 8);
          }
          while ( v20 < v21 );
          v3 = a2;
          v6 = (int *)v30;
          v9 = v31;
          v5 = a1;
        }
      }
      v7 += v32;
      v6 += 10;
      --v9;
      v30 = (char *)v6;
      v31 = v9;
    }
    while ( v9 );
  }
}
