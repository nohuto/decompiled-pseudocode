/*
 * XREFs of sub_1800E0A40 @ 0x1800E0A40
 * Callers:
 *     RtlConvertToAutoInheritSecurityObject_0 @ 0x1800E1278 (RtlConvertToAutoInheritSecurityObject_0.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_1800300BC @ 0x1800300BC (sub_1800300BC.c)
 *     RtlCreateAcl @ 0x180030680 (RtlCreateAcl.c)
 *     RtlValidAcl @ 0x1800375A0 (RtlValidAcl.c)
 *     RtlMapGenericMask @ 0x180037EF0 (RtlMapGenericMask.c)
 *     sub_1800441A8 @ 0x1800441A8 (sub_1800441A8.c)
 *     RtlInitializeSid @ 0x180044340 (RtlInitializeSid.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall sub_1800E0A40(
        ACL *a1,
        ACL *a2,
        __int64 a3,
        char a4,
        __int64 a5,
        __int64 a6,
        PGENERIC_MAPPING GenericMapping,
        PVOID *a8,
        _DWORD *a9)
{
  PVOID *v10; // r13
  _DWORD *v12; // rdi
  _DWORD *v13; // r15
  PVOID ProcessHeap; // r14
  int v15; // ebx
  ACL *v16; // rbx
  BOOL v17; // ecx
  bool v18; // cf
  GENERIC_MAPPING *v19; // rsi
  int v20; // eax
  PVOID v21; // rcx
  signed int AceCount; // eax
  unsigned __int16 *v23; // r13
  ACL *v24; // rbx
  int *v25; // rsi
  int v26; // ecx
  int GenericAll; // edx
  int v28; // edx
  char v29; // r8
  int v30; // ecx
  int v31; // r9d
  int v32; // ecx
  int v33; // eax
  unsigned __int8 *v34; // rbx
  int v35; // ecx
  int v36; // ecx
  ACCESS_MASK v37; // ecx
  int v38; // eax
  char v39; // dl
  unsigned __int16 *v40; // r15
  ACCESS_MASK v41; // r8d
  ACCESS_MASK v42; // eax
  ACCESS_MASK v43; // r9d
  ACCESS_MASK v44; // edx
  ACCESS_MASK v45; // ecx
  ACCESS_MASK v46; // esi
  ACCESS_MASK v47; // edi
  _DWORD *v48; // r14
  ACCESS_MASK v49; // r13d
  signed int v50; // eax
  __int64 v51; // rbx
  char v52; // r9
  char v53; // r10
  int v54; // esi
  unsigned __int8 *v55; // rdx
  __int64 v56; // r11
  _DWORD *v57; // r8
  __int64 v58; // rax
  int v59; // ecx
  char v60; // al
  unsigned __int16 *v61; // rbx
  ACL *v62; // rax
  PVOID *v63; // r14
  BYTE AclRevision; // cl
  _BYTE *v66; // r14
  int v67; // ecx
  PVOID *v68; // rdi
  _DWORD *v69; // r15
  int v70; // ebx
  _BYTE *v71; // r13
  unsigned __int16 *v72; // rcx
  ACCESS_MASK v73; // esi
  int v74; // ebx
  ACCESS_MASK v75; // eax
  int v76; // eax
  _WORD *v77; // rsi
  PVOID v78; // rax
  ACCESS_MASK v80; // [rsp+94h] [rbp-7Ch] BYREF
  __int64 v81; // [rsp+98h] [rbp-78h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+A0h] [rbp-70h] BYREF
  ACCESS_MASK v83; // [rsp+A8h] [rbp-68h]
  ACCESS_MASK v84; // [rsp+ACh] [rbp-64h] BYREF
  PVOID *v85; // [rsp+B0h] [rbp-60h]
  PVOID BaseAddress; // [rsp+B8h] [rbp-58h] BYREF
  PVOID HeapHandle; // [rsp+C0h] [rbp-50h]
  PVOID v88; // [rsp+C8h] [rbp-48h] BYREF
  unsigned __int16 *v89; // [rsp+D0h] [rbp-40h]
  _DWORD *Heap; // [rsp+D8h] [rbp-38h]
  ACCESS_MASK v91; // [rsp+E0h] [rbp-30h]
  ACCESS_MASK v92; // [rsp+E4h] [rbp-2Ch]
  int v93; // [rsp+E8h] [rbp-28h] BYREF
  __int64 v94; // [rsp+F0h] [rbp-20h] BYREF
  _DWORD *v95; // [rsp+F8h] [rbp-18h]
  __int64 v96; // [rsp+100h] [rbp-10h]
  __int64 v97; // [rsp+108h] [rbp-8h]
  PACL Acl; // [rsp+110h] [rbp+0h]
  __int64 v99; // [rsp+118h] [rbp+8h] BYREF
  int v100; // [rsp+120h] [rbp+10h]
  char Sid[8]; // [rsp+148h] [rbp+38h] BYREF
  int v102; // [rsp+150h] [rbp+40h]

  v10 = a8;
  v12 = a9;
  v97 = a5;
  v96 = a6;
  v13 = 0LL;
  BaseAddress = 0LL;
  v88 = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  Acl = a1;
  v94 = a3;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  HeapHandle = ProcessHeap;
  v85 = a8;
  v95 = a9;
  *(_WORD *)&IdentifierAuthority.Value[4] = 768;
  v15 = RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
  if ( v15 < 0 )
    return (unsigned int)v15;
  v102 = 0;
  v15 = RtlInitializeSid(&v99, &IdentifierAuthority, 1u);
  if ( v15 < 0 )
    return (unsigned int)v15;
  v16 = Acl;
  *a9 = 1024;
  v100 = 1;
  *a8 = 0LL;
  if ( v16 && !RtlValidAcl(v16) || !RtlValidAcl(a2) )
    return (unsigned int)-1073741705;
  v17 = a3 != 0;
  v18 = a3 != 0;
  v19 = GenericMapping;
  v20 = sub_1800300BC(
          (__int64)v16,
          0,
          0,
          a4,
          1,
          0,
          (int)Sid,
          (__int64)&v99,
          (__int64)Sid,
          (__int64)&v99,
          GenericMapping,
          2,
          (unsigned __int64)&v94 & -(__int64)v18,
          v17,
          &BaseAddress,
          &v81,
          &v93);
  v21 = BaseAddress;
  v15 = v20;
  if ( v20 == -2147483637 )
  {
    *a9 |= 0x1000u;
    goto LABEL_90;
  }
  if ( v20 >= 0 )
  {
    Heap = RtlAllocateHeap(ProcessHeap, Flags + 1310720, 24LL * a2->AceCount);
    v13 = Heap;
    if ( !Heap )
    {
      v15 = -1073741801;
LABEL_65:
      v21 = BaseAddress;
      goto LABEL_66;
    }
    LOWORD(AceCount) = a2->AceCount;
    v80 = 0;
    v23 = (unsigned __int16 *)&a2[1];
    v89 = (unsigned __int16 *)&a2[1];
    v24 = a2 + 1;
    if ( (_WORD)AceCount )
    {
      v25 = Heap + 1;
      while ( v24->AclRevision <= 8u && v24->AclRevision != 4 )
      {
        HIDWORD(v81) = *(_DWORD *)&v24->AceCount;
        RtlMapGenericMask((PACCESS_MASK)&v81 + 1, GenericMapping);
        if ( v24->AclRevision <= 0xAu && (v26 = 1635, _bittest(&v26, v24->AclRevision)) )
          GenericAll = GenericMapping->GenericAll;
        else
          GenericAll = GenericMapping->GenericAll | 0x1000000;
        v28 = HIDWORD(v81) & GenericAll;
        v29 = v24->Sbz1 & 3 | ~v24->Sbz1 & 8;
        if ( (v24->Sbz1 & 2) != 0 )
        {
          v30 = v28;
          v31 = v28;
        }
        else
        {
          v31 = 0;
          v30 = 0;
        }
        v25[2] = v31;
        *(v25 - 1) = v30;
        v32 = (v29 & 1) != 0 ? v28 : 0;
        *v25 = v32;
        v25[3] = v32;
        v33 = (v29 & 8) != 0 ? v28 : 0;
        v25[1] = v33;
        v25[4] = v33;
        v25 += 6;
        v24 = (ACL *)((char *)v24 + v24->AclSize);
        AceCount = a2->AceCount;
        if ( (int)++v80 >= AceCount )
        {
          v19 = GenericMapping;
          goto LABEL_25;
        }
      }
LABEL_31:
      *v12 |= 0x1000u;
      v10 = v85;
    }
    else
    {
LABEL_25:
      v84 = 0;
      v34 = (unsigned __int8 *)BaseAddress + 8;
      if ( *((_WORD *)BaseAddress + 2) )
      {
        while ( *v34 <= 8u && *v34 != 4 )
        {
          v80 = *((_DWORD *)v34 + 1);
          RtlMapGenericMask(&v80, v19);
          if ( *v34 <= 0xAu && (v35 = 1635, _bittest(&v35, *v34)) )
            v36 = v19->GenericAll;
          else
            v36 = v19->GenericAll | 0x1000000;
          v37 = v80 & v36;
          if ( v37 )
          {
            v38 = v34[1] & 3;
            v39 = v38 | ~v34[1] & 8;
            if ( v38 | ~v34[1] & 8 )
            {
              v80 = 0;
              v40 = v23;
              v41 = (v39 & 2) != 0 ? v37 : 0;
              v92 = v41;
              v42 = v41;
              v43 = (v39 & 1) != 0 ? v37 : 0;
              *(_DWORD *)IdentifierAuthority.Value = v43;
              v44 = (v39 & 8) != 0 ? v37 : 0;
              v45 = v43;
              v46 = v44;
              v91 = v44;
              if ( a2->AceCount )
              {
                v47 = v41;
                v48 = Heap + 5;
                v49 = v43;
                do
                {
                  if ( sub_1800441A8(v34, (char *)v40) )
                  {
                    v46 &= ~*(v48 - 3);
                    v47 &= ~*(v48 - 5);
                    v49 &= ~*(v48 - 4);
                    *v48 &= ~v91;
                    *(v48 - 2) &= ~v92;
                    *(v48 - 1) &= ~*(_DWORD *)IdentifierAuthority.Value;
                  }
                  v48 += 6;
                  v40 = (unsigned __int16 *)((char *)v40 + v40[1]);
                  v50 = a2->AceCount;
                  ++v80;
                }
                while ( (int)v80 < v50 );
                v83 = v49;
                v23 = (unsigned __int16 *)&a2[1];
                v45 = v83;
                HIDWORD(v81) = v47;
                v12 = v95;
                v42 = HIDWORD(v81);
              }
              if ( v42 | v45 | v46 )
                break;
              v19 = GenericMapping;
            }
          }
          v34 += *((unsigned __int16 *)v34 + 1);
          if ( (int)++v84 >= *((unsigned __int16 *)BaseAddress + 2) )
          {
            LOWORD(AceCount) = a2->AceCount;
            ProcessHeap = HeapHandle;
            v13 = Heap;
            goto LABEL_45;
          }
        }
        *v12 |= 0x1000u;
        v10 = v85;
      }
      else
      {
LABEL_45:
        v51 = (unsigned __int16)AceCount;
        v52 = 0;
        v53 = 0;
        v54 = 0;
        v55 = (unsigned __int8 *)v23;
        if ( (_WORD)AceCount )
        {
          v56 = 0LL;
          v57 = v13 + 4;
          do
          {
            v58 = *v55;
            if ( *v57 | v57[1] | *(v57 - 1) )
            {
              v59 = *((unsigned __int16 *)v55 + 1);
              v60 = byte_180120D70[v58];
              v54 += v59;
              ProcessHeap = HeapHandle;
              if ( !v60 && v53 || v60 == 1 && v52 )
                goto LABEL_31;
            }
            else
            {
              if ( !byte_180120D70[v58] )
                v52 = 1;
              v12 = v95;
              if ( byte_180120D70[v58] == 1 )
                v53 = 1;
              LOWORD(v59) = *((_WORD *)v55 + 1);
            }
            ++v56;
            v55 += (unsigned __int16)v59;
            v57 += 6;
          }
          while ( v56 < v51 );
        }
        v15 = sub_1800300BC(
                (__int64)Acl,
                0,
                0,
                a4,
                1,
                0,
                v97,
                v96,
                v97,
                v96,
                GenericMapping,
                2,
                (unsigned __int64)&v94 & -(__int64)(v94 != 0),
                v94 != 0,
                &v88,
                &v81,
                &v93);
        if ( v15 < 0 )
          goto LABEL_63;
        v61 = (unsigned __int16 *)v88;
        v62 = (ACL *)RtlAllocateHeap(ProcessHeap, Flags + 1310720, v54 + (unsigned int)*((unsigned __int16 *)v88 + 1));
        v63 = v85;
        *v85 = v62;
        if ( !v62 )
        {
          v15 = -1073741801;
          goto LABEL_62;
        }
        AclRevision = *(_BYTE *)v88;
        if ( *(_BYTE *)v88 <= a2->AclRevision )
          AclRevision = a2->AclRevision;
        if ( RtlCreateAcl(v62, v54 + v61[1], AclRevision) < 0 )
        {
          *v12 |= 0x1000u;
          v10 = v63;
          goto LABEL_90;
        }
        v66 = (char *)*v63 + 8;
        v83 = 0;
        v67 = 0;
        if ( a2->AceCount )
        {
          v68 = v85;
          v69 = v13 + 4;
          do
          {
            v70 = *v69 | v69[1] | *(v69 - 1);
            if ( v70 )
            {
              memmove(v66, v23, v23[1]);
              v66[1] &= ~0x10u;
              v71 = v66;
              v72 = v89;
              v73 = 0x80000000;
              v66 += v89[1];
              ++*((_WORD *)*v68 + 2);
              *((_DWORD *)v71 + 1) = *((_DWORD *)v72 + 1) & v70;
              v74 = ~*((_DWORD *)v72 + 1) & v70;
              if ( v74 )
              {
                do
                {
                  if ( v73 < 0x10000000 )
                    break;
                  if ( (v73 & *((_DWORD *)v72 + 1)) != 0 )
                  {
                    v84 = v73;
                    RtlMapGenericMask(&v84, GenericMapping);
                    v75 = v84;
                    v72 = v89;
                    if ( (v84 & v74) != 0 )
                    {
                      *((_DWORD *)v71 + 1) |= v73;
                      v74 &= ~v75;
                    }
                  }
                  v73 >>= 1;
                }
                while ( v74 );
                v68 = v85;
              }
              *((_DWORD *)v71 + 1) |= v74;
              v23 = v89;
              v67 = v83;
            }
            ++v67;
            v23 = (unsigned __int16 *)((char *)v23 + v23[1]);
            v83 = v67;
            v76 = a2->AceCount;
            v69 += 6;
            v89 = v23;
          }
          while ( v67 < v76 );
          v12 = v95;
          v61 = (unsigned __int16 *)v88;
        }
        v77 = v88;
        memmove(v66, (char *)v88 + 8, (unsigned int)v61[1] - 8);
        v10 = v85;
        *((_WORD *)*v85 + 2) += v77[2];
      }
      v13 = Heap;
    }
LABEL_90:
    v15 = 0;
    if ( (*v12 & 0x1000) != 0 )
    {
      ProcessHeap = HeapHandle;
      if ( *v10 )
      {
        RtlFreeHeap(HeapHandle, 0, *v10);
        *v10 = 0LL;
      }
      v78 = RtlAllocateHeap(ProcessHeap, Flags + 1310720, a2->AclSize);
      *v10 = v78;
      if ( v78 )
        memmove(v78, a2, a2->AclSize);
      else
        v15 = -1073741801;
      goto LABEL_63;
    }
LABEL_62:
    ProcessHeap = HeapHandle;
LABEL_63:
    if ( v13 )
      RtlFreeHeap(ProcessHeap, 0, v13);
    goto LABEL_65;
  }
LABEL_66:
  if ( v21 )
    RtlFreeHeap(ProcessHeap, 0, v21);
  if ( v88 )
    RtlFreeHeap(ProcessHeap, 0, v88);
  return (unsigned int)v15;
}
