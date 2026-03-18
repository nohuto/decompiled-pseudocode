/*
 * XREFs of ?InitializeFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAJPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0014488
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C0005D0C (VidSchiSetFlipDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDSCH_FLIP_QUEUE_ENTRY::InitializeFlipQueueEntry(
        VIDSCH_FLIP_QUEUE_ENTRY *this,
        struct _VIDSCH_GLOBAL *a2)
{
  _DWORD *PoolWithTag; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  _DWORD *v7; // r8
  int v8; // eax
  int v9; // edx
  __int64 v11; // rax

  PoolWithTag = ExAllocatePoolWithTag(
                  (POOL_TYPE)512,
                  *((_DWORD *)a2 + 33) * (48 * *((_DWORD *)a2 + 15) + ((8 * *((_DWORD *)a2 + 15) + 175) & 0xFFFFFFF8))
                + 16,
                  0x68536956u);
  *((_QWORD *)this + 145) = PoolWithTag;
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    v8 = *((_DWORD *)a2 + 15);
    v9 = *((_DWORD *)a2 + 33);
    v7[2] = v8;
    v7[1] = v9;
    v7[3] = v9 * (48 * v8 + ((8 * v8 + 175) & 0xFFFFFFF8)) + 16;
    return 0LL;
  }
  else
  {
    v11 = WdLogNewEntry5_WdWarning(v6, v5);
    WdLogEvent5_WdWarning(v11);
    return 3221225495LL;
  }
}
