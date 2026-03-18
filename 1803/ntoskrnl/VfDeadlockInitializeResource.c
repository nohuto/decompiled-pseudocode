/*
 * XREFs of VfDeadlockInitializeResource @ 0x1408288DC
 * Callers:
 *     VerifierKeInitializeMutant @ 0x140826230 (VerifierKeInitializeMutant.c)
 *     VerifierKeInitializeMutex @ 0x1408262B0 (VerifierKeInitializeMutex.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140130B00 (RtlCaptureStackBackTrace.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ViLowerIrql @ 0x1402AB208 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x1402AB220 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockAddResource @ 0x140828F58 (ViDeadlockAddResource.c)
 *     ViDeadlockAllocate @ 0x140829258 (ViDeadlockAllocate.c)
 *     ViDeadlockCanProceed @ 0x140829524 (ViDeadlockCanProceed.c)
 *     ViDeadlockDetectionLock @ 0x1408299DC (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x140829A14 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockFree @ 0x140829CDC (ViDeadlockFree.c)
 */

__int64 __fastcall VfDeadlockInitializeResource(__int64 a1, __int64 a2, void *a3)
{
  int v4; // esi
  void *v5; // rdi
  unsigned int v6; // ecx
  PVOID v7; // rax
  __int64 v8; // rax
  unsigned __int8 v9; // bl
  unsigned int v10; // esi
  _QWORD *v11; // rcx
  _QWORD *v12; // rbx
  PVOID Entry; // [rsp+30h] [rbp-68h] BYREF
  PVOID v15; // [rsp+38h] [rbp-60h] BYREF
  PVOID BackTrace[8]; // [rsp+40h] [rbp-58h] BYREF

  Entry = 0LL;
  v15 = 0LL;
  v4 = a1;
  if ( !(unsigned int)ViDeadlockCanProceed(a1, 1LL) )
    return 0LL;
  if ( *((_DWORD *)ViDeadlockGlobals + 8196) )
    return 0LL;
  if ( *((_DWORD *)ViDeadlockGlobals + 8282) > ViDeadlockChildrenCountMaximum )
    return 0LL;
  v5 = (void *)ViDeadlockAllocate(1LL);
  if ( !v5 )
    return 0LL;
  v6 = RtlCaptureStackBackTrace(2u, 8u, BackTrace, 0LL);
  v7 = BackTrace[0];
  if ( !v6 )
    v7 = a3;
  BackTrace[0] = v7;
  v8 = 1LL;
  if ( v6 )
    v8 = v6;
  if ( (unsigned int)v8 < 8 )
    BackTrace[v8] = 0LL;
  v9 = ViRaiseIrqlToDpcLevel();
  ViDeadlockDetectionLock(1LL);
  v10 = ViDeadlockAddResource(v4, 1, (_DWORD)v5, (unsigned int)BackTrace, (__int64)&Entry, (__int64)&v15);
  ViDeadlockDetectionUnlock(1LL);
  ViLowerIrql(v9);
  if ( !v10 )
    ViDeadlockFree(v5);
  if ( Entry )
    ViDeadlockFree(Entry);
  v11 = v15;
  if ( v15 )
  {
    do
    {
      v12 = (_QWORD *)*v11;
      ViDeadlockFree(v11);
      v11 = v12;
    }
    while ( v12 );
  }
  return v10;
}
