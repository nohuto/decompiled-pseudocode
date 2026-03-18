/*
 * XREFs of ?bSrcCopySRLE8D1@@YAHPEAUBLTINFO@@@Z @ 0x1C02A3F80
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall bSrcCopySRLE8D1(struct BLTINFO *a1)
{
  int v1; // r11d
  int v2; // edx
  unsigned __int8 *v3; // r13
  int v4; // r10d
  __int64 v5; // rbp
  int v6; // r14d
  int v7; // ebx
  unsigned int v8; // esi
  int v9; // eax
  int v10; // ecx
  __int64 result; // rax
  char v12; // r8
  struct BLTINFO *v13; // rdi
  int v14; // ecx
  __int64 i; // rax
  unsigned int v16; // r14d
  __int64 v17; // rsi
  unsigned __int8 *v18; // r13
  __int64 v19; // r12
  __int64 v20; // r9
  unsigned int v21; // r14d
  int v22; // esi
  __int64 v23; // rax
  int v24; // r10d
  __int64 v25; // rcx
  int v26; // ebx
  unsigned __int8 v27; // r11
  __int64 v28; // rdx
  char v29; // cl
  unsigned __int8 *v30; // r13
  unsigned int v31; // esi
  int v32; // eax
  unsigned __int8 *v33; // r13
  int v34; // ecx
  int v35; // r10d
  int v36; // eax
  int v37; // edx
  char v38; // cl
  int v39; // ebx
  int v40; // r10d
  char v41; // dl
  __int64 v42; // rcx
  unsigned int v43; // r14d
  char v44; // r8
  unsigned int v45; // r12d
  __int64 v46; // rsi
  unsigned int v47; // [rsp+20h] [rbp-88h]
  int v48; // [rsp+24h] [rbp-84h]
  unsigned int v49; // [rsp+28h] [rbp-80h]
  int v50; // [rsp+2Ch] [rbp-7Ch]
  int v51; // [rsp+30h] [rbp-78h]
  int v52; // [rsp+34h] [rbp-74h]
  unsigned int v53; // [rsp+38h] [rbp-70h]
  int v54; // [rsp+3Ch] [rbp-6Ch]
  int v55; // [rsp+40h] [rbp-68h]
  int v56; // [rsp+44h] [rbp-64h]
  int v57; // [rsp+48h] [rbp-60h]
  int v58; // [rsp+4Ch] [rbp-5Ch]
  __int64 v59; // [rsp+50h] [rbp-58h]
  char v61; // [rsp+B8h] [rbp+10h]
  char v62; // [rsp+C0h] [rbp+18h]
  unsigned int v63; // [rsp+C8h] [rbp+20h]

  v1 = *((_DWORD *)a1 + 22);
  v2 = *((_DWORD *)a1 + 24);
  v3 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v4 = *((_DWORD *)a1 + 15);
  v5 = *((_QWORD *)a1 + 2);
  v6 = *((_DWORD *)a1 + 30);
  v7 = *((_DWORD *)a1 + 32);
  v51 = *((_DWORD *)a1 + 11);
  v58 = v1;
  v55 = v2;
  v56 = *((_DWORD *)a1 + 14);
  v8 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v49 = v8;
  v50 = v4;
  v59 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v9 = *((_DWORD *)a1 + 23);
  v10 = *((_DWORD *)a1 + 25);
  v48 = v10;
  v52 = v9;
  if ( v4 < v9 )
    return 1LL;
  v12 = 0;
  v53 = (unsigned int)v1 >> 3;
  v62 = EndMask[v1 & 7];
  v63 = (unsigned int)(v2 - 1) >> 3;
  v13 = a1;
  v61 = ~EndMask[v2 & 7];
  if ( v4 >= v10 )
    goto LABEL_10;
  if ( v7 < v1 )
  {
    if ( v7 < v2 )
    {
      v12 = EndMask[v1 & 7] & *(_BYTE *)(((unsigned int)v1 >> 3) + v5);
      goto LABEL_10;
    }
    goto LABEL_8;
  }
  if ( v7 >= v2 )
  {
LABEL_8:
    v12 = *(_BYTE *)(((unsigned int)(v2 - 1) >> 3) + v5);
    goto LABEL_10;
  }
  v12 = EndMask[v7 & 7] & *(_BYTE *)((unsigned int)(v7 >> 3) + v5);
LABEL_10:
  v14 = 1;
  for ( i = 1LL; i < 256; ++i )
  {
    *(_DWORD *)(v59 + 4 * i) = v14;
    v14 ^= 1u;
  }
  v16 = v6 + 2;
  v47 = v16;
  if ( v16 > v8 )
    return 0LL;
  while ( 1 )
  {
    v17 = *v3;
    v18 = v3 + 1;
    v19 = (unsigned int)(v7 >> 3);
    v20 = *v18;
    v3 = v18 + 1;
    if ( (_DWORD)v17 )
    {
      if ( v4 >= v48 || v7 >= v2 || (int)v17 + v7 <= v1 )
      {
        v7 += v17;
      }
      else
      {
        if ( v7 < v1 )
        {
          v36 = v1 - v7;
          v7 = v1;
          v17 = (unsigned int)(v17 - v36);
          v19 = (unsigned int)(v1 >> 3);
        }
        if ( (int)v17 + v7 <= v2 )
        {
          v54 = 0;
        }
        else
        {
          v54 = v7 + v17 - v2;
          v17 = (unsigned int)(v2 - v7);
        }
        v37 = 7;
        LOBYTE(v37) = 7 - (v7 & 7);
        v38 = v7 & 7;
        v39 = v17 + v7;
        v40 = *(_DWORD *)(v59 + 4 * v20);
        v57 = v40;
        if ( (unsigned __int8)v37 < (unsigned __int8)v17 )
        {
          v42 = 7 - (unsigned __int8)v37;
          v43 = ((unsigned __int8)v17 - (unsigned __int8)v37 - 1) >> 3;
          if ( v40 )
            v44 = ~EndMask[v42] | v12;
          else
            v44 = EndMask[v42] & v12;
          *(_BYTE *)(v19 + v5) = v44;
          v45 = v19 + 1;
          v46 = -1 - (unsigned __int8)v37 + (unsigned int)v17;
          if ( v43 )
          {
            LOBYTE(v37) = -(v40 != 0);
            memset((void *)(v5 + v45), v37, v43);
            v40 = v57;
            v46 = (unsigned int)v46 - 8 * v43;
          }
          v12 = 0;
          if ( (_DWORD)v46 && v40 )
          {
            v16 = v47;
            if ( (unsigned int)v46 < 9 )
              v12 = EndMask[v46];
          }
          else
          {
            v16 = v47;
          }
        }
        else if ( (unsigned int)v17 < 9 )
        {
          v41 = EndMask[v17] >> v38;
          if ( v40 )
            v12 |= v41;
          else
            v12 &= ~v41;
        }
        v7 = v54 + v39;
      }
      goto LABEL_91;
    }
    if ( !(_DWORD)v20 )
    {
      if ( v4 < v48 && (v7 & 7) != 0 )
      {
        if ( v7 < v1 )
        {
          if ( v7 < v2 )
            goto LABEL_63;
        }
        else if ( v7 < v2 )
        {
          *(_BYTE *)(v19 + v5) = v12 | *(_BYTE *)(v19 + v5) & ~EndMask[v7 & 7];
          goto LABEL_63;
        }
        *(_BYTE *)(v63 + v5) = v12 | *(_BYTE *)(v63 + v5) & v61;
      }
LABEL_63:
      v35 = v4 - 1;
      v5 += v51;
      v7 = v56;
      v50 = v35;
      if ( v35 < v52 )
      {
        *((_DWORD *)v13 + 34) = v56;
        goto LABEL_103;
      }
      if ( v35 < v48 )
        goto LABEL_65;
      goto LABEL_91;
    }
    if ( (_DWORD)v20 == 1 )
      break;
    if ( (_DWORD)v20 != 2 )
    {
      v21 = v20 + v16;
      if ( v21 > v49 )
        return 0LL;
      v22 = v20 & 1;
      if ( v4 >= v48 || v7 >= v2 || (int)v20 + v7 <= v1 )
      {
        v7 += v20;
        v30 = &v3[v20];
      }
      else
      {
        if ( v7 < v1 )
        {
          v23 = (unsigned int)(v1 - v7);
          v7 = v1;
          LODWORD(v20) = v20 - v23;
          v19 = (unsigned int)(v1 >> 3);
          v3 += v23;
        }
        if ( (int)v20 + v7 <= v2 )
        {
          v24 = 0;
        }
        else
        {
          v24 = v7 + v20 - v2;
          LODWORD(v20) = v2 - v7;
        }
        v25 = (unsigned __int8)(7 - (v7 & 7));
        v26 = v20 + v7;
        v27 = byte_1C02F0D68[v25];
        do
        {
          if ( v27 )
          {
            do
            {
              if ( !(_DWORD)v20 )
                break;
              v28 = *v3++;
              LODWORD(v20) = v20 - 1;
              v29 = v12 | v27;
              if ( !*(_DWORD *)(v59 + 4 * v28) )
                v29 = v12;
              v27 >>= 1;
              v12 = v29;
            }
            while ( v27 );
            if ( v27 )
              continue;
          }
          *(_BYTE *)(v19 + v5) = v12;
          v27 = 0x80;
          v19 = (unsigned int)(v19 + 1);
          v12 = 0;
        }
        while ( (_DWORD)v20 );
        v13 = a1;
        v30 = &v3[v24];
        v7 = v24 + v26;
      }
      v16 = v22 + v21;
      v3 = &v30[v22];
      goto LABEL_91;
    }
    if ( v4 >= v48 )
    {
      v31 = v63;
    }
    else
    {
      if ( (v7 & 7) != 0 )
      {
        if ( v7 < v1 )
        {
          if ( v7 >= v2 )
          {
LABEL_44:
            v31 = v63;
            *(_BYTE *)(v63 + v5) = v12 | *(_BYTE *)(v63 + v5) & v61;
            goto LABEL_48;
          }
        }
        else
        {
          if ( v7 >= v2 )
            goto LABEL_44;
          *(_BYTE *)((unsigned int)v19 + v5) = v12 | *(_BYTE *)((unsigned int)v19 + v5) & ~EndMask[v7 & 7];
          v2 = v55;
        }
      }
      v31 = v63;
    }
LABEL_48:
    v16 += 2;
    if ( v16 > v49 )
      return 0LL;
    v32 = *v3;
    v33 = v3 + 1;
    v7 += v32;
    v34 = *v33;
    v3 = v33 + 1;
    v35 = v4 - v34;
    v50 = v35;
    v5 += v51 * v34;
    if ( v35 < v52 )
    {
      *((_DWORD *)v13 + 34) = v7;
LABEL_103:
      result = 1LL;
      *((_DWORD *)v13 + 33) = v35;
      *((_QWORD *)v13 + 14) = v5;
      *((_QWORD *)v13 + 13) = v3;
      *((_DWORD *)v13 + 31) = v16;
      return result;
    }
    if ( v35 < v48 )
    {
      if ( v7 >= v1 )
      {
        if ( v7 < v2 )
        {
          v12 = EndMask[v7 & 7] & *(_BYTE *)((unsigned int)(v7 >> 3) + v5);
          goto LABEL_91;
        }
LABEL_55:
        v12 = *(_BYTE *)(v31 + v5);
        goto LABEL_91;
      }
      if ( v7 >= v2 )
        goto LABEL_55;
LABEL_65:
      v12 = v62 & *(_BYTE *)(v53 + v5);
    }
LABEL_91:
    v16 += 2;
    v47 = v16;
    if ( v16 > v49 )
      return 0LL;
    v2 = v55;
    v4 = v50;
    v1 = v58;
  }
  if ( v4 < v48 && (v7 & 7) != 0 )
  {
    if ( v7 < v1 )
    {
      if ( v7 < v2 )
        return 0LL;
    }
    else if ( v7 < v2 )
    {
      *(_BYTE *)(v19 + v5) = v12 | *(_BYTE *)(v19 + v5) & ~EndMask[v7 & 7];
      return 0LL;
    }
    *(_BYTE *)(v63 + v5) = v12 | *(_BYTE *)(v63 + v5) & v61;
  }
  return 0LL;
}
