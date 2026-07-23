/*
 * XREFs of RtlpCopyAces @ 0x1404BF510
 * Callers:
 *     RtlpInheritAcl2 @ 0x1404BE9E0 (RtlpInheritAcl2.c)
 *     RtlpComputeMergedAcl2 @ 0x140722074 (RtlpComputeMergedAcl2.c)
 * Callees:
 *     RtlFindAceByType @ 0x140087840 (RtlFindAceByType.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     RtlpCopyEffectiveAce @ 0x1404C0110 (RtlpCopyEffectiveAce.c)
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
  PACL v20; // rcx
  unsigned int v21; // r8d
  int *v22; // rbx
  __int64 v23; // rdi
  unsigned int v24; // r15d
  unsigned int v25; // r13d
  char v26; // r12
  char v27; // dl
  signed __int64 v28; // rsi
  int v29; // ecx
  GENERIC_MAPPING *v30; // rdx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  unsigned int v34; // eax
  int v35; // ecx
  int GenericAll; // eax
  int v38; // ecx
  int *v39; // rbp
  bool v40; // r12
  char v41; // r8
  int v42; // edx
  char v44; // [rsp+81h] [rbp-97h]
  _WORD v45[7]; // [rsp+82h] [rbp-96h] BYREF
  __int64 v46; // [rsp+90h] [rbp-88h] BYREF
  GENERIC_MAPPING *v47; // [rsp+98h] [rbp-80h]
  int v48; // [rsp+A0h] [rbp-78h]
  void *v49[2]; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v50; // [rsp+B8h] [rbp-60h]
  __int64 v51; // [rsp+C0h] [rbp-58h]
  __int64 v52; // [rsp+C8h] [rbp-50h]
  unsigned int *v53; // [rsp+D0h] [rbp-48h]
  int v54; // [rsp+D8h] [rbp-40h]
  unsigned __int16 v55; // [rsp+DCh] [rbp-3Ch]

  v14 = a3;
  GenericMapping = a2;
  v16 = a1;
  v17 = a13;
  v52 = a7;
  v51 = a8;
  v50 = a9;
  v18 = Acl->AclRevision - 2;
  v19 = 0;
  v48 = a3;
  v47 = a2;
  *(_QWORD *)&v45[3] = a1;
  v49[1] = a6;
  v53 = a13;
  v44 = 0;
  if ( v18 > 2u )
    return 3221225560LL;
  v20 = Acl + 1;
  v21 = 0;
  v22 = 0LL;
  if ( Acl->AceCount )
  {
    do
    {
      if ( v20 >= (PACL)((char *)Acl + Acl->AclSize) )
        return 3221225597LL;
      ++v21;
      v20 = (PACL)((char *)v20 + v20->AclSize);
    }
    while ( v21 < Acl->AceCount );
    v19 = 0;
  }
  if ( v20 <= (PACL)((char *)Acl + Acl->AclSize) )
    v22 = (int *)v20;
  v23 = v16 + 8;
  v24 = 0;
  v25 = 0;
  if ( !*(_WORD *)(v16 + 4) )
  {
LABEL_36:
    *v17 = v24;
    return v19 != 0 ? 0xC0000023 : 0;
  }
  v26 = a4;
  while ( 1 )
  {
    v27 = a5;
    if ( *(_BYTE *)v23 == 17 )
      break;
    if ( a12 == 3 )
      goto LABEL_32;
LABEL_9:
    if ( v14 == 2 )
      goto LABEL_10;
    if ( v14 )
    {
      if ( v14 == 1 && (*(_BYTE *)(v23 + 1) & 0x10) == 0 )
      {
LABEL_10:
        if ( !v27 )
        {
          v28 = *(unsigned __int16 *)(v23 + 2);
          if ( !v22 || v28 > (__int64)Acl + Acl->AclSize - (_QWORD)v22 )
          {
            v19 = 1;
            v44 = 1;
            v22 = (int *)((char *)Acl + Acl->AclSize);
            goto LABEL_31;
          }
          if ( !v19 )
          {
            memmove(v22, (const void *)v23, *(unsigned __int16 *)(v23 + 2));
            if ( (*(_BYTE *)v22 <= 0xAu || (unsigned __int8)(*(_BYTE *)v22 - 13) <= 1u)
              && (*((_BYTE *)v22 + 1) & 8) == 0 )
            {
              v29 = v22[1];
              v30 = v47;
              if ( v29 < 0 )
                v22[1] = v29 | v47->GenericRead;
              v31 = v22[1];
              if ( (v31 & 0x40000000) != 0 )
                v22[1] = v31 | v30->GenericWrite;
              v32 = v22[1];
              if ( (v32 & 0x20000000) != 0 )
                v22[1] = v32 | v30->GenericExecute;
              v33 = v22[1];
              if ( (v33 & 0x10000000) != 0 )
                v22[1] = v33 | v30->GenericAll;
              v22[1] &= 0xFFFFFFFu;
              v34 = *(unsigned __int8 *)v22;
              if ( (unsigned __int8)v34 <= 0xAu && (v35 = 1651, _bittest(&v35, v34)) )
                GenericAll = v30->GenericAll;
              else
                GenericAll = v30->GenericAll | 0x1000000;
              v22[1] &= GenericAll;
            }
            *((_BYTE *)v22 + 1) &= ~v26;
LABEL_29:
            v19 = v44;
            ++Acl->AceCount;
LABEL_30:
            v22 = (int *)((char *)v22 + (unsigned int)v28);
LABEL_31:
            v24 += v28;
            v14 = v48;
            goto LABEL_32;
          }
          goto LABEL_64;
        }
        v38 = 0;
        LODWORD(v46) = 0;
        v39 = v22;
        LOBYTE(v45[0]) = 0;
        LODWORD(v28) = 0;
        v49[0] = v22;
        v40 = a10 && (*(_BYTE *)(v23 + 1) & 3) != 0;
        if ( (*(_BYTE *)(v23 + 1) & 8) == 0 )
        {
          if ( !(unsigned __int8)RtlpCopyEffectiveAce(
                                   (void *)v23,
                                   v52,
                                   v51,
                                   v50,
                                   GenericMapping,
                                   0LL,
                                   0,
                                   (__int64)v49,
                                   (__int64)&v46,
                                   (__int64)Acl,
                                   0LL,
                                   (__int64)v45,
                                   (__int64)v45 + 1) )
            return 3221225597LL;
          if ( HIBYTE(v45[0]) )
          {
            v19 = 1;
            v44 = 1;
          }
          else
          {
            v19 = v44;
          }
          v38 = v46;
          LODWORD(v28) = v46;
          if ( !v19 && (_DWORD)v46 )
          {
            v41 = a4;
            v39 = (int *)v49[0];
            *((_BYTE *)v22 + 1) &= ~a4;
            goto LABEL_50;
          }
          v39 = (int *)v49[0];
        }
        v41 = a4;
LABEL_50:
        if ( !v40 )
          goto LABEL_51;
        v42 = *(_DWORD *)(v23 + 10);
        v54 = 0;
        v55 = 768;
        if ( !v42 )
          v42 = *(unsigned __int16 *)(v23 + 14) - v55;
        if ( v38 && !LOBYTE(v45[0]) )
        {
          v16 = *(_QWORD *)&v45[3];
          v26 = a4;
          if ( !v19 )
          {
            *((_BYTE *)v22 + 1) = ~v41 & (*((_BYTE *)v22 + 1) | *(_BYTE *)(v23 + 1) & 0x1F);
            goto LABEL_30;
          }
          goto LABEL_64;
        }
        if ( *(_BYTE *)v23 > 8u || *(_DWORD *)(v23 + 4) || !v42 )
        {
          LODWORD(v28) = *(unsigned __int16 *)(v23 + 2) + (_DWORD)v28;
          if ( (unsigned int)v28 > 0xFFFF )
            return 3221225597LL;
          if ( *(unsigned __int16 *)(v23 + 2) > (__int64)Acl + Acl->AclSize - (_QWORD)v39 )
          {
            v19 = 1;
            v44 = 1;
          }
          else if ( !v19 )
          {
            memmove(v39, (const void *)v23, *(unsigned __int16 *)(v23 + 2));
            v26 = a4;
            *((_BYTE *)v39 + 1) = ~a4 & (*((_BYTE *)v39 + 1) | 8);
            v16 = *(_QWORD *)&v45[3];
            goto LABEL_29;
          }
        }
        else
        {
LABEL_51:
          if ( !v19 )
          {
            v16 = *(_QWORD *)&v45[3];
            v26 = a4;
            goto LABEL_30;
          }
        }
        v16 = *(_QWORD *)&v45[3];
        v26 = a4;
LABEL_64:
        v22 = (int *)((char *)Acl + Acl->AclSize);
        goto LABEL_31;
      }
    }
    else if ( (*(_BYTE *)(v23 + 1) & 0x10) != 0 )
    {
      goto LABEL_10;
    }
LABEL_32:
    ++v25;
    v23 += *(unsigned __int16 *)(v23 + 2);
    if ( v25 >= *(unsigned __int16 *)(v16 + 4) )
      goto LABEL_34;
    GenericMapping = v47;
  }
  if ( a12 != 3 )
    goto LABEL_32;
  if ( !RtlFindAceByType(Acl, 0x11u, 0LL) )
  {
    v19 = v44;
    v27 = a5;
    GenericMapping = v47;
    goto LABEL_9;
  }
LABEL_34:
  if ( v24 <= 0xFFFF )
  {
    v19 = v44;
    v17 = v53;
    goto LABEL_36;
  }
  return 3221225597LL;
}
