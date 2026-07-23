/*
 * XREFs of sub_180071344 @ 0x180071344
 * Callers:
 *     sub_1800302AC @ 0x1800302AC (sub_1800302AC.c)
 *     sub_1800E0748 @ 0x1800E0748 (sub_1800E0748.c)
 * Callees:
 *     RtlFindAceByType @ 0x1800306C0 (RtlFindAceByType.c)
 *     RtlFirstFreeAce @ 0x180037550 (RtlFirstFreeAce.c)
 *     sub_180037A68 @ 0x180037A68 (sub_180037A68.c)
 *     RtlMapGenericMask @ 0x180037EF0 (RtlMapGenericMask.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall sub_180071344(
        __int64 a1,
        GENERIC_MAPPING *a2,
        int a3,
        char a4,
        char a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10,
        char a11,
        int a12,
        unsigned int *a13,
        PACL Acl)
{
  char v14; // r14
  PGENERIC_MAPPING v15; // r15
  unsigned int *v16; // r13
  unsigned __int8 v18; // al
  _BYTE *v19; // rsi
  unsigned int v20; // ebx
  unsigned int v21; // edx
  ACCESS_MASK *v22; // rdi
  signed __int64 v23; // r13
  int v24; // ecx
  int GenericAll; // eax
  bool v27; // al
  int v28; // edx
  char v29; // al
  _BYTE *v30; // rbx
  char v31; // r15
  char v32; // cl
  char v33; // r8
  int v34; // ecx
  _BYTE v36[11]; // [rsp+89h] [rbp-68h] BYREF
  int v37; // [rsp+94h] [rbp-5Dh]
  PVOID FirstFree; // [rsp+98h] [rbp-59h] BYREF
  int v39; // [rsp+A0h] [rbp-51h]
  PGENERIC_MAPPING GenericMapping; // [rsp+A8h] [rbp-49h]
  __int64 v41; // [rsp+B0h] [rbp-41h]
  __int64 v42; // [rsp+B8h] [rbp-39h]
  __int64 v43; // [rsp+C0h] [rbp-31h]
  __int64 v44; // [rsp+C8h] [rbp-29h]
  __int64 v45; // [rsp+D0h] [rbp-21h]
  unsigned int *v46; // [rsp+D8h] [rbp-19h]
  int v47; // [rsp+E0h] [rbp-11h]
  unsigned __int16 v48; // [rsp+E4h] [rbp-Dh]

  v14 = 0;
  v15 = a2;
  v16 = a13;
  v44 = a6;
  v43 = a7;
  v42 = a8;
  v41 = a9;
  v18 = Acl->AclRevision - 2;
  v39 = a3;
  GenericMapping = a2;
  v45 = a1;
  v46 = a13;
  if ( v18 > 2u )
    return 3221225560LL;
  if ( !RtlFirstFreeAce(Acl, &FirstFree) )
    return 3221225597LL;
  v19 = (_BYTE *)(a1 + 8);
  v20 = 0;
  v21 = 0;
  v37 = 0;
  *(_DWORD *)&v36[3] = 0;
  if ( !*(_WORD *)(a1 + 4) )
    goto LABEL_26;
  v22 = (ACCESS_MASK *)FirstFree;
  while ( *v19 != 17 )
  {
    if ( a12 == 3 )
      goto LABEL_23;
LABEL_7:
    switch ( v39 )
    {
      case 0:
        if ( (v19[1] & 0x10) != 0 )
          goto LABEL_10;
        v27 = 0;
LABEL_28:
        if ( !v27 )
          break;
LABEL_10:
        if ( !a5 )
        {
          v23 = *((unsigned __int16 *)v19 + 1);
          if ( v22 && v23 <= (__int64)Acl + Acl->AclSize - (_QWORD)v22 )
          {
            if ( !v14 )
            {
              memmove(v22, v19, *((unsigned __int16 *)v19 + 1));
              if ( (*(_BYTE *)v22 <= 0xAu || (unsigned __int8)(*(_BYTE *)v22 - 13) <= 1u)
                && (*((_BYTE *)v22 + 1) & 8) == 0 )
              {
                RtlMapGenericMask(v22 + 1, v15);
                if ( *(_BYTE *)v22 <= 0xAu && (v24 = 1651, _bittest(&v24, *(unsigned __int8 *)v22)) )
                  GenericAll = v15->GenericAll;
                else
                  GenericAll = v15->GenericAll | 0x1000000;
                v22[1] &= GenericAll;
              }
              *((_BYTE *)v22 + 1) &= ~a4;
              ++Acl->AceCount;
              goto LABEL_21;
            }
LABEL_58:
            v22 = (ACCESS_MASK *)((char *)Acl + Acl->AclSize);
            goto LABEL_22;
          }
          v14 = 1;
          goto LABEL_44;
        }
        v28 = 0;
        v29 = v19[1];
        v30 = v22;
        *(_DWORD *)&v36[7] = 0;
        LODWORD(v23) = 0;
        FirstFree = v22;
        v36[0] = 0;
        if ( !a10 || (v31 = 1, (v29 & 3) == 0) )
          v31 = 0;
        if ( (v29 & 8) == 0 )
        {
          v32 = 0;
          if ( a11 )
            v32 = (v29 & 0x10) != 0;
          if ( !sub_180037A68(
                  v19,
                  v32,
                  v31,
                  v44,
                  (unsigned __int8 *)v43,
                  v42,
                  v41,
                  GenericMapping,
                  0LL,
                  0,
                  &FirstFree,
                  &v36[7],
                  (__int64)Acl,
                  0LL,
                  v36,
                  &v36[1]) )
            return 3221225597LL;
          v28 = *(_DWORD *)&v36[7];
          LODWORD(v23) = *(_DWORD *)&v36[7];
          if ( v36[1] )
            v14 = 1;
          if ( !v14 && *(_DWORD *)&v36[7] )
          {
            v33 = a4;
            v30 = FirstFree;
            *((_BYTE *)v22 + 1) &= ~a4;
            goto LABEL_43;
          }
          v30 = FirstFree;
        }
        v33 = a4;
LABEL_43:
        if ( v31 )
        {
          v47 = 0;
          v34 = *(_DWORD *)(v19 + 10);
          v48 = 768;
          if ( !v34 )
            v34 = *((unsigned __int16 *)v19 + 7) - v48;
          if ( v28 && !v36[0] )
          {
            if ( v14 )
              goto LABEL_58;
            *((_BYTE *)v22 + 1) = ~v33 & (*((_BYTE *)v22 + 1) | v19[1] & 0x1F);
LABEL_21:
            v22 = (ACCESS_MASK *)((char *)v22 + (unsigned int)v23);
LABEL_22:
            v15 = GenericMapping;
            v20 = v23 + v37;
            v21 = *(_DWORD *)&v36[3];
            v37 += v23;
            break;
          }
          if ( *v19 > 8u || *((_DWORD *)v19 + 1) || !v34 )
          {
            LODWORD(v23) = *((unsigned __int16 *)v19 + 1) + (_DWORD)v23;
            if ( (unsigned int)v23 > 0xFFFF )
              return 3221225597LL;
            if ( *((unsigned __int16 *)v19 + 1) > (__int64)Acl + Acl->AclSize - (_QWORD)v30 )
            {
              v14 = 1;
              goto LABEL_58;
            }
            if ( v14 )
              goto LABEL_58;
            memmove(v30, v19, *((unsigned __int16 *)v19 + 1));
            v30[1] = ~a4 & (v30[1] | 8);
            ++Acl->AceCount;
          }
        }
LABEL_44:
        if ( v14 )
          goto LABEL_58;
        goto LABEL_21;
      case 1:
        v27 = (v19[1] & 0x10) == 0;
        goto LABEL_28;
      case 2:
        goto LABEL_10;
    }
LABEL_23:
    ++v21;
    v19 += *((unsigned __int16 *)v19 + 1);
    *(_DWORD *)&v36[3] = v21;
    if ( v21 >= *(unsigned __int16 *)(v45 + 4) )
      goto LABEL_24;
  }
  if ( a12 != 3 )
    goto LABEL_23;
  if ( !RtlFindAceByType(Acl, 0x11u, 0LL) )
  {
    v21 = *(_DWORD *)&v36[3];
    goto LABEL_7;
  }
LABEL_24:
  if ( v20 > 0xFFFF )
    return 3221225597LL;
  v16 = v46;
LABEL_26:
  *v16 = v20;
  return v14 != 0 ? 0xC0000023 : 0;
}
