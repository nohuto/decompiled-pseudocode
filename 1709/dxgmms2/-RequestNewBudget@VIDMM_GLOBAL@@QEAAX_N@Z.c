/*
 * XREFs of ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C00670C0
 * Callers:
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C0052650 (--1VIDMM_PROCESS@@QEAA@XZ.c)
 *     ?DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z @ 0x1C0052958 (-DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z.c)
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C0052A50 (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ?NotifyProcessStatusChange@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C006419C (-NotifyProcessStatusChange@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0077550 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?CheckBudgetRefreshConditionOnProcessMemoryChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C00992F4 (-CheckBudgetRefreshConditionOnProcessMemoryChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?SetMemoryBudgetTarget@VIDMM_GLOBAL@@QEAAXKK@Z @ 0x1C009D18C (-SetMemoryBudgetTarget@VIDMM_GLOBAL@@QEAAXKK@Z.c)
 *     ?UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z @ 0x1C009DC6C (-UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z.c)
 *     ?ChangeVideoMemoryReservation@VIDMM_PROCESS@@QEAAJKKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@_K@Z @ 0x1C00A1C98 (-ChangeVideoMemoryReservation@VIDMM_PROCESS@@QEAAJKKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@_K@Z.c)
 *     ?SetMemoryBudgetOverride@VIDMM_PROCESS@@QEAAXK_K0@Z @ 0x1C00A2024 (-SetMemoryBudgetOverride@VIDMM_PROCESS@@QEAAXK_K0@Z.c)
 * Callees:
 *     ??0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x1C0013804 (--0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RequestNewBudget(VIDMM_GLOBAL *this, char a2)
{
  unsigned int v3; // edi
  unsigned int v4; // r8d
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // r11
  _BYTE *v8; // r9
  _BYTE *v9; // r10
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  _QWORD *v13; // rcx
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+28h] [rbp-30h]
  int v16; // [rsp+30h] [rbp-28h]

  if ( a2 )
  {
    DXGAUTOEXPUSHLOCKSHARED::DXGAUTOEXPUSHLOCKSHARED(
      (DXGAUTOEXPUSHLOCKSHARED *)&v14,
      (struct _EX_PUSH_LOCK *const)&VIDMM_PARTITION::_PartitionLock);
    v3 = *((_DWORD *)this + 1604);
    v4 = 0;
    if ( v3 )
    {
      v5 = *((_QWORD *)this + 5021);
      while ( 2 )
      {
        v6 = 1552LL * v4;
        v7 = 0LL;
        v8 = (_BYTE *)(v6 + v5 + 656);
        v9 = (_BYTE *)(v6 + v5 + 504);
        do
        {
          if ( (*v9 & 1) != 0 )
          {
            v10 = VIDMM_PARTITION::_PartitionTree;
            v11 = 0LL;
            while ( v10 )
            {
              v11 = v10;
              v10 = (_QWORD *)*v10;
            }
            if ( v11 )
            {
              while ( !*(_BYTE *)(*(_QWORD *)(v11[4] + 368LL * *(unsigned int *)(*((_QWORD *)this + 3) + 200LL) + 24)
                                + 328LL * v4
                                + 120) )
              {
                v12 = (_QWORD *)v11[1];
                v13 = v11;
                if ( v12 )
                {
                  do
                  {
                    v11 = v12;
                    v12 = (_QWORD *)*v12;
                  }
                  while ( v12 );
                }
                else
                {
                  while ( 1 )
                  {
                    v11 = (_QWORD *)(v11[2] & 0xFFFFFFFFFFFFFFFCuLL);
                    if ( !v11 || (_QWORD *)*v11 == v13 )
                      break;
                    v13 = v11;
                  }
                }
                if ( !v11 )
                  goto LABEL_14;
              }
LABEL_27:
              if ( v16 == 1 )
              {
                ExReleasePushLockSharedEx(v15, 0LL);
              }
              else if ( v16 == 2 )
              {
                ExReleasePushLockExclusiveEx(v15, 0LL);
              }
              goto LABEL_31;
            }
          }
          else if ( *v8 )
          {
            goto LABEL_27;
          }
LABEL_14:
          ++v7;
          v9 += 24;
          v8 += 328;
        }
        while ( v7 < 2 );
        if ( ++v4 < v3 )
          continue;
        break;
      }
    }
    if ( v16 == 1 )
    {
      ExReleasePushLockSharedEx(v15, 0LL);
    }
    else if ( v16 == 2 )
    {
      ExReleasePushLockExclusiveEx(v15, 0LL);
    }
  }
  else
  {
LABEL_31:
    _InterlockedIncrement64((volatile signed __int64 *)this + 5168);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
      KeSetEvent(*(PRKEVENT *)(*(_QWORD *)this + 152LL), 0, 0);
  }
}
