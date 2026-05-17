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
        unsigned __int16 *Src,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
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
  __int64 v16; // r10
  char v17; // r13
  _DWORD *v19; // r15
  __int64 v20; // r14
  __int64 v22; // rdx
  void **v23; // r9
  unsigned __int64 v24; // r8
  __int64 v25; // rdi
  unsigned __int8 *v26; // r13
  unsigned __int16 *v27; // r15
  unsigned int v28; // r14d
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // ecx
  int v32; // r12d
  int v33; // r12d
  char *v34; // rdx
  char *v35; // rsi
  char *v36; // rsi
  char *v37; // rsi
  unsigned int v38; // esi
  _BYTE *v39; // rcx
  int v41; // ecx
  unsigned __int16 *v42; // rax
  int v43; // eax
  __int64 v44; // rcx
  unsigned __int16 *v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  int v48; // ecx
  int v49; // ecx
  unsigned int v50; // eax
  int v51; // ecx
  int v52; // ecx
  int v53; // ecx
  unsigned __int8 *v54; // rax
  int v55; // eax
  int v56; // eax
  int v57; // eax
  char v59; // [rsp+21h] [rbp-B8h]
  int v61; // [rsp+24h] [rbp-B5h]
  int v62; // [rsp+38h] [rbp-A1h] BYREF
  _BYTE *v63; // [rsp+40h] [rbp-99h]
  __int64 v64; // [rsp+48h] [rbp-91h]
  __int64 v65; // [rsp+50h] [rbp-89h]
  void *Srca; // [rsp+58h] [rbp-81h]
  __int64 v67; // [rsp+60h] [rbp-79h]
  __int64 v68; // [rsp+68h] [rbp-71h]
  __int64 v69; // [rsp+70h] [rbp-69h]
  unsigned __int8 *v70; // [rsp+78h] [rbp-61h]
  void *v71; // [rsp+80h] [rbp-59h]
  __int16 v72; // [rsp+88h] [rbp-51h] BYREF
  int v73; // [rsp+8Ah] [rbp-4Fh]
  __int16 v74; // [rsp+8Eh] [rbp-4Bh]
  int v75; // [rsp+90h] [rbp-49h]
  char v76[8]; // [rsp+B8h] [rbp-21h] BYREF
  int v77; // [rsp+C0h] [rbp-19h]

  v16 = a7;
  v17 = a2;
  v19 = a12;
  v20 = a13;
  v22 = a6;
  v70 = (unsigned __int8 *)a4;
  v23 = a11;
  if ( !a6 )
    v22 = a4;
  v24 = (unsigned __int64)a16;
  if ( !a7 )
    v16 = a5;
  v73 = 0;
  v67 = v16;
  v69 = a5;
  v65 = (__int64)a12;
  v64 = a13;
  v63 = a16;
  v59 = 0;
  v72 = 257;
  v74 = 768;
  v75 = 0;
  v68 = v22;
  *a15 = 0;
  if ( a14 )
    *a14 = 0;
  *a16 = 0;
  v25 = Src[1];
  if ( *(_BYTE *)Src > 0xAu && (unsigned __int8)(*(_BYTE *)Src - 13) > 1u )
  {
    if ( v25 > a13 + *(unsigned __int16 *)(a13 + 2) - (_QWORD)*a11 )
    {
      v39 = v63;
      *v63 = 1;
      goto LABEL_34;
    }
    memmove(*a11, Src, Src[1]);
    v23 = a11;
    goto LABEL_28;
  }
  v26 = 0LL;
  Srca = Src;
  v71 = 0LL;
  v61 = 0;
  if ( *(_BYTE *)Src <= 3u )
  {
    v27 = Src + 4;
    v28 = 8;
    goto LABEL_10;
  }
  if ( ((*(_BYTE *)Src - 9) & 0xFA) == 0 )
  {
    v27 = Src + 4;
    v28 = 8;
    v50 = 4 * *((unsigned __int8 *)Src + 9) + 8;
    v71 = (char *)Src + v50 + 8;
    v61 = v25 - v50 - 8;
    goto LABEL_10;
  }
  if ( *(_BYTE *)Src == 4 )
  {
    v26 = (unsigned __int8 *)(Src + 6);
    v28 = 12;
    v27 = &Src[2 * *((unsigned __int8 *)Src + 13) + 10];
    if ( !(unsigned __int8)RtlEqualPrefixSid(Src + 6, &v72, a16, a11) )
      goto LABEL_86;
    v51 = *((_DWORD *)Src + 5);
    if ( v51 )
    {
      v52 = v51 - 1;
      if ( v52 )
      {
        v53 = v52 - 1;
        if ( !v53 )
        {
          v54 = (unsigned __int8 *)v68;
          goto LABEL_80;
        }
        if ( v53 == 1 )
        {
          v54 = (unsigned __int8 *)v67;
LABEL_80:
          v26 = v54;
          v55 = v54[1];
          *a15 = 1;
          LODWORD(v25) = v25 + 4 * v55 - 4;
LABEL_91:
          v23 = a11;
          goto LABEL_10;
        }
        goto LABEL_85;
      }
      if ( !v69 )
      {
LABEL_85:
        if ( *a15 )
          goto LABEL_91;
LABEL_86:
        v57 = v26[1];
        v26 = 0LL;
        v28 = 4 * v57 + 20;
        goto LABEL_91;
      }
      v56 = *(unsigned __int8 *)(v69 + 1);
      v26 = (unsigned __int8 *)v69;
    }
    else
    {
      v26 = v70;
      v56 = v70[1];
    }
    *a15 = 1;
    LODWORD(v25) = v25 + 4 * v56 - 4;
    goto LABEL_85;
  }
  v24 = *((_DWORD *)Src + 2) & 1;
  v44 = (*((_DWORD *)Src + 2) & 2) != 0 ? 0x10 : 0;
  v27 = (unsigned __int16 *)((char *)&Src[8 * (*((_DWORD *)Src + 2) & 1) + 6] + v44);
  v28 = v44 + 12 + 16 * (*((_DWORD *)Src + 2) & 1);
  if ( (*((_DWORD *)Src + 2) & 2) != 0 )
    v45 = &Src[8 * (unsigned int)v24 + 6];
  else
    v45 = 0LL;
  if ( a14 && v45 )
  {
    v46 = a9;
    if ( !a9 || (v24 = 0LL, !a10) )
    {
LABEL_57:
      LODWORD(v25) = 0;
      goto LABEL_10;
    }
    while ( 1 )
    {
      v47 = *(_QWORD *)v45 - **(_QWORD **)v46;
      if ( *(_QWORD *)v45 == **(_QWORD **)v46 )
        v47 = *((_QWORD *)v45 + 1) - *(_QWORD *)(*(_QWORD *)v46 + 8LL);
      if ( !v47 )
        break;
      v24 = (unsigned int)(v24 + 1);
      v46 += 8LL;
      if ( (unsigned int)v24 >= a10 )
        goto LABEL_57;
    }
    *a14 = 1;
    if ( a3 )
    {
      v59 = 1;
      goto LABEL_10;
    }
    *a15 = 1;
    if ( (Src[4] & 1) != 0 )
    {
      v28 -= 16;
      LODWORD(v25) = v25 - 16;
      memmove(v76, Src, v28);
      v77 &= ~2u;
    }
    else
    {
      v28 -= 20;
      LODWORD(v25) = v25 - 20;
      memmove(v76, Src, v28);
      v76[0] = RtlBaseAceType[*(unsigned __int8 *)Src];
    }
    Srca = v76;
    goto LABEL_91;
  }
