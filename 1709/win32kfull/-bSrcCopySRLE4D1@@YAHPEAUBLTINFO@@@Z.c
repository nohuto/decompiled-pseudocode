/*
 * XREFs of ?bSrcCopySRLE4D1@@YAHPEAUBLTINFO@@@Z @ 0x1C02A53E0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall bSrcCopySRLE4D1(struct BLTINFO *a1)
{
  unsigned __int8 *v2; // r15
  __int64 v3; // rsi
  int v4; // r12d
  int v5; // r11d
  int v6; // r13d
  int v7; // edx
  int v8; // r8d
  int v9; // ebx
  __int64 v10; // rax
  unsigned int v11; // r14d
  __int64 v12; // rax
  unsigned int v13; // ecx
  __int64 result; // rax
  char v15; // r8
  char v16; // bp
  struct BLTINFO *v17; // rdi
  int v18; // eax
  int *v19; // rcx
  __int64 v20; // rdx
  unsigned int v21; // r12d
  bool i; // cc
  unsigned int v23; // r14d
  unsigned __int8 *v24; // r15
  __int64 v25; // r10
  unsigned __int64 v26; // r9
  unsigned int v27; // r12d
  BOOL v28; // ecx
  unsigned int v29; // edx
  unsigned __int8 v30; // r14
  char v31; // al
  char v32; // cl
  __int64 v33; // rdx
  unsigned int v34; // r11d
  __int64 v35; // r13
  int v36; // ebx
  unsigned int v37; // edi
  unsigned __int8 v38; // cl
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  char v41; // cl
  unsigned int v42; // eax
  unsigned __int8 *v43; // r15
  int v44; // edx
  unsigned int v45; // r9d
  int v46; // eax
  unsigned __int8 *v47; // r15
  int v48; // ecx
  int v49; // eax
  int v50; // eax
  int v51; // ecx
  int v52; // edx
  char v53; // r12
  int v54; // ecx
  unsigned int v55; // r9d
  unsigned int v56; // ebx
  __int64 v57; // r14
  __int64 v58; // r14
  char v59; // [rsp+20h] [rbp-98h]
  unsigned __int8 v60; // [rsp+21h] [rbp-97h]
  int v61; // [rsp+24h] [rbp-94h]
  int v62; // [rsp+28h] [rbp-90h]
  unsigned int v63; // [rsp+2Ch] [rbp-8Ch]
  int v64; // [rsp+30h] [rbp-88h]
  unsigned int v65; // [rsp+34h] [rbp-84h]
  unsigned int v66; // [rsp+38h] [rbp-80h]
  int v67; // [rsp+3Ch] [rbp-7Ch]
  int v68; // [rsp+40h] [rbp-78h]
  int v69; // [rsp+44h] [rbp-74h]
  unsigned int v70; // [rsp+48h] [rbp-70h]
  __int64 v71; // [rsp+50h] [rbp-68h]
  int v72; // [rsp+58h] [rbp-60h]
  int v73; // [rsp+5Ch] [rbp-5Ch]
  int v74; // [rsp+60h] [rbp-58h]
  int v75; // [rsp+64h] [rbp-54h]
  char v77; // [rsp+C8h] [rbp+10h]
  unsigned int v78; // [rsp+D8h] [rbp+20h]

  v2 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v3 = *((_QWORD *)a1 + 2);
  v4 = *((_DWORD *)a1 + 30);
  v5 = *((_DWORD *)a1 + 15);
  v6 = *((_DWORD *)a1 + 24);
  v7 = *((_DWORD *)a1 + 25);
  v8 = *((_DWORD *)a1 + 14);
  v9 = *((_DWORD *)a1 + 32);
  v68 = *((_DWORD *)a1 + 11);
  v10 = *((_QWORD *)a1 + 9);
  v72 = v6;
  v61 = v7;
  v73 = v8;
  v11 = *(_DWORD *)(v10 + 64);
  v12 = *(_QWORD *)a1;
  v13 = *((_DWORD *)a1 + 22);
  v66 = v11;
  v62 = v13;
  v71 = *(_QWORD *)(v12 + 16);
  v69 = *((_DWORD *)a1 + 23);
  v64 = v5;
  if ( v5 < v69 )
    return 1LL;
  v15 = 0;
  v70 = v13 >> 3;
  v16 = EndMask[v13 & 7];
  v63 = (unsigned int)(v6 - 1) >> 3;
  v17 = a1;
  v77 = ~EndMask[v6 & 7];
  if ( v5 >= v7 )
    goto LABEL_10;
  if ( v9 >= (int)v13 )
  {
    if ( v9 < v6 )
    {
      v15 = EndMask[v9 & 7] & *(_BYTE *)((unsigned int)(v9 >> 3) + v3);
      goto LABEL_10;
    }
    goto LABEL_8;
  }
  if ( v9 >= v6 )
  {
LABEL_8:
    v15 = *(_BYTE *)(((unsigned int)(v6 - 1) >> 3) + v3);
    goto LABEL_10;
  }
  v15 = v16 & *(_BYTE *)((v13 >> 3) + v3);
LABEL_10:
  v18 = 1;
  v19 = (int *)(v71 + 4);
  v20 = 15LL;
  do
  {
    *v19 = v18;
    v18 ^= 1u;
    ++v19;
    --v20;
  }
  while ( v20 );
  v21 = v4 + 2;
  for ( i = v21 <= v11; ; i = v21 <= v66 )
  {
    v65 = v21;
    if ( !i )
      return 0LL;
    v23 = *v2;
    v24 = v2 + 1;
    v25 = (unsigned int)(v9 >> 3);
    v26 = *v24;
    v2 = v24 + 1;
    if ( v23 )
    {
      if ( v5 >= v61 || v9 >= v6 || (int)(v23 + v9) <= v62 )
      {
        v9 += v23;
      }
      else
      {
        if ( v9 < v62 )
        {
          v50 = v62 - v9;
          v9 = v62;
          v23 -= v50;
          v25 = (unsigned int)(v62 >> 3);
        }
        if ( (int)(v23 + v9) <= v6 )
        {
          v78 = 0;
        }
        else
        {
          v78 = v9 + v23 - v6;
          v23 = v6 - v9;
        }
        v51 = *(unsigned __int8 *)(v71 + 4 * (v26 >> 4));
        v60 = *(_BYTE *)(v71 + 4 * (v26 & 0xF));
        v52 = v9 & 7;
        v59 = v51;
        v74 = v52;
        v53 = EndMask[2 * v51 + 12 + v60];
        v54 = (unsigned __int8)(7 - v52);
        v75 = v54;
        v67 = v54 + 1;
        if ( v23 >= v54 + 1 )
          v55 = ((unsigned __int8)v23 - v54 - 1) >> 3;
        else
          v55 = 0;
        v56 = v23 + v9;
        v57 = v23 - 8 * v55;
        if ( v54 < (int)v57 )
        {
          *(_BYTE *)(v25 + v3) = v15 | ((unsigned __int8)(v53 & EndMask[v67]) >> v74);
          v52 = v75;
          if ( (v75 & 1) == 0 )
          {
            if ( v53 >= 0 )
              v53 *= 2;
            else
              v53 = (2 * v53) | 1;
          }
          LODWORD(v25) = v25 + 1;
          v15 = 0;
          v58 = -1 - (unsigned __int8)v75 + (unsigned int)v57;
        }
        else
        {
          v53 &= EndMask[v57];
          v15 |= (unsigned __int8)v53 >> v52;
          v58 = 0LL;
        }
        if ( v55 )
        {
          LOBYTE(v52) = v53;
          memset((void *)(v3 + (unsigned int)v25), v52, v55);
          v5 = v64;
          v15 = 0;
        }
        if ( (unsigned int)v58 < 9 )
          v15 |= v53 & EndMask[v58];
        v9 = v78 + v56;
        v21 = v65;
      }
      goto LABEL_98;
    }
    if ( !(_DWORD)v26 )
      break;
    if ( (_DWORD)v26 == 1 )
    {
      if ( v5 >= v61 || (v9 & 7) == 0 )
        return 0LL;
      if ( v9 < v62 )
      {
        if ( v9 < v6 )
          return 0LL;
      }
      else if ( v9 < v6 )
      {
        *(_BYTE *)(v25 + v3) = v15 | *(_BYTE *)(v25 + v3) & ~EndMask[v9 & 7];
        return 0LL;
      }
      *(_BYTE *)(v63 + v3) = v15 | *(_BYTE *)(v63 + v3) & v77;
      return 0LL;
    }
    if ( (_DWORD)v26 == 2 )
    {
      v44 = v62;
      if ( v5 >= v61 )
      {
        v45 = v63;
      }
      else
      {
        if ( (v9 & 7) == 0 )
          goto LABEL_55;
        if ( v9 < v62 )
        {
          if ( v9 >= v6 )
            goto LABEL_52;
LABEL_55:
          v45 = v63;
        }
        else
        {
          if ( v9 < v6 )
          {
            *(_BYTE *)((unsigned int)v25 + v3) = v15 | *(_BYTE *)((unsigned int)v25 + v3) & ~EndMask[v9 & 7];
            v44 = v62;
            goto LABEL_55;
          }
LABEL_52:
          v45 = v63;
          *(_BYTE *)(v63 + v3) = v15 | *(_BYTE *)(v63 + v3) & v77;
        }
      }
      v21 += 2;
      if ( v21 > v66 )
        return 0LL;
      v46 = *v2;
      v47 = v2 + 1;
      v9 += v46;
      v48 = *v47;
      v2 = v47 + 1;
      v5 -= v48;
      v64 = v5;
      v3 += v68 * v48;
      if ( v5 < v69 )
      {
        *((_DWORD *)v17 + 34) = v9;
        goto LABEL_110;
      }
      if ( v9 >= v44 )
      {
        if ( v9 < v6 )
        {
          v15 = EndMask[v9 & 7] & *(_BYTE *)((unsigned int)(v9 >> 3) + v3);
          goto LABEL_98;
        }
LABEL_62:
        v15 = *(_BYTE *)(v45 + v3);
        goto LABEL_98;
      }
      if ( v9 >= v6 )
        goto LABEL_62;
LABEL_73:
      v15 = v16 & *(_BYTE *)(v70 + v3);
      goto LABEL_98;
    }
    v27 = ((unsigned int)(v26 + 1) >> 1) + v21;
    if ( v27 > v66 )
      return 0LL;
    v28 = (((_DWORD)v26 + 1) & 2) != 0;
    v67 = v28;
    if ( v5 >= v61 || v9 >= v6 || (int)v26 + v9 <= v62 )
    {
      v9 += v26;
      v43 = &v2[(unsigned __int64)(unsigned int)(v26 + 1) >> 1];
    }
    else
    {
      if ( v9 >= v62 )
      {
        v30 = byte_1C02F0D68[(unsigned __int8)(7 - (v9 & 7))];
      }
      else
      {
        v29 = v62 - v9;
        v9 = v62;
        v2 += (unsigned __int64)v29 >> 1;
        v25 = (unsigned int)(v62 >> 3);
        LODWORD(v26) = v26 - v29;
        v30 = byte_1C02F0D68[(unsigned __int8)(7 - (v62 & 7))];
        if ( (v29 & 1) != 0 )
        {
          v31 = v15 | v30;
          v30 >>= 1;
          v32 = v31;
          v33 = *v2++ & 0xF;
          v9 = v62 + 1;
          LODWORD(v26) = v26 - 1;
          if ( !*(_BYTE *)(v71 + 4 * v33) )
            v32 = v15;
          v15 = v32;
        }
      }
      if ( (int)v26 + v9 <= v6 )
      {
        v34 = 0;
      }
      else
      {
        v34 = v9 + v26 - v6;
        LODWORD(v26) = v6 - v9;
      }
      v35 = v71;
      v36 = v26 + v9;
      v65 = v26 & 1;
      v37 = 0;
      do
      {
        if ( v30 )
        {
          do
          {
            v38 = v30;
            if ( !(_DWORD)v26 )
              break;
            if ( !v37 )
            {
              v39 = *v2++;
              v59 = *(_BYTE *)(v35 + 4 * (v39 >> 4));
              v38 = v30;
              v60 = *(_BYTE *)(v35 + 4 * (v39 & 0xF));
            }
            v40 = v37;
            LODWORD(v26) = v26 - 1;
            v41 = v15 | v38;
            v37 ^= 1u;
            if ( !*(&v59 + v40) )
              v41 = v15;
            v30 >>= 1;
            v15 = v41;
          }
          while ( v30 );
          if ( v30 )
            continue;
        }
        *(_BYTE *)(v25 + v3) = v15;
        v30 = 0x80;
        v25 = (unsigned int)(v25 + 1);
        v15 = 0;
      }
      while ( (_DWORD)v26 );
      v42 = v34;
      v17 = a1;
      v6 = v72;
      if ( !v65 )
        v42 = v34 + 1;
      v28 = v67;
      v43 = &v2[v42 >> 1];
      v9 = v34 + v36;
      v5 = v64;
    }
    v21 = v28 + v27;
    v2 = &v43[v28];
LABEL_98:
    v21 += 2;
  }
  v49 = v61;
  if ( v5 < v61 )
  {
    if ( (v9 & 7) == 0 )
      goto LABEL_70;
    if ( v9 < v62 )
    {
      if ( v9 >= v6 )
        goto LABEL_69;
    }
    else
    {
      if ( v9 < v6 )
      {
        *(_BYTE *)(v25 + v3) = v15 | *(_BYTE *)(v25 + v3) & ~EndMask[v9 & 7];
        goto LABEL_70;
      }
LABEL_69:
      *(_BYTE *)(v63 + v3) = v15 | *(_BYTE *)(v63 + v3) & v77;
    }
LABEL_70:
    v49 = v61;
  }
  --v5;
  v3 += v68;
  v9 = v73;
  v64 = v5;
  if ( v5 >= v69 )
  {
    if ( v5 >= v49 )
      goto LABEL_98;
    goto LABEL_73;
  }
  *((_DWORD *)v17 + 34) = v73;
LABEL_110:
  result = 1LL;
  *((_DWORD *)v17 + 33) = v5;
  *((_QWORD *)v17 + 14) = v3;
  *((_QWORD *)v17 + 13) = v2;
  *((_DWORD *)v17 + 31) = v21;
  return result;
}
