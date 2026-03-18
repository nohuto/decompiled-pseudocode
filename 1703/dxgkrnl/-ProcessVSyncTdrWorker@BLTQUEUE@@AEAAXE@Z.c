/*
 * XREFs of ?ProcessVSyncTdrWorker@BLTQUEUE@@AEAAXE@Z @ 0x1C01B5C90
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C011F164 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ @ 0x1C01B4584 (-DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ.c)
 */

void __fastcall BLTQUEUE::ProcessVSyncTdrWorker(struct _KTHREAD **this, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // di
  struct _KTHREAD *v6; // r9
  unsigned int v7; // r8d
  int i; // edx
  __int64 v9; // rcx

  v4 = a2;
  BLTQUEUE::DisableHwVSyncWorker(this, a2, a3, a4);
  v6 = *this;
  v7 = 0;
  for ( i = *((_DWORD *)this + 24); v7 < *(_DWORD *)v6; ++v7 )
  {
    if ( v7 != i )
    {
      v9 = *((_QWORD *)v6 + 1) + 2704LL * v7;
      if ( *(_QWORD *)(v9 + 440) )
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 408));
    }
  }
  DXGDODPRESENT::TriggerDisplayOnlyTdr(
    *this,
    8 - (unsigned int)(v4 != 0),
    *((unsigned int *)this + 24),
    10000000LL * (unsigned int)dword_1C006FEEC);
}
