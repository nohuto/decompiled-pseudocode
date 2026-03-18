/*
 * XREFs of PiDmListRemoveObjectWorker @ 0x1406977E0
 * Callers:
 *     PiDmListRemoveList @ 0x1406975A4 (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x140697714 (PiDmListRemoveObject.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x14004C8D0 (RtlDeleteElementGenericTableAvl.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     PiDmObjectRelease @ 0x140485734 (PiDmObjectRelease.c)
 *     PiDmListUpdateAggregationCountWorker @ 0x1405BF040 (PiDmListUpdateAggregationCountWorker.c)
 */

bool *__fastcall PiDmListRemoveObjectWorker(int a1, __int64 a2, unsigned int *a3, __int64 a4, bool *a5)
{
  __int64 v7; // r9
  _QWORD *v8; // rcx
  bool v9; // di
  __int64 v10; // rdx
  _QWORD *v11; // rax
  struct _KTHREAD *CurrentThread; // rax
  bool *result; // rax
  unsigned int *Buffer; // [rsp+40h] [rbp+18h] BYREF

  Buffer = a3;
  v7 = *((_QWORD *)&PiDmListDefs + 5 * a1 + 1);
  v8 = (_QWORD *)(a4 + *((_QWORD *)&PiDmListDefs + 5 * a1 + 3));
  v9 = *v8 != 0LL;
  if ( *v8 )
  {
    v10 = *v8;
    v11 = (_QWORD *)v8[1];
    if ( *(_QWORD **)(*v8 + 8LL) != v8 || (_QWORD *)*v11 != v8 )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    --*(unsigned int *)((char *)a3 + v7 + 16);
    *v8 = 0LL;
    v8[1] = 0LL;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)a2, 1u);
    if ( !--Buffer[3] )
    {
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(a2 + 104), &Buffer);
      PiDmObjectRelease(Buffer);
    }
    ExReleaseResourceLite((PERESOURCE)a2);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    PiDmListUpdateAggregationCountWorker((__int64)Buffer, a4, -1);
  }
  result = a5;
  if ( a5 )
    *a5 = v9;
  return result;
}
