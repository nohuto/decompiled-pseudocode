/*
 * XREFs of ?ComputeLastVSyncFromPreviousFrame@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180066420
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180067C20 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 *     ?ComputeVSyncInfo@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180133F98 (-ComputeVSyncInfo@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPartitionVerticalBlankScheduler::ComputeLastVSyncFromPreviousFrame(
        CPartitionVerticalBlankScheduler *this)
{
  __int64 v2; // r9
  __int64 v3; // rdx
  int v4; // eax
  unsigned __int64 v5; // r11
  __int64 v6; // r10
  __int64 v7; // rcx
  unsigned __int64 v8; // rax

  v2 = *(_QWORD *)(*((_QWORD *)this + 2686) + 232LL);
  if ( v2 )
  {
    v5 = *((_QWORD *)this + 20);
    v6 = *((_QWORD *)this + 2685);
    v7 = *(_QWORD *)(v6 + 248);
    v8 = (v7 + (v5 >> 4) - v2) / v5;
    if ( v8 <= 7 )
      v7 = v2 + v5 * v8;
    *(_QWORD *)(v6 + 232) = v7;
    *(_DWORD *)(*((_QWORD *)this + 2685) + 100LL) = v8 + *(_DWORD *)(*((_QWORD *)this + 2686) + 100LL);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 2685) + 232LL) = *(_QWORD *)(*((_QWORD *)this + 2685) + 248LL);
    v3 = *((_QWORD *)this + 2685);
    v4 = *(_DWORD *)(v3 + 1316);
    if ( v4 )
      *(_DWORD *)(v3 + 100) = v4 + 1;
    else
      *(_DWORD *)(v3 + 100) = *(_DWORD *)(*((_QWORD *)this + 2686) + 100LL) + 1;
  }
}
