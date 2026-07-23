/*
 * XREFs of sub_180049BCC @ 0x180049BCC
 * Callers:
 *     sub_1800498D0 @ 0x1800498D0 (sub_1800498D0.c)
 *     sub_18004AC04 @ 0x18004AC04 (sub_18004AC04.c)
 * Callees:
 *     RtlEqualPrefixSid @ 0x180049F80 (RtlEqualPrefixSid.c)
 *     RtlMapGenericMask @ 0x18004A040 (RtlMapGenericMask.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

char __fastcall sub_180049BCC(
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
  _DWORD *v20; // r12
  __int64 v21; // r14
  __int64 v22; // rdx
  void **v23; // r9
  __int64 v24; // rdi
  unsigned __int8 *v25; // r12
  ACCESS_MASK *v26; // r13
  unsigned int v27; // r14d
  int v28; // ecx
  ACCESS_MASK v29; // r15d
  _BYTE *v30; // rsi
  int v31; // r15d
  char *v32; // rdx
  char *v33; // rsi
  char *v34; // rsi
  char *v35; // rsi
  unsigned int v36; // esi
  _BYTE *v37; // rcx
  ACCESS_MASK v39; // ecx
  ACCESS_MASK *v40; // rax
  int v41; // eax
  __int64 v42; // rax
  ACCESS_MASK v43; // ecx
  ACCESS_MASK v44; // ecx
  ACCESS_MASK v45; // ecx
  unsigned __int8 *v46; // rax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  char *v52; // rcx
  __int64 v53; // rdx
  unsigned int v54; // r9d
  __int64 v55; // rax
  ACCESS_MASK v56; // ecx
  ACCESS_MASK v57; // ecx
  char v59; // [rsp+21h] [rbp-C8h]
  int v60; // [rsp+30h] [rbp-B9h]
  ACCESS_MASK AccessMask; // [rsp+38h] [rbp-B1h] BYREF
  _BYTE *v62; // [rsp+40h] [rbp-A9h]
  __int64 v63; // [rsp+48h] [rbp-A1h]
  __int64 v64; // [rsp+50h] [rbp-99h]
  void *Srca; // [rsp+58h] [rbp-91h]
  _BYTE *v66; // [rsp+60h] [rbp-89h]
  __int64 v67; // [rsp+68h] [rbp-81h]
  __int64 v68; // [rsp+70h] [rbp-79h]
  __int64 v69; // [rsp+78h] [rbp-71h]
  unsigned __int8 *v70; // [rsp+80h] [rbp-69h]
  void *v71; // [rsp+88h] [rbp-61h]
  __int16 Sid2; // [rsp+90h] [rbp-59h] BYREF
  int v73; // [rsp+92h] [rbp-57h]
  __int16 v74; // [rsp+96h] [rbp-53h]
  int v75; // [rsp+98h] [rbp-51h]
  char v76[8]; // [rsp+C0h] [rbp-29h] BYREF
  int v77; // [rsp+C8h] [rbp-21h]

  v75 = 0;
  v16 = a7;
  v17 = a2;
  v20 = a12;
  v21 = a13;
  v22 = a6;
  v70 = (unsigned __int8 *)a4;
  v23 = a11;
  if ( !a6 )
    v22 = a4;
  v59 = 0;
  if ( !a7 )
    v16 = a5;
  v73 = 0;
  v67 = v16;
  v69 = a5;
  v64 = (__int64)a12;
  v63 = a13;
  v66 = a15;
  v62 = a16;
  Sid2 = 257;
  v74 = 768;
  v68 = v22;
  *a15 = 0;
  if ( a14 )
    *a14 = 0;
  *a16 = 0;
  v24 = *((unsigned __int16 *)Src + 1);
  if ( *(_BYTE *)Src > 0xAu && (unsigned __int8)(*(_BYTE *)Src - 13) > 1u )
  {
    if ( v24 > a13 + *(unsigned __int16 *)(a13 + 2) - (_QWORD)*a11 )
    {
      v37 = v62;
      *v62 = 1;
      goto LABEL_34;
    }
    memmove(*a11, Src, *((unsigned __int16 *)Src + 1));
    v23 = a11;
    goto LABEL_28;
  }
  v25 = 0LL;
  Srca = Src;
  v71 = 0LL;
  v60 = 0;
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
    v42 = *((unsigned __int8 *)Src + 9);
    v71 = &Src[v42 + 4];
    v60 = v24 - (4 * v42 + 16);
    goto LABEL_10;
  }
  if ( *(_BYTE *)Src != 4 )
  {
    v50 = (Src[2] & 2) != 0 ? 0x10 : 0;
    v51 = (Src[2] & 1) != 0 ? 0x10 : 0;
    v26 = (ACCESS_MASK *)((char *)Src + v50 + v51 + 12);
    v27 = v51 + v50 + 12;
    if ( (Src[2] & 2) != 0 )
    {
      if ( (Src[2] & 1) != 0 )
        v52 = (char *)(Src + 7);
      else
        v52 = (char *)(Src + 3);
    }
    else
    {
      v52 = 0LL;
    }
    if ( a14 && v52 )
    {
      v53 = a9;
      if ( a9 && (v54 = 0, a10) )
      {
        while ( 1 )
        {
          v55 = *(_QWORD *)v52 - **(_QWORD **)v53;
          if ( *(_QWORD *)v52 == **(_QWORD **)v53 )
            v55 = *((_QWORD *)v52 + 1) - *(_QWORD *)(*(_QWORD *)v53 + 8LL);
          if ( !v55 )
            break;
          ++v54;
          v53 += 8LL;
          if ( v54 >= a10 )
            goto LABEL_80;
        }
        *a14 = 1;
        if ( a3 )
        {
          v59 = 1;
        }
        else
        {
          *a15 = 1;
          if ( (Src[2] & 1) != 0 )
          {
            v27 -= 16;
            LODWORD(v24) = v24 - 16;
            memmove(v76, Src, v27);
            v77 &= ~2u;
          }
          else
          {
            v27 -= 20;
            LODWORD(v24) = v24 - 20;
            memmove(v76, Src, v27);
            v76[0] = byte_180120FA0[*(unsigned __int8 *)Src];
          }
          Srca = v76;
        }
      }
      else
      {
LABEL_80:
        LODWORD(v24) = 0;
      }
    }
    goto LABEL_81;
  }
  v25 = (unsigned __int8 *)(Src + 3);
  v27 = 12;
  v26 = &Src[*((unsigned __int8 *)Src + 13) + 5];
  if ( !RtlEqualPrefixSid(Src + 3, &Sid2) )
  {
    v25 = 0LL;
    v27 = 4 * *((unsigned __int8 *)Src + 13) + 20;
    goto LABEL_81;
  }
  v43 = Src[5];
  if ( !v43 )
  {
    v25 = v70;
    v48 = v70[1];
LABEL_63:
    *a15 = 1;
    LODWORD(v24) = v24 + 4 * v48 - 4;
    goto LABEL_64;
  }
  v44 = v43 - 1;
  if ( !v44 )
  {
    if ( !v69 )
      goto LABEL_64;
    v48 = *(unsigned __int8 *)(v69 + 1);
    v25 = (unsigned __int8 *)v69;
    goto LABEL_63;
  }
  v45 = v44 - 1;
  if ( !v45 )
  {
    v46 = (unsigned __int8 *)v68;
    goto LABEL_59;
  }
  if ( v45 == 1 )
  {
    v46 = (unsigned __int8 *)v67;
LABEL_59:
    v25 = v46;
    v47 = v46[1];
    *a15 = 1;
    LODWORD(v24) = v24 + 4 * v47 - 4;
LABEL_81:
    v23 = a11;
    goto LABEL_10;
  }
LABEL_64:
  v23 = a11;
  if ( !*a15 )
  {
    v49 = v25[1];
    v25 = 0LL;
    v27 = 4 * v49 + 20;
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
    v30 = v66;
    if ( v29 != Src[1] )
      *v66 = 1;
    v31 = v29 & 0x11FFFFF;
    if ( !v31 && !RtlEqualPrefixSid(v26, &Sid2) )
    {
      v23 = a11;
      LODWORD(v24) = 0;
      goto LABEL_27;
    }
    if ( !RtlEqualPrefixSid(v26, &Sid2) )
    {
LABEL_18:
      if ( v59 && *v30 )
      {
        if ( (Src[2] & 1) != 0 )
        {
          v27 -= 16;
          LODWORD(v24) = v24 - 16;
          memmove(v76, Src, v27);
          v77 &= ~2u;
          v32 = v76;
        }
        else
        {
          v27 -= 20;
          LODWORD(v24) = v24 - 20;
          memmove(v76, Src, v27);
          v32 = v76;
          v76[0] = byte_180120FA0[*(unsigned __int8 *)Src];
        }
      }
      else
      {
        v32 = (char *)Srca;
      }
      v23 = a11;
      v33 = (char *)*a11;
      if ( !*a11 || (unsigned int)v24 > v63 + *(unsigned __int16 *)(v63 + 2) - (_QWORD)v33 )
      {
        v37 = v62;
        v21 = v63;
        v20 = (_DWORD *)v64;
        v17 = a2;
        *v62 = 1;
        goto LABEL_29;
      }
      memmove(*a11, v32, v27);
      v34 = &v33[v27];
      if ( v25 )
      {
        memmove(v34, v25, 4LL * v25[1] + 8);
        v34 += 4 * v25[1] + 8;
      }
      memmove(v34, v26, 4LL * *((unsigned __int8 *)v26 + 1) + 8);
      v35 = &v34[4 * *((unsigned __int8 *)v26 + 1) + 8];
      if ( v71 && v60 > 0 )
      {
        memmove(v35, v71, v60);
        LODWORD(v35) = v60 + (_DWORD)v35;
      }
      v23 = a11;
      v36 = (_DWORD)v35 - *(_DWORD *)a11;
      if ( (unsigned int)v24 < v36 )
        return 0;
      LODWORD(v24) = v36;
      *((_WORD *)*a11 + 1) = v36;
      *((_DWORD *)*a11 + 1) = v31;
      goto LABEL_27;
    }
    v39 = v26[2];
    if ( v39 )
    {
      v56 = v39 - 1;
      if ( v56 )
      {
        v57 = v56 - 1;
        if ( v57 )
        {
          if ( v57 != 1 )
            goto LABEL_18;
          v40 = (ACCESS_MASK *)v67;
        }
        else
        {
          v40 = (ACCESS_MASK *)v68;
        }
      }
      else
      {
        v40 = (ACCESS_MASK *)v69;
        if ( !v69 )
          goto LABEL_18;
      }
    }
    else
    {
      v40 = (ACCESS_MASK *)v70;
    }
    v26 = v40;
    v41 = *((unsigned __int8 *)v40 + 1);
    *v30 = 1;
    LODWORD(v24) = v24 + 4 * v41 - 4;
    goto LABEL_18;
  }
LABEL_27:
  v21 = v63;
  v20 = (_DWORD *)v64;
  v17 = a2;
LABEL_28:
  v37 = v62;
LABEL_29:
  if ( !*v37 && (_DWORD)v24 )
  {
    *((_BYTE *)*v23 + 1) &= 0xE0u;
    if ( v17 )
      *((_BYTE *)*v23 + 1) |= 0x10u;
    ++*(_WORD *)(v21 + 4);
  }
LABEL_34:
  if ( (unsigned int)v24 > 0xFFFF )
    return 0;
  if ( !*v37 )
    *v23 = (char *)*v23 + (unsigned int)v24;
  *v20 = v24;
  return 1;
}
