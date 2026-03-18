/*
 * XREFs of ?HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_PAGE_IN_PASS@@PEAPEAV2@@Z @ 0x1C0099150
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0071420 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001DE4 (--3@YAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00024B4 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     ?ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAAX_NPEA_N1@Z @ 0x1C00919BC (-ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAAX_NPEA_N1@Z.c)
 *     ?DemoteAllocationsToFitGlobalAlloc@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEA_N@Z @ 0x1C009883C (-DemoteAllocationsToFitGlobalAlloc@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_.c)
 *     ?ProcessEvictQueues@VIDMM_WORKER_THREAD@@AEAAXPEA_N@Z @ 0x1C00993E4 (-ProcessEvictQueues@VIDMM_WORKER_THREAD@@AEAAXPEA_N@Z.c)
 *     ?ProcessFrozenProcesses@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_DEVICE@@PEA_N@Z @ 0x1C0099494 (-ProcessFrozenProcesses@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_DEVICE@@PEA_N@Z.c)
 *     ?SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@W4_VIDMM_PLACEMENT_RESTRICTION@@PEA_NPEAPEAV3@@Z @ 0x1C0099618 (-SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_P.c)
 */

__int64 VIDMM_WORKER_THREAD::HandleRecoverablePageInFailure(
        KSPIN_LOCK **a1,
        struct VIDMM_DEVICE *a2,
        __int64 **a3,
        ...)
{
  unsigned int v5; // edi
  KSPIN_LOCK *v7; // rbx
  DXGPUSHLOCK *v8; // r13
  __int64 **v9; // rsi
  __int64 *v10; // rbx
  __int64 v11; // rax
  __int64 result; // rax
  KSPIN_LOCK *v13; // r8
  int v14; // esi
  __int64 v15; // r10
  int v16; // r9d
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // r8
  int v20; // ecx
  va_list v21; // [rsp+28h] [rbp-28h]
  bool v22; // [rsp+40h] [rbp-10h] BYREF
  __int64 v23; // [rsp+90h] [rbp+40h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+58h] BYREF
  va_list va; // [rsp+A8h] [rbp+58h]
  __int64 v26; // [rsp+B0h] [rbp+60h]
  __int64 v27; // [rsp+B8h] [rbp+68h]
  __int64 v28; // [rsp+C0h] [rbp+70h]
  _DWORD *v29; // [rsp+C8h] [rbp+78h]
  _QWORD *v30; // [rsp+D0h] [rbp+80h]
  va_list va1; // [rsp+D8h] [rbp+88h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v24 = va_arg(va1, _QWORD);
  v26 = va_arg(va1, _QWORD);
  v27 = va_arg(va1, _QWORD);
  v28 = va_arg(va1, _QWORD);
  v29 = va_arg(va1, _DWORD *);
  v30 = va_arg(va1, _QWORD *);
  v5 = 0;
  LOBYTE(v24) = 0;
  VIDMM_WORKER_THREAD::ProcessPendingTerminations(a1, 1, (bool *)va, (bool *)&v23);
  KeWaitForSingleObject(*a1 + 5133, Executive, 0, 0, 0LL);
  v7 = *a1;
  v8 = (DXGPUSHLOCK *)(*a1 + 4998);
  DXGPUSHLOCK::AcquireExclusive(v8);
  v9 = (__int64 **)(v7 + 4996);
  while ( 1 )
  {
    v10 = *v9;
    v11 = **v9;
    if ( (__int64 **)(*v9)[1] != v9 || *(__int64 **)(v11 + 8) != v10 )
      __fastfail(3u);
    *v9 = (__int64 *)v11;
    *(_QWORD *)(v11 + 8) = v9;
    if ( v10 == (__int64 *)v9 )
      break;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v10[2] + 24LL))(v10[2], 0LL, v10[3], v10[4]);
    operator delete(v10);
  }
  *((_QWORD *)v8 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v8, 0LL);
  KeLeaveCriticalRegion();
  VIDMM_WORKER_THREAD::ProcessEvictQueues((VIDMM_WORKER_THREAD *)a1, &v22);
  VIDMM_WORKER_THREAD::ProcessFrozenProcesses((VIDMM_WORKER_THREAD *)a1, a2, (bool *)&v23);
  if ( (unsigned __int8)(v22 | v23) | (unsigned __int8)v24 )
    return 0LL;
  v13 = *a1;
  v14 = v28;
  v15 = **a3;
  v16 = *(_DWORD *)(v15 + 76);
  v17 = v16 & 0x3F;
  if ( *(_BYTE *)((*a1)[5150] + 280 * v17 + 275) )
  {
    if ( (v13[808] & 0x2000) == 0
      && ((*(_DWORD *)a3[12] & 0x20000) == 0 || (*(_BYTE *)(v13[5021] + 472 * v17 + 437) & 4) != 0)
      && (v16 & 0x400) == 0 )
    {
      va_copy(v21, va);
      VIDMM_WORKER_THREAD::DemoteAllocationsToFitGlobalAlloc((__int64 *)a1, v15, a2);
      if ( (_BYTE)v24 )
        return 0LL;
    }
  }
  v18 = v27;
  v19 = 0LL;
  v23 = 0LL;
  if ( !*(_BYTE *)(v27 + 8) )
  {
    if ( v26 && *(_DWORD *)(v26 + 48) == 203 )
      v20 = *(_DWORD *)(v26 + 80);
    else
      v20 = 0;
    LODWORD(v21) = v20;
    VIDMM_WORKER_THREAD::SuspendDevices(a1, **a3, a2, v27, v14, v21, (__int64 *)va, &v23);
    if ( !(_BYTE)v24 )
    {
      v19 = v23;
      goto LABEL_22;
    }
    return 0LL;
  }
LABEL_22:
  if ( (*(_DWORD *)a3[12] & 0x20000) != 0
    && (*(_BYTE *)(472LL * (*(_DWORD *)(**a3 + 76) & 0x3F) + (*a1)[5021] + 437) & 4) == 0
    && !*(_BYTE *)(v18 + 8) )
  {
LABEL_28:
    v5 = -1073741823;
    goto LABEL_29;
  }
  if ( *(_DWORD *)v18 == 2 )
  {
    if ( v19 )
    {
      *v30 = v19;
      return 3223191812LL;
    }
    goto LABEL_28;
  }
LABEL_29:
  result = v5;
  *v29 = *(_DWORD *)v18;
  return result;
}
