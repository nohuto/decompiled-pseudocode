/*
 * XREFs of sub_1800302AC @ 0x1800302AC
 * Callers:
 *     sub_1800300BC @ 0x1800300BC (sub_1800300BC.c)
 * Callees:
 *     RtlCreateAcl @ 0x180030680 (RtlCreateAcl.c)
 *     sub_180036F7C @ 0x180036F7C (sub_180036F7C.c)
 *     RtlFirstFreeAce @ 0x180037550 (RtlFirstFreeAce.c)
 *     sub_180071344 @ 0x180071344 (sub_180071344.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall sub_1800302AC(
        _BYTE *a1,
        unsigned __int8 *a2,
        int a3,
        char a4,
        char a5,
        char a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int a12,
        __int64 a13,
        int a14,
        _DWORD *a15,
        __int64 a16,
        _BYTE *a17,
        int *a18)
{
  __int64 v18; // rbx
  int v20; // r15d
  int v21; // edi
  unsigned int v22; // r12d
  int v23; // esi
  char v24; // r13
  _BYTE *v25; // r9
  int *v26; // rax
  int v27; // r8d
  int v28; // ecx
  bool v29; // zf
  int v30; // edx
  char v31; // al
  __int64 result; // rax
  __int64 v33; // rax
  int v34; // r8d
  char v35; // al
  int v36; // ecx
  int v37; // eax
  char v38; // [rsp+88h] [rbp-19h]
  char v39; // [rsp+89h] [rbp-18h]
  __int16 v40; // [rsp+8Ah] [rbp-17h]
  int v41; // [rsp+8Ch] [rbp-15h] BYREF
  int v42; // [rsp+90h] [rbp-11h] BYREF
  void *Src; // [rsp+98h] [rbp-9h] BYREF
  int v45; // [rsp+F8h] [rbp+57h] BYREF
  char v46; // [rsp+100h] [rbp+5Fh]

  v46 = a4;
  v45 = a3;
  v18 = a16;
  v42 = 0;
  v20 = 0;
  v41 = 0;
  v21 = 0;
  v40 = 0;
  Src = 0LL;
  v22 = 2;
  v38 = 0;
  v39 = 1;
  v23 = 0;
  v24 = 0;
  RtlCreateAcl(a16, (unsigned int)*a15, 2LL);
  v25 = a17;
  v26 = a18;
  v27 = v45;
  v28 = a5 != 0 ? 0x400 : 0;
  v29 = (v45 & 8) == 0;
  v30 = v45 & 8;
  *a17 = 0;
  LODWORD(a18) = v30;
  *v26 = v28;
  if ( v29 )
  {
    if ( (v27 & 0x1000) != 0 )
    {
      v38 = 1;
      *v26 = v28 | 0x1000;
    }
    if ( (v27 & 0x1004) == 0 )
      goto LABEL_5;
    if ( !a2 )
    {
      if ( a5 )
      {
        v36 = a12;
        if ( a12 == 1 )
        {
          if ( (v27 & 0x1004) == 4 )
            return 3221225591LL;
          goto LABEL_43;
        }
LABEL_49:
        v31 = v38;
        if ( v36 == 2 && (v20 || v38 || a2 && !*((_WORD *)a2 + 2)) )
          *v25 = 1;
        goto LABEL_6;
      }
LABEL_42:
      v36 = a12;
      if ( a12 == 1 )
      {
LABEL_43:
        *v25 = 1;
LABEL_5:
        v31 = v38;
LABEL_6:
        v30 = (int)a18;
        goto LABEL_7;
      }
      goto LABEL_49;
    }
    v39 = 0;
    if ( *a2 >= 2u )
      v22 = *a2;
    if ( a5 )
    {
      if ( (v27 & 0x1000) != 0 )
      {
        v34 = 2;
        LOBYTE(v25) = 16;
        v35 = 1;
        goto LABEL_37;
      }
      v34 = 1;
      v35 = 1;
    }
    else
    {
      v34 = 2;
      v35 = 0;
    }
    LOBYTE(v25) = 0;
LABEL_37:
    result = sub_180071344((_DWORD)a2, a11, v34, (_DWORD)v25, v35, a7, a8, a9, a10, v46, 0, a12, (__int64)&v42, v18);
    v20 = v42;
    v21 = v42;
    if ( (_DWORD)result == -1073741789 )
    {
      v24 = 1;
      result = 0LL;
    }
    if ( (int)result < 0 )
      return result;
    if ( a6 )
    {
      if ( v42 )
      {
        v40 = *(_WORD *)(v18 + 4);
        if ( !(unsigned __int8)RtlFirstFreeAce(v18, &Src) )
          return 3221225597LL;
      }
    }
    v27 = v45;
    v25 = a17;
    goto LABEL_42;
  }
  v31 = 0;
LABEL_7:
  if ( (a5 || (v27 & 4) != 0) && !v30 && (!a5 || v31) || !a1 )
    goto LABEL_18;
  if ( (unsigned __int8)(*a1 - 2) > 2u )
    return 3221225560LL;
  LOBYTE(v27) = a5;
  if ( v22 <= (unsigned __int8)*a1 )
    LOBYTE(v22) = *a1;
  LOBYTE(v30) = v46;
  result = sub_180036F7C(
             (_DWORD)a1,
             v30,
             v27,
             a7,
             a8,
             a9,
             a10,
             a11,
             a13,
             a14,
             a12,
             v24,
             (__int64)&v41,
             v18,
             (__int64)&v45);
  if ( (_DWORD)result == -1073741789 )
  {
    v24 = 1;
    result = 0LL;
  }
  if ( (int)result >= 0 )
  {
    if ( a6 && v20 && (_BYTE)v45 && !v24 )
    {
      if ( !(unsigned __int8)RtlFirstFreeAce(v18, &a18) )
        return 3221225597LL;
      v37 = (int)a18;
      if ( !a18 )
        v37 = v18 + *(unsigned __int16 *)(v18 + 2);
      memmove((void *)(v18 + 8), Src, (unsigned int)(v37 - (_DWORD)Src));
      *(_WORD *)(v18 + 4) -= v40;
      v21 = 0;
    }
    v23 = v41;
LABEL_18:
    v33 = (unsigned int)(v23 + v21);
    if ( !(_DWORD)v33 )
    {
      if ( !*a17 )
      {
        result = 2147483659LL;
LABEL_21:
        *a15 = 0;
        return result;
      }
      if ( v39 )
      {
        result = 0LL;
        goto LABEL_21;
      }
    }
    if ( (unsigned __int64)(v33 + 8) <= 0xFFFF )
    {
      *a15 = v23 + v20 + 8;
      if ( v24 )
        return 3221225507LL;
      *(_BYTE *)v18 = v22;
      *(_WORD *)(v18 + 2) = v23 + v21 + 8;
      return 0LL;
    }
    return 3221225597LL;
  }
  return result;
}
