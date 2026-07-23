/*
 * XREFs of RtlpConvertAclToAutoInherit @ 0x1800E53C0
 * Callers:
 *     RtlpConvertToAutoInheritSecurityObject @ 0x1800E5BD4 (RtlpConvertToAutoInheritSecurityObject.c)
 * Callees:
 *     RtlValidAcl @ 0x18002D7F0 (RtlValidAcl.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlpInheritAcl @ 0x180055308 (RtlpInheritAcl.c)
 *     RtlCreateAcl @ 0x1800558B0 (RtlCreateAcl.c)
 *     RtlMapGenericMask @ 0x1800564C0 (RtlMapGenericMask.c)
 *     RtlInitializeSid @ 0x180057700 (RtlInitializeSid.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     RtlpCompareAces @ 0x1800E5230 (RtlpCompareAces.c)
 */

__int64 __fastcall RtlpConvertAclToAutoInherit(
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
  PVOID *v10; // r14
  _DWORD *v11; // rdi
  void *ProcessHeap; // r15
  int v15; // ebx
  int v16; // eax
  int v17; // r14d
  unsigned int *Heap; // rax
  unsigned __int16 *v19; // r12
  ACL *v20; // rsi
  unsigned int *v21; // rbx
  int v22; // ecx
  unsigned int v23; // ecx
  char v24; // dl
  int v25; // r14d
  unsigned __int8 *v26; // rbx
  int v27; // ecx
  unsigned int v28; // ecx
  int v29; // eax
  char v30; // dl
  unsigned __int16 *v31; // r15
  ACCESS_MASK v32; // eax
  unsigned int v33; // edx
  ACCESS_MASK v34; // ecx
  unsigned int v35; // esi
  int v36; // r12d
  _DWORD *v37; // r14
  ACCESS_MASK v38; // edi
  char v39; // al
  char v40; // r8
  char v41; // r10
  int v42; // esi
  unsigned __int8 *v43; // rcx
  __int64 v44; // r9
  _DWORD *v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rax
  unsigned __int16 *v48; // rbx
  ACL *v49; // rax
  ACL *v50; // r9
  unsigned __int8 AclRevision; // al
  signed int v52; // ecx
  _BYTE *v53; // r14
  __int64 v54; // rdi
  _DWORD *v55; // r15
  int v56; // ebx
  _BYTE *v57; // r12
  unsigned __int16 *v58; // rcx
  ACCESS_MASK v59; // esi
  int v60; // ebx
  ACCESS_MASK v61; // eax
  signed int AceCount; // eax
  _WORD *v63; // rsi
  PVOID v64; // rax
  ACCESS_MASK v66; // [rsp+90h] [rbp-80h] BYREF
  char v67; // [rsp+94h] [rbp-7Ch] BYREF
  char v68; // [rsp+95h] [rbp-7Bh]
  ACCESS_MASK v69; // [rsp+98h] [rbp-78h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+9Ch] [rbp-74h] BYREF
  ACCESS_MASK v71; // [rsp+A4h] [rbp-6Ch] BYREF
  __int64 v72; // [rsp+A8h] [rbp-68h]
  PVOID v73; // [rsp+B0h] [rbp-60h] BYREF
  unsigned __int16 *v74; // [rsp+B8h] [rbp-58h]
  PVOID BaseAddress; // [rsp+C0h] [rbp-50h]
  __int64 v76; // [rsp+C8h] [rbp-48h] BYREF
  PVOID HeapHandle; // [rsp+D0h] [rbp-40h]
  PVOID v78; // [rsp+D8h] [rbp-38h] BYREF
  unsigned int v79; // [rsp+E4h] [rbp-2Ch]
  unsigned int v80; // [rsp+E8h] [rbp-28h]
  int v81; // [rsp+ECh] [rbp-24h] BYREF
  _DWORD *v82; // [rsp+F0h] [rbp-20h]
  __int64 v83; // [rsp+F8h] [rbp-18h]
  __int64 v84; // [rsp+100h] [rbp-10h]
  int v85[2]; // [rsp+108h] [rbp-8h]
  __int64 v86; // [rsp+110h] [rbp+0h] BYREF
  int v87; // [rsp+118h] [rbp+8h]
  char Sid[8]; // [rsp+140h] [rbp+30h] BYREF
  int v89; // [rsp+148h] [rbp+38h]

  v10 = a8;
  v11 = a9;
  v84 = a5;
  v83 = a6;
  v78 = 0LL;
  v73 = 0LL;
  BaseAddress = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_QWORD *)v85 = a1;
  v76 = a3;
  v68 = a4;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  HeapHandle = ProcessHeap;
  v72 = (__int64)a8;
  v82 = a9;
  *(_WORD *)&IdentifierAuthority.Value[4] = 768;
  v15 = RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
  if ( v15 < 0 )
    return (unsigned int)v15;
  v89 = 0;
  v15 = RtlInitializeSid(&v86, &IdentifierAuthority, 1u);
  if ( v15 < 0 )
    return (unsigned int)v15;
  *a9 = 1024;
  *a8 = 0LL;
  v87 = 1;
  if ( a1 && !RtlValidAcl(a1) || !RtlValidAcl(Src) )
    return (unsigned int)-1073741705;
  v16 = RtlpInheritAcl(
          (__int64)a1,
          0,
          0,
          a4,
          1,
          0,
          (int)Sid,
          (__int64)&v86,
          (__int64)Sid,
          (__int64)&v86,
          GenericMapping,
          2,
          (unsigned __int64)&v76 & -(__int64)(v76 != 0),
          v76 != 0,
          &v78,
          &v67,
          &v81);
  v15 = v16;
  if ( v16 == -2147483637 )
  {
    *a9 |= 0x1000u;
    goto LABEL_82;
  }
  v17 = 0;
  if ( v16 >= 0 )
  {
    Heap = (unsigned int *)RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, 24LL * Src->AceCount);
    BaseAddress = Heap;
    if ( !Heap )
    {
      v15 = -1073741801;
      goto LABEL_90;
    }
    v19 = (unsigned __int16 *)&Src[1];
    v20 = Src + 1;
    v74 = (unsigned __int16 *)&Src[1];
    if ( Src->AceCount )
    {
      v21 = Heap + 1;
      do
      {
        if ( v20->AclRevision > 8u || v20->AclRevision == 4 )
        {
LABEL_36:
          *v11 |= 0x1000u;
          v10 = (PVOID *)v72;
          goto LABEL_82;
        }
        v69 = *(_DWORD *)&v20->AceCount;
        RtlMapGenericMask(&v69, GenericMapping);
        if ( v20->AclRevision <= 0xAu && (v22 = 1635, _bittest(&v22, v20->AclRevision)) )
          v23 = GenericMapping->GenericAll & v69;
        else
          v23 = (GenericMapping->GenericAll | 0x1000000) & v69;
        v24 = v20->Sbz1 & 3 | ~v20->Sbz1 & 8;
        if ( (v20->Sbz1 & 2) != 0 )
        {
          *(v21 - 1) = v23;
          v21[2] = v23;
        }
        else
        {
          *(v21 - 1) = 0;
          v21[2] = 0;
        }
        if ( (v24 & 1) != 0 )
        {
          *v21 = v23;
          v21[3] = v23;
        }
        else
        {
          *v21 = 0;
          v21[3] = 0;
        }
        if ( (v24 & 8) != 0 )
        {
          v21[1] = v23;
          v21[4] = v23;
        }
        else
        {
          v21[1] = 0;
          v21[4] = 0;
        }
        ++v17;
        v21 += 6;
        v20 = (ACL *)((char *)v20 + v20->AclSize);
      }
      while ( v17 < Src->AceCount );
    }
    v25 = 0;
    v71 = 0;
    v26 = (unsigned __int8 *)v78 + 8;
    if ( *((_WORD *)v78 + 2) )
    {
      do
      {
        if ( *v26 > 8u || *v26 == 4 )
          goto LABEL_36;
        v66 = *((_DWORD *)v26 + 1);
        RtlMapGenericMask(&v66, GenericMapping);
        if ( *v26 <= 0xAu && (v27 = 1635, _bittest(&v27, *v26)) )
          v28 = GenericMapping->GenericAll & v66;
        else
          v28 = (GenericMapping->GenericAll | 0x1000000) & v66;
        if ( v28 )
        {
          v29 = v26[1] & 3;
          v30 = v29 | ~v26[1] & 8;
          if ( v29 | ~v26[1] & 8 )
          {
            v31 = v19;
            v80 = (v26[1] & 2) != 0 ? v28 : 0;
            v32 = (v30 & 2) != 0 ? v28 : 0;
            *(_DWORD *)IdentifierAuthority.Value = (v30 & 1) != 0 ? v28 : 0;
            v33 = (v30 & 8) != 0 ? v28 : 0;
            v34 = *(_DWORD *)IdentifierAuthority.Value;
            v35 = v33;
            v66 = *(_DWORD *)IdentifierAuthority.Value;
            v79 = v33;
            if ( Src->AceCount )
            {
              v36 = 0;
              v37 = (char *)BaseAddress + 20;
              v38 = v32;
              do
              {
                v39 = RtlpCompareAces(v26, (unsigned __int8 *)v31, (void *)v84, (void *)v83);
                v34 = v66;
                if ( v39 )
                {
                  v35 &= ~*(v37 - 3);
                  v38 &= ~*(v37 - 5);
                  v34 = ~*(v37 - 4) & v66;
                  v66 = v34;
                  *v37 &= ~v79;
                  *(v37 - 2) &= ~v80;
                  *(v37 - 1) &= ~*(_DWORD *)IdentifierAuthority.Value;
                }
                ++v36;
                v31 = (unsigned __int16 *)((char *)v31 + v31[1]);
                v37 += 6;
              }
              while ( v36 < Src->AceCount );
              v25 = v71;
              v19 = (unsigned __int16 *)&Src[1];
              v69 = v38;
              v11 = v82;
              v32 = v69;
            }
            if ( v32 | v34 | v35 )
              goto LABEL_36;
          }
        }
        ++v25;
        v26 += *((unsigned __int16 *)v26 + 1);
        v71 = v25;
      }
      while ( v25 < *((unsigned __int16 *)v78 + 2) );
      ProcessHeap = HeapHandle;
    }
    v40 = 0;
    v41 = 0;
    v42 = 0;
    v43 = (unsigned __int8 *)v19;
    v44 = 0LL;
    if ( Src->AceCount )
    {
      v45 = (char *)BaseAddress + 16;
      do
      {
        if ( *v45 | v45[1] | *(v45 - 1) )
        {
          v42 += *((unsigned __int16 *)v43 + 1);
          v47 = *v43;
          if ( !RtlBaseAceType[v47] && v41 || RtlBaseAceType[v47] == 1 && v40 )
          {
            *v11 |= 0x1000u;
            v10 = (PVOID *)v72;
            goto LABEL_82;
          }
        }
        else
        {
          v46 = *v43;
          if ( !RtlBaseAceType[v46] )
            v40 = 1;
          v11 = v82;
          if ( RtlBaseAceType[v46] == 1 )
            v41 = 1;
        }
        ++v44;
        v43 += *((unsigned __int16 *)v43 + 1);
        v45 += 6;
      }
      while ( v44 < Src->AceCount );
    }
    v15 = RtlpInheritAcl(
            *(__int64 *)v85,
            0,
            0,
            v68,
            1,
            0,
            v84,
            v83,
            v84,
            v83,
            GenericMapping,
            2,
            (unsigned __int64)&v76 & -(__int64)(v76 != 0),
            v76 != 0,
            &v73,
            &v67,
            &v81);
    if ( v15 >= 0 )
    {
      v48 = (unsigned __int16 *)v73;
      v49 = (ACL *)RtlAllocateHeap(
                     ProcessHeap,
                     NtdllBaseTag + 1310720,
                     v42 + (unsigned int)*((unsigned __int16 *)v73 + 1));
      v10 = (PVOID *)v72;
      v50 = v49;
      *(_QWORD *)v72 = v49;
      if ( !v49 )
        goto LABEL_86;
      AclRevision = Src->AclRevision;
      if ( *(_BYTE *)v48 > Src->AclRevision )
        AclRevision = *(_BYTE *)v48;
      if ( RtlCreateAcl(v50, v42 + v48[1], AclRevision) >= 0 )
      {
        v52 = 0;
        v53 = (char *)*v10 + 8;
        v66 = 0;
        if ( Src->AceCount )
        {
          v54 = v72;
          v55 = (char *)BaseAddress + 16;
          do
          {
            v56 = *v55 | v55[1] | *(v55 - 1);
            if ( v56 )
            {
              memmove(v53, v19, v19[1]);
              v53[1] &= ~0x10u;
              v57 = v53;
              v58 = v74;
              v59 = 0x80000000;
              v53 += v74[1];
              ++*(_WORD *)(*(_QWORD *)v54 + 4LL);
              *((_DWORD *)v57 + 1) = v56 & *((_DWORD *)v58 + 1);
              v60 = ~*((_DWORD *)v58 + 1) & v56;
              if ( v60 )
              {
                do
                {
                  if ( v59 < 0x10000000 )
                    break;
                  if ( (v59 & *((_DWORD *)v58 + 1)) != 0 )
                  {
                    v71 = v59;
                    RtlMapGenericMask(&v71, GenericMapping);
                    v61 = v71;
                    v58 = v74;
                    if ( (v71 & v60) != 0 )
                    {
                      *((_DWORD *)v57 + 1) |= v59;
                      v60 &= ~v61;
                    }
                  }
                  v59 >>= 1;
                }
                while ( v60 );
                v54 = v72;
              }
              *((_DWORD *)v57 + 1) |= v60;
              v19 = v74;
              v52 = v66;
            }
            ++v52;
            v19 = (unsigned __int16 *)((char *)v19 + v19[1]);
            v66 = v52;
            AceCount = Src->AceCount;
            v55 += 6;
            v74 = v19;
          }
          while ( v52 < AceCount );
          v11 = v82;
          v48 = (unsigned __int16 *)v73;
        }
        v63 = v73;
        memmove(v53, (char *)v73 + 8, (unsigned int)v48[1] - 8);
        v10 = (PVOID *)v72;
        *(_WORD *)(*(_QWORD *)v72 + 4LL) += v63[2];
      }
      else
      {
        *v11 |= 0x1000u;
      }
LABEL_82:
      v15 = 0;
      ProcessHeap = HeapHandle;
      if ( (*v11 & 0x1000) == 0 )
        goto LABEL_88;
      if ( *v10 )
      {
        RtlFreeHeap(HeapHandle, 0, *v10);
        *v10 = 0LL;
      }
      v64 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, Src->AclSize);
      *v10 = v64;
      if ( v64 )
      {
        memmove(v64, Src, Src->AclSize);
        v15 = 0;
      }
      else
      {
LABEL_86:
        v15 = -1073741801;
      }
    }
LABEL_88:
    if ( BaseAddress )
      RtlFreeHeap(ProcessHeap, 0, BaseAddress);
  }
LABEL_90:
  if ( v78 )
    RtlFreeHeap(ProcessHeap, 0, v78);
  if ( v73 )
    RtlFreeHeap(ProcessHeap, 0, v73);
  return (unsigned int)v15;
}
