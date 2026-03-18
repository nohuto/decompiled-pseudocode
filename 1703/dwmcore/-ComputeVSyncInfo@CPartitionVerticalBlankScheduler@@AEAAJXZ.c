/*
 * XREFs of ?ComputeVSyncInfo@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180133F98
 * Callers:
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180134160 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 * Callees:
 *     ?ComputeLastVSyncFromPreviousFrame@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180066420 (-ComputeLastVSyncFromPreviousFrame@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::ComputeVSyncInfo(CPartitionVerticalBlankScheduler *this)
{
  unsigned __int64 v1; // rdi
  __int64 v3; // rcx
  __int64 v4; // r10
  unsigned __int64 v5; // rtt
  unsigned __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx

  v1 = *((_QWORD *)this + 20);
  v3 = *((_QWORD *)this + 2685);
  if ( !*(_BYTE *)(v3 + 648) || *(_BYTE *)(v3 + 1320) )
  {
    CPartitionVerticalBlankScheduler::ComputeLastVSyncFromPreviousFrame(this);
  }
  else
  {
    *(_QWORD *)(v3 + 232) = *(_QWORD *)(v3 + 688);
    *(_DWORD *)(*((_QWORD *)this + 2685) + 100LL) = *(_DWORD *)(*((_QWORD *)this + 2685) + 680LL);
  }
  v4 = *((_QWORD *)this + 2685);
  v5 = *(_QWORD *)(v4 + 232) - *((_QWORD *)this + 4);
  v6 = 10000000 * (v5 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart + 10000000 * (v5 / g_qpcFrequency.QuadPart);
  *(_QWORD *)(v4 + 240) = v6;
  *(_QWORD *)(v4 + 240) = v6 + *((_QWORD *)this + 1);
  v7 = *((_QWORD *)this + 2686);
  v8 = *(_QWORD *)(v7 + 232);
  if ( v8 )
    *((_QWORD *)this + 2687) = ((v1 >> 4) + *(_QWORD *)(*((_QWORD *)this + 2685) + 232LL) - v8) / v1;
  else
    *((_QWORD *)this + 2687) = 1LL;
  v9 = *((_QWORD *)this + 2685);
  v10 = *(_QWORD *)(v9 + 248);
  if ( *(_QWORD *)(v9 + 232) > v10
    || *(_QWORD *)(v9 + 240) > *(_QWORD *)(v9 + 256)
    || *(_BYTE *)(v9 + 648) && *(_QWORD *)(v9 + 688) < *(_QWORD *)(v7 + 248) )
  {
    *(_QWORD *)(v9 + 232) = v10;
    *(_QWORD *)(*((_QWORD *)this + 2685) + 240LL) = *(_QWORD *)(*((_QWORD *)this + 2685) + 256LL);
  }
  *(_QWORD *)(*((_QWORD *)this + 2685) + 88LL) = *((_QWORD *)this + 2687) + *(_QWORD *)(*((_QWORD *)this + 2686) + 88LL);
  return 0LL;
}
