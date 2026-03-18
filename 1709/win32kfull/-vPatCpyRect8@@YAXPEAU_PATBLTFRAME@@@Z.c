/*
 * XREFs of ?vPatCpyRect8@@YAXPEAU_PATBLTFRAME@@@Z @ 0x1C00EE020
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyPattern@@YAXPEAKJJJ@Z @ 0x1C02B0A68 (-CopyPattern@@YAXPEAKJJJ@Z.c)
 *     vFetchShiftAndCopy @ 0x1C02B0BF4 (vFetchShiftAndCopy.c)
 */

void __fastcall vPatCpyRect8(struct _PATBLTFRAME *a1)
{
  _DWORD *v1; // r15
  int v3; // r12d
  int v4; // r13d
  unsigned int v5; // r8d
  __int64 v6; // rcx
  char v7; // dl
  unsigned int v8; // r13d
  __int64 v9; // rdx
  int v10; // eax
  int v11; // r14d
  __int64 v12; // rdi
  int v13; // r10d
  int v14; // eax
  int v15; // esi
  __int64 v16; // r11
  unsigned int v17; // r10d
  __int64 v18; // rcx
  unsigned int v19; // edx
  int v20; // r14d
  int v21; // r15d
  int v22; // eax
  unsigned int *v23; // r13
  int v24; // eax
  int *v25; // r12
  __int64 v26; // rax
  unsigned int *v27; // rdx
  unsigned int *v28; // r9
  int *v29; // rcx
  unsigned int v30; // eax
  int v31; // r11d
  int *v32; // rdx
  __int64 v33; // r9
  int v34; // r9d
  int *v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  int v38; // r10d
  int *v39; // r8
  unsigned int v40; // edx
  __int64 v41; // r9
  int v42; // [rsp+20h] [rbp-38h]
  unsigned int *v43; // [rsp+28h] [rbp-30h] BYREF
  int *v44; // [rsp+30h] [rbp-28h]
  int v45; // [rsp+38h] [rbp-20h]
  unsigned int v46; // [rsp+3Ch] [rbp-1Ch]
  int v47; // [rsp+40h] [rbp-18h]
  unsigned int v48; // [rsp+44h] [rbp-14h]
  unsigned int v49; // [rsp+A0h] [rbp+48h]
  unsigned int v50; // [rsp+B0h] [rbp+58h]
  int v51; // [rsp+B8h] [rbp+60h]

  v1 = (_DWORD *)*((_QWORD *)a1 + 3);
  v3 = 0;
  v4 = *((_DWORD *)a1 + 12) * v1[2];
  v5 = (*v1 * *((_DWORD *)a1 + 12)) & 0xFFFFFFFC;
  v6 = (*(_BYTE *)v1 * *((_BYTE *)a1 + 48)) & 3;
  v7 = v4;
  v8 = v4 & 0xFFFFFFFC;
  v9 = v7 & 3;
  v49 = v8;
  v51 = v9;
  v10 = v5 - *((_DWORD *)a1 + 8);
  v11 = aulLeftMask[v6];
  v42 = ~aulLeftMask[v9];
  if ( v10 < 0 )
    LODWORD(v12) = *((_DWORD *)a1 + 10) - (unsigned int)~v10 % *((_DWORD *)a1 + 10) - 1;
  else
    LODWORD(v12) = (unsigned int)v10 % *((_DWORD *)a1 + 10);
  v13 = v1[1];
  v14 = v13 - *((_DWORD *)a1 + 9);
  if ( v14 < 0 )
    v15 = *((_DWORD *)a1 + 11) - (unsigned int)~v14 % *((_DWORD *)a1 + 11) - 1;
  else
    v15 = (unsigned int)v14 % *((_DWORD *)a1 + 11);
  if ( v5 == v8 )
  {
    v11 &= ~aulLeftMask[v9];
    v3 = 1;
  }
  else if ( !(_DWORD)v6 )
  {
LABEL_7:
    v16 = (v8 - v5) >> 2;
    v47 = v16;
    if ( (_DWORD)v16 )
    {
      v17 = *((_DWORD *)a1 + 10);
      v18 = *((_QWORD *)a1 + 3);
      v19 = (unsigned int)v12 % v17;
      v20 = v15;
      v50 = v17;
      v21 = *(_DWORD *)(v18 + 4);
      v22 = *((_DWORD *)a1 + 4) * v21;
      v12 = (unsigned int)v12 % v17;
      v46 = v17;
      v45 = v12;
      v48 = v17;
      v23 = (unsigned int *)(*(_QWORD *)a1 + v5 + (__int64)v22);
      v24 = v15 * *((_DWORD *)a1 + 5);
      v43 = v23;
      v25 = (int *)(*((_QWORD *)a1 + 1) + v24);
      v44 = v25;
      if ( (((unsigned __int8)v19 | (unsigned __int8)v17) & 3) != 0 )
      {
        if ( v21 < *(_DWORD *)(v18 + 12) )
        {
          do
          {
            vFetchShiftAndCopy(&v43);
            if ( ++v20 == *((_DWORD *)a1 + 11) )
            {
              v20 = 0;
              v44 = (int *)*((_QWORD *)a1 + 1);
            }
            else
            {
              v44 = (int *)((char *)v44 + *((int *)a1 + 5));
            }
            ++v21;
            v43 = (unsigned int *)((char *)v43 + *((int *)a1 + 4));
            v36 = *((_QWORD *)a1 + 3);
            v45 = v12;
          }
          while ( v21 < *(_DWORD *)(v36 + 12) );
          LODWORD(v16) = v47;
        }
      }
      else if ( v21 < *(_DWORD *)(v18 + 12) )
      {
        v26 = (unsigned int)v12;
        do
        {
          v27 = v23;
          v28 = &v23[v16];
          v29 = (int *)((char *)v25 + v26);
          if ( v17 == 8 )
          {
            v34 = *v29;
            if ( (_DWORD)v12 )
              v35 = v25;
            else
              v35 = v29 + 1;
            CopyPattern(v23, v16, *v35, v34);
            v17 = v50;
          }
          else if ( v23 < v28 )
          {
            do
            {
              v30 = *v29++;
              *v27++ = v30;
              if ( v29 == (int *)((char *)v25 + v17) )
                v29 = v25;
            }
            while ( v27 < v28 );
          }
          if ( ++v20 == *((_DWORD *)a1 + 11) )
          {
            v25 = (int *)*((_QWORD *)a1 + 1);
            v20 = 0;
          }
          else
          {
            v25 = (int *)((char *)v25 + *((int *)a1 + 5));
          }
          ++v21;
          v23 = (unsigned int *)((char *)v23 + *((int *)a1 + 4));
          v26 = v12;
        }
        while ( v21 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
      }
      v8 = v49;
    }
    if ( v51 )
    {
      v37 = *((_QWORD *)a1 + 3);
      v38 = *(_DWORD *)(v37 + 4);
      v39 = (int *)(*(_QWORD *)a1 + v8 + (__int64)(*((_DWORD *)a1 + 4) * v38));
      v41 = *((_QWORD *)a1 + 1) + v15 * *((_DWORD *)a1 + 5);
      if ( v38 < *(_DWORD *)(v37 + 12) )
      {
        v40 = (unsigned int)(v12 + 4 * v16) % *((_DWORD *)a1 + 10);
        do
        {
          ++v15;
          *v39 = *v39 & ~v42 | v42 & *(_DWORD *)(v40 + v41);
          if ( v15 == *((_DWORD *)a1 + 11) )
          {
            v41 = *((_QWORD *)a1 + 1);
            v15 = 0;
          }
          else
          {
            v41 += *((int *)a1 + 5);
          }
          ++v38;
          v39 = (int *)((char *)v39 + *((int *)a1 + 4));
        }
        while ( v38 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
      }
    }
    return;
  }
  v45 = v12;
  v31 = v15;
  v32 = (int *)(*(_QWORD *)a1 + v5 + (__int64)(*((_DWORD *)a1 + 4) * v13));
  v33 = *((_QWORD *)a1 + 1) + v15 * *((_DWORD *)a1 + 5);
  if ( v13 < v1[3] )
  {
    do
    {
      ++v31;
      *v32 = *v32 & ~v11 | v11 & *(_DWORD *)(v33 + (unsigned int)v12);
      if ( v31 == *((_DWORD *)a1 + 11) )
      {
        v33 = *((_QWORD *)a1 + 1);
        v31 = 0;
      }
      else
      {
        v33 += *((int *)a1 + 5);
      }
      ++v13;
      v32 = (int *)((char *)v32 + *((int *)a1 + 4));
    }
    while ( v13 < *(_DWORD *)(*((_QWORD *)a1 + 3) + 12LL) );
  }
  if ( !v3 )
  {
    v5 += 4;
    LODWORD(v12) = v12 + 4;
    goto LABEL_7;
  }
}
