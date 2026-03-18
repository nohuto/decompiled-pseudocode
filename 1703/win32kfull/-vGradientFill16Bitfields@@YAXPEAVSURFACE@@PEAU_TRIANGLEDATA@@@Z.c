/*
 * XREFs of ?vGradientFill16Bitfields@@YAXPEAVSURFACE@@PEAU_TRIANGLEDATA@@@Z @ 0x1C02ADBD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vGradientFill16Bitfields(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  __int64 v2; // r8
  struct _TRIANGLEDATA *v3; // r14
  int v4; // edx
  struct SURFACE *v5; // r9
  int *v6; // r12
  __int64 v7; // r15
  int v8; // ecx
  int v9; // eax
  __int64 v10; // r10
  int v11; // r13d
  int v12; // edx
  int v13; // ebp
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rsi
  int v17; // ecx
  struct _TRIANGLEDATA *v18; // rax
  __int64 v19; // r8
  unsigned __int64 v20; // r11
  int v21; // ecx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rbp
  _WORD *v24; // r14
  char v25; // al
  int v26; // ecx
  __int16 v27; // ax
  __int64 v28; // [rsp+20h] [rbp-A8h]
  __int64 v29; // [rsp+28h] [rbp-A0h]
  __int64 v30; // [rsp+30h] [rbp-98h]
  int v31; // [rsp+38h] [rbp-90h]
  unsigned __int64 v32; // [rsp+40h] [rbp-88h]
  __int64 v33; // [rsp+48h] [rbp-80h]
  char *v34; // [rsp+50h] [rbp-78h]
  __int64 v35; // [rsp+58h] [rbp-70h]
  __int64 v36; // [rsp+70h] [rbp-58h]
  __int64 v37; // [rsp+78h] [rbp-50h]
  int v40; // [rsp+E0h] [rbp+18h]
  int v41; // [rsp+E8h] [rbp+20h]

  v2 = *((int *)a1 + 22);
  v3 = a2;
  v4 = *((_DWORD *)a2 + 28);
  v5 = a1;
  v6 = (int *)((char *)v3 + 168);
  v34 = (char *)v3 + 168;
  v41 = *((_DWORD *)v3 + 32);
  v7 = *((_QWORD *)a1 + 10) + (int)v2 * v4;
  v8 = *((_DWORD *)v3 + 29);
  v36 = *((_QWORD *)v3 + 20);
  if ( *((_DWORD *)v3 + 3) < v8 )
    v8 = *((_DWORD *)v3 + 3);
  v28 = *((_QWORD *)v3 + 2);
  v29 = *((_QWORD *)v3 + 3);
  v30 = *((_QWORD *)v3 + 4);
  v9 = *((_DWORD *)v3 + 33);
  v33 = v7;
  if ( v4 < v8 )
  {
    v37 = v2;
    v10 = (unsigned int)(v8 - v4);
    v11 = v9 + v4;
    v35 = v10;
    v40 = v9 + v4;
    do
    {
      v12 = *((_DWORD *)v3 + 2);
      v13 = *v6;
      v14 = *((_QWORD *)v6 + 1);
      v15 = *((_QWORD *)v6 + 2);
      v16 = *((_QWORD *)v6 + 3);
      v17 = *(_DWORD *)v3;
      v18 = v3;
      if ( v6[1] < v12 )
        v12 = v6[1];
      if ( v13 > v17 )
        v18 = (struct _TRIANGLEDATA *)v6;
      v19 = *(int *)v18;
      if ( *((_QWORD *)v5 + 9) <= (unsigned __int64)(v19 + v7) && (int)v19 < v12 )
      {
        v20 = v7 + 2 * v19;
        v21 = v17 - v13;
        v22 = v7 + 2LL * v12;
        if ( v21 > 0 )
        {
          v14 += v28 * v21;
          v15 += v29 * v21;
          v16 += v30 * v21;
        }
        v32 = 0LL;
        v23 = (v22 - v20 + 1) >> 1;
        if ( v20 > v22 )
          v23 = 0LL;
        if ( v23 )
        {
          v24 = (_WORD *)(v7 + 2 * v19);
          v25 = v19 + v41;
          v31 = v19 + v41;
          do
          {
            v26 = *(_DWORD *)(0x1C0000000LL + 16LL * (v11 & 3) + 3318832 + 4LL * (v25 & 3));
            v27 = XEPALOBJ::ulDispatchGFPEFunction(
                    v36,
                    *(unsigned int *)(*(_QWORD *)v36 + 100LL),
                    8
                  * (Saturation16_5[(unsigned __int64)(unsigned int)(v26 + (HIDWORD(v14) >> 11)) >> 16] | ((Saturation16_5[(unsigned __int64)(unsigned int)(v26 + (HIDWORD(v15) >> 11)) >> 16] | (Saturation16_5[(unsigned __int64)(unsigned int)(v26 + (HIDWORD(v16) >> 11)) >> 16] << 8)) << 8)));
            v14 += v28;
            *v24++ = v27;
            v25 = v31 + 1;
            ++v32;
            v15 += v29;
            ++v31;
            v16 += v30;
          }
          while ( v32 < v23 );
          v3 = a2;
          v7 = v33;
          v6 = (int *)v34;
          v11 = v40;
          v5 = a1;
          v10 = v35;
        }
      }
      v7 += v37;
      v6 += 10;
      v33 = v7;
      ++v11;
      v34 = (char *)v6;
      --v10;
      v40 = v11;
      v35 = v10;
    }
    while ( v10 );
  }
}
