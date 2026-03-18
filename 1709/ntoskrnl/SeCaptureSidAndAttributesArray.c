/*
 * XREFs of SeCaptureSidAndAttributesArray @ 0x140488B20
 * Callers:
 *     NtFilterToken @ 0x14045ACFC (NtFilterToken.c)
 *     NtAdjustGroupsToken @ 0x14045BE94 (NtAdjustGroupsToken.c)
 *     SepCreateClaimAttributes @ 0x14045CE28 (SepCreateClaimAttributes.c)
 *     NtCreateTokenEx @ 0x14045D140 (NtCreateTokenEx.c)
 *     NtSetInformationToken @ 0x1404690B0 (NtSetInformationToken.c)
 *     SepSetTokenCapabilities @ 0x1404888F8 (SepSetTokenCapabilities.c)
 *     SepLengthSidAndAttributesArray @ 0x140488A68 (SepLengthSidAndAttributesArray.c)
 *     NtCreateLowBoxToken @ 0x140549290 (NtCreateLowBoxToken.c)
 *     SepDuplicateClaimAttributes @ 0x140731094 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     RtlLengthSid @ 0x140019280 (RtlLengthSid.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlValidSid @ 0x140486030 (RtlValidSid.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
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
  void *v9; // r12
  char v10; // r15
  char *PoolWithTag; // r11
  int v14; // r13d
  unsigned int v15; // r14d
  unsigned int v16; // edi
  unsigned int i; // edx
  char *v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // rcx
  unsigned __int64 v21; // r9
  __int64 v22; // rax
  unsigned int v23; // eax
  char *v24; // rdx
  __int64 v25; // r8
  unsigned __int64 v26; // r8
  void **v27; // r13
  char *v28; // r15
  char *v29; // r15
  unsigned int v30; // r14d
  _QWORD *v31; // r12
  unsigned __int8 *v32; // rdx
  unsigned int v33; // edi
  char *v34; // r15
  char *v35; // r15
  unsigned int v36; // esi
  _QWORD *v37; // r12
  unsigned int v38; // r14d
  void *v39; // rdi
  int v40; // eax
  PVOID v42; // rax
  int v43; // [rsp+24h] [rbp-54h]
  unsigned int v44; // [rsp+28h] [rbp-50h]
  unsigned int *P; // [rsp+30h] [rbp-48h]
  int v48; // [rsp+B0h] [rbp+38h]

  v9 = a4;
  v10 = a3;
  PoolWithTag = 0LL;
  P = 0LL;
  v14 = 0;
  v48 = 0;
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
  v44 = v16;
  if ( a3 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v16, 0x61546553u);
    P = (unsigned int *)PoolWithTag;
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
    v43 = 0;
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
        v48 = -1073741704;
        v16 = v44;
        break;
      }
      v24 = &PoolWithTag[8 * v20];
      *(_QWORD *)v24 = v21;
      v25 = 4 * v23 + 8;
      *((_DWORD *)v24 + 2) = v25;
      if ( (v21 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v26 = v21 + v25;
      if ( v26 > 0x7FFFFFFF0000LL || v26 < v21 )
        MEMORY[0x7FFFFFFF0000] = 0;
      v16 = ((*((_DWORD *)v24 + 2) + 3) & 0xFFFFFFFC) + v44;
      v44 = v16;
      v19 = ++v43;
      v14 = 0;
      v48 = 0;
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
    v42 = ExAllocatePoolWithTag(PagedPool, v16, 0x61536553u);
    v27 = a8;
    *a8 = v42;
    if ( v42 )
      goto LABEL_32;
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
  v27 = a8;
  *a8 = v9;
LABEL_32:
  if ( v10 )
  {
    v34 = (char *)*v27;
    memmove(*v27, Src, v15);
    v35 = &v34[(v15 + 3) & 0xFFFFFFFC];
    v36 = 0;
    v37 = *v27;
    while ( 1 )
    {
      if ( v36 >= a2 || v48 )
        goto LABEL_46;
      memmove(v35, *(const void **)&P[4 * v36], P[4 * v36 + 2]);
      v37[2 * v36] = v35;
      v38 = P[4 * v36 + 2];
      v35 += (v38 + 3) & 0xFFFFFFFC;
      if ( (v37[2 * v36 + 1] & 0x1FFFFF80) != 0 )
        break;
      v39 = (void *)v37[2 * v36];
      if ( !RtlValidSid(v39) || RtlLengthSid(v39) != v38 )
      {
        v40 = -1073741704;
        goto LABEL_45;
      }
LABEL_42:
      ++v36;
    }
    v40 = -1073741811;
LABEL_45:
    v48 = v40;
    goto LABEL_42;
  }
  v28 = (char *)*v27;
  memmove(*v27, Src, v15);
  v29 = &v28[(v15 + 3) & 0xFFFFFFFC];
  v30 = 0;
  v31 = *v27;
  while ( v30 < a2 )
  {
    v32 = (unsigned __int8 *)v31[2 * v30];
    v33 = 4 * v32[1] + 8;
    memmove(v29, v32, v33);
    v31[2 * v30++] = v29;
    v29 += (v33 + 3) & 0xFFFFFFFC;
  }
LABEL_46:
  if ( a3 )
    ExFreePoolWithTag(P, 0);
  if ( !a4 && v48 < 0 )
  {
    ExFreePoolWithTag(*v27, 0);
    *v27 = 0LL;
  }
  return (unsigned int)v48;
}
