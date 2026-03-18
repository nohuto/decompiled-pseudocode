/*
 * XREFs of ?ComputeLastVSyncFromPreviousFrame@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18005B148
 * Callers:
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x18005B3B0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPartitionVerticalBlankScheduler::ComputeLastVSyncFromPreviousFrame(
        CPartitionVerticalBlankScheduler *this)
{
  __int64 v1; // rax
  __int64 v3; // r9
  __int64 v4; // rdx
  int v5; // eax
  unsigned __int64 v6; // r11
  __int64 v7; // rbx
  __int64 v8; // rcx
  unsigned __int64 v9; // r10

  v1 = *((_QWORD *)this + 3231);
  v3 = *(_QWORD *)(v1 + 304);
  if ( v3 )
  {
    v6 = *(_QWORD *)(v1 + 1464);
    v7 = *((_QWORD *)this + 3230);
    v8 = *(_QWORD *)(v7 + 312);
    v9 = (v8 + (v6 >> 4) - v3) / v6;
    if ( v9 <= 7 )
      v8 = v3 + v6 * v9;
    *(_QWORD *)(v7 + 304) = v8;
    *(_DWORD *)(*((_QWORD *)this + 3230) + 108LL) = v9 + *(_DWORD *)(*((_QWORD *)this + 3231) + 108LL);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 3230) + 304LL) = *(_QWORD *)(*((_QWORD *)this + 3230) + 312LL);
    v4 = *((_QWORD *)this + 3230);
    v5 = *(_DWORD *)(v4 + 1196);
    if ( v5 )
      *(_DWORD *)(v4 + 108) = v5 + 1;
    else
      *(_DWORD *)(v4 + 108) = *(_DWORD *)(*((_QWORD *)this + 3231) + 108LL) + 1;
  }
}
