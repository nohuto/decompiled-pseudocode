/*
 * XREFs of CmpNotifyChangeKey @ 0x140479920
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x14047A598 (NtNotifyChangeMultipleKeys.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140060B70 (ExAllocatePoolWithQuotaTag.c)
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     CmpFreePostBlock @ 0x14046FAD4 (CmpFreePostBlock.c)
 *     CmpPostNotify @ 0x14047BFBC (CmpPostNotify.c)
 *     SeCaptureSubjectContext @ 0x14049D010 (SeCaptureSubjectContext.c)
 */

__int64 __fastcall CmpNotifyChangeKey(
        __int64 a1,
        _QWORD *a2,
        unsigned int CurrentIrql,
        char a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v8; // edi
  char *v11; // r14
  __int64 v12; // rbx
  char *PoolWithQuotaTag; // rax
  __int64 **v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  __int64 *v19; // rdx
  _QWORD *v20; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 **v23; // rcx
  struct _KTHREAD *v24; // rax
  __int64 **p_SListFaultAddress; // rax
  _QWORD *v26; // rdx
  void **v27; // rax
  int v28; // ecx
  signed __int32 v29[8]; // [rsp+0h] [rbp-98h] BYREF
  _QWORD v30[2]; // [rsp+40h] [rbp-58h] BYREF
  char v31; // [rsp+50h] [rbp-48h]
  char v32; // [rsp+51h] [rbp-47h]
  char v33; // [rsp+52h] [rbp-46h]
  _QWORD v34[2]; // [rsp+58h] [rbp-40h] BYREF

  v8 = CurrentIrql;
  if ( (*(_DWORD *)(a1 + 48) & 9) != 0 )
  {
    CmpFreePostBlock(a2);
    return 3221225852LL;
  }
  v11 = *(char **)(a1 + 16);
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL);
  if ( !v11 )
  {
    PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x58uLL, 0x626E4D43u);
    v11 = PoolWithQuotaTag;
    if ( !PoolWithQuotaTag )
    {
      CmpFreePostBlock(a2);
      return 3221225626LL;
    }
    *((_QWORD *)PoolWithQuotaTag + 4) = *(_QWORD *)(a1 + 8);
    *((_DWORD *)PoolWithQuotaTag + 12) = v8 & 0x3FFFFFFF | ((a4 & 1) << 30);
    *((_QWORD *)PoolWithQuotaTag + 3) = PoolWithQuotaTag + 16;
    *((_QWORD *)PoolWithQuotaTag + 2) = PoolWithQuotaTag + 16;
    *(_QWORD *)(a1 + 16) = PoolWithQuotaTag;
    *((_QWORD *)PoolWithQuotaTag + 5) = a1;
    SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)(PoolWithQuotaTag + 56));
    v14 = (__int64 **)(v12 + 2712);
    if ( *(_QWORD *)(v12 + 2712) )
    {
      CurrentIrql = (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) >> 21) & 0x3FF;
      while ( 1 )
      {
        v14 = (__int64 **)*v14;
        if ( ((*((_DWORD *)v14[4] + 1) >> 21) & 0x3FFu) > CurrentIrql )
          break;
        if ( !*v14 )
          goto LABEL_8;
      }
      *(_QWORD *)v11 = v14;
      *v14[1] = (__int64)v11;
      *((_QWORD *)v11 + 1) = v14[1];
      v14[1] = (__int64 *)v11;
    }
    else
    {
LABEL_8:
      *v14 = (__int64 *)v11;
      *(_QWORD *)v11 = 0LL;
      *((_QWORD *)v11 + 1) = v14;
    }
  }
  v15 = *((_QWORD *)v11 + 2);
  v16 = v11 + 16;
  if ( *(char **)(v15 + 8) != v11 + 16 )
    __fastfail(3u);
  a2[1] = v16;
  *a2 = v15;
  *(_QWORD *)(v15 + 8) = a2;
  *v16 = a2;
  v17 = a2 + 4;
  if ( (a2[7] & 0x10000) != 0 )
  {
    a2[5] = a2 + 4;
    *v17 = v17;
  }
  else
  {
    v26 = *(_QWORD **)(a7 + 40);
    if ( *v26 != a7 + 32 )
      __fastfail(3u);
    *v17 = a7 + 32;
    a2[5] = v26;
    *v26 = v17;
    *(_QWORD *)(a7 + 40) = v17;
  }
  if ( (unsigned int)(unsigned __int16)*((_DWORD *)a2 + 14) - 3 > 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    CurrentThread = KeGetCurrentThread();
    if ( ((__int64)CurrentThread[1].Queue & 8) == 0 )
    {
      LOBYTE(CurrentThread[1].Queue) |= 8u;
      _InterlockedOr(v29, 0);
      CurrentThread[1].QuantumTarget = (unsigned __int64)&CurrentThread[1].SListFaultAddress;
      CurrentThread[1].SListFaultAddress = &CurrentThread[1].SListFaultAddress;
    }
    v23 = (__int64 **)(a2 + 2);
    v24 = KeGetCurrentThread();
    if ( (a2[7] & 0x10000) != 0 )
    {
      p_SListFaultAddress = (__int64 **)&v24[1].SListFaultAddress;
      v19 = *p_SListFaultAddress;
      if ( (__int64 **)(*p_SListFaultAddress)[1] != p_SListFaultAddress )
        __fastfail(3u);
      *v23 = v19;
      a2[3] = p_SListFaultAddress;
      v19[1] = (__int64)v23;
      *p_SListFaultAddress = (__int64 *)v23;
    }
    else
    {
      v27 = &v24[1].SListFaultAddress;
      v19 = (__int64 *)v27[1];
      if ( (void **)*v19 != v27 )
        __fastfail(3u);
      *v23 = (__int64 *)v27;
      a2[3] = v19;
      *v19 = (__int64)v23;
      v27[1] = v23;
    }
    __writecr8((unsigned __int8)CurrentIrql);
  }
  else
  {
    v18 = (_QWORD *)qword_1407F3620;
    v19 = &CmpAsyncKernelPostList;
    v20 = a2 + 2;
    if ( *(__int64 **)qword_1407F3620 != &CmpAsyncKernelPostList )
      __fastfail(3u);
    *v20 = &CmpAsyncKernelPostList;
    a2[3] = v18;
    *v18 = v20;
    qword_1407F3620 = (__int64)(a2 + 2);
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x2000000) != 0 )
  {
    v28 = HIWORD(*((_DWORD *)a2 + 14));
    v30[1] = *(_QWORD *)(a1 + 8);
    v31 = *((_BYTE *)a2 + 56);
    v33 = v28 & 1;
    v34[0] = v30;
    v30[0] = a2;
    v32 = a4;
    v34[1] = 19LL;
    EtwTraceKernelEvent((__int64)v34, 1u, 0x42000000u, 0x930u, 0x501902u);
  }
  if ( *((int *)v11 + 12) >= 0 )
    return 259LL;
  CmpPostNotify((_DWORD)v11, (_DWORD)v19, CurrentIrql, 268, 1, 0LL, 0LL);
  return 0LL;
}
