/*
 * XREFs of CiSchedulerRemoveThread @ 0x1C0001DD0
 * Callers:
 *     CiThreadCleanup @ 0x1C000B390 (CiThreadCleanup.c)
 * Callees:
 *     CiSystemUpdateThreadTag @ 0x1C0001FF0 (CiSystemUpdateThreadTag.c)
 */

void __fastcall CiSchedulerRemoveThread(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  _QWORD *v7; // rax

  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
  v2 = a1[9];
  if ( (*(_DWORD *)(v2 + 184) & 2) != 0 )
    CiSystemUpdateThreadTag(a1, 0LL);
  v3 = a1[10];
  v4 = (_QWORD *)a1[11];
  if ( *(_QWORD **)(v3 + 8) != a1 + 10 || (_QWORD *)*v4 != a1 + 10 )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  if ( v4 == (_QWORD *)v3 )
  {
    v5 = *(_QWORD *)(v2 + 16);
    v6 = v2 + 16;
    v7 = *(_QWORD **)(v6 + 8);
    if ( *(_QWORD *)(v5 + 8) != v6 || *v7 != v6 )
      __fastfail(3u);
    *v7 = v5;
    *(_QWORD *)(v5 + 8) = v7;
  }
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
}
