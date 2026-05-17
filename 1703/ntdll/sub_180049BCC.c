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
        char *Src,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        _QWORD *a9,
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
  _DWORD *v21; // r12
  __int64 v22; // r14
  _QWORD *v23; // r8
  __int64 v24; // rdx
  void **v25; // r9
  __int64 v26; // rdi
  unsigned __int8 *v27; // r12
  unsigned __int16 *v28; // r13
  unsigned int v29; // r14d
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // ecx
  int v33; // r15d
  _BYTE *v34; // rsi
  int v35; // r15d
  char *v36; // rdx
  char *v37; // rsi
  char *v38; // rsi
  char *v39; // rsi
  unsigned int v40; // esi
  _BYTE *v41; // rcx
  int v43; // ecx
  unsigned __int16 *v44; // rax
  int v45; // eax
  __int64 v46; // rax
  int v47; // ecx
  int v48; // ecx
  int v49; // ecx
  unsigned __int8 *v50; // rax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  char *v56; // rcx
  _QWORD *v57; // rdx
  unsigned int v58; // r9d
  __int64 v59; // rax
  int v60; // ecx
  int v61; // ecx
  char v63; // [rsp+21h] [rbp-C8h]
  int v64; // [rsp+30h] [rbp-B9h]
  int v65; // [rsp+38h] [rbp-B1h] BYREF
  _BYTE *v66; // [rsp+40h] [rbp-A9h]
  __int64 v67; // [rsp+48h] [rbp-A1h]
  __int64 v68; // [rsp+50h] [rbp-99h]
  void *Srca; // [rsp+58h] [rbp-91h]
  _BYTE *v70; // [rsp+60h] [rbp-89h]
  __int64 v71; // [rsp+68h] [rbp-81h]
  __int64 v72; // [rsp+70h] [rbp-79h]
  __int64 v73; // [rsp+78h] [rbp-71h]
  unsigned __int8 *v74; // [rsp+80h] [rbp-69h]
  void *v75; // [rsp+88h] [rbp-61h]
  __int16 v76; // [rsp+90h] [rbp-59h] BYREF
  int v77; // [rsp+92h] [rbp-57h]
  __int16 v78; // [rsp+96h] [rbp-53h]
  int v79; // [rsp+98h] [rbp-51h]
  char v80[8]; // [rsp+C0h] [rbp-29h] BYREF
  int v81; // [rsp+C8h] [rbp-21h]

  v79 = 0;
  v16 = a7;
  v17 = a2;
  v21 = a12;
  v22 = a13;
  v23 = a16;
  v24 = a6;
  v74 = (unsigned __int8 *)a4;
  v25 = a11;
  if ( !a6 )
    v24 = a4;
  v63 = 0;
  if ( !a7 )
    v16 = a5;
  v77 = 0;
  v71 = v16;
  v73 = a5;
  v68 = (__int64)a12;
  v67 = a13;
  v70 = a15;
  v66 = a16;
  v76 = 257;
  v78 = 768;
  v72 = v24;
  *a15 = 0;
  if ( a14 )
    *a14 = 0;
  *a16 = 0;
  v26 = *((unsigned __int16 *)Src + 1);
  if ( (unsigned __int8)*Src > 0xAu && (unsigned __int8)(*Src - 13) > 1u )
  {
    if ( v26 > a13 + *(unsigned __int16 *)(a13 + 2) - (_QWORD)*a11 )
    {
      v41 = v66;
      *v66 = 1;
      goto LABEL_34;
    }
    memmove(*a11, Src, *((unsigned __int16 *)Src + 1));
    v25 = a11;
    goto LABEL_28;
  }
  v27 = 0LL;
  Srca = Src;
  v75 = 0LL;
  v64 = 0;
  if ( (unsigned __int8)*Src <= 3u )
  {
    v28 = (unsigned __int16 *)(Src + 8);
    v29 = 8;
    goto LABEL_10;
  }
  if ( ((*Src - 9) & 0xFA) == 0 )
  {
    v28 = (unsigned __int16 *)(Src + 8);
    v29 = 8;
    v46 = (unsigned __int8)Src[9];
    v75 = &Src[4 * v46 + 16];
    v64 = v26 - (4 * v46 + 16);
    goto LABEL_10;
  }
  if ( *Src != 4 )
  {
    v23 = (_QWORD *)(*((_DWORD *)Src + 2) & 2);
    v54 = (*((_DWORD *)Src + 2) & 2) != 0 ? 0x10 : 0;
    v55 = (*((_DWORD *)Src + 2) & 1) != 0 ? 0x10 : 0;
    v28 = (unsigned __int16 *)&Src[v54 + 12 + v55];
    v29 = v55 + v54 + 12;
    if ( (_DWORD)v23 )
    {
      if ( (*((_DWORD *)Src + 2) & 1) != 0 )
        v56 = Src + 28;
      else
        v56 = Src + 12;
    }
    else
    {
      v56 = 0LL;
    }
    if ( a14 && v56 )
    {
      v57 = a9;
      if ( a9 && (v58 = 0, a10) )
      {
        while ( 1 )
        {
          v23 = (_QWORD *)*v57;
          v59 = *(_QWORD *)v56 - *(_QWORD *)*v57;
          if ( *(_QWORD *)v56 == *(_QWORD *)*v57 )
            v59 = *((_QWORD *)v56 + 1) - v23[1];
          if ( !v59 )
            break;
          ++v58;
          ++v57;
          if ( v58 >= a10 )
            goto LABEL_80;
        }
        *a14 = 1;
        if ( a3 )
        {
          v63 = 1;
        }
        else
        {
          *a15 = 1;
          if ( (Src[8] & 1) != 0 )
          {
            v29 -= 16;
            LODWORD(v26) = v26 - 16;
            memmove(v80, Src, v29);
            v81 &= ~2u;
          }
          else
          {
            v29 -= 20;
            LODWORD(v26) = v26 - 20;
            memmove(v80, Src, v29);
            v80[0] = byte_180120FA0[(unsigned __int8)*Src];
          }
          Srca = v80;
        }
      }
      else
      {
LABEL_80:
        LODWORD(v26) = 0;
      }
    }
    goto LABEL_81;
  }
  v27 = (unsigned __int8 *)(Src + 12);
  v29 = 12;
  v28 = (unsigned __int16 *)&Src[4 * (unsigned __int8)Src[13] + 20];
  if ( !(unsigned __int8)RtlEqualPrefixSid(Src + 12, &v76, a16, a11) )
  {
    v27 = 0LL;
    v29 = 4 * (unsigned __int8)Src[13] + 20;
    goto LABEL_81;
  }
  v47 = *((_DWORD *)Src + 5);
  if ( !v47 )
  {
    v27 = v74;
    v52 = v74[1];
LABEL_63:
    *a15 = 1;
    LODWORD(v26) = v26 + 4 * v52 - 4;
    goto LABEL_64;
  }
  v48 = v47 - 1;
  if ( !v48 )
  {
    if ( !v73 )
      goto LABEL_64;
    v52 = *(unsigned __int8 *)(v73 + 1);
    v27 = (unsigned __int8 *)v73;
    goto LABEL_63;
  }
  v49 = v48 - 1;
  if ( !v49 )
  {
    v50 = (unsigned __int8 *)v72;
    goto LABEL_59;
  }
  if ( v49 == 1 )
  {
    v50 = (unsigned __int8 *)v71;
LABEL_59:
    v27 = v50;
    v51 = v50[1];
    *a15 = 1;
    LODWORD(v26) = v26 + 4 * v51 - 4;
LABEL_81:
    v25 = a11;
    goto LABEL_10;
  }
