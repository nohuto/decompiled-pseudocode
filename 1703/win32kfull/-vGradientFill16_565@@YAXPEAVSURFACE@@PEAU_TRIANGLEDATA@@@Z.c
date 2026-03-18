/*
 * XREFs of ?vGradientFill16_565@@YAXPEAVSURFACE@@PEAU_TRIANGLEDATA@@@Z @ 0x1C02AE120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vGradientFill16_565(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  int v2; // r8d
  char *v3; // rsi
  __int64 v4; // r9
  struct _TRIANGLEDATA *v5; // r11
  struct SURFACE *v6; // r14
  __int64 v7; // rbx
  int v8; // ecx
  __int64 v9; // rax
  int v10; // edx
  int v11; // eax
  __int64 v12; // r12
  int v13; // ebp
  int v14; // r10d
  int v15; // edi
  int v16; // r9d
  struct _TRIANGLEDATA *v17; // r8
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // r15
  _WORD *v22; // r13
  int v23; // r9d
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // rdi
  int v26; // r15d
  unsigned __int64 v27; // rbp
  __int64 v28; // r8
  int v29; // r10d
  unsigned __int64 v30; // r8
  __int16 v31; // r9
  unsigned __int64 v32; // r8
  __int16 v33; // r9
  unsigned __int64 v34; // r8
  __int64 v35; // [rsp+0h] [rbp-98h]
  __int64 v36; // [rsp+8h] [rbp-90h]
  __int64 v37; // [rsp+10h] [rbp-88h]
  __int64 v38; // [rsp+18h] [rbp-80h]
  char *v39; // [rsp+20h] [rbp-78h]
  __int64 v40; // [rsp+28h] [rbp-70h]
  __int64 v41; // [rsp+38h] [rbp-60h]
  __int64 v42; // [rsp+40h] [rbp-58h]
  int v45; // [rsp+B0h] [rbp+18h]
  int v46; // [rsp+B8h] [rbp+20h]

  v2 = *((_DWORD *)a2 + 28);
  v3 = (char *)a2 + 168;
  v4 = *((int *)a1 + 22);
  v5 = a2;
  v39 = (char *)a2 + 168;
  v6 = a1;
  v7 = *((_QWORD *)a1 + 10) + (int)v4 * v2;
  v8 = *((_DWORD *)a2 + 32);
  v35 = *((_QWORD *)a2 + 2);
  v36 = *((_QWORD *)a2 + 3);
  v9 = *((_QWORD *)a2 + 4);
  v10 = *((_DWORD *)a2 + 29);
  v37 = v9;
  if ( *((_DWORD *)v5 + 3) < v10 )
    v10 = *((_DWORD *)v5 + 3);
  v11 = *((_DWORD *)v5 + 33);
  v38 = v7;
  v46 = v8;
  if ( v2 < v10 )
  {
    v42 = v4;
    v12 = (unsigned int)(v10 - v2);
    v13 = v11 + v2;
    v40 = v12;
    v45 = v11 + v2;
    do
    {
      v14 = *((_DWORD *)v5 + 2);
      v15 = *(_DWORD *)v3;
      v16 = *(_DWORD *)v5;
      v17 = v5;
      v18 = *((_QWORD *)v3 + 3);
      v19 = *((_QWORD *)v3 + 2);
      v41 = 0x1C0000000LL + 16LL * (v13 & 3) + 3318832;
      if ( *((_DWORD *)v3 + 1) < v14 )
        v14 = *((_DWORD *)v3 + 1);
      v20 = *((_QWORD *)v3 + 1);
      if ( v15 > v16 )
        v17 = (struct _TRIANGLEDATA *)v3;
      v21 = *(int *)v17;
      if ( *((_QWORD *)v6 + 9) <= (unsigned __int64)(v7 + v21) && (int)v21 < v14 )
      {
        v22 = (_WORD *)(v7 + 2 * v21);
        v23 = v16 - v15;
        v24 = v7 + 2LL * v14;
        if ( v23 > 0 )
        {
          v20 += v35 * v23;
          v19 += v36 * v23;
          v18 += v37 * v23;
        }
        v25 = (v24 - (unsigned __int64)v22 + 1) >> 1;
        if ( (unsigned __int64)v22 > v24 )
          v25 = 0LL;
        if ( v25 )
        {
          v26 = v46 + v21;
          v27 = 0LL;
          do
          {
            ++v27;
            v28 = v26++ & 3;
            v29 = *(_DWORD *)(v41 + 4 * v28);
            v30 = HIDWORD(v20);
            v20 += v35;
            v31 = Saturation16_5[(unsigned __int64)(v29 + ((unsigned int)v30 >> 11)) >> 16];
            v32 = HIDWORD(v19);
            v19 += v36;
            v33 = Saturation16_6[(unsigned __int64)(v29 + ((unsigned int)v32 >> 10)) >> 16] | (unsigned __int16)(v31 << 6);
            v34 = HIDWORD(v18);
            v18 += v37;
            *v22++ = Saturation16_5[(unsigned __int64)(v29 + ((unsigned int)v34 >> 11)) >> 16] | (unsigned __int16)(32 * v33);
          }
          while ( v27 < v25 );
          v5 = a2;
          v7 = v38;
          v3 = v39;
          v13 = v45;
          v6 = a1;
          v12 = v40;
        }
      }
      v7 += v42;
      v3 += 40;
      v38 = v7;
      ++v13;
      v39 = v3;
      --v12;
      v45 = v13;
      v40 = v12;
    }
    while ( v12 );
  }
}
