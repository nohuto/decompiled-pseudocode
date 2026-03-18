/*
 * XREFs of RtlpCopyEffectiveAce @ 0x1404C8940
 * Callers:
 *     RtlpCopyAces @ 0x1404C6710 (RtlpCopyAces.c)
 *     RtlpGenerateInheritedAce @ 0x1404C8420 (RtlpGenerateInheritedAce.c)
 * Callees:
 *     RtlLengthSid @ 0x14009FED0 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     RtlEqualPrefixSid @ 0x1404C8D3C (RtlEqualPrefixSid.c)
 *     RtlMapGenericMask @ 0x1404C8DF0 (RtlMapGenericMask.c)
 */

char __fastcall RtlpCopyEffectiveAce(
        ACCESS_MASK *Src,
        char a2,
        char a3,
        unsigned __int8 *a4,
        __int64 a5,
        unsigned __int8 *a6,
        __int64 a7,
        PGENERIC_MAPPING GenericMapping,
        void **a9,
        unsigned int a10,
        void **a11,
        _DWORD *a12,
        __int64 a13,
        _BYTE *a14,
        _BYTE *a15,
        _BYTE *a16)
{
  unsigned __int8 *v16; // r13
  __int64 v18; // r10
  char v19; // r12
  _DWORD *v20; // rdx
  unsigned __int8 v21; // cl
  __int64 v22; // rbx
  unsigned int v23; // eax
  int v24; // ecx
  ACCESS_MASK GenericAll; // r13d
  ACCESS_MASK v26; // r13d
  PSID v27; // r11
  int v28; // r13d
  __int64 v29; // r11
  _BYTE *v30; // rax
  char *v31; // rdx
  char *v32; // r12
  __int64 v33; // rdi
  char *v34; // r12
  unsigned __int8 *v35; // rdi
  unsigned __int8 *v36; // rdi
  char *v37; // r12
  int v38; // eax
  int v39; // r8d
  int v40; // ecx
  int v42; // eax
  unsigned __int8 *v43; // rax
  int v44; // ebx
  ACCESS_MASK *v45; // rax
  int v46; // edi
  int v47; // eax
  int v48; // eax
  int v49; // ecx
  int v50; // ecx
  int v51; // ecx
  unsigned __int8 *v52; // rax
  int v53; // eax
  int v54; // eax
  __int64 v55; // rax
  __int64 v56; // r10
  int v57; // ecx
  int v58; // r9d
  unsigned __int16 *v59; // r13
  void **v60; // r10
  __int64 v61; // rcx
  __int64 v62; // rcx
  unsigned int v63; // eax
  unsigned int v64; // eax
  char v65; // [rsp+20h] [rbp-C9h]
  ACCESS_MASK AccessMask; // [rsp+24h] [rbp-C5h] BYREF
  _BYTE *v68; // [rsp+28h] [rbp-C1h]
  ACCESS_MASK v69; // [rsp+30h] [rbp-B9h]
  __int16 v70; // [rsp+34h] [rbp-B5h]
  size_t Size; // [rsp+38h] [rbp-B1h]
  PSID Sid1; // [rsp+40h] [rbp-A9h]
  void *Srca; // [rsp+48h] [rbp-A1h]
  void *v74; // [rsp+50h] [rbp-99h]
  int v75; // [rsp+58h] [rbp-91h]
  __int64 v76; // [rsp+60h] [rbp-89h]
  unsigned __int8 *v77; // [rsp+68h] [rbp-81h]
  __int64 v78; // [rsp+70h] [rbp-79h]
  unsigned __int8 *v79; // [rsp+78h] [rbp-71h]
  void *v80; // [rsp+80h] [rbp-69h]
  unsigned __int8 *v81; // [rsp+88h] [rbp-61h]
  __int16 Sid2; // [rsp+90h] [rbp-59h] BYREF
  int v83; // [rsp+92h] [rbp-57h]
  __int16 v84; // [rsp+96h] [rbp-53h]
  int v85; // [rsp+98h] [rbp-51h]
  char v86[8]; // [rsp+C0h] [rbp-29h] BYREF
  int v87; // [rsp+C8h] [rbp-21h]

  v16 = a4;
  v18 = a5;
  v19 = a2;
  v69 = 0;
  v83 = 0;
  v70 = 768;
  v84 = 768;
  v79 = a4;
  if ( a6 )
    v16 = a6;
  v20 = a12;
  if ( a7 )
    v18 = a7;
  v77 = (unsigned __int8 *)v18;
  v78 = a5;
  v76 = (__int64)a12;
  v68 = a15;
  v65 = 0;
  Sid2 = 257;
  v85 = 0;
  v81 = v16;
  *a15 = 0;
  if ( a14 )
    *a14 = 0;
  *a16 = 0;
  v21 = *(_BYTE *)Src;
  v22 = *((unsigned __int16 *)Src + 1);
  if ( *(_BYTE *)Src <= 0xAu || (unsigned __int8)(v21 - 13) <= 1u )
  {
    v74 = 0LL;
    v80 = 0LL;
    v75 = 0;
    if ( v21 <= 3u )
    {
      Srca = Src;
      Sid1 = Src + 2;
      Size = 8LL;
      goto LABEL_10;
    }
    if ( ((v21 - 9) & 0xFA) == 0 )
    {
      Sid1 = Src + 2;
      Size = 8LL;
      v80 = (char *)Src + RtlLengthSid(Src + 2) + 8;
      v75 = v22 - RtlLengthSid(Src + 2) - 8;
      goto LABEL_49;
    }
    if ( v21 != 4 )
    {
      v55 = 7LL;
      v56 = 4LL * (Src[2] & 1);
      v57 = Src[2] & 2;
      if ( !v57 )
        v55 = 3LL;
      Sid1 = &Src[v55 + v56];
      v58 = v56 * 4 + v55 * 4;
      Size = (unsigned int)(v56 * 4 + v55 * 4);
      if ( v57 )
        v59 = (unsigned __int16 *)&Src[v56 + 3];
      else
        v59 = 0LL;
      Srca = Src;
      if ( !a14 || (Srca = Src, !v59) )
      {
LABEL_10:
        if ( !(_DWORD)v22 )
          goto LABEL_28;
        v69 = Src[1];
        AccessMask = v69;
        RtlMapGenericMask(&AccessMask, GenericMapping);
        v23 = *(unsigned __int8 *)Src;
        if ( (unsigned __int8)v23 <= 0xAu && (v24 = 1651, _bittest(&v24, v23)) )
          GenericAll = GenericMapping->GenericAll;
        else
          GenericAll = GenericMapping->GenericAll | 0x1000000;
        v26 = AccessMask & GenericAll;
        if ( v26 != v69 )
          *v68 = 1;
        v27 = Sid1;
        v28 = v26 & 0x11FFFFF;
        if ( !v28 && !RtlEqualPrefixSid(Sid1, &Sid2) )
        {
          LODWORD(v22) = 0;
          goto LABEL_28;
        }
        if ( !RtlEqualPrefixSid(v27, &Sid2) )
          goto LABEL_18;
        v42 = *(_DWORD *)(v29 + 8);
        if ( !v42 )
        {
          v43 = v79;
LABEL_43:
          Sid1 = v43;
          v44 = v22 + 4 * v43[1];
          v30 = v68;
          LODWORD(v22) = v44 - 4;
          *v68 = 1;
LABEL_19:
          if ( v65 && *v30 )
          {
            if ( (Src[2] & 1) != 0 )
            {
              v63 = Size - 16;
              LODWORD(v22) = v22 - 16;
              Size = (unsigned int)(Size - 16);
              memmove(v86, Src, v63);
              v87 &= ~2u;
              v31 = v86;
            }
            else
            {
              v64 = Size - 20;
              LODWORD(v22) = v22 - 20;
              Size = (unsigned int)(Size - 20);
              memmove(v86, Src, v64);
              v31 = v86;
              v86[0] = *((_BYTE *)RtlBaseAceType + *(unsigned __int8 *)Src);
            }
          }
          else
          {
            v31 = (char *)Srca;
          }
          v32 = (char *)*a11;
          if ( !*a11 || (unsigned int)v22 > a13 + *(unsigned __int16 *)(a13 + 2) - (_QWORD)v32 )
          {
            *a16 = 1;
LABEL_33:
            v20 = (_DWORD *)v76;
            goto LABEL_34;
          }
          v33 = (unsigned int)Size;
          memmove(*a11, v31, (unsigned int)Size);
          v34 = &v32[v33];
          v35 = (unsigned __int8 *)v74;
          if ( v74 )
          {
            memmove(v34, v74, 4 * (unsigned int)*((unsigned __int8 *)v74 + 1) + 8);
            v34 += 4 * (unsigned int)v35[1] + 8;
          }
          v36 = (unsigned __int8 *)Sid1;
          memmove(v34, Sid1, 4 * (unsigned int)*((unsigned __int8 *)Sid1 + 1) + 8);
          v37 = &v34[4 * v36[1] + 8];
          v38 = (int)v37;
          v39 = (int)v37;
          if ( v80 && v75 > 0 )
          {
            v46 = v75;
            memmove(v37, v80, v75);
            v38 = (_DWORD)v37 + v46;
            v39 = (_DWORD)v37 + v46;
          }
          v40 = *(_DWORD *)a11;
          if ( (unsigned int)v22 < v38 - *(_DWORD *)a11 )
            return 0;
          v19 = a2;
          LODWORD(v22) = v39 - v40;
          *((_WORD *)*a11 + 1) = v39 - v40;
          *((_DWORD *)*a11 + 1) = v28;
LABEL_28:
          if ( !*a16 && (_DWORD)v22 )
          {
            *((_BYTE *)*a11 + 1) &= 0xE0u;
            if ( v19 )
              *((_BYTE *)*a11 + 1) |= 0x10u;
            ++*(_WORD *)(a13 + 4);
          }
          goto LABEL_33;
        }
        v47 = v42 - 1;
        if ( v47 )
        {
          v48 = v47 - 1;
          if ( !v48 )
          {
            v43 = v81;
            goto LABEL_43;
          }
          if ( v48 == 1 )
          {
            v43 = v77;
            goto LABEL_43;
          }
        }
        else
        {
          v43 = (unsigned __int8 *)v78;
          if ( v78 )
            goto LABEL_43;
        }
LABEL_18:
        v30 = v68;
        goto LABEL_19;
      }
      v60 = a9;
      if ( !a9 || (AccessMask = 0, !a10) )
      {
LABEL_90:
        LODWORD(v22) = 0;
        goto LABEL_36;
      }
      while ( 1 )
      {
        v61 = *(_QWORD *)v59;
        Srca = *v60;
        v62 = v61 - *(_QWORD *)Srca;
        if ( !v62 )
          v62 = *((_QWORD *)v59 + 1) - *((_QWORD *)Srca + 1);
        if ( !v62 )
          break;
        ++v60;
        if ( ++AccessMask >= a10 )
          goto LABEL_90;
      }
      *a14 = 1;
      if ( !a3 )
      {
        *a15 = 1;
        if ( (Src[2] & 1) != 0 )
        {
          LODWORD(v22) = v22 - 16;
          Size = (unsigned int)(v58 - 16);
          memmove(v86, Src, (unsigned int)Size);
          v87 &= ~2u;
        }
        else
        {
          LODWORD(v22) = v22 - 20;
          Size = (unsigned int)(v58 - 20);
          memmove(v86, Src, (unsigned int)Size);
          v86[0] = *((_BYTE *)RtlBaseAceType + *(unsigned __int8 *)Src);
        }
        v45 = (ACCESS_MASK *)v86;
        goto LABEL_50;
      }
      v65 = 1;
LABEL_49:
      v45 = Src;
LABEL_50:
      Srca = v45;
      goto LABEL_10;
    }
    v74 = Src + 3;
    Size = 12LL;
    Sid1 = (char *)Src + RtlLengthSid(Src + 3) + 12;
    if ( RtlEqualPrefixSid(Src + 3, &Sid2) )
    {
      v49 = *((_DWORD *)v74 + 2);
      if ( !v49 )
      {
        v52 = v79;
        goto LABEL_69;
      }
      v50 = v49 - 1;
      if ( v50 )
      {
        v51 = v50 - 1;
        if ( !v51 )
        {
          v53 = v16[1];
          v74 = v16;
          goto LABEL_70;
        }
        if ( v51 == 1 )
        {
          v52 = v77;
LABEL_69:
          v74 = v52;
          v53 = v52[1];
LABEL_70:
          LODWORD(v22) = v22 + 4 * v53 - 4;
          *v68 = 1;
          goto LABEL_49;
        }
      }
      else
      {
        v52 = (unsigned __int8 *)v78;
        if ( v78 )
          goto LABEL_69;
      }
      if ( *v68 )
        goto LABEL_49;
      v54 = *((unsigned __int8 *)v74 + 1);
      v74 = 0LL;
    }
    else
    {
      v54 = *((unsigned __int8 *)Src + 13);
      v74 = 0LL;
    }
    Size = (unsigned int)(4 * v54 + 20);
    goto LABEL_49;
  }
  if ( v22 <= a13 + *(unsigned __int16 *)(a13 + 2) - (_QWORD)*a11 )
  {
    memmove(*a11, Src, *((unsigned __int16 *)Src + 1));
    goto LABEL_28;
  }
  *a16 = 1;
LABEL_34:
  if ( (unsigned int)v22 <= 0xFFFF )
  {
    if ( *a16 )
    {
LABEL_37:
      *v20 = v22;
      return 1;
    }
LABEL_36:
    *a11 = (char *)*a11 + (unsigned int)v22;
    goto LABEL_37;
  }
  return 0;
}
