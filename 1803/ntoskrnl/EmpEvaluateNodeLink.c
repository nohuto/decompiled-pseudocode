/*
 * XREFs of EmpEvaluateNodeLink @ 0x140074464
 * Callers:
 *     EmpEvaluateTargetRule @ 0x140074298 (EmpEvaluateTargetRule.c)
 *     EmpEvaluateNodeLink @ 0x140074464 (EmpEvaluateNodeLink.c)
 * Callees:
 *     EmpEvaluateNodeLink @ 0x140074464 (EmpEvaluateNodeLink.c)
 *     EmpEvaluateParseNodeMapping @ 0x14007488C (EmpEvaluateParseNodeMapping.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EmpEvaluateNodeLink(
        int *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        int a9)
{
  unsigned int v11; // r10d
  __int64 v12; // rcx
  __int64 v13; // rsi
  int v14; // eax
  PVOID v15; // rbp
  unsigned int v16; // ebx
  __int64 v17; // rdi
  __int64 v18; // r8
  unsigned int v19; // r9d
  unsigned int v20; // r8d
  unsigned int v21; // r9d
  unsigned int v22; // eax
  __int64 v23; // rcx
  __int64 (__fastcall *v24)(PVOID, _QWORD, PVOID, _QWORD, PVOID, unsigned int, __int64); // rax
  void *v25; // rdi
  unsigned int v26; // eax
  __int64 v27; // rdi
  int v28; // esi
  unsigned int v30; // r10d
  int v31; // eax
  unsigned int v33; // [rsp+70h] [rbp-58h]
  unsigned int v34; // [rsp+74h] [rbp-54h]
  unsigned int v35; // [rsp+78h] [rbp-50h]
  int v36; // [rsp+7Ch] [rbp-4Ch]
  PVOID PoolWithTag; // [rsp+80h] [rbp-48h]
  PVOID P; // [rsp+88h] [rbp-40h]
  __int64 v39; // [rsp+90h] [rbp-38h]

  v11 = a3;
  v12 = 0LL;
  P = 0LL;
  v13 = 0LL;
  PoolWithTag = 0LL;
  v14 = *a1;
  v15 = 0LL;
  v16 = 1;
  v17 = 0LL;
  if ( (unsigned int)*a1 > 1 )
  {
    if ( v14 != 2 )
      return v16;
    v27 = *((_QWORD *)a1 + 1);
    v28 = EmpEvaluateNodeLink(
            *(_QWORD *)(v27 + 8),
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            *(_QWORD *)(v27 + 24),
            *(_DWORD *)(v27 + 16));
    if ( v28 == 1 )
      return v16;
    if ( *(_BYTE *)v27 == 38 )
    {
      if ( !v28 )
        return 0;
    }
    else if ( v28 == 2 && *(_BYTE *)v27 == 124 )
    {
      return 2;
    }
    v31 = EmpEvaluateNodeLink(
            *(_QWORD *)(v27 + 32),
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            *(_QWORD *)(v27 + 48),
            *(_DWORD *)(v27 + 40));
    if ( v31 == 1 )
      return v16;
    if ( *(_BYTE *)v27 == 38 )
    {
      if ( v28 && v31 )
        return 2;
      v16 = 0;
    }
    if ( *(_BYTE *)v27 != 124 )
      return v16;
    if ( !v28 && !v31 )
      return 0;
    return 2;
  }
  v18 = *((_QWORD *)a1 + 1);
  if ( v14 )
  {
    v13 = *((_QWORD *)a1 + 1);
    if ( !*(_BYTE *)(v18 + 20) )
      return v16;
    v30 = *(_DWORD *)(v18 + 48);
    v20 = *(_DWORD *)(v18 + 40);
    v21 = *(_DWORD *)(v13 + 44);
    v33 = v30;
    v11 = a3;
  }
  else
  {
    v17 = *((_QWORD *)a1 + 1);
    if ( !*(_QWORD *)(v18 + 16) )
      return v16;
    v19 = *(_DWORD *)(v18 + 64);
    v20 = *(_DWORD *)(v18 + 56);
    v33 = v19;
    v21 = *(_DWORD *)(v17 + 60);
  }
  v34 = v21;
  v35 = v20;
  v36 = a1[4];
  if ( !v36 || (v39 = *((_QWORD *)a1 + 3)) == 0 )
  {
    LODWORD(v39) = a8;
    v36 = a9;
    if ( !a8 )
    {
      if ( v14 )
        return (unsigned int)EmpEvaluateNodeLink(*(_QWORD *)(v13 + 96), a2, v11, a4, a5, a6, a7, 0LL, 0);
      else
        return (unsigned int)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64, int, _QWORD))(v17 + 16))(
                               a6,
                               a7,
                               a2,
                               a3,
                               a4,
                               a5,
                               *(_QWORD *)(v17 + 32));
    }
  }
  if ( v20 )
  {
    if ( !is_mul_ok(v20, 8uLL) )
      return v16;
    P = ExAllocatePoolWithTag(PagedPool, 8LL * v20, 0x76654D45u);
    if ( !P )
      return v16;
    v12 = 0LL;
  }
  if ( v34 )
  {
    if ( !is_mul_ok(v34, 4uLL) )
    {
      v25 = 0LL;
      goto LABEL_22;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4LL * v34, 0x76654D45u);
    v12 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
    {
      v25 = 0LL;
      goto LABEL_22;
    }
  }
  v22 = v33;
  if ( !v33 )
    goto LABEL_18;
  if ( is_mul_ok(v33, 8uLL) )
  {
    v15 = ExAllocatePoolWithTag(PagedPool, 8LL * v33, 0x76654D45u);
    if ( v15 )
    {
      v12 = (__int64)PoolWithTag;
      v22 = v33;
LABEL_18:
      if ( (unsigned __int8)EmpEvaluateParseNodeMapping(
                              v39,
                              v36,
                              a2,
                              a3,
                              a4,
                              a5,
                              a6,
                              a7,
                              (__int64)P,
                              v35,
                              v12,
                              v34,
                              (__int64)v15,
                              v22) )
      {
        if ( *a1 )
        {
          v25 = PoolWithTag;
          v26 = EmpEvaluateNodeLink(
                  *(_QWORD *)(v13 + 96),
                  (_DWORD)P,
                  v35,
                  (_DWORD)PoolWithTag,
                  v34,
                  (__int64)v15,
                  v33,
                  0LL,
                  0);
        }
        else
        {
          v23 = *(_QWORD *)(v17 + 32);
          v24 = *(__int64 (__fastcall **)(PVOID, _QWORD, PVOID, _QWORD, PVOID, unsigned int, __int64))(v17 + 16);
          v25 = PoolWithTag;
          v26 = v24(v15, v33, P, v35, PoolWithTag, v34, v23);
        }
        v16 = v26;
        goto LABEL_22;
      }
    }
  }
  v25 = PoolWithTag;
LABEL_22:
  if ( P )
    ExFreePoolWithTag(P, 0x76654D45u);
  if ( v25 )
    ExFreePoolWithTag(v25, 0x76654D45u);
  if ( v15 )
    ExFreePoolWithTag(v15, 0x76654D45u);
  return v16;
}
