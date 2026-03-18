/*
 * XREFs of ?ReleaseExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C001448C
 * Callers:
 *     ?ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEAVDXGRESOURCE@@@Z @ 0x1C008C690 (-ValidateDestroyAllocation@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEBIIPEAPEAVDXGALLOCATION@@PEAPEA.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGAUTOPUSHLOCK::ReleaseExclusive(DXGAUTOPUSHLOCK *this)
{
  __int64 v1; // rcx

  *((_DWORD *)this + 4) = 0;
  v1 = *((_QWORD *)this + 1);
  *(_QWORD *)(v1 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
}
