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
        PGENERIC_MAPPING GenericMapping,
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
  __int64 v23; // rdi
  unsigned __int8 *v24; // r13
  unsigned __int8 *v25; // r12
  unsigned int v26; // esi
  unsigned __int8 *v27; // r15
  int v28; // ecx
  ACCESS_MASK GenericAll; // r14d
  ACCESS_MASK v30; // r14d
  int v31; // r14d
  _BYTE *v32; // rax
  char *v33; // r12
  char *v34; // rbx
  char *v35; // rsi
  int v36; // eax
  int v37; // ecx
  _BYTE *v38; // rcx
  int v40; // ecx
  unsigned __int8 *v41; // rax
  int v42; // edi
  unsigned int v43; // eax
  int v44; // ecx
  int v45; // ecx
  int v46; // ecx
  unsigned __int8 *v47; // rax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  __int64 v51; // r8
  __int64 v52; // rcx
  unsigned __int16 *v53; // rdx
  __int64 v54; // rcx
  unsigned int v55; // r8d
  __int64 v56; // rax
  int v57; // ecx
  int v58; // ecx
  char v60; // [rsp+21h] [rbp-C8h]
  int v62; // [rsp+24h] [rbp-C5h]
  unsigned __int8 *Srca; // [rsp+38h] [rbp-B1h]
  ACCESS_MASK AccessMask[2]; // [rsp+50h] [rbp-99h] BYREF
  __int64 v65; // [rsp+58h] [rbp-91h]
  __int64 v66; // [rsp+60h] [rbp-89h]
  __int64 v67; // [rsp+68h] [rbp-81h]
  __int64 v68; // [rsp+70h] [rbp-79h]
  unsigned __int8 *v69; // [rsp+78h] [rbp-71h]
  void *v70; // [rsp+80h] [rbp-69h]
  __int64 v71; // [rsp+88h] [rbp-61h]
  __int16 Sid2; // [rsp+90h] [rbp-59h] BYREF
  int v73; // [rsp+92h] [rbp-57h]
  __int16 v74; // [rsp+96h] [rbp-53h]
  int v75; // [rsp+98h] [rbp-51h]
  char v76[8]; // [rsp+C0h] [rbp-29h] BYREF
  int v77; // [rsp+C8h] [rbp-21h]

  v17 = a6;
  v18 = a12;
  v19 = a2;
  v20 = a13;
  if ( !a6 )
    v17 = a4;
  v21 = a7;
  v69 = (unsigned __int8 *)a4;
  v22 = a11;
  if ( !a7 )
    v21 = (__int64)a5;
  v73 = 0;
  v67 = v21;
  v71 = (__int64)a5;
  v66 = (__int64)a12;
  v65 = a13;
  *(_QWORD *)AccessMask = a14;
  v60 = 0;
  Sid2 = 257;
  v74 = 768;
  v75 = 0;
  v68 = v17;
  *a15 = 0;
  if ( a14 )
    *a14 = 0;
  *a16 = 0;
  v23 = *((unsigned __int16 *)Src + 1);
  if ( *Src > 0xAu && (unsigned __int8)(*Src - 13) > 1u )
  {
    if ( v23 > a13 + *(unsigned __int16 *)(a13 + 2) - (_QWORD)*a11 )
    {
      v38 = a16;
      *a16 = 1;
      goto LABEL_35;
    }
    memmove(*a11, Src, *((unsigned __int16 *)Src + 1));
    v22 = a11;
    goto LABEL_29;
  }
  v24 = 0LL;
  v70 = 0LL;
  v62 = 0;
  if ( *Src <= 3u )
  {
    v25 = Src + 8;
    v26 = 8;
LABEL_10:
    Srca = v25;
    v27 = Src;
    goto LABEL_11;
  }
  if ( ((*Src - 9) & 0xFA) == 0 )
  {
    v25 = Src + 8;
    v26 = 8;
    v43 = 4 * Src[9] + 8;
    v70 = &Src[v43 + 8];
    v62 = v23 - v43 - 8;
    goto LABEL_10;
  }
  if ( *Src == 4 )
  {
    v24 = Src + 12;
    v26 = 12;
    v25 = &Src[4 * Src[13] + 20];
    Srca = v25;
    if ( !RtlEqualPrefixSid(Src + 12, &Sid2) )
      goto LABEL_66;
    v44 = *((_DWORD *)Src + 5);
    if ( v44 )
    {
      v45 = v44 - 1;
      if ( v45 )
      {
        v46 = v45 - 1;
        if ( !v46 )
        {
          v47 = (unsigned __int8 *)v68;
          goto LABEL_60;
        }
        if ( v46 == 1 )
        {
          v47 = (unsigned __int8 *)v67;
LABEL_60:
          v24 = v47;
          v48 = v47[1];
          *a15 = 1;
          LODWORD(v23) = v23 + 4 * v48 - 4;
LABEL_67:
          v27 = Src;
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
        v50 = v24[1];
        v24 = 0LL;
        v26 = 4 * v50 + 20;
        goto LABEL_67;
      }
      v49 = a5[1];
      v24 = a5;
    }
    else
    {
      v24 = v69;
      v49 = v69[1];
    }
    *a15 = 1;
    LODWORD(v23) = v23 + 4 * v49 - 4;
    goto LABEL_65;
  }
  v51 = 16 * (*((_DWORD *)Src + 2) & 1LL);
  v52 = (*((_DWORD *)Src + 2) & 2) != 0 ? 0x10 : 0;
  v25 = &Src[v52 + 12 + v51];
  Srca = v25;
  v26 = v51 + v52 + 12;
  if ( (*((_DWORD *)Src + 2) & 2) != 0 )
    v53 = (unsigned __int16 *)&Src[v51 + 12];
  else
    v53 = 0LL;
  v27 = Src;
  if ( a14 && v53 )
  {
    v54 = a9;
    if ( !a9 || (v55 = 0, !a10) )
    {
LABEL_79:
      LODWORD(v23) = 0;
      goto LABEL_11;
    }
    while ( 1 )
    {
      v56 = *(_QWORD *)v53 - **(_QWORD **)v54;
      if ( *(_QWORD *)v53 == **(_QWORD **)v54 )
        v56 = *((_QWORD *)v53 + 1) - *(_QWORD *)(*(_QWORD *)v54 + 8LL);
      if ( !v56 )
        break;
      ++v55;
      v54 += 8LL;
      if ( v55 >= a10 )
        goto LABEL_79;
    }
    **(_BYTE **)AccessMask = 1;
    if ( !a3 )
    {
      *a15 = 1;
      if ( (Src[8] & 1) != 0 )
      {
        v26 -= 16;
        LODWORD(v23) = v23 - 16;
        memmove(v76, Src, v26);
        v77 &= ~2u;
      }
      else
      {
        v26 -= 20;
        LODWORD(v23) = v23 - 20;
        memmove(v76, Src, v26);
        v76[0] = byte_180120D70[*Src];
      }
      v27 = (unsigned __int8 *)v76;
      goto LABEL_85;
    }
    v60 = 1;
  }
LABEL_11:
  if ( (_DWORD)v23 )
  {
    AccessMask[0] = *((_DWORD *)Src + 1);
    RtlMapGenericMask(AccessMask, GenericMapping);
    if ( *Src <= 0xAu && (v28 = 1651, _bittest(&v28, *Src)) )
      GenericAll = GenericMapping->GenericAll;
    else
      GenericAll = GenericMapping->GenericAll | 0x1000000;
    v30 = AccessMask[0] & GenericAll;
    if ( v30 != *((_DWORD *)Src + 1) )
      *a15 = 1;
    v31 = v30 & 0x11FFFFF;
    if ( !v31 && !RtlEqualPrefixSid(v25, &Sid2) )
    {
      v22 = a11;
      LODWORD(v23) = 0;
      goto LABEL_28;
    }
    if ( !RtlEqualPrefixSid(v25, &Sid2) )
      goto LABEL_19;
    v40 = *((_DWORD *)v25 + 2);
    if ( !v40 )
    {
      v41 = v69;
LABEL_41:
      Srca = v41;
      v42 = v23 + 4 * v41[1];
      v32 = a15;
      LODWORD(v23) = v42 - 4;
      *a15 = 1;
LABEL_20:
      if ( v60 && *v32 )
      {
        if ( (Src[8] & 1) != 0 )
        {
          v26 -= 16;
          LODWORD(v23) = v23 - 16;
          memmove(v76, Src, v26);
          v77 &= ~2u;
        }
        else
        {
          v26 -= 20;
          LODWORD(v23) = v23 - 20;
          memmove(v76, Src, v26);
          v76[0] = byte_180120D70[*Src];
        }
        v27 = (unsigned __int8 *)v76;
      }
      v22 = a11;
      v33 = (char *)*a11;
      if ( !*a11 || (unsigned int)v23 > v65 + *(unsigned __int16 *)(v65 + 2) - (_QWORD)v33 )
      {
        v38 = a16;
        v20 = v65;
        v18 = (_DWORD *)v66;
        v19 = a2;
        *a16 = 1;
        goto LABEL_30;
      }
      memmove(*a11, v27, v26);
      v34 = &v33[v26];
      if ( v24 )
      {
        memmove(v34, v24, 4 * (unsigned int)v24[1] + 8);
        v34 += 4 * (unsigned int)v24[1] + 8;
      }
      memmove(v34, Srca, 4 * (unsigned int)Srca[1] + 8);
      v35 = &v34[4 * Srca[1] + 8];
      v36 = (_DWORD)v34 + 4 * Srca[1] + 8;
      v37 = v36;
      if ( v70 && v62 > 0 )
      {
        memmove(v35, v70, v62);
        v36 = (_DWORD)v35 + v62;
        v37 = (_DWORD)v35 + v62;
      }
      v22 = a11;
      if ( (unsigned int)v23 < v36 - *(_DWORD *)a11 )
        return 0;
      LODWORD(v23) = v37 - *(_DWORD *)a11;
      *((_WORD *)*a11 + 1) = v37 - *(_WORD *)a11;
      *((_DWORD *)*a11 + 1) = v31;
      goto LABEL_28;
    }
    v57 = v40 - 1;
    if ( v57 )
    {
      v58 = v57 - 1;
      if ( !v58 )
      {
        v41 = (unsigned __int8 *)v68;
        goto LABEL_41;
      }
      if ( v58 == 1 )
      {
        v41 = (unsigned __int8 *)v67;
        goto LABEL_41;
      }
    }
    else
    {
      v41 = (unsigned __int8 *)v71;
      if ( v71 )
        goto LABEL_41;
    }
LABEL_19:
    v32 = a15;
    goto LABEL_20;
  }
LABEL_28:
  v20 = v65;
  v18 = (_DWORD *)v66;
  v19 = a2;
LABEL_29:
  v38 = a16;
LABEL_30:
  if ( !*v38 && (_DWORD)v23 )
  {
    *((_BYTE *)*v22 + 1) &= 0xE0u;
    if ( v19 )
      *((_BYTE *)*v22 + 1) |= 0x10u;
    ++*(_WORD *)(v20 + 4);
  }
LABEL_35:
  if ( (unsigned int)v23 > 0xFFFF )
    return 0;
  if ( !*v38 )
    *v22 = (char *)*v22 + (unsigned int)v23;
  *v18 = v23;
  return 1;
}
