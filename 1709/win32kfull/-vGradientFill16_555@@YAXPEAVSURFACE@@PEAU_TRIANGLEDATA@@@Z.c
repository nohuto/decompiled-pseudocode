/*
 * XREFs of ?vGradientFill16_555@@YAXPEAVSURFACE@@PEAU_TRIANGLEDATA@@@Z @ 0x1C02AA490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vGradientFill16_555(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  int v2; // r8d
  char *v3; // rsi
  __int64 v4; // r9
  struct _TRIANGLEDATA *v5; // r11
  struct SURFACE *v6; // r15
  __int64 v7; // rbx
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // eax
  __int64 v12; // r12
  int v13; // ebp
  int v14; // r10d
  int v15; // edi
  int v16; // r9d
  int v17; // r14d
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  _WORD *v21; // r13
  int v22; // r9d
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // rdi
  int v25; // r14d
  unsigned __int64 v26; // rbp
  __int64 v27; // r8
  int v28; // r10d
  unsigned __int64 v29; // r8
  __int16 v30; // r9
  unsigned __int64 v31; // r8
  __int16 v32; // r9
  unsigned __int64 v33; // r8
  __int64 v34; // [rsp+0h] [rbp-98h]
  __int64 v35; // [rsp+8h] [rbp-90h]
  __int64 v36; // [rsp+10h] [rbp-88h]
  __int64 v37; // [rsp+18h] [rbp-80h]
  char *v38; // [rsp+20h] [rbp-78h]
  __int64 v39; // [rsp+28h] [rbp-70h]
  __int64 v40; // [rsp+38h] [rbp-60h]
  __int64 v41; // [rsp+40h] [rbp-58h]
  int v44; // [rsp+B0h] [rbp+18h]
  int v45; // [rsp+B8h] [rbp+20h]

  v2 = *((_DWORD *)a2 + 28);
  v3 = (char *)a2 + 168;
  v4 = *((int *)a1 + 22);
  v5 = a2;
  v38 = (char *)a2 + 168;
  v6 = a1;
  v7 = *((_QWORD *)a1 + 10) + (int)v4 * v2;
  v8 = *((_DWORD *)a2 + 32);
  v34 = *((_QWORD *)a2 + 2);
  v35 = *((_QWORD *)a2 + 3);
  v36 = *((_QWORD *)a2 + 4);
  v9 = *((_DWORD *)a2 + 3);
  v10 = *((_DWORD *)a2 + 29);
  v37 = v7;
  if ( v9 < v10 )
    v10 = v9;
  v45 = v8;
  v11 = *((_DWORD *)v5 + 33);
  if ( v2 < v10 )
  {
    v41 = v4;
    v12 = (unsigned int)(v10 - v2);
    v13 = v11 + v2;
    v39 = v12;
    v44 = v11 + v2;
    do
    {
      v14 = *((_DWORD *)v5 + 2);
      v15 = *(_DWORD *)v3;
      v16 = *(_DWORD *)v5;
      v17 = *(_DWORD *)v5;
      v18 = *((_QWORD *)v3 + 3);
      v19 = *((_QWORD *)v3 + 2);
      v40 = 0x1C0000000LL + 16LL * (v13 & 3) + 3302192;
      v20 = *((_QWORD *)v3 + 1);
      if ( *((_DWORD *)v3 + 1) < v14 )
        v14 = *((_DWORD *)v3 + 1);
      if ( v15 > v16 )
        v17 = *(_DWORD *)v3;
      if ( *((_QWORD *)v6 + 9) <= (unsigned __int64)(v7 + v17) && v17 < v14 )
      {
        v21 = (_WORD *)(v7 + 2LL * v17);
        v22 = v16 - v15;
        v23 = v7 + 2LL * v14;
        if ( v22 > 0 )
        {
          v20 += v34 * v22;
          v19 += v35 * v22;
          v18 += v36 * v22;
        }
        v24 = (v23 - (unsigned __int64)v21 + 1) >> 1;
        if ( (unsigned __int64)v21 > v23 )
          v24 = 0LL;
        if ( v24 )
        {
          v25 = v45 + v17;
          v26 = 0LL;
          do
          {
            ++v26;
            v27 = v25++ & 3;
            v28 = *(_DWORD *)(v40 + 4 * v27);
            v29 = HIDWORD(v20);
            v20 += v34;
            v30 = Saturation16_5[(unsigned __int64)(v28 + ((unsigned int)v29 >> 11)) >> 16];
            v31 = HIDWORD(v19);
            v19 += v35;
            v32 = Saturation16_5[(unsigned __int64)(v28 + ((unsigned int)v31 >> 11)) >> 16] | (unsigned __int16)(32 * v30);
            v33 = HIDWORD(v18);
            v18 += v36;
            *v21++ = Saturation16_5[(unsigned __int64)(v28 + ((unsigned int)v33 >> 11)) >> 16] | (unsigned __int16)(32 * v32);
          }
          while ( v26 < v24 );
          v5 = a2;
          v7 = v37;
          v3 = v38;
          v13 = v44;
          v6 = a1;
          v12 = v39;
        }
      }
      v7 += v41;
      v3 += 40;
      v37 = v7;
      ++v13;
      v38 = v3;
      --v12;
      v44 = v13;
      v39 = v12;
    }
    while ( v12 );
  }
}
