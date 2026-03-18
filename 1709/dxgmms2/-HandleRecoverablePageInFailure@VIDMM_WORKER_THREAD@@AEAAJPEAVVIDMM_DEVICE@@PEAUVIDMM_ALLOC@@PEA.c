/*
 * XREFs of ?HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_PAGE_IN_PASS@@PEAPEAV2@@Z @ 0x1C00A1544
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0077550 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000F1F0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     ?ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAAX_NPEA_N1@Z @ 0x1C00990B8 (-ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAAX_NPEA_N1@Z.c)
 *     ?DemoteAllocationsToFitGlobalAlloc@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEA_N@Z @ 0x1C00A0C20 (-DemoteAllocationsToFitGlobalAlloc@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_.c)
 *     ?ProcessEvictQueues@VIDMM_WORKER_THREAD@@AEAAXPEA_N@Z @ 0x1C00A17D4 (-ProcessEvictQueues@VIDMM_WORKER_THREAD@@AEAAXPEA_N@Z.c)
 *     ?ProcessFrozenProcesses@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_DEVICE@@PEA_N@Z @ 0x1C00A1884 (-ProcessFrozenProcesses@VIDMM_WORKER_THREAD@@AEAAXPEAVVIDMM_DEVICE@@PEA_N@Z.c)
 *     ?SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@W4_VIDMM_PLACEMENT_RESTRICTION@@PEA_NPEAPEAV3@@Z @ 0x1C00A1A08 (-SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_P.c)
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
  KSPIN_LOCK *v9; // rsi
  KSPIN_LOCK *v10; // rbx
  KSPIN_LOCK v11; // rax
  __int64 result; // rax
  int v13; // esi
  __int64 v14; // r10
  int v15; // r9d
  char v16; // r8
  __int64 v17; // rbx
  __int64 v18; // r8
  int v19; // ecx
  va_list v20; // [rsp+28h] [rbp-28h]
  bool v21; // [rsp+40h] [rbp-10h] BYREF
  __int64 v22; // [rsp+90h] [rbp+40h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+58h] BYREF
  va_list va; // [rsp+A8h] [rbp+58h]
  __int64 v25; // [rsp+B0h] [rbp+60h]
  __int64 v26; // [rsp+B8h] [rbp+68h]
  __int64 v27; // [rsp+C0h] [rbp+70h]
  _DWORD *v28; // [rsp+C8h] [rbp+78h]
  _QWORD *v29; // [rsp+D0h] [rbp+80h]
  va_list va1; // [rsp+D8h] [rbp+88h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v23 = va_arg(va1, _QWORD);
  v25 = va_arg(va1, _QWORD);
  v26 = va_arg(va1, _QWORD);
  v27 = va_arg(va1, _QWORD);
  v28 = va_arg(va1, _DWORD *);
  v29 = va_arg(va1, _QWORD *);
  v5 = 0;
  LOBYTE(v23) = 0;
  VIDMM_WORKER_THREAD::ProcessPendingTerminations(a1, 1, (bool *)va, (bool *)&v22);
  KeWaitForSingleObject(*a1 + 5133, Executive, 0, 0, 0LL);
  v7 = *a1;
  v8 = (DXGPUSHLOCK *)(*a1 + 4998);
  DXGPUSHLOCK::AcquireExclusive(v8);
  v9 = v7 + 4996;
  while ( 1 )
  {
    v10 = (KSPIN_LOCK *)*v9;
    if ( *(KSPIN_LOCK **)(*v9 + 8) != v9 || (v11 = *v10, *(KSPIN_LOCK **)(*v10 + 8) != v10) )
      __fastfail(3u);
    *v9 = v11;
    *(_QWORD *)(v11 + 8) = v9;
    if ( v10 == v9 )
      break;
    (*(void (__fastcall **)(KSPIN_LOCK, _QWORD, KSPIN_LOCK, KSPIN_LOCK))(*(_QWORD *)v10[2] + 24LL))(
      v10[2],
      0LL,
      v10[3],
      v10[4]);
    operator delete(v10);
  }
  *((_QWORD *)v8 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v8, 0LL);
  KeLeaveCriticalRegion();
  VIDMM_WORKER_THREAD::ProcessEvictQueues((VIDMM_WORKER_THREAD *)a1, &v21);
  VIDMM_WORKER_THREAD::ProcessFrozenProcesses((VIDMM_WORKER_THREAD *)a1, a2, (bool *)&v22);
  if ( (unsigned __int8)(v21 | v22) | (unsigned __int8)v23 )
    return 0LL;
  v13 = v27;
  v14 = **a3;
  v15 = *(_DWORD *)(v14 + 76);
  v16 = *(_BYTE *)(1552LL * (v15 & 0x3F) + (*a1)[5021] + 437);
  if ( v16 < 0
    && ((*a1)[808] & 0x2000) == 0
    && ((unsigned __int8)~((unsigned __int8)v16 >> 2) & ((*(_DWORD *)a3[12] & 0x20000) != 0)) == 0
    && (v15 & 0x400) == 0 )
  {
    va_copy(v20, va);
    VIDMM_WORKER_THREAD::DemoteAllocationsToFitGlobalAlloc((__int64 *)a1, v14, a2);
    if ( (_BYTE)v23 )
      return 0LL;
  }
  v17 = v26;
  v18 = 0LL;
  v22 = 0LL;
  if ( !*(_BYTE *)(v26 + 8) )
  {
    if ( v25 && *(_DWORD *)(v25 + 48) == 203 )
      v19 = *(_DWORD *)(v25 + 80);
    else
      v19 = 0;
    LODWORD(v20) = v19;
    VIDMM_WORKER_THREAD::SuspendDevices(a1, **a3, a2, v26, v13, v20, (__int64 *)va, &v22);
    if ( !(_BYTE)v23 )
    {
      v18 = v22;
      goto LABEL_20;
    }
    return 0LL;
  }
LABEL_20:
  if ( (*(_DWORD *)a3[12] & 0x20000) != 0
    && (*(_BYTE *)(1552LL * (*(_DWORD *)(**a3 + 76) & 0x3F) + (*a1)[5021] + 437) & 4) == 0
    && !*(_BYTE *)(v17 + 8) )
  {
LABEL_26:
    v5 = -1073741823;
    goto LABEL_27;
  }
  if ( *(_DWORD *)v17 == 2 )
  {
    if ( v18 )
    {
      *v29 = v18;
      return 3223191812LL;
    }
    goto LABEL_26;
  }
LABEL_27:
  result = v5;
  *v28 = *(_DWORD *)v17;
  return result;
}
