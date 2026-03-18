/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CRenderTargetManager@@QEAAXXZ @ 0x180144E74
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z @ 0x180035420 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x1800CDE60 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
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
  v5 = &CriticalSection;
  EnterCriticalSection(&CriticalSection);
  for ( j = qword_18023E900;
        j;
        CD3DDeviceLevel1::ReleaseResourcesForDisplayChange(*(CD3DDeviceLevel1 **)(qword_18023E890 + 40LL * j)) )
  {
    --j;
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v5);
}
