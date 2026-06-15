/*
 * XREFs of ?UnregisterDevice@GraphStreamingResourceManager@@UEAAXPEAUDeviceRegistrationToken__@@@Z @ 0x140002A90
 * Callers:
 *     ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x14000C200 (-Stop@CAudioDeviceGraph@@UEAAJXZ.c)
 * Callees:
 *     ?FinalUnregisterForDevice@GraphStreamingResourceManager@@EEAAXPEAURegistrationData@DeviceRegistrations@1@@Z @ 0x140002A00 (-FinalUnregisterForDevice@GraphStreamingResourceManager@@EEAAXPEAURegistrationData@DeviceRegistr.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140005198 (-RemoveAtPos@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManage.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010310 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GraphStreamingResourceManager::UnregisterDevice(
        GraphStreamingResourceManager *this,
        struct DeviceRegistrationToken__ *a2)
{
  GraphStreamingResourceManager *v4; // rcx
  struct GraphStreamingResourceManager::DeviceRegistrations::RegistrationData *v5; // rdx
  void (__fastcall *v6)(GraphStreamingResourceManager *, struct GraphStreamingResourceManager::DeviceRegistrations::RegistrationData *); // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  v8 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2 + 2, 0xFFFFFFFF) == 1 )
  {
    v4 = (GraphStreamingResourceManager *)((char *)this - 8);
    v5 = (struct DeviceRegistrationToken__ *)((char *)a2 + 16);
    v6 = *(void (__fastcall **)(GraphStreamingResourceManager *, struct GraphStreamingResourceManager::DeviceRegistrations::RegistrationData *))(*((_QWORD *)this - 1) + 72LL);
    if ( v6 == GraphStreamingResourceManager::FinalUnregisterForDevice )
      GraphStreamingResourceManager::FinalUnregisterForDevice(v4, v5);
    else
      v6(v4, v5);
    ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::RemoveAtPos(
      (char *)this + 200,
      a2);
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
}
