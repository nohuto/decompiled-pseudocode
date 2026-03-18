/*
 * XREFs of RtlpCopyEffectiveAce @ 0x1404721D0
 * Callers:
 *     RtlpGenerateInheritedAce @ 0x140471860 (RtlpGenerateInheritedAce.c)
 *     RtlpCopyAces @ 0x140471BB0 (RtlpCopyAces.c)
 * Callees:
 *     RtlLengthSid @ 0x140088130 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     RtlEqualPrefixSid @ 0x1404725AC (RtlEqualPrefixSid.c)
 *     RtlMapGenericMask @ 0x140472660 (RtlMapGenericMask.c)
 */

char __fastcall RtlpCopyEffectiveAce(
        char *Src,
        char a2,
        char a3,
        __int64 a4,
        unsigned __int8 *a5,
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
  char v16; // r12
  __int64 v18; // rdx
  __int64 v19; // rdx
  char v20; // cl
  __int64 v21; // rbx
  unsigned int v23; // eax
  int v24; // ecx
  ACCESS_MASK v25; // ecx
  PSID v26; // r11
  __int64 v27; // r11
  _BYTE *v28; // rax
  char *v29; // rdx
  char *v30; // r12
  char *v31; // r12
  unsigned __int8 *v32; // rdi
  unsigned __int8 *v33; // rdi
  char *v34; // r12
  unsigned int v35; // r12d
  int v36; // ecx
  int v37; // eax
  unsigned __int8 *v38; // rax
  int v39; // ebx
  int v40; // eax
  int v41; // eax
  int v42; // edi
  int v43; // ecx
  int v44; // ecx
  int v45; // ecx
  unsigned __int8 *v46; // rax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // r8d
  int v51; // r10d
  __int64 v52; // rdx
  unsigned int v53; // ecx
  char *v54; // r8
  _QWORD **v55; // r10
  __int64 v56; // rdx
  __int64 v57; // rdx
  unsigned int v58; // eax
  unsigned int Size; // [rsp+20h] [rbp-B9h]
  char Size_4; // [rsp+24h] [rbp-B5h]
  ACCESS_MASK AccessMask; // [rsp+28h] [rbp-B1h] BYREF
  _QWORD *v64; // [rsp+30h] [rbp-A9h]
  _BYTE *v65; // [rsp+38h] [rbp-A1h]
  PSID Sid1; // [rsp+40h] [rbp-99h]
  void *v67; // [rsp+48h] [rbp-91h]
  int v68; // [rsp+50h] [rbp-89h]
  void *Srca; // [rsp+58h] [rbp-81h]
  unsigned __int8 *v70; // [rsp+60h] [rbp-79h]
  unsigned __int8 *v71; // [rsp+68h] [rbp-71h]
  unsigned __int8 *v72; // [rsp+70h] [rbp-69h]
  unsigned __int8 *v73; // [rsp+78h] [rbp-61h]
  void *v74; // [rsp+80h] [rbp-59h]
  __int16 Sid2; // [rsp+88h] [rbp-51h] BYREF
  int v76; // [rsp+8Ah] [rbp-4Fh]
  __int16 v77; // [rsp+8Eh] [rbp-4Bh]
  int v78; // [rsp+90h] [rbp-49h]
  char v79[8]; // [rsp+B8h] [rbp-21h] BYREF
  int v80; // [rsp+C0h] [rbp-19h]

  v16 = a2;
  v18 = a4;
  if ( a6 )
    v18 = a6;
  v71 = (unsigned __int8 *)v18;
  v19 = (__int64)a5;
  if ( a7 )
    v19 = a7;
  LODWORD(v64) = 0;
  WORD2(v64) = 768;
  v76 = 0;
  v70 = (unsigned __int8 *)v19;
  v73 = (unsigned __int8 *)a4;
  v72 = a5;
  v65 = a15;
  Size_4 = 0;
  Sid2 = 257;
  v77 = 768;
  v78 = 0;
  *a15 = 0;
  if ( a14 )
    *a14 = 0;
  *a16 = 0;
  v20 = *Src;
  v21 = *((unsigned __int16 *)Src + 1);
  if ( (unsigned __int8)*Src <= 0xAu || (unsigned __int8)(v20 - 13) <= 1u )
  {
    Srca = Src;
    v67 = 0LL;
    v74 = 0LL;
    v68 = 0;
    if ( (unsigned __int8)v20 <= 3u )
    {
      Size = 8;
      Sid1 = Src + 8;
      goto LABEL_22;
    }
    if ( ((v20 - 9) & 0xFA) == 0 )
    {
      Size = 8;
      Sid1 = Src + 8;
      v74 = &Src[RtlLengthSid(Src + 8) + 8];
      v68 = v21 - RtlLengthSid(Src + 8) - 8;
      goto LABEL_22;
    }
    if ( v20 == 4 )
    {
      v67 = Src + 12;
      Size = 12;
      Sid1 = &Src[RtlLengthSid(Src + 12) + 12];
      if ( RtlEqualPrefixSid(Src + 12, &Sid2) )
      {
        v43 = *((_DWORD *)v67 + 2);
        if ( !v43 )
        {
          v46 = v73;
          goto LABEL_63;
        }
        v44 = v43 - 1;
        if ( v44 )
        {
          v45 = v44 - 1;
          if ( !v45 )
          {
            v46 = v71;
            goto LABEL_63;
          }
          if ( v45 == 1 )
          {
            v46 = v70;
LABEL_63:
            v67 = v46;
            v47 = v46[1];
LABEL_65:
            LODWORD(v21) = v21 + 4 * v47 - 4;
            *v65 = 1;
            goto LABEL_22;
          }
        }
        else if ( v72 )
        {
          v47 = v72[1];
          v67 = v72;
          goto LABEL_65;
        }
        if ( !*v65 )
        {
          v48 = *((unsigned __int8 *)v67 + 1);
          v67 = 0LL;
          Size = 4 * v48 + 20;
        }
      }
      else
      {
        v49 = (unsigned __int8)Src[13];
        v67 = 0LL;
        Size = 4 * v49 + 20;
      }
    }
    else
    {
      v50 = *((_DWORD *)Src + 2) & 2;
      v51 = *((_DWORD *)Src + 2) & 1;
      v52 = v50 != 0 ? 0x10 : 0;
      Sid1 = &Src[v52 + 12 + (v51 != 0 ? 0x10 : 0)];
      v53 = (v51 != 0 ? 0x10 : 0) + v52 + 12;
      Size = v53;
      if ( v50 )
      {
        if ( v51 )
          v54 = Src + 28;
        else
          v54 = Src + 12;
      }
      else
      {
        v54 = 0LL;
      }
      if ( a14 && v54 )
      {
        v55 = a9;
        if ( !a9 || (AccessMask = 0, !a10) )
        {
LABEL_84:
          LODWORD(v21) = 0;
          goto LABEL_18;
        }
        while ( 1 )
        {
          v56 = *(_QWORD *)v54;
          v64 = *v55;
          v57 = v56 - *v64;
          if ( !v57 )
            v57 = *((_QWORD *)v54 + 1) - v64[1];
          if ( !v57 )
            break;
          ++v55;
          if ( ++AccessMask >= a10 )
            goto LABEL_84;
        }
        *a14 = 1;
        if ( a3 )
        {
          Size_4 = 1;
        }
        else
        {
          *a15 = 1;
          if ( (*((_DWORD *)Src + 2) & 1) != 0 )
          {
            LODWORD(v21) = v21 - 16;
            Size = v53 - 16;
            memmove(v79, Src, v53 - 16);
            v80 &= ~2u;
          }
          else
          {
            LODWORD(v21) = v21 - 20;
            Size = v53 - 20;
            memmove(v79, Src, v53 - 20);
            v79[0] = *((_BYTE *)&RtlBaseAceType + (unsigned __int8)*Src);
          }
          Srca = v79;
        }
      }
    }
LABEL_22:
    if ( !(_DWORD)v21 )
      goto LABEL_11;
    LODWORD(v64) = *((_DWORD *)Src + 1);
    AccessMask = (unsigned int)v64;
    RtlMapGenericMask(&AccessMask, GenericMapping);
    v23 = (unsigned __int8)*Src;
    if ( (unsigned __int8)v23 <= 0xAu && (v24 = 1651, _bittest(&v24, v23)) )
      v25 = GenericMapping->GenericAll & AccessMask;
    else
      v25 = (GenericMapping->GenericAll | 0x1000000) & AccessMask;
    if ( v25 != (_DWORD)v64 )
      *v65 = 1;
    v26 = Sid1;
    LODWORD(v64) = v25 & 0x11FFFFF;
    if ( (v25 & 0x11FFFFF) == 0 && !RtlEqualPrefixSid(Sid1, &Sid2) )
    {
      LODWORD(v21) = 0;
      goto LABEL_11;
    }
    if ( !RtlEqualPrefixSid(v26, &Sid2) )
      goto LABEL_30;
    v37 = *(_DWORD *)(v27 + 8);
    if ( !v37 )
    {
      v38 = v73;
LABEL_42:
      Sid1 = v38;
      v39 = v21 + 4 * v38[1];
      v28 = v65;
      LODWORD(v21) = v39 - 4;
      *v65 = 1;
      goto LABEL_31;
    }
    v40 = v37 - 1;
    if ( v40 )
    {
      v41 = v40 - 1;
      if ( !v41 )
      {
        v38 = v71;
        goto LABEL_42;
      }
      if ( v41 == 1 )
      {
        v38 = v70;
        goto LABEL_42;
      }
    }
    else
    {
      v38 = v72;
      if ( v72 )
        goto LABEL_42;
    }
LABEL_30:
    v28 = v65;
LABEL_31:
    if ( Size_4 && *v28 )
    {
      v58 = Size;
      if ( (*((_DWORD *)Src + 2) & 1) != 0 )
      {
        LODWORD(v21) = v21 - 16;
        Size -= 16;
        memmove(v79, Src, v58 - 16);
        v80 &= ~2u;
        v29 = v79;
      }
      else
      {
        LODWORD(v21) = v21 - 20;
        Size -= 20;
        memmove(v79, Src, v58 - 20);
        v29 = v79;
        v79[0] = *((_BYTE *)&RtlBaseAceType + (unsigned __int8)*Src);
      }
    }
    else
    {
      v29 = (char *)Srca;
    }
    v30 = (char *)*a11;
    if ( *a11 && (unsigned int)v21 <= a13 + *(unsigned __int16 *)(a13 + 2) - (_QWORD)v30 )
    {
      memmove(*a11, v29, Size);
      v31 = &v30[Size];
      v32 = (unsigned __int8 *)v67;
      if ( v67 )
      {
        memmove(v31, v67, 4LL * *((unsigned __int8 *)v67 + 1) + 8);
        v31 += 4 * v32[1] + 8;
      }
      v33 = (unsigned __int8 *)Sid1;
      memmove(v31, Sid1, 4LL * *((unsigned __int8 *)Sid1 + 1) + 8);
      v34 = &v31[4 * v33[1] + 8];
      if ( v74 && v68 > 0 )
      {
        v42 = v68;
        memmove(v34, v74, v68);
        LODWORD(v34) = v42 + (_DWORD)v34;
      }
      v35 = (_DWORD)v34 - *(_DWORD *)a11;
      if ( (unsigned int)v21 < v35 )
        return 0;
      LODWORD(v21) = v35;
      v36 = (int)v64;
      v16 = a2;
      *((_WORD *)*a11 + 1) = v21;
      *((_DWORD *)*a11 + 1) = v36;
      goto LABEL_11;
    }
LABEL_43:
    *a16 = 1;
    goto LABEL_16;
  }
  if ( v21 > a13 + *(unsigned __int16 *)(a13 + 2) - (_QWORD)*a11 )
    goto LABEL_43;
  memmove(*a11, Src, *((unsigned __int16 *)Src + 1));
LABEL_11:
  if ( !*a16 && (_DWORD)v21 )
  {
    *((_BYTE *)*a11 + 1) &= 0xE0u;
    if ( v16 )
      *((_BYTE *)*a11 + 1) |= 0x10u;
    ++*(_WORD *)(a13 + 4);
  }
LABEL_16:
  if ( (unsigned int)v21 <= 0xFFFF )
  {
    if ( *a16 )
    {
LABEL_19:
      *a12 = v21;
      return 1;
    }
LABEL_18:
    *a11 = (char *)*a11 + (unsigned int)v21;
    goto LABEL_19;
  }
  return 0;
}
