/*
 * XREFs of RtlpCopyEffectiveAce @ 0x1404C0110
 * Callers:
 *     RtlpCopyAces @ 0x1404BF510 (RtlpCopyAces.c)
 *     RtlpGenerateInheritedAce @ 0x1404C0780 (RtlpGenerateInheritedAce.c)
 * Callees:
 *     RtlLengthSid @ 0x140019280 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     RtlEqualPrefixSid @ 0x1404C0480 (RtlEqualPrefixSid.c)
 *     RtlMapGenericMask @ 0x1404C0550 (RtlMapGenericMask.c)
 */

char __fastcall RtlpCopyEffectiveAce(
        unsigned __int16 *Src,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        PGENERIC_MAPPING GenericMapping,
        _QWORD **a9,
        unsigned int a10,
        void **a11,
        _DWORD *a12,
        __int64 a13,
        _BYTE *a14,
        _BYTE *a15,
        _BYTE *a16)
{
  __int64 v17; // r9
  unsigned __int8 v18; // cl
  __int64 v19; // rbx
  unsigned __int16 *v21; // r12
  unsigned int v22; // eax
  int v23; // ecx
  ACCESS_MASK v24; // ecx
  _BYTE *v25; // r11
  char *v26; // rdx
  char *v27; // r12
  __int64 v28; // rdi
  char *v29; // r12
  unsigned __int8 *v30; // rdi
  unsigned __int8 *v31; // rdi
  char *v32; // r12
  unsigned int v33; // r12d
  int v34; // eax
  unsigned __int8 *v35; // rcx
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  unsigned __int8 *v42; // rax
  int v43; // eax
  int v44; // eax
  __int64 v45; // r12
  unsigned int v46; // r10d
  int v47; // ecx
  int v48; // r9d
  unsigned __int16 *v49; // rax
  _QWORD **v50; // r10
  __int64 v51; // rcx
  bool v52; // cf
  size_t v53; // r8
  size_t v54; // r8
  int v55; // edi
  char v56; // [rsp+20h] [rbp-C9h]
  char v57; // [rsp+21h] [rbp-C8h]
  ACCESS_MASK v58; // [rsp+28h] [rbp-C1h]
  int v59; // [rsp+28h] [rbp-C1h]
  unsigned __int16 *v60; // [rsp+28h] [rbp-C1h]
  ACCESS_MASK AccessMask; // [rsp+30h] [rbp-B9h] BYREF
  size_t Size; // [rsp+38h] [rbp-B1h]
  void *v63; // [rsp+40h] [rbp-A9h]
  void *v64; // [rsp+48h] [rbp-A1h]
  _BYTE *v65; // [rsp+50h] [rbp-99h]
  int v66; // [rsp+58h] [rbp-91h]
  void *Srca; // [rsp+60h] [rbp-89h]
  _QWORD *v68; // [rsp+68h] [rbp-81h]
  unsigned __int8 *v69; // [rsp+70h] [rbp-79h]
  unsigned __int8 *v70; // [rsp+78h] [rbp-71h]
  __int64 v71; // [rsp+80h] [rbp-69h]
  unsigned __int8 *v72; // [rsp+88h] [rbp-61h]
  void *v73; // [rsp+90h] [rbp-59h]
  __int16 Sid2; // [rsp+98h] [rbp-51h] BYREF
  int v75; // [rsp+9Ah] [rbp-4Fh]
  __int16 v76; // [rsp+9Eh] [rbp-4Bh]
  int v77; // [rsp+A0h] [rbp-49h]
  char v78[8]; // [rsp+C8h] [rbp-21h] BYREF
  int v79; // [rsp+D0h] [rbp-19h]

  v72 = (unsigned __int8 *)a4;
  if ( a6 )
    a4 = a6;
  v70 = (unsigned __int8 *)a4;
  v17 = a5;
  if ( a7 )
    v17 = a7;
  v75 = 0;
  v69 = (unsigned __int8 *)v17;
  v56 = a2;
  v71 = a5;
  v65 = a15;
  v57 = 0;
  Sid2 = 257;
  v76 = 768;
  v77 = 0;
  *a15 = 0;
  if ( a14 )
    *a14 = 0;
  *a16 = 0;
  v18 = *(_BYTE *)Src;
  v19 = Src[1];
  if ( *(_BYTE *)Src <= 0xAu || (unsigned __int8)(v18 - 13) <= 1u )
  {
    v63 = 0LL;
    Srca = Src;
    v73 = 0LL;
    v66 = 0;
    if ( v18 <= 3u )
    {
      v21 = Src + 4;
      v64 = Src + 4;
      Size = 8LL;
      goto LABEL_23;
    }
    if ( ((v18 - 9) & 0xFA) == 0 )
    {
      v21 = Src + 4;
      v64 = Src + 4;
      Size = 8LL;
      v73 = (char *)Src + RtlLengthSid(Src + 4) + 8;
      v66 = v19 - RtlLengthSid(Src + 4) - 8;
LABEL_54:
      a2 = v56;
      goto LABEL_23;
    }
    if ( v18 != 4 )
    {
      v45 = 14LL;
      v46 = *((_DWORD *)Src + 2) & 1;
      v47 = *((_DWORD *)Src + 2) & 2;
      if ( !v47 )
        v45 = 6LL;
      v21 = &Src[8 * (*((_DWORD *)Src + 2) & 1) + v45];
      v64 = v21;
      v48 = (_DWORD)v21 - (_DWORD)Src;
      Size = (unsigned int)((_DWORD)v21 - (_DWORD)Src);
      if ( v47 )
        v49 = &Src[8 * v46 + 6];
      else
        v49 = 0LL;
      v60 = v49;
      if ( a14 && v49 )
      {
        v50 = a9;
        if ( !a9 || (AccessMask = 0, !a10) )
        {
LABEL_82:
          LODWORD(v19) = 0;
          goto LABEL_19;
        }
        while ( 1 )
        {
          v68 = *v50;
          v51 = *(_QWORD *)v49 - *v68;
          if ( !v51 )
            v51 = *((_QWORD *)v60 + 1) - v68[1];
          if ( !v51 )
            break;
          ++v50;
          v52 = ++AccessMask < a10;
          v49 = v60;
          if ( !v52 )
            goto LABEL_82;
        }
        *a14 = 1;
        if ( !a3 )
        {
          *a15 = 1;
          if ( (*((_DWORD *)Src + 2) & 1) != 0 )
          {
            LODWORD(v19) = v19 - 16;
            Size = (unsigned int)(v48 - 16);
            memmove(v78, Src, (unsigned int)Size);
            v79 &= ~2u;
          }
          else
          {
            LODWORD(v19) = v19 - 20;
            Size = (unsigned int)(v48 - 20);
            memmove(v78, Src, (unsigned int)Size);
            v78[0] = *((_BYTE *)&RtlBaseAceType + *(unsigned __int8 *)Src);
          }
          Srca = v78;
          goto LABEL_54;
        }
        v57 = 1;
      }
LABEL_23:
      if ( !(_DWORD)v19 )
        goto LABEL_12;
      v58 = *((_DWORD *)Src + 1);
      AccessMask = v58;
      RtlMapGenericMask(&AccessMask, GenericMapping);
      v22 = *(unsigned __int8 *)Src;
      if ( (unsigned __int8)v22 <= 0xAu && (v23 = 1651, _bittest(&v23, v22)) )
        v24 = GenericMapping->GenericAll & AccessMask;
      else
        v24 = (GenericMapping->GenericAll | 0x1000000) & AccessMask;
      if ( v24 != v58 )
        *v65 = 1;
      v59 = v24 & 0x11FFFFF;
      if ( (v24 & 0x11FFFFF) == 0 && !RtlEqualPrefixSid(v21, &Sid2) )
      {
        LODWORD(v19) = 0;
        goto LABEL_11;
      }
      if ( !RtlEqualPrefixSid(v21, &Sid2) )
        goto LABEL_31;
      v34 = *((_DWORD *)v21 + 2);
      if ( v34 )
      {
        v37 = v34 - 1;
        if ( v37 )
        {
          v38 = v37 - 1;
          if ( v38 )
          {
            if ( v38 != 1 )
              goto LABEL_31;
            v35 = v69;
          }
          else
          {
            v35 = v70;
          }
        }
        else
        {
          v35 = (unsigned __int8 *)v71;
          if ( !v71 )
            goto LABEL_31;
        }
      }
      else
      {
        v35 = v72;
      }
      v36 = v35[1];
      *v25 = 1;
      v64 = v35;
      LODWORD(v19) = v19 + 4 * v36 - 4;
LABEL_31:
      if ( v57 && *v25 )
      {
        if ( (*((_DWORD *)Src + 2) & 1) != 0 )
        {
          LODWORD(v19) = v19 - 16;
          v53 = (unsigned int)(Size - 16);
          Size = v53;
          memmove(v78, Src, v53);
          v79 &= ~2u;
          v26 = v78;
        }
        else
        {
          LODWORD(v19) = v19 - 20;
          v54 = (unsigned int)(Size - 20);
          Size = v54;
          memmove(v78, Src, v54);
          v26 = v78;
          v78[0] = *((_BYTE *)&RtlBaseAceType + *(unsigned __int8 *)Src);
        }
      }
      else
      {
        v26 = (char *)Srca;
      }
      v27 = (char *)*a11;
      if ( *a11 && (unsigned int)v19 <= a13 + *(unsigned __int16 *)(a13 + 2) - (_QWORD)v27 )
      {
        v28 = (unsigned int)Size;
        memmove(*a11, v26, (unsigned int)Size);
        v29 = &v27[v28];
        v30 = (unsigned __int8 *)v63;
        if ( v63 )
        {
          memmove(v29, v63, 4 * (unsigned int)*((unsigned __int8 *)v63 + 1) + 8);
          v29 += 4 * (unsigned int)v30[1] + 8;
        }
        v31 = (unsigned __int8 *)v64;
        memmove(v29, v64, 4 * (unsigned int)*((unsigned __int8 *)v64 + 1) + 8);
        v32 = &v29[4 * v31[1] + 8];
        if ( v73 && v66 > 0 )
        {
          v55 = v66;
          memmove(v32, v73, v66);
          LODWORD(v32) = v55 + (_DWORD)v32;
        }
        v33 = (_DWORD)v32 - *(_DWORD *)a11;
        if ( (unsigned int)v19 < v33 )
          return 0;
        LODWORD(v19) = v33;
        *((_WORD *)*a11 + 1) = v33;
        *((_DWORD *)*a11 + 1) = v59;
        goto LABEL_11;
      }
LABEL_43:
      *a16 = 1;
      goto LABEL_17;
    }
    v63 = Src + 6;
    v21 = (unsigned __int16 *)((char *)Src + RtlLengthSid(Src + 6) + 12);
    Size = 12LL;
    v64 = v21;
    if ( !RtlEqualPrefixSid(Src + 6, &Sid2) )
    {
      v44 = *((unsigned __int8 *)Src + 13);
      v63 = 0LL;
      Size = (unsigned int)(4 * v44 + 20);
      goto LABEL_54;
    }
    v39 = *((_DWORD *)v63 + 2);
    if ( v39 )
    {
      v40 = v39 - 1;
      if ( v40 )
      {
        v41 = v40 - 1;
        if ( !v41 )
        {
          v42 = v70;
          goto LABEL_63;
        }
        if ( v41 == 1 )
        {
          v42 = v69;
LABEL_63:
          v63 = v42;
          LODWORD(v19) = v19 + 4 * v42[1] - 4;
          *v65 = 1;
          goto LABEL_54;
        }
      }
      else
      {
        v42 = (unsigned __int8 *)v71;
        if ( v71 )
          goto LABEL_63;
      }
      if ( !*v65 )
      {
        v43 = *((unsigned __int8 *)v63 + 1);
        v63 = 0LL;
        Size = (unsigned int)(4 * v43 + 20);
      }
      goto LABEL_54;
    }
    v42 = v72;
    goto LABEL_63;
  }
  if ( v19 > a13 + *(unsigned __int16 *)(a13 + 2) - (_QWORD)*a11 )
    goto LABEL_43;
  memmove(*a11, Src, Src[1]);
LABEL_11:
  a2 = v56;
LABEL_12:
  if ( !*a16 && (_DWORD)v19 )
  {
    *((_BYTE *)*a11 + 1) &= 0xE0u;
    if ( a2 )
      *((_BYTE *)*a11 + 1) |= 0x10u;
    ++*(_WORD *)(a13 + 4);
  }
LABEL_17:
  if ( (unsigned int)v19 <= 0xFFFF )
  {
    if ( *a16 )
    {
LABEL_20:
      *a12 = v19;
      return 1;
    }
LABEL_19:
    *a11 = (char *)*a11 + (unsigned int)v19;
    goto LABEL_20;
  }
  return 0;
}
