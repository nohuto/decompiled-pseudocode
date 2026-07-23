/*
 * XREFs of RtlpInheritAcl2 @ 0x1404C5AE0
 * Callers:
 *     RtlpNewSecurityObject @ 0x1404C43A0 (RtlpNewSecurityObject.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlpCopyAces @ 0x1404C6710 (RtlpCopyAces.c)
 *     RtlFirstFreeAce @ 0x1404C7400 (RtlFirstFreeAce.c)
 *     RtlpGenerateInheritAcl @ 0x1404C8260 (RtlpGenerateInheritAcl.c)
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
  PACE v18; // r13
  PACL v19; // rdi
  char v20; // r11
  unsigned int v21; // r12d
  ACE_HEADER Header; // ebx
  unsigned __int8 *v24; // r10
  int v25; // r8d
  int v26; // esi
  int v27; // r14d
  unsigned __int8 v28; // bl
  _BYTE *v29; // r9
  int *v30; // rax
  int v31; // ecx
  char v32; // al
  __int64 result; // rax
  char v34; // r12
  int v35; // ecx
  int v36; // ebx
  UCHAR v37; // bp
  __int64 v38; // rax
  UCHAR v39; // cl
  int v40; // eax
  char v41; // [rsp+80h] [rbp-68h]
  USHORT AceCount; // [rsp+82h] [rbp-66h]
  int v43; // [rsp+84h] [rbp-64h] BYREF
  unsigned int v44; // [rsp+88h] [rbp-60h]
  _DWORD v45[23]; // [rsp+8Ch] [rbp-5Ch] BYREF
  char v48; // [rsp+100h] [rbp+18h]

  v18 = a15;
  v19 = Acl;
  v20 = 0;
  v43 = 0;
  v21 = 2;
  v45[0] = 0;
  Header = a15->Header;
  v24 = a2;
  *(_QWORD *)&v45[1] = 0LL;
  v25 = 0;
  v26 = 0;
  AceCount = 0;
  v27 = 0;
  v48 = 0;
  v41 = 1;
  v44 = 2;
  if ( (unsigned int)(*(_DWORD *)&Header - 8) <= 0xFFF4 )
  {
    memset(Acl, 0, *(unsigned int *)&Header);
    v25 = v43;
    v24 = a2;
    v19->AclSize = *(_WORD *)&Header.AceType & 0xFFFC;
    v20 = 0;
    *(_WORD *)&v19->AclRevision = 2;
    *(_DWORD *)&v19->AceCount = 0;
  }
  v28 = a5;
  v29 = a17;
  v30 = a18;
  v31 = (_BYTE)a5 != 0 ? 0x400 : 0;
  *a17 = 0;
  *v30 = v31;
  if ( (a3 & 8) != 0 )
    goto LABEL_40;
  if ( (a3 & 0x1000) != 0 )
  {
    v20 = 1;
    v48 = 1;
    *v30 = v31 | 0x1000;
  }
  if ( (a3 & 0x1004) == 0 )
  {
LABEL_40:
    v34 = 0;
    goto LABEL_21;
  }
  if ( v24 )
  {
    if ( *v24 >= 2u )
      v44 = *v24;
    v41 = 0;
    if ( v28 )
    {
      if ( (a3 & 0x1000) != 0 )
      {
        LOBYTE(v29) = 16;
      }
      else
      {
        v21 = 1;
        LOBYTE(v29) = 0;
      }
      v32 = 1;
    }
    else
    {
      LOBYTE(v29) = 0;
      v32 = 0;
    }
    result = RtlpCopyAces(v24, a11, v21, v29, v32, a7, a8, a9, a10, a4, 0, a12, &v43, v19);
    v25 = v43;
    v26 = v43;
    if ( (_DWORD)result == -1073741789 )
    {
      v34 = 1;
    }
    else
    {
      if ( (int)result < 0 )
        return result;
      v34 = 0;
    }
    if ( a6 && v43 )
    {
      AceCount = v19->AceCount;
      if ( !RtlFirstFreeAce(v19, (PACE *)&v45[1]) )
        return 3221225597LL;
      v25 = v43;
    }
    v24 = a2;
    v29 = a17;
    v20 = v48;
  }
  else
  {
    if ( v28 )
    {
      v35 = a12;
      if ( a12 == 1 )
      {
        if ( (a3 & 0x1004) == 4 )
          return 3221225591LL;
        v34 = 0;
        goto LABEL_46;
      }
      v34 = 0;
      goto LABEL_20;
    }
    v34 = 0;
  }
  v35 = a12;
  if ( a12 == 1 )
    goto LABEL_46;
LABEL_20:
  if ( v35 != 2 )
    goto LABEL_21;
  if ( v25 || v20 )
  {
LABEL_46:
    *v29 = 1;
    goto LABEL_21;
  }
  if ( v24 && !*((_WORD *)v24 + 2) )
    *v29 = 1;
LABEL_21:
  if ( (v28 || (a3 & 4) != 0) && (a3 & 8) == 0 && (!v28 || v20) || !a1 )
  {
    v36 = v43;
    v37 = v44;
LABEL_27:
    v38 = (unsigned int)(v27 + v26);
    if ( !(_DWORD)v38 )
    {
      if ( !*a17 )
      {
        v18->Header = 0;
        return 2147483659LL;
      }
      if ( v41 )
      {
        v18->Header = 0;
        return 0LL;
      }
    }
    if ( (unsigned __int64)(v38 + 8) <= 0xFFFF )
    {
      v18->Header = (ACE_HEADER)(v27 + v36 + 8);
      if ( v34 )
        return 3221225507LL;
      v19->AclRevision = v37;
      v19->AclSize = v27 + v26 + 8;
      return 0LL;
    }
    return 3221225597LL;
  }
  v39 = *a1;
  if ( (unsigned __int8)(*a1 - 2) > 2u )
    return 3221225560LL;
  v37 = v44;
  if ( v44 <= v39 )
  {
    v44 = v39;
    v37 = v39;
  }
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
             v34,
             (__int64)v45,
             v19,
             (__int64)&a5);
  if ( (_DWORD)result == -1073741789 )
  {
    v34 = 1;
LABEL_38:
    v36 = v43;
    if ( a6 && v43 && (_BYTE)a5 && !v34 )
    {
      if ( !RtlFirstFreeAce(v19, &a15) )
        return 3221225597LL;
      v40 = (int)a15;
      if ( !a15 )
        v40 = (_DWORD)v19 + v19->AclSize;
      memmove(&v19[1], *(const void **)&v45[1], (unsigned int)(v40 - v45[1]));
      v19->AceCount -= AceCount;
      v26 = 0;
    }
    v27 = v45[0];
    goto LABEL_27;
  }
  if ( (int)result >= 0 )
    goto LABEL_38;
  return result;
}
