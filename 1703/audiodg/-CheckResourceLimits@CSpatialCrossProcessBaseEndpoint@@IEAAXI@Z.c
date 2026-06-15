/*
 * XREFs of ?CheckResourceLimits@CSpatialCrossProcessBaseEndpoint@@IEAAXI@Z @ 0x14005B588
 * Callers:
 *     ?SetObjectUsageCounts@CSpatialCrossProcessBaseEndpoint@@UEAAJII@Z @ 0x14005CD60 (-SetObjectUsageCounts@CSpatialCrossProcessBaseEndpoint@@UEAAJII@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?ReadCPFlags@CSpatialCrossProcessBaseEndpoint@@AEBA?AW4CPFlags@1@XZ @ 0x140058CA4 (-ReadCPFlags@CSpatialCrossProcessBaseEndpoint@@AEBA-AW4CPFlags@1@XZ.c)
 *     ?LogGrantCompleted@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI@Z @ 0x14005A020 (-LogGrantCompleted@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI@Z.c)
 *     ?TryLock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x14005CEB8 (-TryLock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSpatialCrossProcessBaseEndpoint::CheckResourceLimits(
        CSpatialCrossProcessBaseEndpoint *this,
        unsigned __int32 a2)
{
  GUID *v4; // r9
  const GUID *v5; // r8
  signed __int64 v6; // rdx
  unsigned __int32 v7; // eax
  __int64 v8; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::CriticalSection::TryLock((char *)this + 336, &lpCriticalSection);
  v4 = (GUID *)lpCriticalSection;
  if ( lpCriticalSection && (CSpatialCrossProcessBaseEndpoint::ReadCPFlags((__int64)this) & 0x40) != 0 )
  {
    v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this + 110) + 8LL), 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this + 110) + 16LL), 0LL, 0LL) <= v6 )
    {
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 110) + 24LL), 0, 0);
      if ( a2 >= v7 )
      {
        _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 110) + 28LL), v7);
        _InterlockedAnd((volatile signed __int32 *)(*((_QWORD *)this + 110) + 64LL), 0xFFFFFFBF);
        CSpatialCrossProcessEndpointTraceLogger::LogGrantCompleted(
          (CSpatialCrossProcessBaseEndpoint *)((char *)this + 384),
          v7,
          v5,
          v4);
        v8 = *((_QWORD *)this + 47);
        if ( v8 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8);
      }
    }
    v4 = (GUID *)lpCriticalSection;
  }
  if ( v4 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v4);
}
