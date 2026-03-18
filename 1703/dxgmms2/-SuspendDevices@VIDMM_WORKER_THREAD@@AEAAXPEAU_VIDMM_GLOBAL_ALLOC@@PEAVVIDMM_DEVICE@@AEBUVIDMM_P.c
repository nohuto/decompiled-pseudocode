/*
 * XREFs of ?SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@W4_VIDMM_PLACEMENT_RESTRICTION@@PEA_NPEAPEAV3@@Z @ 0x1C0099618
 * Callers:
 *     ?HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_PAGE_IN_PASS@@PEAPEAV2@@Z @ 0x1C0099150 (-HandleRecoverablePageInFailure@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@PEA.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001B5C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001F5C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0002678 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C004D6DC (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C006E198 (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C006F830 (-FullySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?GetDeviceToSuspend@VIDMM_SEGMENT@@QEAAPEAVVIDMM_DEVICE@@PEAV2@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAPEAV2@@Z @ 0x1C0099008 (-GetDeviceToSuspend@VIDMM_SEGMENT@@QEAAPEAVVIDMM_DEVICE@@PEAV2@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W.c)
 *     ?SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z @ 0x1C009953C (-SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z.c)
 *     ?FreeSpaceForSecureResource@VIDMM_SEGMENT@@QEAAEPEAU_LIST_ENTRY@@PEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x1C00A1B14 (-FreeSpaceForSecureResource@VIDMM_SEGMENT@@QEAAEPEAU_LIST_ENTRY@@PEAU_VIDMM_GLOBAL_ALLOC@@W4_VID.c)
 */

void __fastcall VIDMM_WORKER_THREAD::SuspendDevices(
        __int64 *a1,
        __int64 a2,
        VIDMM_DEVICE *a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        _BYTE *a7,
        struct VIDMM_DEVICE **a8)
{
  __int64 v9; // r10
  int v10; // r14d
  unsigned int v11; // r9d
  __int64 *v13; // r8
  unsigned int v14; // r13d
  int v15; // r12d
  unsigned int v16; // edi
  char v17; // cl
  int v18; // edx
  unsigned int v19; // eax
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rbx
  VIDMM_GLOBAL *v23; // rcx
  struct _LIST_ENTRY *v24; // rdi
  struct _LIST_ENTRY *v25; // rdx
  __int64 **v26; // rbx
  VIDMM_DEVICE *DeviceToSuspend; // rax
  VIDMM_DEVICE *v28; // rbx
  VIDMM_PROCESS_ADAPTER_INFO *v29; // rcx
  struct _LIST_ENTRY *v30[2]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v31[40]; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v33; // [rsp+B8h] [rbp+50h]
  unsigned int v36; // [rsp+E0h] [rbp+78h]

  v9 = a4;
  v10 = 0;
  v11 = *(_DWORD *)(a2 + 76) & 0x3F;
  v13 = a1;
  v36 = v11;
  *a7 = 0;
  if ( *(int *)(v9 + 4) < 0 )
    return;
  while ( 2 )
  {
    v14 = 0;
    v15 = *(_DWORD *)(a2 + 68);
    v16 = *(_DWORD *)(a2 + 72) == 0 ? 6 : 0;
    while ( v15 )
    {
      if ( v16 > 5 )
      {
        v19 = v14;
        v18 = v14++;
        if ( _bittest(&v15, v19) )
        {
LABEL_7:
          v20 = *v13;
          v15 &= ~(1 << v18);
          v21 = (unsigned int)(*(_DWORD *)(472LL * v11 + *(_QWORD *)(v20 + 40168) + 20) + v18);
          v33 = v21;
          if ( (**(_DWORD **)(a2 + 520) & 0x20000) != 0 )
          {
            v10 = *(_DWORD *)(v9 + 4);
            v22 = *(_QWORD *)(*(_QWORD *)(v20 + 3712) + 8 * v21);
            v30[1] = (struct _LIST_ENTRY *)v30;
            v30[0] = (struct _LIST_ENTRY *)v30;
            DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
              (DXGAUTOPUSHLOCKEXCLUSIVE *)v31,
              (struct _KTHREAD **)(v20 + 41536));
            if ( (unsigned __int8)VIDMM_SEGMENT::FreeSpaceForSecureResource(v22, v30, a2, a6) )
            {
              if ( *(_DWORD *)(v22 + 436) )
              {
                v24 = v30[0];
                if ( (struct _LIST_ENTRY **)v30[0] != v30 )
                {
                  *a7 = 1;
                  do
                  {
                    v25 = v24;
                    v26 = (__int64 **)&v24[-11];
                    v24 = v24->Flink;
                    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v23, v25);
                    VIDMM_DEVICE::PartiallySuspend(v26);
                    VIDMM_DEVICE::FaultAllAllocations((VIDMM_DEVICE *)v26);
                  }
                  while ( v24 != (struct _LIST_ENTRY *)v30 );
                }
LABEL_13:
                DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v31);
                return;
              }
            }
            else
            {
              while ( (struct _LIST_ENTRY **)v30[0] != v30 )
                VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v23, v30[0]);
              if ( *(_DWORD *)(v22 + 436) )
                goto LABEL_13;
            }
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v31);
            v21 = v33;
          }
          DeviceToSuspend = VIDMM_SEGMENT::GetDeviceToSuspend(
                              *(_QWORD *)(*(_QWORD *)(*a1 + 3712) + 8 * v21),
                              a3,
                              v10,
                              a5,
                              a8);
          v28 = DeviceToSuspend;
          if ( DeviceToSuspend )
          {
            if ( (*((_DWORD *)DeviceToSuspend + 13) & 7) == 1 || v10 == 2 )
            {
              VIDMM_DEVICE::FullySuspend((__int64 **)DeviceToSuspend);
              VIDMM_DEVICE::FaultAllAllocations(v28);
LABEL_28:
              *a7 = 1;
              return;
            }
            v29 = (VIDMM_PROCESS_ADAPTER_INFO *)*((_QWORD *)DeviceToSuspend + 2);
            if ( v29 && VIDMM_PROCESS_ADAPTER_INFO::SuspendAllDevices(v29, 0) )
              goto LABEL_28;
          }
          v11 = v36;
          v9 = a4;
          v13 = a1;
        }
      }
      else
      {
        v17 = 6 * v16++;
        if ( ((*(_DWORD *)(a2 + 72) >> v17) & 0x1F) != 0 )
        {
          v18 = ((*(_DWORD *)(a2 + 72) >> v17) & 0x1F) - 1;
          goto LABEL_7;
        }
      }
    }
    if ( ++v10 <= *(_DWORD *)(v9 + 4) )
      continue;
    break;
  }
}
