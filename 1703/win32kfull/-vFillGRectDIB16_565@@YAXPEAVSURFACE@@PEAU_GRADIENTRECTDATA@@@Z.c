/*
 * XREFs of ?vFillGRectDIB16_565@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02AC260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vFillGRectDIB16_565(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  struct _GRADIENTRECTDATA *v2; // r11
  __int64 v3; // rdx
  int v4; // ebx
  __int64 v5; // r10
  int v6; // r12d
  __int64 v7; // r15
  __int64 v8; // r13
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rbp
  __int64 v12; // r14
  __int64 v13; // rax
  int v14; // ecx
  int v15; // r9d
  __int64 v16; // r8
  int v17; // eax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  __int64 v21; // r8
  unsigned __int64 v22; // r10
  __int64 v23; // r8
  unsigned __int64 v24; // r15
  _WORD *v25; // r13
  int v26; // r14d
  unsigned __int64 v27; // rdi
  __int64 v28; // r8
  int v29; // r10d
  unsigned __int64 v30; // r8
  __int16 v31; // r9
  unsigned __int64 v32; // r8
  __int16 v33; // r9
  unsigned __int64 v34; // r8
  char v35; // [rsp+0h] [rbp-C8h]
  int v36; // [rsp+4h] [rbp-C4h]
  unsigned __int64 v37; // [rsp+8h] [rbp-C0h]
  unsigned __int64 v38; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v39; // [rsp+18h] [rbp-B0h]
  __int64 v40; // [rsp+20h] [rbp-A8h]
  __int64 v41; // [rsp+28h] [rbp-A0h]
  __int64 v42; // [rsp+30h] [rbp-98h]
  __int64 v43; // [rsp+38h] [rbp-90h]
  __int64 v44; // [rsp+50h] [rbp-78h]
  __int64 v45; // [rsp+58h] [rbp-70h]
  __int64 v46; // [rsp+60h] [rbp-68h]
  __int64 v47; // [rsp+68h] [rbp-60h]
  __int64 v48; // [rsp+70h] [rbp-58h]
  int v49; // [rsp+D0h] [rbp+8h]
  int v51; // [rsp+E0h] [rbp+18h]
  int v52; // [rsp+E8h] [rbp+20h]

  v2 = a2;
  v3 = *((int *)a1 + 22);
  v4 = *((_DWORD *)v2 + 9);
  v5 = *((_QWORD *)v2 + 14);
  v6 = v4 + *((_DWORD *)v2 + 11);
  v7 = *((_QWORD *)v2 + 15);
  v8 = *((_QWORD *)v2 + 10);
  v9 = *((_QWORD *)v2 + 6);
  v10 = *((_QWORD *)v2 + 7);
  v11 = *((_QWORD *)v2 + 8);
  v49 = v4;
  v52 = v6;
  v42 = v5;
  v43 = v7;
  v12 = *((_QWORD *)a1 + 10) + (int)v3 * v4;
  v40 = *((_QWORD *)v2 + 16);
  v13 = *((int *)v2 + 45);
  v41 = v12;
  v45 = v8;
  v46 = *((_QWORD *)v2 + 11);
  v47 = *((_QWORD *)v2 + 12);
  v37 = v9;
  v38 = v10;
  v39 = v11;
  if ( (_DWORD)v13 )
  {
    v9 += v8 * v13;
    v10 += *((_QWORD *)v2 + 11) * v13;
    v37 = v9;
    v38 = v10;
    v11 += *((_QWORD *)v2 + 12) * v13;
    v39 = v11;
  }
  v14 = *((_DWORD *)v2 + 37);
  v15 = *((_DWORD *)v2 + 36);
  v35 = v14;
  v36 = v15;
  if ( v4 < v6 )
  {
    v48 = v3;
    do
    {
      v16 = *((int *)v2 + 44);
      v17 = ((_BYTE)v14 + (_BYTE)v4) & 3;
      v18 = v9;
      v19 = v10;
      v44 = 0x1C0000000LL + 4LL * (unsigned int)(4 * v17) + 3318832;
      v20 = v11;
      if ( (_DWORD)v16 )
      {
        v18 = v9 + v5 * v16;
        v19 = v10 + v7 * v16;
        v20 = v11 + v40 * v16;
      }
      v21 = *((int *)v2 + 8);
      v51 = v21 + v15;
      v22 = v12 + 2 * v21;
      v23 = *((int *)v2 + 10);
      v24 = (unsigned __int64)(2 * v23 + 1) >> 1;
      if ( v22 > v22 + 2 * v23 )
        v24 = 0LL;
      if ( v24 )
      {
        v25 = (_WORD *)v22;
        v26 = v51;
        v27 = 0LL;
        do
        {
          ++v27;
          v28 = v26++ & 3;
          v29 = *(_DWORD *)(v44 + 4 * v28);
          v30 = HIDWORD(v18);
          v18 += v42;
          v31 = Saturation16_5[(unsigned __int64)(v29 + ((unsigned int)v30 >> 3)) >> 16];
          v32 = HIDWORD(v19);
          v19 += v43;
          v33 = Saturation16_6[(unsigned __int64)(v29 + ((unsigned int)v32 >> 2)) >> 16] | (unsigned __int16)(v31 << 6);
          v34 = HIDWORD(v20);
          v20 += v40;
          *v25++ = Saturation16_5[(unsigned __int64)(v29 + ((unsigned int)v34 >> 3)) >> 16] | (unsigned __int16)(32 * v33);
        }
        while ( v27 < v24 );
        v2 = a2;
        v4 = v49;
        v9 = v37;
        v10 = v38;
        v11 = v39;
        v12 = v41;
        v6 = v52;
        v8 = v45;
      }
      v10 += v46;
      v11 += v47;
      v9 += v8;
      v12 += v48;
      ++v4;
      LOBYTE(v14) = v35;
      v5 = v42;
      v7 = v43;
      v15 = v36;
      v37 = v9;
      v38 = v10;
      v39 = v11;
      v49 = v4;
      v41 = v12;
    }
    while ( v4 < v6 );
  }
}
