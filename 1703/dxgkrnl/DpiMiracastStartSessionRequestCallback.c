/*
 * XREFs of DpiMiracastStartSessionRequestCallback @ 0x1C01C8520
 * Callers:
 *     <none>
 * Callees:
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C003ED50 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastTearDownAssociation @ 0x1C003F900 (DpiMiracastTearDownAssociation.c)
 */

void __fastcall DpiMiracastStartSessionRequestCallback(void *a1, int *a2)
{
  __int64 v2; // rsi
  IRP *v5; // rcx
  int v6; // r8d

  v2 = *(_QWORD *)a1;
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(*(_QWORD *)a1 + 32LL);
  v5 = *(IRP **)(v2 + 424);
  *(_QWORD *)(v2 + 88) = KeGetCurrentThread();
  IoFreeIrp(v5);
  *(_QWORD *)(v2 + 424) = 0LL;
  *(_QWORD *)(v2 + 88) = 0LL;
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v2 + 32);
  if ( *a2 < 0 )
  {
    v6 = -2147483637;
    if ( *a2 != -1073741536 )
      v6 = -2147483647;
    DpiMiracastTearDownAssociation((char *)v2, *((_DWORD *)a1 + 2), v6, 1u, 0);
  }
  DpiMiracastReleaseMiracastDeviceContext((int *)v2, v2);
  ExFreePoolWithTag(a1, 0);
}
