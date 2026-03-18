/*
 * XREFs of ShrinkDIB_CX @ 0x1C0248070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ShrinkDIB_CX(__int64 a1, unsigned __int8 *a2, _BYTE *a3, __int64 a4, int a5)
{
  unsigned __int8 *v5; // r11
  int v7; // eax
  int v8; // esi
  int v9; // edi
  int v10; // ebx
  __int64 v11; // r10
  _WORD *v12; // r12
  unsigned int v13; // r13d
  __int64 v14; // r14
  int v15; // r13d
  int v16; // r9d
  int v17; // edx
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  int v21; // r8d
  unsigned int i; // eax
  __int64 v23; // rdx
  int v24; // eax
  int v25; // r13d
  int v26; // r10d
  int v27; // r14d
  int v28; // esi
  int v29; // eax
  int v30; // edi
  int v31; // ecx
  int v32; // ecx
  int v33; // eax
  int v34; // ecx
  int v35; // ecx
  unsigned __int16 v36; // [rsp+0h] [rbp-40h]
  __int64 v37; // [rsp+8h] [rbp-38h]
  _BYTE v38[28]; // [rsp+10h] [rbp-30h]
  __int64 v39; // [rsp+2Ch] [rbp-14h]
  __int64 v40; // [rsp+2Ch] [rbp-14h]
  int v41; // [rsp+88h] [rbp+48h]
  __int64 v42; // [rsp+98h] [rbp+58h]

  v42 = a4;
  v5 = a2;
  if ( a2 )
  {
    v7 = *(unsigned __int16 *)(a1 + 14);
    if ( *(_WORD *)(a1 + 14) )
    {
      v8 = v7 * a2[2];
      v9 = v7 * a2[1];
      v10 = v7 * *a2;
      v5 = &a2[2 * *(unsigned __int16 *)(a1 + 10) + *(unsigned __int16 *)(a1 + 10)];
    }
    else
    {
      v10 = 0;
      v8 = 0;
      v9 = 0;
    }
    v11 = *(_QWORD *)(a1 + 24);
    v12 = *(_WORD **)(a1 + 40);
    v37 = v11;
    v36 = *(_WORD *)(a1 + 12);
    v41 = v36;
    if ( v36 )
    {
      do
      {
        v13 = (unsigned __int16)*v12++;
        v14 = v11 + ((v13 >> 5) & 0x400);
        if ( (v13 & 0x4000) != 0 )
        {
          v15 = v13 & 0x3FFF;
          v16 = v15 * v5[2];
          v17 = v15 * v5[1];
          v18 = v15 * *v5;
          *(_DWORD *)&v38[24] = v16 + v8;
          v11 = v37;
          v8 = *(_DWORD *)(v14 + 4LL * v5[2]) - v16;
          LODWORD(v39) = v17 + v9;
          HIDWORD(v39) = v18 + v10;
          v9 = *(_DWORD *)(v14 + 4LL * v5[1]) - v17;
          v10 = *(_DWORD *)(v14 + 4LL * *v5) - v18;
          v19 = --v41;
          *(_OWORD *)v38 = *(_OWORD *)&v38[12];
          *(_QWORD *)&v38[16] = v39;
        }
        else
        {
          v8 += *(_DWORD *)(v14 + 4LL * v5[2]);
          v9 += *(_DWORD *)(v14 + 4LL * v5[1]);
          v10 += *(_DWORD *)(v14 + 4LL * *v5);
          v19 = v41;
        }
        v5 += 3;
      }
      while ( v19 );
      a4 = v42;
    }
    v20 = *(_DWORD *)&v38[20];
    if ( v36 == 1 )
    {
      v21 = *(_DWORD *)&v38[20];
      *(_QWORD *)v38 = *(_QWORD *)&v38[12];
    }
    else
    {
      v21 = *(_DWORD *)&v38[8];
    }
    for ( i = (unsigned __int16)*v12; *v12; v5 += 3 )
    {
      ++v12;
      v23 = v11 + ((i >> 5) & 0x400);
      if ( (i & 0x4000) != 0 )
      {
        v24 = i & 0x3FFF;
        v25 = v24 * *v5;
        v26 = v24 * v5[2];
        v27 = v24 * v5[1];
        HIDWORD(v40) = v25 + v10;
        v28 = v26 + v8;
        v29 = (6 * v20 - v21 - (v25 + v10)) >> 15;
        v30 = v27 + v9;
        *(_DWORD *)&v38[24] = v28;
        LODWORD(v40) = v30;
        if ( (v29 & 0xFF00) != 0 )
          LOBYTE(v29) = ~HIBYTE(v29);
        *a3 = v29;
        v31 = (6 * *(_DWORD *)&v38[16] - *(_DWORD *)&v38[4] - v30) >> 15;
        if ( (v31 & 0xFF00) != 0 )
          LOBYTE(v31) = ~HIBYTE(v31);
        a3[1] = v31;
        v32 = (6 * *(_DWORD *)&v38[12] - *(_DWORD *)v38 - v28) >> 15;
        if ( (v32 & 0xFF00) != 0 )
          LOBYTE(v32) = ~HIBYTE(v32);
        a3[2] = v32;
        a3 += a5;
        *(_OWORD *)v38 = *(_OWORD *)&v38[12];
        v21 = *(_DWORD *)&v38[8];
        v8 = *(_DWORD *)(v23 + 4LL * v5[2]) - v26;
        v11 = v37;
        *(_QWORD *)&v38[16] = v40;
        v20 = HIDWORD(v40);
        v9 = *(_DWORD *)(v23 + 4LL * v5[1]) - v27;
        v10 = *(_DWORD *)(v23 + 4LL * *v5) - v25;
      }
      else
      {
        v8 += *(_DWORD *)(v23 + 4LL * v5[2]);
        v9 += *(_DWORD *)(v23 + 4LL * v5[1]);
        v10 += *(_DWORD *)(v23 + 4LL * *v5);
      }
      i = (unsigned __int16)*v12;
    }
    if ( a3 == (_BYTE *)(a4 - a5) )
    {
      v33 = (5 * v20 - v21) >> 15;
      if ( (v33 & 0xFF00) != 0 )
        LOBYTE(v33) = ~HIBYTE(v33);
      *a3 = v33;
      v34 = (5 * *(_DWORD *)&v38[16] - *(_DWORD *)&v38[4]) >> 15;
      if ( (v34 & 0xFF00) != 0 )
        LOBYTE(v34) = ~HIBYTE(v34);
      a3[1] = v34;
      v35 = (5 * *(_DWORD *)&v38[12] - *(_DWORD *)v38) >> 15;
      if ( (v35 & 0xFF00) != 0 )
        LOBYTE(v35) = ~HIBYTE(v35);
      a3[2] = v35;
    }
  }
}
