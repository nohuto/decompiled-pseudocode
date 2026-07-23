/*
 * XREFs of RtlpCopyEffectiveAce @ 0x180055F34
 * Callers:
 *     RtlpGenerateInheritedAce @ 0x180055AD4 (RtlpGenerateInheritedAce.c)
 *     RtlpCopyAces @ 0x180056560 (RtlpCopyAces.c)
 * Callees:
 *     RtlEqualPrefixSid @ 0x180056400 (RtlEqualPrefixSid.c)
 *     RtlMapGenericMask @ 0x1800564C0 (RtlMapGenericMask.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 */

char __fastcall RtlpCopyEffectiveAce(
        ACCESS_MASK *Src,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
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
  __int64 v16; // r10
  char v17; // r13
  _DWORD *v19; // r15
  __int64 v20; // r14
  __int64 v22; // rdx
  void **v23; // r9
  __int64 v24; // rdi
  unsigned __int8 *v25; // r13
  ACCESS_MASK *v26; // r15
  unsigned int v27; // r14d
  int v28; // ecx
  unsigned int v29; // r12d
  int v30; // r12d
  char *v31; // rdx
  char *v32; // rsi
  char *v33; // rsi
  char *v34; // rsi
  unsigned int v35; // esi
  _BYTE *v36; // rcx
  ACCESS_MASK v38; // ecx
  ACCESS_MASK *v39; // rax
  int v40; // eax
  __int64 v41; // rcx
  ACCESS_MASK *v42; // rdx
  __int64 v43; // rcx
  unsigned int v44; // r8d
  __int64 v45; // rax
  ACCESS_MASK v46; // ecx
  ACCESS_MASK v47; // ecx
  unsigned int v48; // eax
  ACCESS_MASK v49; // ecx
  ACCESS_MASK v50; // ecx
  ACCESS_MASK v51; // ecx
  unsigned __int8 *v52; // rax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  char v57; // [rsp+21h] [rbp-B8h]
  int v59; // [rsp+24h] [rbp-B5h]
  ACCESS_MASK AccessMask; // [rsp+38h] [rbp-A1h] BYREF
  _BYTE *v61; // [rsp+40h] [rbp-99h]
  __int64 v62; // [rsp+48h] [rbp-91h]
  __int64 v63; // [rsp+50h] [rbp-89h]
  void *Srca; // [rsp+58h] [rbp-81h]
  __int64 v65; // [rsp+60h] [rbp-79h]
  __int64 v66; // [rsp+68h] [rbp-71h]
  __int64 v67; // [rsp+70h] [rbp-69h]
  unsigned __int8 *v68; // [rsp+78h] [rbp-61h]
  void *v69; // [rsp+80h] [rbp-59h]
  __int16 Sid2; // [rsp+88h] [rbp-51h] BYREF
  int v71; // [rsp+8Ah] [rbp-4Fh]
  __int16 v72; // [rsp+8Eh] [rbp-4Bh]
  int v73; // [rsp+90h] [rbp-49h]
  char v74[8]; // [rsp+B8h] [rbp-21h] BYREF
  int v75; // [rsp+C0h] [rbp-19h]

  v16 = a7;
  v17 = a2;
  v19 = a12;
  v20 = a13;
  v22 = a6;
  v68 = (unsigned __int8 *)a4;
  v23 = a11;
  if ( !a6 )
    v22 = a4;
  if ( !a7 )
    v16 = a5;
  v71 = 0;
  v65 = v16;
  v67 = a5;
  v63 = (__int64)a12;
  v62 = a13;
  v61 = a16;
  v57 = 0;
  Sid2 = 257;
  v72 = 768;
  v73 = 0;
  v66 = v22;
  *a15 = 0;
  if ( a14 )
    *a14 = 0;
  *a16 = 0;
  v24 = *((unsigned __int16 *)Src + 1);
  if ( *(_BYTE *)Src > 0xAu && (unsigned __int8)(*(_BYTE *)Src - 13) > 1u )
  {
    if ( v24 > a13 + *(unsigned __int16 *)(a13 + 2) - (_QWORD)*a11 )
    {
      v36 = v61;
      *v61 = 1;
      goto LABEL_34;
    }
    memmove(*a11, Src, *((unsigned __int16 *)Src + 1));
    v23 = a11;
    goto LABEL_28;
  }
  v25 = 0LL;
  Srca = Src;
  v69 = 0LL;
  v59 = 0;
  if ( *(_BYTE *)Src <= 3u )
  {
    v26 = Src + 2;
    v27 = 8;
    goto LABEL_10;
  }
  if ( ((*(_BYTE *)Src - 9) & 0xFA) == 0 )
  {
    v26 = Src + 2;
    v27 = 8;
    v48 = 4 * *((unsigned __int8 *)Src + 9) + 8;
    v69 = (char *)Src + v48 + 8;
    v59 = v24 - v48 - 8;
    goto LABEL_10;
  }
  if ( *(_BYTE *)Src == 4 )
  {
    v25 = (unsigned __int8 *)(Src + 3);
    v27 = 12;
    v26 = &Src[*((unsigned __int8 *)Src + 13) + 5];
    if ( !RtlEqualPrefixSid(Src + 3, &Sid2) )
      goto LABEL_86;
    v49 = Src[5];
    if ( v49 )
    {
      v50 = v49 - 1;
      if ( v50 )
      {
        v51 = v50 - 1;
        if ( !v51 )
        {
          v52 = (unsigned __int8 *)v66;
          goto LABEL_80;
        }
        if ( v51 == 1 )
        {
          v52 = (unsigned __int8 *)v65;
LABEL_80:
          v25 = v52;
          v53 = v52[1];
          *a15 = 1;
          LODWORD(v24) = v24 + 4 * v53 - 4;
LABEL_91:
          v23 = a11;
          goto LABEL_10;
        }
        goto LABEL_85;
      }
      if ( !v67 )
      {
LABEL_85:
        if ( *a15 )
          goto LABEL_91;
LABEL_86:
        v55 = v25[1];
        v25 = 0LL;
        v27 = 4 * v55 + 20;
        goto LABEL_91;
      }
      v54 = *(unsigned __int8 *)(v67 + 1);
      v25 = (unsigned __int8 *)v67;
    }
    else
    {
      v25 = v68;
      v54 = v68[1];
    }
    *a15 = 1;
    LODWORD(v24) = v24 + 4 * v54 - 4;
    goto LABEL_85;
  }
  v41 = (Src[2] & 2) != 0 ? 0x10 : 0;
  v26 = (ACCESS_MASK *)((char *)&Src[4 * (Src[2] & 1) + 3] + v41);
  v27 = v41 + 12 + 16 * (Src[2] & 1);
  if ( (Src[2] & 2) != 0 )
    v42 = &Src[4 * (Src[2] & 1) + 3];
  else
    v42 = 0LL;
  if ( a14 && v42 )
  {
    v43 = a9;
    if ( !a9 || (v44 = 0, !a10) )
    {
LABEL_57:
      LODWORD(v24) = 0;
      goto LABEL_10;
    }
    while ( 1 )
    {
      v45 = *(_QWORD *)v42 - **(_QWORD **)v43;
      if ( *(_QWORD *)v42 == **(_QWORD **)v43 )
        v45 = *((_QWORD *)v42 + 1) - *(_QWORD *)(*(_QWORD *)v43 + 8LL);
      if ( !v45 )
        break;
      ++v44;
      v43 += 8LL;
      if ( v44 >= a10 )
        goto LABEL_57;
    }
    *a14 = 1;
    if ( a3 )
    {
      v57 = 1;
      goto LABEL_10;
    }
    *a15 = 1;
    if ( (Src[2] & 1) != 0 )
    {
      v27 -= 16;
      LODWORD(v24) = v24 - 16;
      memmove(v74, Src, v27);
      v75 &= ~2u;
    }
    else
    {
      v27 -= 20;
      LODWORD(v24) = v24 - 20;
      memmove(v74, Src, v27);
      v74[0] = RtlBaseAceType[*(unsigned __int8 *)Src];
    }
    Srca = v74;
    goto LABEL_91;
  }
LABEL_10:
  if ( (_DWORD)v24 )
  {
    AccessMask = Src[1];
    RtlMapGenericMask(&AccessMask, GenericMapping);
    if ( *(_BYTE *)Src <= 0xAu && (v28 = 1651, _bittest(&v28, *(unsigned __int8 *)Src)) )
      v29 = GenericMapping->GenericAll & AccessMask;
    else
      v29 = (GenericMapping->GenericAll | 0x1000000) & AccessMask;
    if ( v29 != Src[1] )
      *a15 = 1;
    v30 = v29 & 0x11FFFFF;
    if ( !v30 && !RtlEqualPrefixSid(v26, &Sid2) )
    {
      v23 = a11;
      LODWORD(v24) = 0;
      goto LABEL_27;
    }
    if ( !RtlEqualPrefixSid(v26, &Sid2) )
    {
LABEL_18:
      if ( v57 && *a15 )
      {
        if ( (Src[2] & 1) != 0 )
        {
          v27 -= 16;
          LODWORD(v24) = v24 - 16;
          memmove(v74, Src, v27);
          v75 &= ~2u;
          v31 = v74;
        }
        else
        {
          v27 -= 20;
          LODWORD(v24) = v24 - 20;
          memmove(v74, Src, v27);
          v31 = v74;
          v74[0] = RtlBaseAceType[*(unsigned __int8 *)Src];
        }
      }
      else
      {
        v31 = (char *)Srca;
      }
      v23 = a11;
      v32 = (char *)*a11;
      if ( !*a11 || (unsigned int)v24 > v62 + *(unsigned __int16 *)(v62 + 2) - (_QWORD)v32 )
      {
        v36 = v61;
        v20 = v62;
        v19 = (_DWORD *)v63;
        v17 = a2;
        *v61 = 1;
        goto LABEL_29;
      }
      memmove(*a11, v31, v27);
      v33 = &v32[v27];
      if ( v25 )
      {
        memmove(v33, v25, 4 * (unsigned int)v25[1] + 8);
        v33 += 4 * (unsigned int)v25[1] + 8;
      }
      memmove(v33, v26, 4 * (unsigned int)*((unsigned __int8 *)v26 + 1) + 8);
      v34 = &v33[4 * *((unsigned __int8 *)v26 + 1) + 8];
      if ( v69 && v59 > 0 )
      {
        memmove(v34, v69, v59);
        LODWORD(v34) = v59 + (_DWORD)v34;
      }
      v23 = a11;
      v35 = (_DWORD)v34 - *(_DWORD *)a11;
      if ( (unsigned int)v24 < v35 )
        return 0;
      LODWORD(v24) = v35;
      *((_WORD *)*a11 + 1) = v35;
      *((_DWORD *)*a11 + 1) = v30;
      goto LABEL_27;
    }
    v38 = v26[2];
    if ( v38 )
    {
      v46 = v38 - 1;
      if ( v46 )
      {
        v47 = v46 - 1;
        if ( v47 )
        {
          if ( v47 != 1 )
            goto LABEL_18;
          v39 = (ACCESS_MASK *)v65;
        }
        else
        {
          v39 = (ACCESS_MASK *)v66;
        }
      }
      else
      {
        v39 = (ACCESS_MASK *)v67;
        if ( !v67 )
          goto LABEL_18;
      }
    }
    else
    {
      v39 = (ACCESS_MASK *)v68;
    }
    v26 = v39;
    v40 = *((unsigned __int8 *)v39 + 1);
    *a15 = 1;
    LODWORD(v24) = v24 + 4 * v40 - 4;
    goto LABEL_18;
  }
LABEL_27:
  v20 = v62;
  v19 = (_DWORD *)v63;
  v17 = a2;
LABEL_28:
  v36 = v61;
LABEL_29:
  if ( !*v36 && (_DWORD)v24 )
  {
    *((_BYTE *)*v23 + 1) &= 0xE0u;
    if ( v17 )
      *((_BYTE *)*v23 + 1) |= 0x10u;
    ++*(_WORD *)(v20 + 4);
  }
LABEL_34:
  if ( (unsigned int)v24 > 0xFFFF )
    return 0;
  if ( !*v36 )
    *v23 = (char *)*v23 + (unsigned int)v24;
  *v19 = v24;
  return 1;
}
