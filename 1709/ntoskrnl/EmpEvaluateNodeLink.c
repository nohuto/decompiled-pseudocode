/*
 * XREFs of EmpEvaluateNodeLink @ 0x140017B40
 * Callers:
 *     EmpEvaluateNodeLink @ 0x140017B40 (EmpEvaluateNodeLink.c)
 *     EmpEvaluateTargetRule @ 0x140018A60 (EmpEvaluateTargetRule.c)
 * Callees:
 *     EmpEvaluateNodeLink @ 0x140017B40 (EmpEvaluateNodeLink.c)
 *     EmpEvaluateParseNodeMapping @ 0x140018650 (EmpEvaluateParseNodeMapping.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
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
  void *v10; // rbp
  void *v11; // rcx
  __int64 v12; // rsi
  unsigned int v13; // ebx
  int v14; // eax
  __int64 v15; // rdi
  int v16; // esi
  unsigned int v18; // r10d
  unsigned int v19; // r11d
  unsigned int v20; // eax
  PVOID v21; // rax
  unsigned int v22; // eax
  int v23; // ecx
  __int64 v24; // r11
  unsigned int v25; // [rsp+70h] [rbp-58h]
  unsigned int v26; // [rsp+74h] [rbp-54h]
  int v27; // [rsp+78h] [rbp-50h]
  PVOID PoolWithTag; // [rsp+80h] [rbp-48h]
  PVOID P; // [rsp+88h] [rbp-40h]
  __int64 v31; // [rsp+98h] [rbp-30h]
  int v32; // [rsp+D0h] [rbp+8h]
  int v33; // [rsp+D8h] [rbp+10h]

  v33 = a2;
  v31 = 0LL;
  v10 = 0LL;
  P = 0LL;
  v11 = 0LL;
  PoolWithTag = 0LL;
  v12 = 0LL;
  v13 = 1;
  v14 = *a1;
  if ( !*a1 )
  {
    v12 = *((_QWORD *)a1 + 1);
    if ( !*(_QWORD *)(v12 + 16) )
      return v13;
    v18 = *(_DWORD *)(v12 + 56);
    v25 = *(_DWORD *)(v12 + 64);
    v19 = *(_DWORD *)(v12 + 60);
LABEL_11:
    v27 = a1[4];
    v32 = v19;
    v26 = v18;
    if ( !v27 || (a8 = *((_QWORD *)a1 + 3)) == 0 )
      v27 = a9;
    if ( !a8 )
    {
      if ( v14 )
        return (unsigned int)EmpEvaluateNodeLink(*(_QWORD *)(v31 + 96), a2, a3, a4, a5, a6, a7, 0LL, 0);
      else
        return (*(unsigned int (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64, int, _QWORD))(v12 + 16))(
                 a6,
                 a7,
                 a2,
                 a3,
                 a4,
                 a5,
                 *(_QWORD *)(v12 + 32));
    }
    if ( v18 )
    {
      if ( !is_mul_ok(v18, 8uLL) )
        return v13;
      P = ExAllocatePoolWithTag(PagedPool, 8LL * v18, 0x76654D45u);
      if ( !P )
        return v13;
      v19 = v32;
      v11 = 0LL;
    }
    if ( v19 )
    {
      if ( !is_mul_ok(v19, 4uLL) )
      {
        v11 = 0LL;
        goto LABEL_31;
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4LL * v19, 0x76654D45u);
      v11 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_31;
      v19 = v32;
    }
    v20 = v25;
    if ( !v25 )
      goto LABEL_26;
    if ( !is_mul_ok(v25, 8uLL) )
    {
LABEL_30:
      v11 = PoolWithTag;
      goto LABEL_31;
    }
    v21 = ExAllocatePoolWithTag(PagedPool, 8LL * v25, 0x76654D45u);
    v11 = PoolWithTag;
    v10 = v21;
    if ( v21 )
    {
      v20 = v25;
      v19 = v32;
LABEL_26:
      if ( (unsigned __int8)EmpEvaluateParseNodeMapping(
                              a8,
                              v27,
                              v33,
                              a3,
                              a4,
                              a5,
                              a6,
                              a7,
                              (__int64)P,
                              v26,
                              (__int64)v11,
                              v19,
                              (__int64)v10,
                              v20) )
      {
        if ( *a1 )
          v22 = EmpEvaluateNodeLink(
                  *(_QWORD *)(v31 + 96),
                  (_DWORD)P,
                  v26,
                  (_DWORD)PoolWithTag,
                  v32,
                  (__int64)v10,
                  v25,
                  0LL,
                  0);
        else
          v22 = (*(__int64 (__fastcall **)(void *, _QWORD, PVOID, _QWORD, PVOID, int, _QWORD))(v12 + 16))(
                  v10,
                  v25,
                  P,
                  v26,
                  PoolWithTag,
                  v32,
                  *(_QWORD *)(v12 + 32));
        v13 = v22;
      }
      goto LABEL_30;
    }
LABEL_31:
    if ( P )
    {
      ExFreePoolWithTag(P, 0x76654D45u);
      v11 = PoolWithTag;
    }
    if ( v11 )
      ExFreePoolWithTag(v11, 0x76654D45u);
    if ( v10 )
      ExFreePoolWithTag(v10, 0x76654D45u);
    return v13;
  }
  if ( v14 == 1 )
  {
    v24 = *((_QWORD *)a1 + 1);
    v31 = v24;
    if ( !*(_BYTE *)(v24 + 20) )
      return v13;
    v25 = *(_DWORD *)(v24 + 48);
    v18 = *(_DWORD *)(v24 + 40);
    v19 = *(_DWORD *)(v24 + 44);
    goto LABEL_11;
  }
  if ( v14 != 2 )
    return v13;
  v15 = *((_QWORD *)a1 + 1);
  v16 = EmpEvaluateNodeLink(*(_QWORD *)(v15 + 8), a2, a3, a4, a5, a6, a7, *(_QWORD *)(v15 + 24), *(_DWORD *)(v15 + 16));
  if ( v16 == 1 )
    return v13;
  if ( *(_BYTE *)v15 == 38 )
  {
    if ( !v16 )
      return 0;
  }
  else if ( v16 == 2 && *(_BYTE *)v15 == 124 )
  {
    return 2LL;
  }
  v23 = EmpEvaluateNodeLink(
          *(_QWORD *)(v15 + 32),
          v33,
          a3,
          a4,
          a5,
          a6,
          a7,
          *(_QWORD *)(v15 + 48),
          *(_DWORD *)(v15 + 40));
  if ( v23 == 1 )
    return v13;
  if ( *(_BYTE *)v15 == 38 )
  {
    if ( !v16 || !v23 )
      return 0;
    return 2LL;
  }
  if ( *(_BYTE *)v15 != 124 )
    return v13;
  if ( v16 )
    return 2LL;
  if ( !v23 )
    return 0;
  return 2LL;
}
