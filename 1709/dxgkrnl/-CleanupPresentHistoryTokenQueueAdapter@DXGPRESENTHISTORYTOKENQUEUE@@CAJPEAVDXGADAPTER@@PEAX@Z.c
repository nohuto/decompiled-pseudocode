/*
 * XREFs of ?CleanupPresentHistoryTokenQueueAdapter@DXGPRESENTHISTORYTOKENQUEUE@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00FA950
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001ED0 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?CleanupPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0082C68 (-CleanupPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAXXZ.c)
 */

__int64 __fastcall DXGPRESENTHISTORYTOKENQUEUE::CleanupPresentHistoryTokenQueueAdapter(struct DXGADAPTER *a1, void *a2)
{
  struct _KTHREAD **v3; // rcx
  _BYTE v5[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h]
  struct DXGADAPTER *v7; // [rsp+30h] [rbp-18h]
  char v8; // [rsp+38h] [rbp-10h]

  v7 = a1;
  v8 = 0;
  if ( a1 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)a1 + 3);
    v6 = -1LL;
  }
  COREACCESS::AcquireShared((COREACCESS *)v5);
  v3 = (struct _KTHREAD **)*((_QWORD *)a1 + 289);
  if ( v3 )
    ADAPTER_RENDER::CleanupPresentHistoryTokenQueue(v3);
  COREACCESS::~COREACCESS((COREACCESS *)v5);
  return 0LL;
}
