/*
 * XREFs of SeCaptureSidAndAttributesArray @ 0x140470170
 * Callers:
 *     NtFilterToken @ 0x14045464C (NtFilterToken.c)
 *     NtAdjustGroupsToken @ 0x14046D64C (NtAdjustGroupsToken.c)
 *     NtSetInformationToken @ 0x14046DB70 (NtSetInformationToken.c)
 *     SepCreateClaimAttributes @ 0x14046F3A8 (SepCreateClaimAttributes.c)
 *     NtCreateTokenEx @ 0x14046F5F4 (NtCreateTokenEx.c)
 *     SepSetTokenCapabilities @ 0x14046FF44 (SepSetTokenCapabilities.c)
 *     SepLengthSidAndAttributesArray @ 0x1404700B4 (SepLengthSidAndAttributesArray.c)
 *     NtCreateLowBoxToken @ 0x1404A48A0 (NtCreateLowBoxToken.c)
 *     SepDuplicateClaimAttributes @ 0x1406F9644 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     RtlLengthSid @ 0x140088130 (RtlLengthSid.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlValidSid @ 0x1404F5A90 (RtlValidSid.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SeCaptureSidAndAttributesArray(
        char *Src,
        unsigned int a2,
        char a3,
        void *a4,
        unsigned int a5,
        int a6,
        int a7,
        void **a8,
        unsigned int *a9)
{
  void *v9; // r15
  char v10; // r14
  unsigned int *PoolWithTag; // r10
  int v14; // r13d
  unsigned int v15; // r12d
  unsigned int v16; // edi
  unsigned int i; // edx
  char *v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned __int64 v25; // r8
  void **v26; // r13
  char *v27; // r15
  char *v28; // r15
  unsigned int v29; // r14d
  _QWORD *v30; // r12
  unsigned __int8 *v31; // rdx
  unsigned int v32; // edi
  char *v33; // r14
  char *v34; // r14
  unsigned int v35; // esi
  _QWORD *v36; // r12
  unsigned int v37; // r15d
  void *v38; // rdi
  int v39; // eax
  PVOID v41; // rax
  int v42; // [rsp+24h] [rbp-54h]
  unsigned int v43; // [rsp+28h] [rbp-50h]
  unsigned int *P; // [rsp+30h] [rbp-48h]
  int v47; // [rsp+B0h] [rbp+38h]

  v9 = a4;
  v10 = a3;
  PoolWithTag = 0LL;
  P = 0LL;
  v14 = 0;
  v47 = 0;
  if ( !a2 )
  {
    *a8 = 0LL;
    *a9 = 0;
    return 0LL;
  }
  if ( a2 > 0x1000 )
    return 3221225485LL;
  v15 = 16 * a2;
  v16 = (16 * a2 + 3) & 0xFFFFFFFC;
  v43 = v16;
  if ( a3 )
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v16, 0x61546553u);
    P = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    if ( v15 )
    {
      if ( ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v18 = &Src[v15];
      if ( (unsigned __int64)v18 > 0x7FFFFFFF0000LL || v18 < Src )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v19 = 0;
    v42 = 0;
    while ( v19 < a2 )
    {
      v20 = 2LL * v19;
      v21 = *(_QWORD *)&Src[16 * v19];
      v22 = v21 + 1;
      if ( v21 + 1 >= 0x7FFFFFFF0000LL )
        v22 = 0x7FFFFFFF0000LL;
      v23 = *(unsigned __int8 *)v22;
      if ( v23 > 0xF )
      {
        v14 = -1073741704;
        v47 = -1073741704;
        v16 = v43;
        break;
      }
      *(_QWORD *)&PoolWithTag[2 * v20] = v21;
      v24 = 4 * v23 + 8;
      PoolWithTag[2 * v20 + 2] = v24;
      if ( v24 )
      {
        if ( (v21 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v25 = v21 + v24;
        if ( v25 > 0x7FFFFFFF0000LL || v25 < v21 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v16 = ((PoolWithTag[2 * v20 + 2] + 3) & 0xFFFFFFFC) + v43;
      v43 = v16;
      v19 = ++v42;
      v14 = 0;
      v47 = 0;
    }
    if ( v14 < 0 )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      return (unsigned int)v14;
    }
    v10 = a3;
    v9 = a4;
  }
  else
  {
    for ( i = 0; i < a2; ++i )
      v16 += (4 * *(unsigned __int8 *)(*(_QWORD *)&Src[16 * i] + 1LL) + 11) & 0xFFFFFFFC;
  }
  *a9 = v16;
  if ( !v9 )
  {
    v41 = ExAllocatePoolWithTag(PagedPool, v16, 0x61536553u);
    v26 = a8;
    *a8 = v41;
    if ( v41 )
      goto LABEL_33;
    if ( v10 )
      ExFreePoolWithTag(P, 0);
    return 3221225626LL;
  }
  if ( v16 > a5 )
  {
    if ( v10 )
      ExFreePoolWithTag(PoolWithTag, 0);
    return 3221225507LL;
  }
  v26 = a8;
  *a8 = v9;
LABEL_33:
  if ( v10 )
  {
    v33 = (char *)*v26;
    memmove(*v26, Src, v15);
    v34 = &v33[(v15 + 3) & 0xFFFFFFFC];
    v35 = 0;
    v36 = *v26;
    while ( 1 )
    {
      if ( v35 >= a2 || v47 )
        goto LABEL_47;
      memmove(v34, *(const void **)&P[4 * v35], P[4 * v35 + 2]);
      v36[2 * v35] = v34;
      v37 = P[4 * v35 + 2];
      v34 += (v37 + 3) & 0xFFFFFFFC;
      if ( (v36[2 * v35 + 1] & 0x1FFFFF80) != 0 )
        break;
      v38 = (void *)v36[2 * v35];
      if ( !RtlValidSid(v38) || RtlLengthSid(v38) != v37 )
      {
        v39 = -1073741704;
        goto LABEL_46;
      }
LABEL_43:
      ++v35;
    }
    v39 = -1073741811;
LABEL_46:
    v47 = v39;
    goto LABEL_43;
  }
  v27 = (char *)*v26;
  memmove(*v26, Src, v15);
  v28 = &v27[(v15 + 3) & 0xFFFFFFFC];
  v29 = 0;
  v30 = *v26;
  while ( v29 < a2 )
  {
    v31 = (unsigned __int8 *)v30[2 * v29];
    v32 = 4 * v31[1] + 8;
    memmove(v28, v31, v32);
    v30[2 * v29++] = v28;
    v28 += (v32 + 3) & 0xFFFFFFFC;
  }
LABEL_47:
  if ( a3 )
    ExFreePoolWithTag(P, 0);
  if ( !a4 && v47 < 0 )
  {
    ExFreePoolWithTag(*v26, 0);
    *v26 = 0LL;
  }
  return (unsigned int)v47;
}
