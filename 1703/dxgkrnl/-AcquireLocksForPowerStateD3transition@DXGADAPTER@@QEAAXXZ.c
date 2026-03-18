/*
 * XREFs of ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C016D4B4
 * Callers:
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C00D357C (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0005D94 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00D3290 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z @ 0x1C00D3304 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z.c)
 *     ?ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C016EBAC (-ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 *     ?TryAcquireDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAEW4DXGADAPTER_DEVICELISTTYPE@@@Z @ 0x1C0174704 (-TryAcquireDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAEW4DXGADAPTER_DEVICELISTTYPE@@@Z.c)
 */

void __fastcall DXGADAPTER::AcquireLocksForPowerStateD3transition(DXGADAPTER *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx

  KeEnterCriticalRegion();
  if ( (unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 96, 0LL) )
  {
    *((_QWORD *)this + 13) = KeGetCurrentThread();
    v2 = *((_QWORD *)this + 286);
    if ( !v2
      || (unsigned __int8)ADAPTER_RENDER::TryAcquireDeviceLockForAllDevices(v2, 2LL)
      && (unsigned __int8)ADAPTER_RENDER::TryAcquireDeviceLockForAllDevices(*((_QWORD *)this + 286), 1LL) )
    {
      DXGADAPTER::AcquireCoreResourceExclusive((__int64)this, 2, 0);
      if ( DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
      {
        v3 = *((_QWORD *)this + 286);
        if ( !v3 )
          goto LABEL_14;
        if ( !DXGADAPTER::IsDxgmms2(this) )
        {
          if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(v3 + 16)) )
          {
            v8 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
            *(_QWORD *)(v8 + 24) = 3601LL;
            WdLogEvent5_WdAssertion(v8);
          }
          if ( *(_QWORD *)(v3 + 968) )
            goto LABEL_13;
        }
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 286) + 432LL) + 8LL)
                                                       + 1056LL))(*(_QWORD *)(*((_QWORD *)this + 286) + 440LL))
          || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 286) + 408LL) + 8LL)
                                                       + 832LL))(*(_QWORD *)(*((_QWORD *)this + 286) + 416LL)) )
        {
LABEL_13:
          DXGADAPTER::ReleaseCoreResource((PERESOURCE *)this);
        }
        else
        {
LABEL_14:
          v9 = *((_QWORD *)this + 286);
          *((_DWORD *)this + 34) = 1;
          if ( v9 )
          {
            *(_QWORD *)(v9 + 32) = 0LL;
            ExReleasePushLockExclusiveEx(v9 + 24, 0LL);
            KeLeaveCriticalRegion();
            v10 = *((_QWORD *)this + 286);
            *(_QWORD *)(v10 + 48) = 0LL;
            ExReleasePushLockExclusiveEx(v10 + 40, 0LL);
            KeLeaveCriticalRegion();
          }
        }
      }
    }
    if ( *((_DWORD *)this + 34) != 1 )
      DXGADAPTER::ReleaseLocksForPowerStateD3transition(this);
    *((_QWORD *)this + 13) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 96, 0LL);
  }
  KeLeaveCriticalRegion();
}
