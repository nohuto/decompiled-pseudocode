/*
 * XREFs of ?bSrcCopySRLE8D1@@YAHPEAUBLTINFO@@@Z @ 0x1C02A7900
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
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
  int v35; // eax
  char v36; // al
  int v37; // ebx
  int v38; // edx
  int v39; // r9d
  __int64 v41; // rcx
  unsigned int v42; // r14d
  char v43; // r8
  unsigned int v44; // r12d
  __int64 v45; // rsi
  unsigned int v46; // [rsp+20h] [rbp-88h]
  int v47; // [rsp+24h] [rbp-84h]
  int v48; // [rsp+28h] [rbp-80h]
  unsigned int v49; // [rsp+2Ch] [rbp-7Ch]
  int v50; // [rsp+30h] [rbp-78h]
  int v51; // [rsp+34h] [rbp-74h]
  unsigned int v52; // [rsp+38h] [rbp-70h]
  int v53; // [rsp+3Ch] [rbp-6Ch]
  int v54; // [rsp+40h] [rbp-68h]
  int v55; // [rsp+44h] [rbp-64h]
  int v56; // [rsp+48h] [rbp-60h]
  int v57; // [rsp+4Ch] [rbp-5Ch]
  __int64 v58; // [rsp+50h] [rbp-58h]
  char v60; // [rsp+B8h] [rbp+10h]
  char v61; // [rsp+C0h] [rbp+18h]
  unsigned int v62; // [rsp+C8h] [rbp+20h]

  v1 = *((_DWORD *)a1 + 22);
  v2 = *((_DWORD *)a1 + 24);
  v3 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v4 = *((_DWORD *)a1 + 15);
  v5 = *((_QWORD *)a1 + 2);
  v6 = *((_DWORD *)a1 + 30);
  v7 = *((_DWORD *)a1 + 32);
  v50 = *((_DWORD *)a1 + 11);
  v53 = v1;
  v55 = v2;
  v56 = *((_DWORD *)a1 + 14);
  v8 = *(_DWORD *)(*((_QWORD *)a1 + 9) + 64LL);
  v49 = v8;
  v48 = v4;
  v58 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v9 = *((_DWORD *)a1 + 23);
  v10 = *((_DWORD *)a1 + 25);
  v47 = v10;
  v51 = v9;
  if ( v4 < v9 )
    return 1LL;
  v12 = 0;
  v52 = (unsigned int)v1 >> 3;
  v61 = EndMask[v1 & 7];
  v62 = (unsigned int)(v2 - 1) >> 3;
  v13 = a1;
  v60 = ~EndMask[v2 & 7];
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
    *(_DWORD *)(v58 + 4 * i) = v14;
    v14 ^= 1u;
  }
  v16 = v6 + 2;
  v46 = v16;
  if ( v16 > v8 )
    return 0LL;
  while ( 1 )
  {
    v17 = *v3;
    v18 = v3 + 1;
    v19 = (unsigned int)(v7 >> 3);
    v20 = *v18;
    v3 = v18 + 1;
    if ( !(_DWORD)v17 )
      break;
    if ( v4 < v47 && v7 < v2 && (int)v17 + v7 > v1 )
    {
      if ( v7 < v1 )
      {
        v35 = v1 - v7;
        v7 = v1;
        v17 = (unsigned int)(v17 - v35);
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
      v36 = v7 & 7;
      v37 = v17 + v7;
      LOBYTE(v38) = 7 - v36;
      v39 = *(_DWORD *)(v58 + 4 * v20);
      v57 = v39;
      if ( (unsigned __int8)(7 - v36) < (unsigned __int8)v17 )
      {
        v38 = (unsigned __int8)v38;
        v41 = 7 - (unsigned __int8)v38;
        v42 = ((unsigned __int8)v17 - (unsigned __int8)v38 - 1) >> 3;
        if ( v39 )
          v43 = ~EndMask[v41] | v12;
        else
          v43 = EndMask[v41] & v12;
        *(_BYTE *)(v19 + v5) = v43;
        v44 = v19 + 1;
        v45 = -1 - (unsigned __int8)v38 + (unsigned int)v17;
        v12 = 0;
        if ( v42 )
        {
          LOBYTE(v38) = -(v39 != 0);
          memset((void *)(v5 + v44), v38, v42);
          v39 = v57;
          v4 = v48;
          v1 = v53;
          v12 = 0;
          v45 = (unsigned int)v45 - 8 * v42;
        }
        if ( (_DWORD)v45 )
        {
          if ( v39 )
          {
            v16 = v46;
            if ( (unsigned int)v45 < 9 )
              v12 = EndMask[v45];
            goto LABEL_90;
          }
          v12 = 0;
        }
        v16 = v46;
      }
      else if ( (unsigned int)v17 < 9 )
      {
        if ( v39 )
          v12 |= EndMask[v17] >> v36;
        else
          v12 &= ~(EndMask[v17] >> v36);
      }
LABEL_90:
      v7 = v54 + v37;
      goto LABEL_92;
    }
    v7 += v17;
LABEL_92:
    v16 += 2;
    v46 = v16;
    if ( v16 > v49 )
      return 0LL;
    v2 = v55;
  }
  if ( !(_DWORD)v20 )
  {
    if ( v4 < v47 && (v7 & 7) != 0 )
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
      *(_BYTE *)(v62 + v5) = v12 | *(_BYTE *)(v62 + v5) & v60;
    }
LABEL_63:
    --v4;
    v5 += v50;
    v7 = v56;
    v48 = v4;
    if ( v4 < v51 )
    {
      *((_DWORD *)v13 + 34) = v56;
      goto LABEL_104;
    }
    if ( v4 < v47 )
      goto LABEL_65;
    goto LABEL_92;
  }
  if ( (_DWORD)v20 != 1 )
  {
    if ( (_DWORD)v20 != 2 )
    {
      v21 = v20 + v16;
      if ( v21 > v49 )
        return 0LL;
      v22 = v20 & 1;
      if ( v4 >= v47 || v7 >= v2 || (int)v20 + v7 <= v1 )
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
        v27 = byte_1C02F4118[v25];
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
              if ( !*(_DWORD *)(v58 + 4 * v28) )
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
        v1 = v53;
        v30 = &v3[v24];
        v7 = v24 + v26;
        v4 = v48;
      }
      v16 = v22 + v21;
      v3 = &v30[v22];
      goto LABEL_92;
    }
    if ( v4 >= v47 )
    {
      v31 = v62;
LABEL_48:
      v16 += 2;
      if ( v16 > v49 )
        return 0LL;
      v32 = *v3;
      v33 = v3 + 1;
      v7 += v32;
      v34 = *v33;
      v3 = v33 + 1;
      v4 -= v34;
      v48 = v4;
      v5 += v50 * v34;
      if ( v4 < v51 )
      {
        *((_DWORD *)v13 + 34) = v7;
LABEL_104:
        result = 1LL;
        *((_DWORD *)v13 + 33) = v4;
        *((_QWORD *)v13 + 14) = v5;
        *((_QWORD *)v13 + 13) = v3;
        *((_DWORD *)v13 + 31) = v16;
        return result;
      }
      if ( v4 < v47 )
      {
        if ( v7 >= v1 )
        {
          if ( v7 < v2 )
          {
            v12 = EndMask[v7 & 7] & *(_BYTE *)((unsigned int)(v7 >> 3) + v5);
            goto LABEL_92;
          }
LABEL_55:
          v12 = *(_BYTE *)(v31 + v5);
          goto LABEL_92;
        }
        if ( v7 >= v2 )
          goto LABEL_55;
LABEL_65:
        v12 = v61 & *(_BYTE *)(v52 + v5);
        goto LABEL_92;
      }
      goto LABEL_92;
    }
    if ( (v7 & 7) != 0 )
    {
      if ( v7 < v1 )
      {
        if ( v7 < v2 )
          goto LABEL_47;
      }
      else if ( v7 < v2 )
      {
        *(_BYTE *)((unsigned int)v19 + v5) = v12 | *(_BYTE *)((unsigned int)v19 + v5) & ~EndMask[v7 & 7];
        v2 = v55;
        goto LABEL_47;
      }
      v31 = v62;
      *(_BYTE *)(v62 + v5) = v12 | *(_BYTE *)(v62 + v5) & v60;
      goto LABEL_48;
    }
LABEL_47:
    v31 = v62;
    goto LABEL_48;
  }
  if ( v4 < v47 && (v7 & 7) != 0 )
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
    *(_BYTE *)(v62 + v5) = v12 | *(_BYTE *)(v62 + v5) & v60;
  }
  return 0LL;
}
