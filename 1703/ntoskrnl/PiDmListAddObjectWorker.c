/*
 * XREFs of PiDmListAddObjectWorker @ 0x1404E4584
 * Callers:
 *     PiDmListAddObject @ 0x1404E44B8 (PiDmListAddObject.c)
 *     PiDmListAddList @ 0x140599268 (PiDmListAddList.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     PiDmListUpdateAggregationCountWorker @ 0x1405BF040 (PiDmListUpdateAggregationCountWorker.c)
 */

bool *__fastcall PiDmListAddObjectWorker(int a1, struct _ERESOURCE *a2, __int64 a3, __int64 a4, bool *a5)
{
  __int64 v8; // rcx
  _QWORD *v9; // rdi
  __int64 v10; // rbx
  bool v11; // r14
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v13; // rax
  bool *result; // rax

  v8 = 5LL * a1;
  v9 = (_QWORD *)(a4 + *((_QWORD *)&PiDmListDefs + v8 + 3));
  v10 = a3 + *((_QWORD *)&PiDmListDefs + v8 + 1);
  v11 = *v9 != 0LL;
  if ( !*v9 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(a2, 1u);
    ++*(_DWORD *)(a3 + 12);
    ExReleaseResourceLite(a2);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v13 = *(_QWORD **)(v10 + 8);
    if ( *v13 != v10 )
      __fastfail(3u);
    *v9 = v10;
    v9[1] = v13;
    *v13 = v9;
    *(_QWORD *)(v10 + 8) = v9;
    ++*(_DWORD *)(v10 + 16);
    PiDmListUpdateAggregationCountWorker(a3, a4, 1LL);
  }
  result = a5;
  if ( a5 )
    *a5 = v11;
  return result;
}