LABEL_64:
  v25 = a11;
  if ( !*a15 )
  {
    v53 = v27[1];
    v27 = 0LL;
    v29 = 4 * v53 + 20;
  }
LABEL_10:
  if ( (_DWORD)v26 )
  {
    v65 = *((_DWORD *)Src + 1);
    RtlMapGenericMask(&v65, a8, v23, v25);
    if ( (unsigned __int8)*Src <= 0xAu && (v32 = 1651, _bittest(&v32, (unsigned __int8)*Src)) )
      v33 = *(_DWORD *)(a8 + 12) & v65;
    else
      v33 = (*(_DWORD *)(a8 + 12) | 0x1000000) & v65;
    v34 = v70;
    if ( v33 != *((_DWORD *)Src + 1) )
      *v70 = 1;
    v35 = v33 & 0x11FFFFF;
    if ( !v35 && !(unsigned __int8)RtlEqualPrefixSid(v28, &v76, v30, v31) )
    {
      v25 = a11;
      LODWORD(v26) = 0;
      goto LABEL_27;
    }
    if ( !(unsigned __int8)RtlEqualPrefixSid(v28, &v76, v30, v31) )
    {
LABEL_18:
      if ( v63 && *v34 )
      {
        if ( (Src[8] & 1) != 0 )
        {
          v29 -= 16;
          LODWORD(v26) = v26 - 16;
          memmove(v80, Src, v29);
          v81 &= ~2u;
          v36 = v80;
        }
        else
        {
          v29 -= 20;
          LODWORD(v26) = v26 - 20;
          memmove(v80, Src, v29);
          v36 = v80;
          v80[0] = byte_180120FA0[(unsigned __int8)*Src];
        }
      }
      else
      {
        v36 = (char *)Srca;
      }
      v25 = a11;
      v37 = (char *)*a11;
      if ( !*a11 || (unsigned int)v26 > v67 + *(unsigned __int16 *)(v67 + 2) - (_QWORD)v37 )
      {
        v41 = v66;
        v22 = v67;
        v21 = (_DWORD *)v68;
        v17 = a2;
        *v66 = 1;
        goto LABEL_29;
      }
      memmove(*a11, v36, v29);
      v38 = &v37[v29];
      if ( v27 )
      {
        memmove(v38, v27, 4LL * v27[1] + 8);
        v38 += 4 * v27[1] + 8;
      }
      memmove(v38, v28, 4LL * *((unsigned __int8 *)v28 + 1) + 8);
      v39 = &v38[4 * *((unsigned __int8 *)v28 + 1) + 8];
      if ( v75 && v64 > 0 )
      {
        memmove(v39, v75, v64);
        LODWORD(v39) = v64 + (_DWORD)v39;
      }
      v25 = a11;
      v40 = (_DWORD)v39 - *(_DWORD *)a11;
      if ( (unsigned int)v26 < v40 )
        return 0;
      LODWORD(v26) = v40;
      *((_WORD *)*a11 + 1) = v40;
      *((_DWORD *)*a11 + 1) = v35;
      goto LABEL_27;
    }
    v43 = *((_DWORD *)v28 + 2);
    if ( v43 )
    {
      v60 = v43 - 1;
      if ( v60 )
      {
        v61 = v60 - 1;
        if ( v61 )
        {
          if ( v61 != 1 )
            goto LABEL_18;
          v44 = (unsigned __int16 *)v71;
        }
        else
        {
          v44 = (unsigned __int16 *)v72;
        }
      }
      else
      {
        v44 = (unsigned __int16 *)v73;
        if ( !v73 )
          goto LABEL_18;
      }
    }
    else
    {
      v44 = (unsigned __int16 *)v74;
    }
    v28 = v44;
    v45 = *((unsigned __int8 *)v44 + 1);
    *v34 = 1;
    LODWORD(v26) = v26 + 4 * v45 - 4;
    goto LABEL_18;
  }
LABEL_27:
  v22 = v67;
  v21 = (_DWORD *)v68;
  v17 = a2;
LABEL_28:
  v41 = v66;
LABEL_29:
  if ( !*v41 && (_DWORD)v26 )
  {
    *((_BYTE *)*v25 + 1) &= 0xE0u;
    if ( v17 )
      *((_BYTE *)*v25 + 1) |= 0x10u;
    ++*(_WORD *)(v22 + 4);
  }
LABEL_34:
  if ( (unsigned int)v26 > 0xFFFF )
    return 0;
  if ( !*v41 )
    *v25 = (char *)*v25 + (unsigned int)v26;
  *v21 = v26;
  return 1;
}
