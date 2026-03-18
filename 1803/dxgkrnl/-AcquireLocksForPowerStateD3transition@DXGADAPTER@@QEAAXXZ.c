/*
 * XREFs of ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C0147BFC
 * Callers:
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C00F5048 (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0015AA8 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00F4D30 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z @ 0x1C00F4DB0 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z.c)
 *     ?ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C014ED1C (-ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 *     ?TryAcquireDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAEW4DXGADAPTER_DEVICELISTTYPE@@@Z @ 0x1C015C330 (-TryAcquireDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAEW4DXGADAPTER_DEVICELISTTYPE@@@Z.c)
 */

void __fastcall DXGADAPTER::AcquireLocksForPowerStateD3transition(DXGADAPTER *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx

  KeEnterCriticalRegion();
  if ( (unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 96, 0LL) )
  {
    *((_QWORD *)this + 13) = KeGetCurrentThread();
    v2 = *((_QWORD *)this + 308);
    if ( !v2
      || (unsigned __int8)ADAPTER_RENDER::TryAcquireDeviceLockForAllDevices(v2, 2LL)
      && (unsigned __int8)ADAPTER_RENDER::TryAcquireDeviceLockForAllDevices(*((_QWORD *)this + 308), 1LL) )
    {
      DXGADAPTER::AcquireCoreResourceExclusive((__int64)this, 2, 0);
      if ( DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
      {
        v3 = *((_QWORD *)this + 308);
        if ( !v3 )
          goto LABEL_14;
        if ( !DXGADAPTER::IsDxgmms2(this) )
        {
          if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(v3 + 16)) )
          {
            v5 = WdLogNewEntry5_WdAssertion(v4);
            *(_QWORD *)(v5 + 24) = 4040LL;
            WdLogEvent5_WdAssertion(v5);
          }
          if ( *(_QWORD *)(v3 + 1080) )
            goto LABEL_13;
        }
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 308) + 544LL) + 8LL)
                                                       + 1072LL))(*(_QWORD *)(*((_QWORD *)this + 308) + 552LL))
          || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 308) + 520LL) + 8LL)
                                                       + 944LL))(*(_QWORD *)(*((_QWORD *)this + 308) + 528LL)) )
        {
LABEL_13:
          DXGADAPTER::ReleaseCoreResource(this);
        }
        else
        {
LABEL_14:
          v6 = *((_QWORD *)this + 308);
          *((_DWORD *)this + 34) = 1;
          if ( v6 )
          {
            *(_QWORD *)(v6 + 32) = 0LL;
            ExReleasePushLockExclusiveEx(v6 + 24, 0LL);
            KeLeaveCriticalRegion();
            v7 = *((_QWORD *)this + 308);
            *(_QWORD *)(v7 + 48) = 0LL;
            ExReleasePushLockExclusiveEx(v7 + 40, 0LL);
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
