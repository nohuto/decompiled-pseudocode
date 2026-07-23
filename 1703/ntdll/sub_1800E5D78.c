/*
 * XREFs of sub_1800E5D78 @ 0x1800E5D78
 * Callers:
 *     RtlConvertToAutoInheritSecurityObject_0 @ 0x1800E6584 (RtlConvertToAutoInheritSecurityObject_0.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlValidAcl @ 0x180044810 (RtlValidAcl.c)
 *     RtlInitializeSid @ 0x180047610 (RtlInitializeSid.c)
 *     sub_18004912C @ 0x18004912C (sub_18004912C.c)
 *     RtlCreateAcl @ 0x1800496D0 (RtlCreateAcl.c)
 *     RtlMapGenericMask @ 0x18004A040 (RtlMapGenericMask.c)
 *     sub_18004A198 @ 0x18004A198 (sub_18004A198.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall sub_1800E5D78(
        ACL *a1,
        ACL *Src,
        __int64 a3,
        char a4,
        __int64 a5,
        __int64 a6,
        PGENERIC_MAPPING GenericMapping,
        PVOID *a8,
        _DWORD *a9)
{
  PVOID *v10; // rsi
  _DWORD *v11; // rdi
  PVOID ProcessHeap; // r14
  int v15; // ebx
  int v16; // eax
  ACCESS_MASK *Heap; // rax
  char *v18; // r15
  unsigned __int16 *v19; // r13
  int v20; // r14d
  ACL *v21; // rsi
  ACCESS_MASK *v22; // rbx
  int v23; // ecx
  ACCESS_MASK v24; // ecx
  char v25; // dl
  int v26; // r14d
  unsigned __int8 *v27; // rbx
  int v28; // ecx
  ACCESS_MASK v29; // ecx
  int v30; // eax
  char v31; // dl
  unsigned __int16 *v32; // r15
  ACCESS_MASK v33; // eax
  ACCESS_MASK v34; // edx
  ACCESS_MASK v35; // ecx
  ACCESS_MASK v36; // esi
  int v37; // r13d
  _DWORD *v38; // r14
  ACCESS_MASK v39; // edi
  char v40; // al
  char v41; // r8
  char v42; // r10
  int v43; // r14d
  unsigned __int8 *v44; // rcx
  __int64 v45; // r9
  _DWORD *v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rax
  ACL *v49; // rbx
  ACL *v50; // rax
  PVOID *v51; // r15
  ACL *v52; // rcx
  signed int v53; // ecx
  _BYTE *v54; // r14
  ACL **v55; // rdi
  _DWORD *v56; // r15
  int v57; // ebx
  _BYTE *v58; // r13
  unsigned __int16 *v59; // rcx
  ACCESS_MASK v60; // esi
  int v61; // ebx
  ACCESS_MASK v62; // eax
  signed int AceCount; // eax
  _WORD *v64; // rsi
  __int16 v65; // ax
  PVOID v66; // rax
  ACCESS_MASK v68; // [rsp+90h] [rbp-80h] BYREF
  char v69; // [rsp+94h] [rbp-7Ch] BYREF
  char v70; // [rsp+95h] [rbp-7Bh]
  ACCESS_MASK v71; // [rsp+98h] [rbp-78h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+9Ch] [rbp-74h] BYREF
  ACCESS_MASK v73; // [rsp+A4h] [rbp-6Ch] BYREF
  ACL **v74; // [rsp+A8h] [rbp-68h]
  PVOID HeapHandle; // [rsp+B0h] [rbp-60h]
  PVOID v76; // [rsp+B8h] [rbp-58h] BYREF
  unsigned __int16 *v77; // [rsp+C0h] [rbp-50h]
  PVOID BaseAddress; // [rsp+C8h] [rbp-48h]
  __int64 v79; // [rsp+D0h] [rbp-40h] BYREF
  PVOID v80; // [rsp+D8h] [rbp-38h] BYREF
  ACCESS_MASK v81; // [rsp+E4h] [rbp-2Ch]
  ACCESS_MASK v82; // [rsp+E8h] [rbp-28h]
  int v83; // [rsp+ECh] [rbp-24h] BYREF
  __int64 v84; // [rsp+F0h] [rbp-20h]
  __int64 v85; // [rsp+F8h] [rbp-18h]
  _DWORD *v86; // [rsp+100h] [rbp-10h]
  int v87[2]; // [rsp+108h] [rbp-8h]
  __int64 v88; // [rsp+110h] [rbp+0h] BYREF
  int v89; // [rsp+118h] [rbp+8h]
  char Sid[8]; // [rsp+140h] [rbp+30h] BYREF
  int v91; // [rsp+148h] [rbp+38h]

  v10 = a8;
  v11 = a9;
  v85 = a5;
  v84 = a6;
  v80 = 0LL;
  v76 = 0LL;
  BaseAddress = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_QWORD *)v87 = a1;
  v79 = a3;
  v70 = a4;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  HeapHandle = ProcessHeap;
  v74 = (ACL **)a8;
  v86 = a9;
  *(_WORD *)&IdentifierAuthority.Value[4] = 768;
  v15 = RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
  if ( v15 < 0 )
    return (unsigned int)v15;
  v91 = 0;
  v15 = RtlInitializeSid(&v88, &IdentifierAuthority, 1u);
  if ( v15 < 0 )
    return (unsigned int)v15;
  *a9 = 1024;
  *a8 = 0LL;
  v89 = 1;
  if ( a1 && !RtlValidAcl(a1) || !RtlValidAcl(Src) )
    return (unsigned int)-1073741705;
  v16 = sub_18004912C(
          (__int64)a1,
          0,
          0,
          a4,
          1,
          0,
          (int)Sid,
          (__int64)&v88,
          (__int64)Sid,
          (__int64)&v88,
          GenericMapping,
          2,
          (unsigned __int64)&v79 & -(__int64)(v79 != 0),
          v79 != 0,
          &v80,
          &v69,
          &v83);
  v15 = v16;
  if ( v16 == -2147483637 )
  {
    *a9 |= 0x1000u;
    goto LABEL_83;
  }
  if ( v16 >= 0 )
  {
    Heap = (ACCESS_MASK *)RtlAllocateHeap(ProcessHeap, dword_18015B268 + 1310720, 24LL * Src->AceCount);
    BaseAddress = Heap;
    v18 = (char *)Heap;
    if ( Heap )
    {
      v19 = (unsigned __int16 *)&Src[1];
      v20 = 0;
      v77 = (unsigned __int16 *)&Src[1];
      v21 = Src + 1;
      if ( Src->AceCount )
      {
        v22 = Heap + 1;
        while ( v21->AclRevision <= 8u && v21->AclRevision != 4 )
        {
          v71 = *(_DWORD *)&v21->AceCount;
          RtlMapGenericMask(&v71, GenericMapping);
          if ( v21->AclRevision <= 0xAu && (v23 = 1635, _bittest(&v23, v21->AclRevision)) )
            v24 = GenericMapping->GenericAll & v71;
          else
            v24 = (GenericMapping->GenericAll | 0x1000000) & v71;
          v25 = v21->Sbz1 & 3 | ~v21->Sbz1 & 8;
          if ( (v21->Sbz1 & 2) != 0 )
          {
            *(v22 - 1) = v24;
            v22[2] = v24;
          }
          else
          {
            *(v22 - 1) = 0;
            v22[2] = 0;
          }
          if ( (v25 & 1) != 0 )
          {
            *v22 = v24;
            v22[3] = v24;
          }
          else
          {
            *v22 = 0;
            v22[3] = 0;
          }
          if ( (v25 & 8) != 0 )
          {
            v22[1] = v24;
            v22[4] = v24;
          }
          else
          {
            v22[1] = 0;
            v22[4] = 0;
          }
          ++v20;
          v22 += 6;
          v21 = (ACL *)((char *)v21 + v21->AclSize);
          if ( v20 >= Src->AceCount )
            goto LABEL_30;
        }
LABEL_36:
        v10 = (PVOID *)v74;
      }
      else
      {
LABEL_30:
        v26 = 0;
        v73 = 0;
        v27 = (unsigned __int8 *)v80 + 8;
        if ( *((_WORD *)v80 + 2) )
        {
          while ( *v27 <= 8u && *v27 != 4 )
          {
            v68 = *((_DWORD *)v27 + 1);
            RtlMapGenericMask(&v68, GenericMapping);
            if ( *v27 <= 0xAu && (v28 = 1635, _bittest(&v28, *v27)) )
              v29 = GenericMapping->GenericAll & v68;
            else
              v29 = (GenericMapping->GenericAll | 0x1000000) & v68;
            if ( v29 )
            {
              v30 = v27[1] & 3;
              v31 = v30 | ~v27[1] & 8;
              if ( v30 | ~v27[1] & 8 )
              {
                v32 = v19;
                v82 = (v27[1] & 2) != 0 ? v29 : 0;
                v33 = (v31 & 2) != 0 ? v29 : 0;
                *(_DWORD *)IdentifierAuthority.Value = (v31 & 1) != 0 ? v29 : 0;
                v34 = (v31 & 8) != 0 ? v29 : 0;
                v35 = *(_DWORD *)IdentifierAuthority.Value;
                v81 = v34;
                v36 = v34;
                v68 = *(_DWORD *)IdentifierAuthority.Value;
                if ( Src->AceCount )
                {
                  v37 = 0;
                  v38 = (char *)BaseAddress + 20;
                  v39 = v33;
                  do
                  {
                    v40 = sub_18004A198(v27, v32);
                    v35 = v68;
                    if ( v40 )
                    {
                      v36 &= ~*(v38 - 3);
                      v39 &= ~*(v38 - 5);
                      v35 = ~*(v38 - 4) & v68;
                      v68 = v35;
                      *v38 &= ~v81;
                      *(v38 - 2) &= ~v82;
                      *(v38 - 1) &= ~*(_DWORD *)IdentifierAuthority.Value;
                    }
                    ++v37;
                    v32 = (unsigned __int16 *)((char *)v32 + v32[1]);
                    v38 += 6;
                  }
                  while ( v37 < Src->AceCount );
                  v26 = v73;
                  v19 = (unsigned __int16 *)&Src[1];
                  v71 = v39;
                  v11 = v86;
                  v33 = v71;
                }
                if ( v33 | v35 | v36 )
                  goto LABEL_36;
              }
            }
            ++v26;
            v27 += *((unsigned __int16 *)v27 + 1);
            v73 = v26;
            if ( v26 >= *((unsigned __int16 *)v80 + 2) )
            {
              v18 = (char *)BaseAddress;
              goto LABEL_50;
            }
          }
LABEL_57:
          *v11 |= 0x1000u;
          v15 = 0;
          v10 = (PVOID *)v74;
          ProcessHeap = HeapHandle;
LABEL_84:
          if ( (*v11 & 0x1000) == 0 )
            goto LABEL_90;
          if ( *v10 )
          {
            RtlFreeHeap(ProcessHeap, 0, *v10);
            *v10 = 0LL;
          }
          v66 = RtlAllocateHeap(ProcessHeap, dword_18015B268 + 1310720, Src->AclSize);
          *v10 = v66;
          if ( v66 )
          {
            memmove(v66, Src, Src->AclSize);
LABEL_90:
            ProcessHeap = HeapHandle;
            if ( BaseAddress )
              RtlFreeHeap(HeapHandle, 0, BaseAddress);
            goto LABEL_92;
          }
LABEL_88:
          v15 = -1073741801;
          goto LABEL_90;
        }
LABEL_50:
        v41 = 0;
        v42 = 0;
        v43 = 0;
        v44 = (unsigned __int8 *)v19;
        v45 = 0LL;
        if ( Src->AceCount )
        {
          v46 = v18 + 16;
          do
          {
            if ( *v46 | v46[1] | *(v46 - 1) )
            {
              v43 += *((unsigned __int16 *)v44 + 1);
              v48 = *v44;
              if ( !byte_180120FA0[v48] && v42 || byte_180120FA0[v48] == 1 && v41 )
                goto LABEL_57;
            }
            else
            {
              v47 = *v44;
              if ( !byte_180120FA0[v47] )
                v41 = 1;
              if ( byte_180120FA0[v47] == 1 )
                v42 = 1;
            }
            ++v45;
            v44 += *((unsigned __int16 *)v44 + 1);
            v46 += 6;
          }
          while ( v45 < Src->AceCount );
        }
        v15 = sub_18004912C(
                *(__int64 *)v87,
                0,
                0,
                v70,
                1,
                0,
                v85,
                v84,
                v85,
                v84,
                GenericMapping,
                2,
                (unsigned __int64)&v79 & -(__int64)(v79 != 0),
                v79 != 0,
                &v76,
                &v69,
                &v83);
        if ( v15 < 0 )
          goto LABEL_90;
        v49 = (ACL *)v76;
        v50 = (ACL *)RtlAllocateHeap(
                       HeapHandle,
                       dword_18015B268 + 1310720,
                       v43 + (unsigned int)*((unsigned __int16 *)v76 + 1));
        v51 = (PVOID *)v74;
        *v74 = v50;
        if ( !v50 )
          goto LABEL_88;
        v52 = Src;
        if ( v49->AclRevision > Src->AclRevision )
          v52 = v49;
        if ( RtlCreateAcl(v50, v43 + v49->AclSize, v52->AclRevision) >= 0 )
        {
          v53 = 0;
          v54 = (char *)*v51 + 8;
          v68 = 0;
          if ( Src->AceCount )
          {
            v55 = v74;
            v56 = (char *)BaseAddress + 16;
            do
            {
              v57 = *v56 | v56[1] | *(v56 - 1);
              if ( v57 )
              {
                memmove(v54, v19, v19[1]);
                v54[1] &= ~0x10u;
                v58 = v54;
                v59 = v77;
                v60 = 0x80000000;
                v54 += v77[1];
                ++(*v55)->AceCount;
                *((_DWORD *)v58 + 1) = v57 & *((_DWORD *)v59 + 1);
                v61 = ~*((_DWORD *)v59 + 1) & v57;
                if ( v61 )
                {
                  do
                  {
                    if ( v60 < 0x10000000 )
                      break;
                    if ( (v60 & *((_DWORD *)v59 + 1)) != 0 )
                    {
                      v73 = v60;
                      RtlMapGenericMask(&v73, GenericMapping);
                      v62 = v73;
                      v59 = v77;
                      if ( (v73 & v61) != 0 )
                      {
                        *((_DWORD *)v58 + 1) |= v60;
                        v61 &= ~v62;
                      }
                    }
                    v60 >>= 1;
                  }
                  while ( v61 );
                  v55 = v74;
                }
                *((_DWORD *)v58 + 1) |= v61;
                v19 = v77;
                v53 = v68;
              }
              ++v53;
              v19 = (unsigned __int16 *)((char *)v19 + v19[1]);
              v68 = v53;
              AceCount = Src->AceCount;
              v56 += 6;
              v77 = v19;
            }
            while ( v53 < AceCount );
            v11 = v86;
            v49 = (ACL *)v76;
            v51 = (PVOID *)v74;
          }
          v64 = v76;
          memmove(v54, (char *)v76 + 8, (unsigned int)v49->AclSize - 8);
          v65 = v64[2];
          v10 = (PVOID *)v74;
          ProcessHeap = HeapHandle;
          *((_WORD *)*v51 + 2) += v65;
          goto LABEL_83;
        }
        v10 = v51;
      }
      *v11 |= 0x1000u;
      ProcessHeap = HeapHandle;
LABEL_83:
      v15 = 0;
      goto LABEL_84;
    }
    v15 = -1073741801;
  }
LABEL_92:
  if ( v80 )
    RtlFreeHeap(ProcessHeap, 0, v80);
  if ( v76 )
    RtlFreeHeap(ProcessHeap, 0, v76);
  return (unsigned int)v15;
}