LABEL_10:
  if ( (_DWORD)v25 )
  {
    v62 = *((_DWORD *)Src + 1);
    RtlMapGenericMask(&v62, a8, v24, v23);
    if ( *(_BYTE *)Src <= 0xAu && (v31 = 1651, _bittest(&v31, *(unsigned __int8 *)Src)) )
      v32 = *(_DWORD *)(a8 + 12) & v62;
    else
      v32 = (*(_DWORD *)(a8 + 12) | 0x1000000) & v62;
    if ( v32 != *((_DWORD *)Src + 1) )
      *a15 = 1;
    v33 = v32 & 0x11FFFFF;
    if ( !v33 && !(unsigned __int8)RtlEqualPrefixSid(v27, &v72, v29, v30) )
    {
      v23 = a11;
      LODWORD(v25) = 0;
      goto LABEL_27;
    }
    if ( !(unsigned __int8)RtlEqualPrefixSid(v27, &v72, v29, v30) )
    {
LABEL_18:
      if ( v59 && *a15 )
      {
        if ( (Src[4] & 1) != 0 )
        {
          v28 -= 16;
          LODWORD(v25) = v25 - 16;
          memmove(v76, Src, v28);
          v77 &= ~2u;
          v34 = v76;
        }
        else
        {
          v28 -= 20;
          LODWORD(v25) = v25 - 20;
          memmove(v76, Src, v28);
          v34 = v76;
          v76[0] = RtlBaseAceType[*(unsigned __int8 *)Src];
        }
      }
      else
      {
        v34 = (char *)Srca;
      }
      v23 = a11;
      v35 = (char *)*a11;
      if ( !*a11 || (unsigned int)v25 > v64 + *(unsigned __int16 *)(v64 + 2) - (_QWORD)v35 )
      {
        v39 = v63;
        v20 = v64;
        v19 = (_DWORD *)v65;
        v17 = a2;
        *v63 = 1;
        goto LABEL_29;
      }
      memmove(*a11, v34, v28);
      v36 = &v35[v28];
      if ( v26 )
      {
        memmove(v36, v26, 4 * (unsigned int)v26[1] + 8);
        v36 += 4 * (unsigned int)v26[1] + 8;
      }
      memmove(v36, v27, 4 * (unsigned int)*((unsigned __int8 *)v27 + 1) + 8);
      v37 = &v36[4 * *((unsigned __int8 *)v27 + 1) + 8];
      if ( v71 && v61 > 0 )
      {
        memmove(v37, v71, v61);
        LODWORD(v37) = v61 + (_DWORD)v37;
      }
      v23 = a11;
      v38 = (_DWORD)v37 - *(_DWORD *)a11;
      if ( (unsigned int)v25 < v38 )
        return 0;
      LODWORD(v25) = v38;
      *((_WORD *)*a11 + 1) = v38;
      *((_DWORD *)*a11 + 1) = v33;
      goto LABEL_27;
    }
    v41 = *((_DWORD *)v27 + 2);
    if ( v41 )
    {
      v48 = v41 - 1;
      if ( v48 )
      {
        v49 = v48 - 1;
        if ( v49 )
        {
          if ( v49 != 1 )
            goto LABEL_18;
          v42 = (unsigned __int16 *)v67;
        }
        else
        {
          v42 = (unsigned __int16 *)v68;
        }
      }
      else
      {
        v42 = (unsigned __int16 *)v69;
        if ( !v69 )
          goto LABEL_18;
      }
    }
    else
    {
      v42 = (unsigned __int16 *)v70;
    }
    v27 = v42;
    v43 = *((unsigned __int8 *)v42 + 1);
    *a15 = 1;
    LODWORD(v25) = v25 + 4 * v43 - 4;
    goto LABEL_18;
  }
LABEL_27:
  v20 = v64;
  v19 = (_DWORD *)v65;
  v17 = a2;
LABEL_28:
  v39 = v63;
LABEL_29:
  if ( !*v39 && (_DWORD)v25 )
  {
    *((_BYTE *)*v23 + 1) &= 0xE0u;
    if ( v17 )
      *((_BYTE *)*v23 + 1) |= 0x10u;
    ++*(_WORD *)(v20 + 4);
  }
LABEL_34:
  if ( (unsigned int)v25 > 0xFFFF )
    return 0;
  if ( !*v39 )
    *v23 = (char *)*v23 + (unsigned int)v25;
  *v19 = v25;
  return 1;
}
