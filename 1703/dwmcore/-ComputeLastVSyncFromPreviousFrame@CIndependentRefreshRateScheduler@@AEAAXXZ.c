/*
 * XREFs of ?ComputeLastVSyncFromPreviousFrame@CIndependentRefreshRateScheduler@@AEAAXXZ @ 0x18013C90C
 * Callers:
 *     ?ComputeVSyncInfo@CIndependentRefreshRateScheduler@@AEAAJXZ @ 0x18013C9B4 (-ComputeVSyncInfo@CIndependentRefreshRateScheduler@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CIndependentRefreshRateScheduler::ComputeLastVSyncFromPreviousFrame(
        CIndependentRefreshRateScheduler *this)
{
  __int64 v2; // r9
  unsigned __int64 v3; // r11
  __int64 v4; // r10
  __int64 v5; // rcx
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // eax

  v2 = *(_QWORD *)(*((_QWORD *)this + 2686) + 232LL);
  if ( v2 )
  {
    v3 = *((_QWORD *)this + 20);
    v4 = *((_QWORD *)this + 2685);
    v5 = *(_QWORD *)(v4 + 248);
    v6 = (v5 + (v3 >> 4) - v2) / v3;
    if ( v6 <= 7 )
      v5 = v2 + v3 * v6;
    *(_QWORD *)(v4 + 232) = v5;
    *(_DWORD *)(*((_QWORD *)this + 2685) + 100LL) = v6 + *(_DWORD *)(*((_QWORD *)this + 2686) + 100LL);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 2685) + 232LL) = *(_QWORD *)(*((_QWORD *)this + 2685) + 248LL);
    v7 = *((_QWORD *)this + 2685);
    v8 = *(_DWORD *)(v7 + 1316);
    if ( v8 )
      *(_DWORD *)(v7 + 100) = v8 + 1;
    else
      *(_DWORD *)(v7 + 100) = *(_DWORD *)(*((_QWORD *)this + 2686) + 100LL) + 1;
  }
}
