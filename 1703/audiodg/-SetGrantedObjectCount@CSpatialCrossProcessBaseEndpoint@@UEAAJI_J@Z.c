/*
 * XREFs of ?SetGrantedObjectCount@CSpatialCrossProcessBaseEndpoint@@UEAAJI_J@Z @ 0x14005CC40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?LogSetGrantedCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI_J@Z @ 0x14005A2F8 (-LogSetGrantedCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI_J@Z.c)
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x14005C7D4 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::SetGrantedObjectCount(
        CSpatialCrossProcessBaseEndpoint *this,
        unsigned int a2,
        const GUID *a3,
        const GUID *a4)
{
  unsigned int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp+8h] BYREF

  v7 = -2005139437;
  CSpatialCrossProcessEndpointTraceLogger::LogSetGrantedCount(
    (CSpatialCrossProcessBaseEndpoint *)((char *)this + 360),
    a2,
    a3,
    a4);
  v8 = *((_QWORD *)this + 107);
  if ( v8 )
  {
    if ( a2 <= *(_DWORD *)(v8 + 516) )
    {
      Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)this + 312, (__int64)&lpCriticalSection);
      if ( _InterlockedExchange64((volatile __int64 *)(*((_QWORD *)this + 107) + 16LL), (__int64)a3) && a3 )
      {
        v7 = -2005139348;
      }
      else
      {
        _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 107) + 24LL), a2);
        _InterlockedExchange64((volatile __int64 *)(*((_QWORD *)this + 107) + 16LL), (__int64)a3);
        if ( a3
          || (_InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 107) + 28LL), a2),
              (unsigned __int64)_InterlockedCompareExchange64(
                                  (volatile signed __int64 *)(*((_QWORD *)this + 107) + 56LL),
                                  0LL,
                                  0LL) >> 32 < a2) )
        {
          _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)this + 107) + 64LL), 0x40u);
        }
        else
        {
          v9 = *((_QWORD *)this + 44);
          if ( v9 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9);
        }
        v7 = 0;
      }
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
    }
    else
    {
      return (unsigned int)-2005139347;
    }
  }
  return v7;
}
