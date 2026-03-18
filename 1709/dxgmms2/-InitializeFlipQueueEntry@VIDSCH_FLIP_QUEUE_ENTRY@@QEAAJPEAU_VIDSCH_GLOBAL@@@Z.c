/*
 * XREFs of ?InitializeFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAJPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0015CE4
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C0004150 (VidSchiSetFlipDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDSCH_FLIP_QUEUE_ENTRY::InitializeFlipQueueEntry(
        VIDSCH_FLIP_QUEUE_ENTRY *this,
        struct _VIDSCH_GLOBAL *a2)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v5; // r8
  int v6; // eax
  int v7; // edx
  __int64 v9; // rax

  PoolWithTag = ExAllocatePoolWithTag(
                  (POOL_TYPE)512,
                  *((_DWORD *)a2 + 32) * (48 * *((_DWORD *)a2 + 14) + ((8 * *((_DWORD *)a2 + 14) + 175) & 0xFFFFFFF8))
                + 16,
                  0x68536956u);
  *((_QWORD *)this + 145) = PoolWithTag;
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    v6 = *((_DWORD *)a2 + 14);
    v7 = *((_DWORD *)a2 + 32);
    v5[2] = v6;
    v5[1] = v7;
    v5[3] = v7 * (48 * v6 + ((8 * v6 + 175) & 0xFFFFFFF8)) + 16;
    return 0LL;
  }
  else
  {
    v9 = WdLogNewEntry5_WdWarning();
    WdLogEvent5_WdWarning(v9);
    return 3221225495LL;
  }
}
