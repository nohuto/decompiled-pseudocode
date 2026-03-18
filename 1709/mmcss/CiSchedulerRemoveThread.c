/*
 * XREFs of CiSchedulerRemoveThread @ 0x1C0002FCC
 * Callers:
 *     CiThreadCleanup @ 0x1C000A884 (CiThreadCleanup.c)
 * Callees:
 *     CiSystemUpdateThreadTag @ 0x1C00028A8 (CiSystemUpdateThreadTag.c)
 */

void __fastcall CiSchedulerRemoveThread(__int64 a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // rcx
  __int64 v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx

  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
  v2 = *(_QWORD *)(a1 + 72);
  if ( (*(_DWORD *)(v2 + 184) & 2) != 0 )
    CiSystemUpdateThreadTag(a1, 0);
  v3 = *(_QWORD **)(a1 + 80);
  v4 = a1 + 80;
  v5 = *(_QWORD **)(v4 + 8);
  if ( v3[1] != v4 || *v5 != v4 )
    __fastfail(3u);
  *v5 = v3;
  v3[1] = v5;
  if ( v5 == v3 )
  {
    v6 = *(_QWORD *)(v2 + 16);
    if ( *(_QWORD *)(v6 + 8) != v2 + 16 || (v7 = *(_QWORD **)(v2 + 24), *v7 != v2 + 16) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
  }
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
}
