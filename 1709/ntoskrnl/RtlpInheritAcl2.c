/*
 * XREFs of RtlpInheritAcl2 @ 0x1404BE9E0
 * Callers:
 *     RtlpNewSecurityObject @ 0x1404BCE00 (RtlpNewSecurityObject.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     RtlFirstFreeAce @ 0x140486230 (RtlFirstFreeAce.c)
 *     RtlpCopyAces @ 0x1404BF510 (RtlpCopyAces.c)
 *     RtlpGenerateInheritAcl @ 0x1404C05B0 (RtlpGenerateInheritAcl.c)
 */

__int64 __fastcall RtlpInheritAcl2(
        UCHAR *a1,
        unsigned __int8 *a2,
        __int16 a3,
        unsigned __int8 a4,
        __int64 a5,
        char a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        PGENERIC_MAPPING a11,
        int a12,
        __int64 a13,
        int a14,
        PACE a15,
        PACL Acl,
        _BYTE *a17,
        int *a18)
{
  PACE v18; // r12
  PACL v19; // rdi
  char v20; // r11
  int v22; // esi
  ACE_HEADER Header; // ebx
  __int64 v24; // r8
  unsigned __int8 *v25; // r10
  int v26; // r15d
  int v27; // ebp
  unsigned __int8 v28; // bl
  _BYTE *v29; // r9
  int *v30; // rax
  int v31; // ecx
  char v32; // al
  __int64 result; // rax
  int v34; // ecx
  UCHAR v35; // r14
  __int64 v36; // rax
  char v37; // al
  int v38; // eax
  char v39; // [rsp+80h] [rbp-68h]
  char v40; // [rsp+81h] [rbp-67h]
  USHORT AceCount; // [rsp+82h] [rbp-66h]
  unsigned int v42; // [rsp+84h] [rbp-64h]
  __int64 v43; // [rsp+88h] [rbp-60h] BYREF
  PACE Ace; // [rsp+90h] [rbp-58h] BYREF
  char v47; // [rsp+100h] [rbp+18h]

  v18 = a15;
  v19 = Acl;
  v20 = 0;
  v43 = 0LL;
  v22 = 0;
  Header = a15->Header;
  v24 = 2LL;
  Ace = 0LL;
  v25 = a2;
  v26 = 0;
  AceCount = 0;
  v27 = 0;
  v47 = 0;
  v39 = 0;
  v40 = 1;
  v42 = 2;
  if ( (unsigned int)(*(_DWORD *)&Header - 8) <= 0xFFF4 )
  {
    memset(Acl, 0, *(unsigned int *)&Header);
    v25 = a2;
    v24 = 2LL;
    *(_WORD *)&v19->AclRevision = 2;
    *(_DWORD *)&v19->AceCount = 0;
    v19->AclSize = *(_WORD *)&Header.AceType & 0xFFFC;
    v20 = 0;
  }
  v28 = a5;
  v29 = a17;
  v30 = a18;
  v31 = (_BYTE)a5 != 0 ? 0x400 : 0;
  *a17 = 0;
  *v30 = v31;
  if ( (a3 & 8) != 0 )
    goto LABEL_20;
  if ( (a3 & 0x1000) != 0 )
  {
    v20 = 1;
    v39 = 1;
    *v30 = v31 | 0x1000;
  }
  if ( (a3 & 0x1004) == 0 )
    goto LABEL_20;
  if ( v25 )
  {
    if ( *v25 >= 2u )
      v42 = *v25;
    v40 = 0;
    if ( v28 )
    {
      if ( (a3 & 0x1000) != 0 )
      {
        LOBYTE(v29) = 16;
      }
      else
      {
        v24 = 1LL;
        LOBYTE(v29) = 0;
      }
      v32 = 1;
    }
    else
    {
      LOBYTE(v29) = 0;
      v32 = 0;
    }
    result = RtlpCopyAces(v25, a11, v24, v29, v32, a7, a8, a9, a10, a4, 0, a12, (char *)&v43 + 4, v19);
    v26 = HIDWORD(v43);
    v27 = HIDWORD(v43);
    if ( (_DWORD)result == -1073741789 )
    {
      v47 = 1;
    }
    else if ( (int)result < 0 )
    {
      return result;
    }
    if ( a6 )
    {
      if ( HIDWORD(v43) )
      {
        AceCount = v19->AceCount;
        if ( !RtlFirstFreeAce(v19, &Ace) )
          return 3221225597LL;
      }
    }
    v25 = a2;
    v29 = a17;
    v20 = v39;
LABEL_18:
    v34 = a12;
    if ( a12 == 1 )
    {
LABEL_49:
      *v29 = 1;
      goto LABEL_20;
    }
    goto LABEL_19;
  }
  if ( !v28 )
    goto LABEL_18;
  v34 = a12;
  if ( a12 == 1 )
  {
    if ( (a3 & 0x1004) == 4 )
      return 3221225591LL;
    goto LABEL_49;
  }
LABEL_19:
  if ( v34 == 2 && (v26 || v20 || v25 && !*((_WORD *)v25 + 2)) )
    goto LABEL_49;
LABEL_20:
  if ( (v28 || (a3 & 4) != 0) && (a3 & 8) == 0 && (!v28 || v20) || !a1 )
  {
    v35 = v42;
    goto LABEL_26;
  }
  if ( (unsigned __int8)(*a1 - 2) > 2u )
    return 3221225560LL;
  v35 = v42;
  if ( v42 <= *a1 )
    v35 = *a1;
  result = RtlpGenerateInheritAcl(
             (int)a1,
             a4,
             v28,
             a7,
             a8,
             a9,
             a10,
             a11,
             a13,
             a14,
             a12,
             v47,
             (__int64)&v43,
             v19,
             (__int64)&a5);
  if ( (_DWORD)result == -1073741789 )
  {
    v37 = 1;
    v47 = 1;
LABEL_41:
    if ( a6 && v26 && (_BYTE)a5 && !v37 )
    {
      if ( !RtlFirstFreeAce(v19, &a15) )
        return 3221225597LL;
      v38 = (int)a15;
      if ( !a15 )
        v38 = (_DWORD)v19 + v19->AclSize;
      memmove(&v19[1], Ace, (unsigned int)(v38 - (_DWORD)Ace));
      v19->AceCount -= AceCount;
      v27 = 0;
    }
    v22 = v43;
LABEL_26:
    v36 = (unsigned int)(v22 + v27);
    if ( !(_DWORD)v36 )
    {
      if ( !*a17 )
      {
        v18->Header = 0;
        return 2147483659LL;
      }
      if ( v40 )
      {
        v18->Header = 0;
        return 0LL;
      }
    }
    if ( (unsigned __int64)(v36 + 8) <= 0xFFFF )
    {
      v18->Header = (ACE_HEADER)(v22 + v26 + 8);
      if ( v47 )
        return 3221225507LL;
      v19->AclRevision = v35;
      v19->AclSize = v22 + v27 + 8;
      return 0LL;
    }
    return 3221225597LL;
  }
  if ( (int)result >= 0 )
  {
    v37 = v47;
    goto LABEL_41;
  }
  return result;
}
