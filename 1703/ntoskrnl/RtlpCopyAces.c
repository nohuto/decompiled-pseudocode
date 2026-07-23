/*
 * XREFs of RtlpCopyAces @ 0x140471BB0
 * Callers:
 *     RtlpInheritAcl2 @ 0x14051E100 (RtlpInheritAcl2.c)
 *     RtlpComputeMergedAcl2 @ 0x1406EA184 (RtlpComputeMergedAcl2.c)
 * Callees:
 *     RtlFindAceByType @ 0x1400DBB80 (RtlFindAceByType.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     RtlpCopyEffectiveAce @ 0x1404721D0 (RtlpCopyEffectiveAce.c)
 */

__int64 __fastcall RtlpCopyAces(
        __int64 a1,
        GENERIC_MAPPING *a2,
        int a3,
        char a4,
        char a5,
        void *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10,
        __int64 a11,
        int a12,
        unsigned int *a13,
        PACL Acl)
{
  int v14; // esi
  GENERIC_MAPPING *GenericMapping; // r10
  __int64 v16; // rbp
  unsigned int *v17; // r12
  unsigned __int8 v18; // al
  char v19; // r9
  USHORT AceCount; // dx
  PACL v21; // rcx
  int *v22; // rbx
  unsigned int v23; // r8d
  __int64 v24; // rdi
  unsigned int v25; // r15d
  unsigned int v26; // r13d
  char v27; // r12
  char v28; // dl
  signed __int64 v29; // rsi
  int v30; // ecx
  GENERIC_MAPPING *v31; // rdx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  unsigned int v35; // eax
  int v36; // ecx
  int GenericAll; // eax
  int v39; // ecx
  int *v40; // rbp
  bool v41; // r12
  char v42; // r8
  int v43; // edx
  char v45; // [rsp+81h] [rbp-97h]
  _WORD v46[7]; // [rsp+82h] [rbp-96h] BYREF
  __int64 v47; // [rsp+90h] [rbp-88h] BYREF
  GENERIC_MAPPING *v48; // [rsp+98h] [rbp-80h]
  int v49; // [rsp+A0h] [rbp-78h]
  void *v50[2]; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v51; // [rsp+B8h] [rbp-60h]
  __int64 v52; // [rsp+C0h] [rbp-58h]
  __int64 v53; // [rsp+C8h] [rbp-50h]
  unsigned int *v54; // [rsp+D0h] [rbp-48h]
  int v55; // [rsp+D8h] [rbp-40h]
  unsigned __int16 v56; // [rsp+DCh] [rbp-3Ch]

  v14 = a3;
  GenericMapping = a2;
  v16 = a1;
  v17 = a13;
  v53 = a7;
  v52 = a8;
  v51 = a9;
  v18 = Acl->AclRevision - 2;
  v19 = 0;
  v49 = a3;
  v48 = a2;
  *(_QWORD *)&v46[3] = a1;
  v50[1] = a6;
  v54 = a13;
  v45 = 0;
  if ( v18 > 2u )
    return 3221225560LL;
  AceCount = Acl->AceCount;
  v21 = Acl + 1;
  v22 = 0LL;
  v23 = 0;
  if ( AceCount )
  {
    do
    {
      if ( v21 >= (PACL)((char *)Acl + Acl->AclSize) )
        return 3221225597LL;
      ++v23;
      v21 = (PACL)((char *)v21 + v21->AclSize);
    }
    while ( v23 < AceCount );
    v19 = 0;
  }
  if ( v21 <= (PACL)((char *)Acl + Acl->AclSize) )
    v22 = (int *)v21;
  v24 = v16 + 8;
  v25 = 0;
  v26 = 0;
  if ( !*(_WORD *)(v16 + 4) )
  {
LABEL_36:
    *v17 = v25;
    return v19 != 0 ? 0xC0000023 : 0;
  }
  v27 = a4;
  while ( 1 )
  {
    v28 = a5;
    if ( *(_BYTE *)v24 == 17 )
      break;
    if ( a12 == 3 )
      goto LABEL_32;
LABEL_9:
    if ( v14 == 2 )
      goto LABEL_10;
    if ( v14 )
    {
      if ( v14 == 1 && (*(_BYTE *)(v24 + 1) & 0x10) == 0 )
      {
LABEL_10:
        if ( !v28 )
        {
          v29 = *(unsigned __int16 *)(v24 + 2);
          if ( v22 && v29 <= (__int64)Acl + Acl->AclSize - (_QWORD)v22 )
          {
            if ( !v19 )
            {
              memmove(v22, (const void *)v24, *(unsigned __int16 *)(v24 + 2));
              if ( (*(_BYTE *)v22 <= 0xAu || (unsigned __int8)(*(_BYTE *)v22 - 13) <= 1u)
                && (*((_BYTE *)v22 + 1) & 8) == 0 )
              {
                v30 = v22[1];
                v31 = v48;
                if ( v30 < 0 )
                  v22[1] = v30 | v48->GenericRead;
                v32 = v22[1];
                if ( (v32 & 0x40000000) != 0 )
                  v22[1] = v32 | v31->GenericWrite;
                v33 = v22[1];
                if ( (v33 & 0x20000000) != 0 )
                  v22[1] = v33 | v31->GenericExecute;
                v34 = v22[1];
                if ( (v34 & 0x10000000) != 0 )
                  v22[1] = v34 | v31->GenericAll;
                v22[1] &= 0xFFFFFFFu;
                v35 = *(unsigned __int8 *)v22;
                if ( (unsigned __int8)v35 <= 0xAu && (v36 = 1651, _bittest(&v36, v35)) )
                  GenericAll = v31->GenericAll;
                else
                  GenericAll = v31->GenericAll | 0x1000000;
                v22[1] &= GenericAll;
              }
              *((_BYTE *)v22 + 1) &= ~v27;
LABEL_29:
              v19 = v45;
              ++Acl->AceCount;
LABEL_30:
              v22 = (int *)((char *)v22 + (unsigned int)v29);
LABEL_31:
              v25 += v29;
              v14 = v49;
              goto LABEL_32;
            }
          }
          else
          {
            v19 = 1;
            v45 = 1;
          }
          goto LABEL_63;
        }
        v39 = 0;
        LODWORD(v47) = 0;
        v40 = v22;
        LOBYTE(v46[0]) = 0;
        LODWORD(v29) = 0;
        v50[0] = v22;
        v41 = a10 && (*(_BYTE *)(v24 + 1) & 3) != 0;
        if ( (*(_BYTE *)(v24 + 1) & 8) == 0 )
        {
          if ( !(unsigned __int8)RtlpCopyEffectiveAce(
                                   (void *)v24,
                                   v53,
                                   v52,
                                   v51,
                                   GenericMapping,
                                   0LL,
                                   0,
                                   (__int64)v50,
                                   (__int64)&v47,
                                   (__int64)Acl,
                                   0LL,
                                   (__int64)v46,
                                   (__int64)v46 + 1) )
            return 3221225597LL;
          if ( HIBYTE(v46[0]) )
          {
            v19 = 1;
            v45 = 1;
          }
          else
          {
            v19 = v45;
          }
          v39 = v47;
          LODWORD(v29) = v47;
          if ( !v19 && (_DWORD)v47 )
          {
            v42 = a4;
            v40 = (int *)v50[0];
            *((_BYTE *)v22 + 1) &= ~a4;
            goto LABEL_46;
          }
          v40 = (int *)v50[0];
        }
        v42 = a4;
LABEL_46:
        if ( !v41 )
          goto LABEL_47;
        v43 = *(_DWORD *)(v24 + 10);
        v55 = 0;
        v56 = 768;
        if ( !v43 )
          v43 = *(unsigned __int16 *)(v24 + 14) - v56;
        if ( v39 && !LOBYTE(v46[0]) )
        {
          v16 = *(_QWORD *)&v46[3];
          v27 = a4;
          if ( !v19 )
          {
            *((_BYTE *)v22 + 1) = ~v42 & (*((_BYTE *)v22 + 1) | *(_BYTE *)(v24 + 1) & 0x1F);
            goto LABEL_30;
          }
          goto LABEL_63;
        }
        if ( *(_BYTE *)v24 > 8u || *(_DWORD *)(v24 + 4) || !v43 )
        {
          LODWORD(v29) = *(unsigned __int16 *)(v24 + 2) + (_DWORD)v29;
          if ( (unsigned int)v29 > 0xFFFF )
            return 3221225597LL;
          if ( *(unsigned __int16 *)(v24 + 2) > (__int64)Acl + Acl->AclSize - (_QWORD)v40 )
          {
            v19 = 1;
            v45 = 1;
          }
          else if ( !v19 )
          {
            memmove(v40, (const void *)v24, *(unsigned __int16 *)(v24 + 2));
            v27 = a4;
            *((_BYTE *)v40 + 1) = ~a4 & (*((_BYTE *)v40 + 1) | 8);
            v16 = *(_QWORD *)&v46[3];
            goto LABEL_29;
          }
        }
        else
        {
LABEL_47:
          if ( !v19 )
          {
            v16 = *(_QWORD *)&v46[3];
            v27 = a4;
            goto LABEL_30;
          }
        }
        v16 = *(_QWORD *)&v46[3];
        v27 = a4;
LABEL_63:
        v22 = (int *)((char *)Acl + Acl->AclSize);
        goto LABEL_31;
      }
    }
    else if ( (*(_BYTE *)(v24 + 1) & 0x10) != 0 )
    {
      goto LABEL_10;
    }
LABEL_32:
    ++v26;
    v24 += *(unsigned __int16 *)(v24 + 2);
    if ( v26 >= *(unsigned __int16 *)(v16 + 4) )
      goto LABEL_34;
    GenericMapping = v48;
  }
  if ( a12 != 3 )
    goto LABEL_32;
  if ( !RtlFindAceByType(Acl, 0x11u, 0LL) )
  {
    v19 = v45;
    v28 = a5;
    GenericMapping = v48;
    goto LABEL_9;
  }
LABEL_34:
  if ( v25 <= 0xFFFF )
  {
    v19 = v45;
    v17 = v54;
    goto LABEL_36;
  }
  return 3221225597LL;
}
