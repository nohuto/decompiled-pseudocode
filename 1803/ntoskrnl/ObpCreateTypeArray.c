/*
 * XREFs of ObpCreateTypeArray @ 0x140759BF8
 * Callers:
 *     ObEnumerateObjectsByType @ 0x1407594A0 (ObEnumerateObjectsByType.c)
 *     ObGetObjectInformation @ 0x14075956C (ObGetObjectInformation.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x1400A9D20 (ObReferenceObjectSafe.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

_DWORD *__fastcall ObpCreateTypeArray(_QWORD **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v3; // r15
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD *v6; // rax
  _DWORD *v7; // rsi
  unsigned int v8; // ebx
  __int64 v9; // rcx
  _DWORD *PoolWithTag; // rax
  __int64 v11; // rbp
  _QWORD *v12; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = (ULONG_PTR)(a1 + 23);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(a1 + 23), 0LL);
  v6 = *a1;
  v7 = 0LL;
  v8 = 0;
  if ( *a1 != a1 )
  {
    do
    {
      v6 = (_QWORD *)*v6;
      v9 = v8++;
    }
    while ( v6 != a1 );
    if ( v8 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v9 + 16, 0x7241624Fu);
      v7 = PoolWithTag;
      if ( PoolWithTag )
      {
        *PoolWithTag = v8;
        v11 = 0LL;
        v12 = *a1;
        while ( v12 != a1 )
        {
          *(_QWORD *)&v7[2 * v11 + 2] = v12;
          if ( !ObReferenceObjectSafe((__int64)(v12 + 10)) )
            *(_QWORD *)&v7[2 * v11 + 2] = 0LL;
          v12 = (_QWORD *)*v12;
          v11 = (unsigned int)(v11 + 1);
        }
      }
    }
  }
  ExReleasePushLockEx(v3, 0LL, v4, v5);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return v7;
}
