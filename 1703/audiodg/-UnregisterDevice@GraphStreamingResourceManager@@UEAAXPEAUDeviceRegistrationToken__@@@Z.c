/*
 * XREFs of ?UnregisterDevice@GraphStreamingResourceManager@@UEAAXPEAUDeviceRegistrationToken__@@@Z @ 0x1400040D0
 * Callers:
 *     ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x14000F250 (-Stop@CAudioDeviceGraph@@UEAAJXZ.c)
 * Callees:
 *     ?FinalUnregisterForDevice@GraphStreamingResourceManager@@EEAAXPEAURegistrationData@DeviceRegistrations@1@@Z @ 0x140004040 (-FinalUnregisterForDevice@GraphStreamingResourceManager@@EEAAXPEAURegistrationData@DeviceRegistr.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140004910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?FreeNode@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x140013EF0 (-FreeNode@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140032784 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall GraphStreamingResourceManager::UnregisterDevice(
        GraphStreamingResourceManager *this,
        struct DeviceRegistrationToken__ *a2)
{
  GraphStreamingResourceManager *v4; // rcx
  struct GraphStreamingResourceManager::DeviceRegistrations::RegistrationData *v5; // rdx
  void (__fastcall *v6)(GraphStreamingResourceManager *, struct GraphStreamingResourceManager::DeviceRegistrations::RegistrationData *); // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 i; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v12; // [rsp+28h] [rbp-10h]

  v12 = 0;
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
    if ( !a2 )
      ATL::AtlThrowImpl(-2147467259);
    v7 = (unsigned int)(*((_DWORD *)a2 + 10) % *((_DWORD *)this + 54));
    v8 = *((_QWORD *)this + 25);
    v9 = *(_QWORD *)(v8 + 8 * v7);
    if ( a2 == (struct DeviceRegistrationToken__ *)v9 )
      goto LABEL_6;
    for ( i = *(_QWORD *)(v9 + 32); (struct DeviceRegistrationToken__ *)i != a2; i = *(_QWORD *)(i + 32) )
      v9 = i;
    if ( !v9 )
LABEL_6:
      *(_QWORD *)(v8 + 8 * v7) = *((_QWORD *)a2 + 4);
    else
      *(_QWORD *)(v9 + 32) = *((_QWORD *)a2 + 4);
    ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::FreeNode(
      (char *)this + 200,
      a2);
  }
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
}
