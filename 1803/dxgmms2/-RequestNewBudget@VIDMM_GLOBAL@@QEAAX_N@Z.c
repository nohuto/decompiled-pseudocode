/*
 * XREFs of ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C006B9C4
 * Callers:
 *     ?NotifyProcessStatusChange@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C006859C (-NotifyProcessStatusChange@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C0073CC8 (--1VIDMM_PROCESS@@QEAA@XZ.c)
 *     ?DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z @ 0x1C0073FEC (-DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z.c)
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C00740E4 (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C007F920 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?CheckBudgetRefreshConditionOnProcessMemoryChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C009E3A4 (-CheckBudgetRefreshConditionOnProcessMemoryChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z @ 0x1C009FF04 (-Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z.c)
 *     ?SetMemoryBudgetTarget@VIDMM_GLOBAL@@QEAAXKK@Z @ 0x1C00A37EC (-SetMemoryBudgetTarget@VIDMM_GLOBAL@@QEAAXKK@Z.c)
 *     ?UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z @ 0x1C00A42C8 (-UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z.c)
 *     ?ChangeVideoMemoryReservation@VIDMM_PROCESS@@QEAAJKKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@_K@Z @ 0x1C00A8734 (-ChangeVideoMemoryReservation@VIDMM_PROCESS@@QEAAJKKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@_K@Z.c)
 * Callees:
 *     ??0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x1C0003850 (--0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RequestNewBudget(VIDMM_GLOBAL *this, char a2)
{
  unsigned int v3; // r11d
  unsigned int v4; // r8d
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // r9
  _BYTE *v8; // r10
  _QWORD *v9; // rax
  _QWORD *i; // rdx
  _QWORD **v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rcx
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+28h] [rbp-30h]
  int v16; // [rsp+30h] [rbp-28h]

  if ( a2 )
  {
    DXGAUTOEXPUSHLOCKSHARED::DXGAUTOEXPUSHLOCKSHARED(
      (DXGAUTOEXPUSHLOCKSHARED *)&v14,
      (struct _EX_PUSH_LOCK *const)&VIDMM_PARTITION::_PartitionLock);
    v3 = *((_DWORD *)this + 1748);
    v4 = 0;
    if ( v3 )
    {
      v5 = *((_QWORD *)this + 5090);
      while ( 2 )
      {
        v6 = 1560LL * v4;
        v7 = 0LL;
        v8 = (_BYTE *)(v6 + v5 + 512);
        do
        {
          if ( (*v8 & 1) != 0 )
          {
            v9 = VIDMM_PARTITION::_PartitionTree;
            i = 0LL;
            while ( v9 )
            {
              i = v9;
              v9 = (_QWORD *)*v9;
            }
            if ( i )
            {
              while ( !*(_BYTE *)(*(_QWORD *)(i[4] + 368LL * *(unsigned int *)(*((_QWORD *)this + 3) + 200LL) + 24)
                                + 328LL * v4
                                + 120) )
              {
                v11 = (_QWORD **)i[1];
                v12 = i;
                if ( v11 )
                {
                  v13 = *v11;
                  for ( i = (_QWORD *)i[1]; v13; v13 = (_QWORD *)*v13 )
                    i = v13;
                }
                else
                {
                  while ( 1 )
                  {
                    i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
                    if ( !i || (_QWORD *)*i == v12 )
                      break;
                    v12 = i;
                  }
                }
                if ( !i )
                  goto LABEL_14;
              }
LABEL_28:
              if ( v16 == 1 )
              {
                ExReleasePushLockSharedEx(v15, 0LL);
              }
              else if ( v16 == 2 )
              {
                ExReleasePushLockExclusiveEx(v15, 0LL);
              }
              goto LABEL_32;
            }
          }
          else if ( *(_BYTE *)(v7 + v6 + v5 + 664) )
          {
            goto LABEL_28;
          }
LABEL_14:
          v8 += 24;
          v7 += 328LL;
        }
        while ( v7 < 656 );
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
LABEL_32:
    _InterlockedIncrement64((volatile signed __int64 *)this + 5240);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
      KeSetEvent(*(PRKEVENT *)(*(_QWORD *)this + 152LL), 0, 0);
  }
}
