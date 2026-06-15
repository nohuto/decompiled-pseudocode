/*
 * XREFs of ?SetGrantedObjectCount@CSpatialCrossProcessBaseEndpoint@@UEAAJI_J@Z @ 0x14005FA70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?LogSetGrantedCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI_J@Z @ 0x14005D16C (-LogSetGrantedCount@CSpatialCrossProcessEndpointTraceLogger@@QEAAXI_J@Z.c)
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

  v7 = -2005139437;
  CSpatialCrossProcessEndpointTraceLogger::LogSetGrantedCount(
    (CSpatialCrossProcessBaseEndpoint *)((char *)this + 360),
    a2,
    a3,
    a4);
  v8 = *((_QWORD *)this + 107);
  if ( v8 )
  {
    if ( a2 <= *(_DWORD *)(v8 + 524) )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 312));
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
                                  (volatile signed __int64 *)(*((_QWORD *)this + 107) + 64LL),
                                  0LL,
                                  0LL) >> 32 < a2) )
        {
          _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)this + 107) + 72LL), 0x40u);
        }
        else
        {
          v9 = *((_QWORD *)this + 44);
          if ( v9 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9);
        }
        v7 = 0;
      }
      if ( this != (CSpatialCrossProcessBaseEndpoint *)-312LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 312));
    }
    else
    {
      return (unsigned int)-2005139347;
    }
  }
  return v7;
}
