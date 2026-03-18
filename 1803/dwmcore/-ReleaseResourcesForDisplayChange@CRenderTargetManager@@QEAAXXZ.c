/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CRenderTargetManager@@QEAAXXZ @ 0x1801524C4
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x18005BBB0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x1800D7EC0 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRenderTargetManager::ReleaseResourcesForDisplayChange(CRenderTargetManager *this)
{
  __int64 i; // rdi
  __int64 v3; // rcx
  unsigned int j; // ebx
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+30h] [rbp+8h] BYREF

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 20); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 7) + 8 * i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 128LL))(v3);
  }
  v5 = &stru_1802D6738;
  EnterCriticalSection(&stru_1802D6738);
  for ( j = qword_1802D67F0;
        j;
        CD3DDeviceLevel1::ReleaseResourcesForDisplayChange(*(CD3DDeviceLevel1 **)(qword_1802D67A0 + 24LL * j)) )
  {
    --j;
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v5);
}
