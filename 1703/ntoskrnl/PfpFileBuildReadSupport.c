/*
 * XREFs of PfpFileBuildReadSupport @ 0x14053E99C
 * Callers:
 *     PfpPrefetchFilesTrickle @ 0x14053CED0 (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchFiles @ 0x1406C3B40 (PfpPrefetchFiles.c)
 * Callees:
 *     PfpFileCheckAttributesForPrefetch @ 0x14010C0C4 (PfpFileCheckAttributesForPrefetch.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     NtCreateSection @ 0x14050FCB0 (NtCreateSection.c)
 *     NtClose @ 0x14052EB10 (NtClose.c)
 *     PfpOpenHandleCreate @ 0x14053E568 (PfpOpenHandleCreate.c)
 *     PfpOpenHandleClose @ 0x14053E6CC (PfpOpenHandleClose.c)
 *     PfpFileSetupObjectAttributes @ 0x14053EC80 (PfpFileSetupObjectAttributes.c)
 *     PfpFileBuildReadList @ 0x14053ED28 (PfpFileBuildReadList.c)
 */

__int64 __fastcall PfpFileBuildReadSupport(_QWORD *a1, _DWORD *a2, unsigned int a3, char a4, __int64 a5)
{
  __int64 v6; // r12
  void *v9; // r15
  __int64 v10; // rdx
  __int64 v11; // r8
  int AllocationAttributes; // r9d
  __int64 v13; // rdx
  __int64 v14; // rdi
  int v15; // ebx
  HANDLE FileHandle; // r12
  __m128i v17; // xmm6
  unsigned __int64 v18; // rdi
  NTSTATUS v19; // eax
  __int64 v20; // r8
  __int64 v21; // rbx
  __int128 v22; // xmm1
  HANDLE v23; // rax
  __m128i v25; // xmm2
  __m128i v26; // xmm0
  void *v27; // [rsp+48h] [rbp-61h] BYREF
  char v28; // [rsp+50h] [rbp-59h] BYREF
  HANDLE v29[4]; // [rsp+60h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-29h] BYREF
  unsigned int v31; // [rsp+108h] [rbp+5Fh] BYREF
  HANDLE SectionHandle; // [rsp+110h] [rbp+67h] BYREF
  ULONG v33; // [rsp+120h] [rbp+77h]

  v6 = a3;
  memset(v29, 0, sizeof(v29));
  SectionHandle = 0LL;
  v9 = 0LL;
  v10 = *a1;
  v29[3] = (HANDLE)((unsigned __int64)v29[3] | 0x200000000LL);
  v11 = a1[1];
  v27 = 0LL;
  AllocationAttributes = a4 != 0 ? 285212672 : 0x4000000;
  v13 = (unsigned __int128)(((__int64)a2 - *(unsigned int *)(v10 + 40) - v10) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v33 = AllocationAttributes;
  v14 = v11 + 32 * (((unsigned __int64)v13 >> 63) + (v13 >> 3));
  if ( v11 && (*(_QWORD *)(v14 + 24) & 0x400000000LL) != 0 )
  {
    *(_OWORD *)v29 = *(_OWORD *)v14;
    FileHandle = v29[0];
    v17 = *(__m128i *)v29;
    v26 = *(__m128i *)(v14 + 16);
    v29[2] = *(HANDLE *)(v14 + 16);
    v18 = _mm_srli_si128(v26, 8).m128i_u64[0] | 0x1000000000LL;
    v29[3] = (HANDLE)v18;
  }
  else
  {
    PfpFileSetupObjectAttributes(
      (_DWORD)a1,
      (_DWORD)a2,
      v6,
      (unsigned int)&v28,
      (__int64)&ObjectAttributes,
      (__int64)&v31);
    v15 = PfpOpenHandleCreate(
            (__int64)v29,
            a1[5],
            (__int64)ObjectAttributes.ObjectName,
            (__int64)ObjectAttributes.RootDirectory,
            a4 != 0 ? 32 : 129,
            v31,
            0x80u,
            a1[2] + (v6 << 6));
    if ( v15 < 0 )
    {
      v18 = (unsigned __int64)v29[3];
      goto LABEL_11;
    }
    FileHandle = v29[0];
    v15 = PfpFileCheckAttributesForPrefetch(v29[0]);
    if ( v15 < 0 )
    {
      v18 = (unsigned __int64)v29[3];
      goto LABEL_20;
    }
    v17 = *(__m128i *)v29;
    AllocationAttributes = v33;
    if ( a1[1] )
    {
      v25 = *(__m128i *)&v29[2];
      *(_OWORD *)v14 = *(_OWORD *)v29;
      *(__m128i *)(v14 + 16) = v25;
      v18 = _mm_srli_si128(v25, 8).m128i_u64[0] | 0x1000000000LL;
      v29[3] = (HANDLE)v18;
    }
    else
    {
      v18 = (unsigned __int64)v29[3];
    }
  }
  if ( (*a2 & 1) != 0 && !a4 && *(_QWORD *)(*(_QWORD *)(_mm_srli_si128(v17, 8).m128i_u64[0] + 40) + 16LL) )
  {
    v15 = -1073741791;
    goto LABEL_11;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v19 = NtCreateSection(&SectionHandle, 5u, &ObjectAttributes, 0LL, 2u, AllocationAttributes, FileHandle);
  v15 = v19;
  if ( v19 >= 0 )
  {
    LOBYTE(v20) = a4;
    v15 = PfpFileBuildReadList(a1, a2, v20, &v27);
    if ( v15 < 0 )
    {
      v9 = v27;
    }
    else
    {
      v21 = a5;
      v22 = *(_OWORD *)&v29[2];
      *(__m128i *)(a5 + 8) = v17;
      *(_OWORD *)(v21 + 24) = v22;
      memset(v29, 0, sizeof(v29));
      v18 = (unsigned __int64)v29[3] | 0x200000000LL;
      *(_QWORD *)(v21 + 48) = a2;
      v23 = SectionHandle;
      SectionHandle = 0LL;
      *(_QWORD *)(v21 + 40) = v23;
      *(_QWORD *)v21 = v27;
      v15 = 0;
      v29[3] = (HANDLE)v18;
    }
    goto LABEL_11;
  }
  if ( a4 && v19 == -1073740749 )
  {
LABEL_11:
    if ( (v18 & 0x100000000LL) == 0 )
      goto LABEL_12;
  }
LABEL_20:
  if ( (*a2 & 8) == 0 )
  {
    *a2 |= 8u;
    ++*(_DWORD *)(*a1 + 124LL);
  }
LABEL_12:
  if ( SectionHandle )
    NtClose(SectionHandle);
  if ( (v18 & 0x400000000LL) != 0 )
    PfpOpenHandleClose(v29, a1[5]);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)v15;
}
