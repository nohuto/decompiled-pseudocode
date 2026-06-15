/*
 * XREFs of ?RegisterDevice@GraphStreamingResourceManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z @ 0x140002B20
 * Callers:
 *     ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x14000C710 (-Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z.c)
 * Callees:
 *     ?InitialRegisterForDevice@GraphStreamingResourceManager@@EEAAJPEAUIAudioDeviceEndpoint@@PEAURegistrationData@DeviceRegistrations@1@@Z @ 0x140002A40 (-InitialRegisterForDevice@GraphStreamingResourceManager@@EEAAJPEAUIAudioDeviceEndpoint@@PEAURegi.c)
 *     ?GetNode@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@AEBAPEAVCNode@12@AEBQEAUIUnknown@@AEAI1AEAPEAV312@@Z @ 0x14000515C (-GetNode@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140005198 (-RemoveAtPos@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManage.c)
 *     ?SetAt@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIUnknown@@AEBUListValue@DeviceRegistrations@GraphStreamingResourceManager@@@Z @ 0x1400051E4 (-SetAt@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V-$.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010310 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GraphStreamingResourceManager::RegisterDevice(
        GraphStreamingResourceManager *this,
        struct IAudioDeviceEndpoint *a2,
        struct DeviceRegistrationToken__ **a3)
{
  struct DeviceRegistrationToken__ **v3; // r15
  struct IAudioDeviceEndpoint *v4; // rsi
  GraphStreamingResourceManager *v5; // r14
  __int64 v6; // rdi
  __int64 Node; // rax
  __int64 v8; // rbx
  struct GraphStreamingResourceManager::DeviceRegistrations::RegistrationData *v9; // r8
  GraphStreamingResourceManager *v10; // rcx
  __int64 (__fastcall *v11)(GraphStreamingResourceManager *, struct IAudioDeviceEndpoint *, struct GraphStreamingResourceManager::DeviceRegistrations::RegistrationData *); // rax
  int v12; // eax
  unsigned int v13; // esi
  ATL::CAtlException *v15; // rbx
  __int64 v16; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+38h] [rbp-B0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-A8h] BYREF
  char v19; // [rsp+48h] [rbp-A0h]
  char v20; // [rsp+50h] [rbp-98h] BYREF
  __int64 v21; // [rsp+58h] [rbp-90h]
  __int64 v22; // [rsp+60h] [rbp-88h] BYREF
  __int64 v23; // [rsp+68h] [rbp-80h] BYREF
  char *v24; // [rsp+70h] [rbp-78h]
  int v25; // [rsp+78h] [rbp-70h] BYREF
  __int64 v26; // [rsp+80h] [rbp-68h]
  __int64 v27; // [rsp+88h] [rbp-60h]
  __int64 v28; // [rsp+90h] [rbp-58h]
  _BYTE v29[8]; // [rsp+98h] [rbp-50h] BYREF
  ATL::CAtlException *v30; // [rsp+A0h] [rbp-48h] BYREF
  int v34; // [rsp+108h] [rbp+20h] BYREF

  v28 = -2LL;
  v3 = a3;
  v4 = a2;
  v5 = this;
  v17 = 0LL;
  v21 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v19 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  ((void (__fastcall *)(struct IAudioDeviceEndpoint *, GUID *, __int64 *))v4->lpVtbl->QueryInterface)(
    v4,
    &GUID_00000000_0000_0000_c000_000000000046,
    &v16);
  v6 = v16;
  v21 = v16;
  v22 = v16;
  v24 = (char *)v5 + 200;
  Node = ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::GetNode(
           (int)v5 + 200,
           (unsigned int)&v22,
           (unsigned int)&v20,
           (unsigned int)&v34,
           (__int64)v29);
  v8 = Node;
  if ( Node )
  {
    _InterlockedIncrement((volatile signed __int32 *)(Node + 8));
    v6 = v16;
LABEL_6:
    *v3 = (struct DeviceRegistrationToken__ *)v8;
    v8 = 0LL;
    v13 = 0;
    goto LABEL_7;
  }
  v26 = 0LL;
  v27 = 0LL;
  v25 = 1;
  try
  {
    v23 = v6;
    v8 = ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::SetAt(
           (char *)v5 + 200,
           &v23,
           &v25);
    v17 = v8;
  }
  catch ( ATL::CAtlException *v30 )
  {
    v15 = v30;
    if ( *(_DWORD *)v30 == -1073741571 )
      _o__resetstkoflw();
    v34 = *(_DWORD *)v15;
    v13 = v34;
    v8 = v17;
    v6 = v16;
    if ( v34 < 0 )
      goto LABEL_7;
    v5 = this;
    v3 = a3;
    v4 = a2;
  }
  v9 = (struct GraphStreamingResourceManager::DeviceRegistrations::RegistrationData *)(v8 + 16);
  v10 = (GraphStreamingResourceManager *)((char *)v5 - 8);
  v11 = *(__int64 (__fastcall **)(GraphStreamingResourceManager *, struct IAudioDeviceEndpoint *, struct GraphStreamingResourceManager::DeviceRegistrations::RegistrationData *))(*((_QWORD *)v5 - 1) + 64LL);
  if ( v11 == GraphStreamingResourceManager::InitialRegisterForDevice )
    v12 = GraphStreamingResourceManager::InitialRegisterForDevice(v10, v4, v9);
  else
    v12 = v11(v10, v4, v9);
  v13 = v12;
  if ( v12 >= 0 )
    goto LABEL_6;
LABEL_7:
  if ( v8 )
    ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::RemoveAtPos(
      v24,
      v8);
  if ( v19 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v13;
}
