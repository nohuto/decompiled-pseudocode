/*
 * XREFs of CmpNotifyChangeKey @ 0x1404A3080
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1404A26F0 (NtNotifyChangeMultipleKeys.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400C1C38 (EtwTraceKernelEvent.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400EF190 (ExAllocatePoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     SeCaptureSubjectContext @ 0x1404C8F50 (SeCaptureSubjectContext.c)
 *     CmpFreePostBlock @ 0x1404E224C (CmpFreePostBlock.c)
 *     CmpPostNotify @ 0x1404E2F90 (CmpPostNotify.c)
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
  _QWORD *v14; // r9
  __int64 *v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  _QWORD *v19; // rcx
  __int64 *SListFaultAddress; // rdx
  _QWORD *v21; // rax
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD *v24; // rdx
  __int64 **v25; // rcx
  void **p_SListFaultAddress; // rax
  _QWORD *v27; // rdx
  __int64 **v28; // rax
  int v29; // ecx
  signed __int32 v30[8]; // [rsp+0h] [rbp-98h] BYREF
  _QWORD v31[2]; // [rsp+40h] [rbp-58h] BYREF
  char v32; // [rsp+50h] [rbp-48h]
  char v33; // [rsp+51h] [rbp-47h]
  char v34; // [rsp+52h] [rbp-46h]
  _QWORD v35[2]; // [rsp+58h] [rbp-40h] BYREF

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
    v14 = (_QWORD *)(v12 + 1584);
    v15 = *(__int64 **)(v12 + 1584);
    if ( v15 )
    {
      CurrentIrql = (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) >> 21) & 0x3FF;
      while ( 1 )
      {
        v14 = v15;
        if ( ((*(_DWORD *)(v15[4] + 4) >> 21) & 0x3FFu) > CurrentIrql )
          break;
        v15 = (__int64 *)*v15;
        if ( !v15 )
          goto LABEL_8;
      }
      *(_QWORD *)v11 = v15;
      *(_QWORD *)v15[1] = v11;
      *((_QWORD *)v11 + 1) = v15[1];
      v15[1] = (__int64)v11;
    }
    else
    {
LABEL_8:
      *v14 = v11;
      *(_QWORD *)v11 = 0LL;
      *((_QWORD *)v11 + 1) = v14;
    }
  }
  v16 = *((_QWORD *)v11 + 2);
  v17 = v11 + 16;
  if ( *(char **)(v16 + 8) != v11 + 16 )
    __fastfail(3u);
  *a2 = v16;
  a2[1] = v17;
  *(_QWORD *)(v16 + 8) = a2;
  v18 = a2 + 4;
  *v17 = a2;
  if ( (a2[7] & 0x10000) != 0 )
  {
    a2[5] = a2 + 4;
    *v18 = v18;
  }
  else
  {
    v27 = *(_QWORD **)(a7 + 40);
    if ( *v27 != a7 + 32 )
      __fastfail(3u);
    *v18 = a7 + 32;
    a2[5] = v27;
    *v27 = v18;
    *(_QWORD *)(a7 + 40) = v18;
  }
  if ( (unsigned int)(unsigned __int16)*((_DWORD *)a2 + 14) - 3 > 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    CurrentThread = KeGetCurrentThread();
    if ( ((__int64)CurrentThread[1].Queue & 8) == 0 )
    {
      LOBYTE(CurrentThread[1].Queue) |= 8u;
      _InterlockedOr(v30, 0);
      CurrentThread[1].QuantumTarget = (unsigned __int64)&CurrentThread[1].SListFaultAddress;
      CurrentThread[1].SListFaultAddress = &CurrentThread[1].SListFaultAddress;
    }
    v24 = KeGetCurrentThread();
    v25 = (__int64 **)(a2 + 2);
    if ( (a2[7] & 0x10000) != 0 )
    {
      p_SListFaultAddress = &v24[1].SListFaultAddress;
      SListFaultAddress = (__int64 *)v24[1].SListFaultAddress;
      if ( (void **)SListFaultAddress[1] != p_SListFaultAddress )
        __fastfail(3u);
      *v25 = SListFaultAddress;
      a2[3] = p_SListFaultAddress;
      SListFaultAddress[1] = (__int64)v25;
      *p_SListFaultAddress = v25;
    }
    else
    {
      SListFaultAddress = (__int64 *)&v24[1].SListFaultAddress;
      v28 = (__int64 **)SListFaultAddress[1];
      if ( *v28 != SListFaultAddress )
        __fastfail(3u);
      *v25 = SListFaultAddress;
      a2[3] = v28;
      *v28 = (__int64 *)v25;
      SListFaultAddress[1] = (__int64)v25;
    }
    __writecr8((unsigned __int8)CurrentIrql);
  }
  else
  {
    v19 = (_QWORD *)qword_140861640;
    SListFaultAddress = &CmpAsyncKernelPostList;
    v21 = a2 + 2;
    if ( *(__int64 **)qword_140861640 != &CmpAsyncKernelPostList )
      __fastfail(3u);
    *v21 = &CmpAsyncKernelPostList;
    a2[3] = v19;
    *v19 = v21;
    qword_140861640 = (__int64)(a2 + 2);
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x2000000) != 0 )
  {
    v29 = *((_DWORD *)a2 + 14);
    v31[1] = *(_QWORD *)(a1 + 8);
    v34 = BYTE2(v29) & 1;
    v32 = v29;
    v31[0] = a2;
    v33 = a4;
    v35[0] = v31;
    v35[1] = 19LL;
    EtwTraceKernelEvent((int)v35, 1, 0x42000000u, 2352, 5249282);
  }
  if ( *((int *)v11 + 12) >= 0 )
    return 259LL;
  CmpPostNotify((_DWORD)v11, (_DWORD)SListFaultAddress, CurrentIrql, 268, 1, 0LL, 0LL);
  return 0LL;
}
