/*
 * XREFs of ?ComputeLastVSyncFromPreviousFrame@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1801263B4
 * Callers:
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180011EF0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPartitionVerticalBlankScheduler::ComputeLastVSyncFromPreviousFrame(
        CPartitionVerticalBlankScheduler *this)
{
  __int64 v2; // r9
  __int64 v3; // r10
  __int64 v4; // rcx
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // eax

  v2 = *(_QWORD *)(*((_QWORD *)this + 2626) + 232LL);
  if ( v2 )
  {
    v3 = *((_QWORD *)this + 2625);
    v4 = *(_QWORD *)(v3 + 240);
    v5 = (unsigned __int64)(v4 + (*((_QWORD *)this + 11) >> 4) - v2) / *((_QWORD *)this + 11);
    if ( v5 <= 7 )
      v4 = v2 + *((_QWORD *)this + 11) * v5;
    *(_QWORD *)(v3 + 232) = v4;
    *(_DWORD *)(*((_QWORD *)this + 2625) + 100LL) = v5 + *(_DWORD *)(*((_QWORD *)this + 2626) + 100LL);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 2625) + 232LL) = *(_QWORD *)(*((_QWORD *)this + 2625) + 240LL);
    v6 = *((_QWORD *)this + 2625);
    v7 = *(_DWORD *)(v6 + 1292);
    if ( v7 )
      *(_DWORD *)(v6 + 100) = v7 + 1;
    else
      *(_DWORD *)(v6 + 100) = *(_DWORD *)(*((_QWORD *)this + 2626) + 100LL) + 1;
  }
}
