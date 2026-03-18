/*
 * XREFs of IoCreateSystemThread @ 0x140573E70
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     ExAllocatePoolWithTagPriority @ 0x14012A7A0 (ExAllocatePoolWithTagPriority.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PsCreateSystemThreadEx @ 0x1405679C0 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall IoCreateSystemThread(
        _WORD *Object,
        __int64 a2,
        int a3,
        __int128 *a4,
        ULONG_PTR a5,
        __int64 a6,
        ULONG_PTR BugCheckParameter2,
        __int64 a8)
{
  _QWORD *PoolWithTagPriority; // rax
  void *v13; // rbx
  int SystemThread; // esi

  if ( (unsigned __int16)(*Object - 3) > 1u )
    KeBugCheckEx(0x148u, 0LL, BugCheckParameter2, (ULONG_PTR)Object, 0LL);
  if ( ViVerifierDriverAddedThunkListHead )
    PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                            PagedPool,
                            0x18uLL,
                            0x20206F49u,
                            (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    PoolWithTagPriority = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x20206F49u);
  v13 = PoolWithTagPriority;
  if ( !PoolWithTagPriority )
    return 3221225626LL;
  *PoolWithTagPriority = Object;
  PoolWithTagPriority[1] = BugCheckParameter2;
  PoolWithTagPriority[2] = a8;
  ObfReferenceObject(Object);
  SystemThread = PsCreateSystemThreadEx(a2, a3, a4, a5, a6, (__int64)IopThreadStart, (__int64)v13, 0LL, 0LL);
  if ( SystemThread < 0 )
  {
    ObfDereferenceObject(Object);
    ExFreePoolWithTag(v13, 0);
  }
  return (unsigned int)SystemThread;
}
