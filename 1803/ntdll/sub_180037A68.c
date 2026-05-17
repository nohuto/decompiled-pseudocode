/*
 * XREFs of sub_180037A68 @ 0x180037A68
 * Callers:
 *     sub_18003715C @ 0x18003715C (sub_18003715C.c)
 *     sub_180071344 @ 0x180071344 (sub_180071344.c)
 * Callees:
 *     RtlEqualPrefixSid @ 0x180037E30 (RtlEqualPrefixSid.c)
 *     RtlMapGenericMask @ 0x180037EF0 (RtlMapGenericMask.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

char __fastcall sub_180037A68(
        unsigned __int8 *Src,
        char a2,
        char a3,
        __int64 a4,
        unsigned __int8 *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        unsigned int a10,
        void **a11,
        _DWORD *a12,
        __int64 a13,
        _BYTE *a14,
        _BYTE *a15,
        _BYTE *a16)
{
  __int64 v17; // rcx
  _DWORD *v18; // r12
  char v19; // r13
  __int64 v20; // rsi
  __int64 v21; // rdx
  void **v22; // r9
  __int64 v23; // r8
  __int64 v24; // rdi
  unsigned __int8 *v25; // r13
  unsigned __int8 *v26; // r12
  unsigned int v27; // esi
  unsigned __int8 *v28; // r15
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // ecx
  int v32; // r14d
  unsigned int v33; // r14d
  int v34; // r14d
  _BYTE *v35; // rax
  char *v36; // r12
  char *v37; // rbx
  char *v38; // rsi
  int v39; // eax
  int v40; // ecx
  _BYTE *v41; // rcx
  int v43; // ecx
  unsigned __int8 *v44; // rax
  int v45; // edi
  unsigned int v46; // eax
  int v47; // ecx
  int v48; // ecx
  int v49; // ecx
  unsigned __int8 *v50; // rax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  __int64 v54; // rcx
  unsigned __int8 *v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  int v58; // ecx
  int v59; // ecx
  char v61; // [rsp+21h] [rbp-C8h]
  int v63; // [rsp+24h] [rbp-C5h]
  unsigned __int8 *Srca; // [rsp+38h] [rbp-B1h]
  _BYTE *v65; // [rsp+50h] [rbp-99h] BYREF
  __int64 v66; // [rsp+58h] [rbp-91h]
  __int64 v67; // [rsp+60h] [rbp-89h]
  __int64 v68; // [rsp+68h] [rbp-81h]
  __int64 v69; // [rsp+70h] [rbp-79h]
  unsigned __int8 *v70; // [rsp+78h] [rbp-71h]
  void *v71; // [rsp+80h] [rbp-69h]
  __int64 v72; // [rsp+88h] [rbp-61h]
  __int16 v73; // [rsp+90h] [rbp-59h] BYREF
  int v74; // [rsp+92h] [rbp-57h]
  __int16 v75; // [rsp+96h] [rbp-53h]
  int v76; // [rsp+98h] [rbp-51h]
  char v77[8]; // [rsp+C0h] [rbp-29h] BYREF
  int v78; // [rsp+C8h] [rbp-21h]

  v17 = a6;
  v18 = a12;
  v19 = a2;
  v20 = a13;
  if ( !a6 )
    v17 = a4;
  v21 = a7;
  v70 = (unsigned __int8 *)a4;
  v22 = a11;
  if ( !a7 )
    v21 = (__int64)a5;
  v23 = (__int64)a16;
  v74 = 0;
  v68 = v21;
  v72 = (__int64)a5;
  v67 = (__int64)a12;
  v66 = a13;
  v65 = a14;
  v61 = 0;
  v73 = 257;
  v75 = 768;
  v76 = 0;
  v69 = v17;
  *a15 = 0;
  if ( a14 )
    *a14 = 0;
  *a16 = 0;
  v24 = *((unsigned __int16 *)Src + 1);
  if ( *Src > 0xAu && (unsigned __int8)(*Src - 13) > 1u )
  {
    if ( v24 > a13 + *(unsigned __int16 *)(a13 + 2) - (_QWORD)*a11 )
    {
      v41 = a16;
      *a16 = 1;
      goto LABEL_35;
    }
    memmove(*a11, Src, *((unsigned __int16 *)Src + 1));
    v22 = a11;
    goto LABEL_29;
  }
  v25 = 0LL;
  v71 = 0LL;
  v63 = 0;
  if ( *Src <= 3u )
  {
    v26 = Src + 8;
    v27 = 8;
LABEL_10:
    Srca = v26;
    v28 = Src;
    goto LABEL_11;
  }
  if ( ((*Src - 9) & 0xFA) == 0 )
  {
    v26 = Src + 8;
    v27 = 8;
    v46 = 4 * Src[9] + 8;
    v71 = &Src[v46 + 8];
    v63 = v24 - v46 - 8;
    goto LABEL_10;
  }
  if ( *Src == 4 )
  {
    v25 = Src + 12;
    v27 = 12;
    v26 = &Src[4 * Src[13] + 20];
    Srca = v26;
    if ( !(unsigned __int8)RtlEqualPrefixSid(Src + 12, &v73, a16, a11) )
      goto LABEL_66;
    v47 = *((_DWORD *)Src + 5);
    if ( v47 )
    {
      v48 = v47 - 1;
      if ( v48 )
      {
        v49 = v48 - 1;
        if ( !v49 )
        {
          v50 = (unsigned __int8 *)v69;
          goto LABEL_60;
        }
        if ( v49 == 1 )
        {
          v50 = (unsigned __int8 *)v68;
LABEL_60:
          v25 = v50;
          v51 = v50[1];
          *a15 = 1;
          LODWORD(v24) = v24 + 4 * v51 - 4;
LABEL_67:
          v28 = Src;
LABEL_85:
          v22 = a11;
          goto LABEL_11;
        }
        goto LABEL_65;
      }
      if ( !a5 )
      {
LABEL_65:
        if ( *a15 )
          goto LABEL_67;
LABEL_66:
        v53 = v25[1];
        v25 = 0LL;
        v27 = 4 * v53 + 20;
        goto LABEL_67;
      }
      v52 = a5[1];
      v25 = a5;
    }
    else
    {
      v25 = v70;
      v52 = v70[1];
    }
    *a15 = 1;
    LODWORD(v24) = v24 + 4 * v52 - 4;
    goto LABEL_65;
  }
  v23 = 16 * (*((_DWORD *)Src + 2) & 1LL);
  v54 = (*((_DWORD *)Src + 2) & 2) != 0 ? 0x10 : 0;
  v26 = &Src[v54 + 12 + v23];
  Srca = v26;
  v27 = v23 + v54 + 12;
  if ( (*((_DWORD *)Src + 2) & 2) != 0 )
    v55 = &Src[v23 + 12];
  else
    v55 = 0LL;
  v28 = Src;
  if ( a14 && v55 )
  {
    v56 = a9;
    if ( !a9 || (v23 = 0LL, !a10) )
    {
LABEL_79:
      LODWORD(v24) = 0;
      goto LABEL_11;
    }
    while ( 1 )
    {
      v57 = *(_QWORD *)v55 - **(_QWORD **)v56;
      if ( *(_QWORD *)v55 == **(_QWORD **)v56 )
        v57 = *((_QWORD *)v55 + 1) - *(_QWORD *)(*(_QWORD *)v56 + 8LL);
      if ( !v57 )
        break;
      v23 = (unsigned int)(v23 + 1);
      v56 += 8LL;
      if ( (unsigned int)v23 >= a10 )
        goto LABEL_79;
    }
    *v65 = 1;
    if ( !a3 )
    {
      *a15 = 1;
      if ( (Src[8] & 1) != 0 )
      {
        v27 -= 16;
        LODWORD(v24) = v24 - 16;
        memmove(v77, Src, v27);
        v78 &= ~2u;
      }
      else
      {
        v27 -= 20;
        LODWORD(v24) = v24 - 20;
        memmove(v77, Src, v27);
        v77[0] = byte_180120D70[*Src];
      }
      v28 = (unsigned __int8 *)v77;
      goto LABEL_85;
    }
    v61 = 1;
  }
LABEL_11:
  if ( (_DWORD)v24 )
  {
    LODWORD(v65) = *((_DWORD *)Src + 1);
    RtlMapGenericMask(&v65, a8, v23, v22);
    if ( *Src <= 0xAu && (v31 = 1651, _bittest(&v31, *Src)) )
      v32 = *(_DWORD *)(a8 + 12);
    else
      v32 = *(_DWORD *)(a8 + 12) | 0x1000000;
    v33 = (unsigned int)v65 & v32;
    if ( v33 != *((_DWORD *)Src + 1) )
      *a15 = 1;
    v34 = v33 & 0x11FFFFF;
    if ( !v34 && !(unsigned __int8)RtlEqualPrefixSid(v26, &v73, v29, v30) )
    {
      v22 = a11;
      LODWORD(v24) = 0;
      goto LABEL_28;
    }
    if ( !(unsigned __int8)RtlEqualPrefixSid(v26, &v73, v29, v30) )
      goto LABEL_19;
    v43 = *((_DWORD *)v26 + 2);
    if ( !v43 )
    {
      v44 = v70;
LABEL_41:
      Srca = v44;
      v45 = v24 + 4 * v44[1];
      v35 = a15;
      LODWORD(v24) = v45 - 4;
      *a15 = 1;
LABEL_20:
      if ( v61 && *v35 )
      {
        if ( (Src[8] & 1) != 0 )
        {
          v27 -= 16;
          LODWORD(v24) = v24 - 16;
          memmove(v77, Src, v27);
          v78 &= ~2u;
        }
        else
        {
          v27 -= 20;
          LODWORD(v24) = v24 - 20;
          memmove(v77, Src, v27);
          v77[0] = byte_180120D70[*Src];
        }
        v28 = (unsigned __int8 *)v77;
      }
      v22 = a11;
      v36 = (char *)*a11;
      if ( !*a11 || (unsigned int)v24 > v66 + *(unsigned __int16 *)(v66 + 2) - (_QWORD)v36 )
      {
        v41 = a16;
        v20 = v66;
        v18 = (_DWORD *)v67;
        v19 = a2;
        *a16 = 1;
        goto LABEL_30;
      }
      memmove(*a11, v28, v27);
      v37 = &v36[v27];
      if ( v25 )
      {
        memmove(v37, v25, 4 * (unsigned int)v25[1] + 8);
        v37 += 4 * (unsigned int)v25[1] + 8;
      }
      memmove(v37, Srca, 4 * (unsigned int)Srca[1] + 8);
      v38 = &v37[4 * Srca[1] + 8];
      v39 = (_DWORD)v37 + 4 * Srca[1] + 8;
      v40 = v39;
      if ( v71 && v63 > 0 )
      {
        memmove(v38, v71, v63);
        v39 = (_DWORD)v38 + v63;
        v40 = (_DWORD)v38 + v63;
      }
      v22 = a11;
      if ( (unsigned int)v24 < v39 - *(_DWORD *)a11 )
        return 0;
      LODWORD(v24) = v40 - *(_DWORD *)a11;
      *((_WORD *)*a11 + 1) = v40 - *(_WORD *)a11;
      *((_DWORD *)*a11 + 1) = v34;
      goto LABEL_28;
    }
    v58 = v43 - 1;
    if ( v58 )
    {
      v59 = v58 - 1;
      if ( !v59 )
      {
        v44 = (unsigned __int8 *)v69;
        goto LABEL_41;
      }
      if ( v59 == 1 )
      {
        v44 = (unsigned __int8 *)v68;
        goto LABEL_41;
      }
    }
    else
    {
      v44 = (unsigned __int8 *)v72;
      if ( v72 )
        goto LABEL_41;
    }
LABEL_19:
    v35 = a15;
    goto LABEL_20;
  }
LABEL_28:
  v20 = v66;
  v18 = (_DWORD *)v67;
  v19 = a2;
LABEL_29:
  v41 = a16;
LABEL_30:
  if ( !*v41 && (_DWORD)v24 )
  {
    *((_BYTE *)*v22 + 1) &= 0xE0u;
    if ( v19 )
      *((_BYTE *)*v22 + 1) |= 0x10u;
    ++*(_WORD *)(v20 + 4);
  }
LABEL_35:
  if ( (unsigned int)v24 > 0xFFFF )
    return 0;
  if ( !*v41 )
    *v22 = (char *)*v22 + (unsigned int)v24;
  *v18 = v24;
  return 1;
}
