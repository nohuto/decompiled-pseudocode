/*
 * XREFs of ObpCreateTypeArray @ 0x1406C1DAC
 * Callers:
 *     ObEnumerateObjectsByType @ 0x1406C1664 (ObEnumerateObjectsByType.c)
 *     ObGetObjectInformation @ 0x1406C1730 (ObGetObjectInformation.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x14000CFD0 (ObReferenceObjectSafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

_DWORD *__fastcall ObpCreateTypeArray(_QWORD **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v3; // r15
  _QWORD *v4; // rax
  _DWORD *v5; // rsi
  int v6; // ebx
  _DWORD *PoolWithTag; // rax
  __int64 v8; // rbp
  _QWORD *v9; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = (ULONG_PTR)(a1 + 23);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(a1 + 23), 0LL);
  v4 = *a1;
  v5 = 0LL;
  v6 = 0;
  if ( *a1 != a1 )
  {
    do
    {
      v4 = (_QWORD *)*v4;
      ++v6;
    }
    while ( v4 != a1 );
    if ( v6 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)(v6 - 1) + 16, 0x7241624Fu);
      v5 = PoolWithTag;
      if ( PoolWithTag )
      {
        *PoolWithTag = v6;
        v8 = 0LL;
        v9 = *a1;
        while ( v9 != a1 )
        {
          *(_QWORD *)&v5[2 * v8 + 2] = v9;
          if ( !ObReferenceObjectSafe((__int64)(v9 + 10)) )
            *(_QWORD *)&v5[2 * v8 + 2] = 0LL;
          v9 = (_QWORD *)*v9;
          v8 = (unsigned int)(v8 + 1);
        }
      }
    }
  }
  ExReleasePushLockEx(v3, 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return v5;
}
