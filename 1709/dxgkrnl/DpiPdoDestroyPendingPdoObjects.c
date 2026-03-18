/*
 * XREFs of DpiPdoDestroyPendingPdoObjects @ 0x1C01E89D0
 * Callers:
 *     DpiFdoHandleRemoveDevice @ 0x1C01DDBA0 (DpiFdoHandleRemoveDevice.c)
 *     DpiPdoRemovePdoObjects @ 0x1C01E9154 (DpiPdoRemovePdoObjects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiPdoDestroyPendingPdoObjects(__int64 a1)
{
  __int64 v1; // rbx
  struct _IO_REMOVE_LOCK *v2; // rdi
  __int64 v3; // rax
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rsi
  _QWORD *v9; // rax

  v1 = *(_QWORD *)(a1 + 64) + 3504LL;
  while ( *(_QWORD *)v1 != v1 )
  {
    v2 = *(struct _IO_REMOVE_LOCK **)v1;
    if ( *(_QWORD *)(*(_QWORD *)v1 + 8LL) != v1
      || (v3 = *(_QWORD *)&v2->Common.Removed, *(struct _IO_REMOVE_LOCK **)(*(_QWORD *)&v2->Common.Removed + 8LL) != v2) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v1 = v3;
    *(_QWORD *)(v3 + 8) = v1;
    v4 = IoAcquireRemoveLockEx(v2 + 2, DpiPdoDestroyPendingPdoObjects, File, 1u, 0x20u);
    v8 = v4;
    if ( v4 >= 0 )
    {
      IoReleaseRemoveLockAndWaitEx(v2 + 2, DpiPdoDestroyPendingPdoObjects, 0x20u);
      IoQueueWorkItem(
        (PIO_WORKITEM)v2[29].Common.RemoveEvent.Header.WaitListHead.Blink,
        (PIO_WORKITEM_ROUTINE)DpiPdoDestroyPdo,
        DelayedWorkQueue,
        0LL);
    }
    else
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6, v5, v7);
      v9[3] = 275LL;
      v9[4] = 21LL;
      v9[5] = v8;
      WdLogEvent5_WdCriticalError(v9);
    }
  }
  return 0LL;
}
