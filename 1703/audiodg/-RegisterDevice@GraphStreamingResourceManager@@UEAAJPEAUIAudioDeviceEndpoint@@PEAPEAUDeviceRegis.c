/*
 * XREFs of ?RegisterDevice@GraphStreamingResourceManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z @ 0x140004190
 * Callers:
 *     ?Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z @ 0x14000F8B0 (-Start@CAudioDeviceGraph@@UEAAJPEAUISaDeviceCallback@@@Z.c)
 * Callees:
 *     ?InitialRegisterForDevice@GraphStreamingResourceManager@@EEAAJPEAUIAudioDeviceEndpoint@@PEAURegistrationData@DeviceRegistrations@1@@Z @ 0x140004080 (-InitialRegisterForDevice@GraphStreamingResourceManager@@EEAAJPEAUIAudioDeviceEndpoint@@PEAURegi.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140004910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SetAt@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIUnknown@@AEBUListValue@DeviceRegistrations@GraphStreamingResourceManager@@@Z @ 0x14001411C (-SetAt@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140031710 (-RemoveAtPos@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManage.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GraphStreamingResourceManager::RegisterDevice(
        GraphStreamingResourceManager *this,
        struct IAudioDeviceEndpoint *a2,
        struct DeviceRegistrationToken__ **a3)
{
  struct DeviceRegistrationToken__ **v3; // r15
  struct IAudioDeviceEndpoint *v4; // rbx
  GraphStreamingResourceManager *v5; // r14
  __int64 v6; // rdi
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  struct GraphStreamingResourceManager::DeviceRegistrations::RegistrationData *v9; // r8
  GraphStreamingResourceManager *v10; // rcx
  __int64 (__fastcall *v11)(GraphStreamingResourceManager *, struct IAudioDeviceEndpoint *, struct GraphStreamingResourceManager::DeviceRegistrations::RegistrationData *); // rax
  int v12; // eax
  unsigned int v13; // ebx
  ATL::CAtlException *v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // [rsp+20h] [rbp-78h] BYREF
  __int64 v18; // [rsp+28h] [rbp-70h]
  __int64 v19; // [rsp+30h] [rbp-68h]
  __int64 v20; // [rsp+38h] [rbp-60h]
  ATL::CAtlException *v21; // [rsp+40h] [rbp-58h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-50h] BYREF
  char v23; // [rsp+50h] [rbp-48h]
  int v24; // [rsp+58h] [rbp-40h] BYREF
  __int64 v25; // [rsp+60h] [rbp-38h]
  __int64 v26; // [rsp+68h] [rbp-30h]
  __int64 v30; // [rsp+B8h] [rbp+20h] BYREF

  v20 = -2LL;
  v3 = a3;
  v4 = a2;
  v5 = this;
  v18 = 0LL;
  v19 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v23 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  ((void (__fastcall *)(struct IAudioDeviceEndpoint *, GUID *, __int64 *))v4->lpVtbl->QueryInterface)(
    v4,
    &GUID_00000000_0000_0000_c000_000000000046,
    &v17);
  v6 = v17;
  v19 = v17;
  v7 = (_QWORD *)((char *)v5 + 200);
  if ( *((_DWORD *)v5 + 54) == 17 )
    v8 = (unsigned int)v17 % 0x11;
  else
    v8 = (unsigned int)v17 % *((_DWORD *)v5 + 54);
  if ( *v7 )
  {
    v16 = *(_QWORD *)(*v7 + 8 * v8);
    if ( v16 )
    {
      while ( *(_DWORD *)(v16 + 40) != (_DWORD)v17 || *(_QWORD *)v16 != v17 )
      {
        v16 = *(_QWORD *)(v16 + 32);
        if ( !v16 )
          goto LABEL_4;
      }
      _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
      v6 = v17;
      goto LABEL_8;
    }
  }
LABEL_4:
  v25 = 0LL;
  v26 = 0LL;
  v24 = 1;
  try
  {
    v30 = v17;
    v16 = ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::SetAt(
            v7,
            &v30,
            &v24);
    v18 = v16;
  }
  catch ( ATL::CAtlException *v21 )
  {
    v15 = v21;
    if ( *(_DWORD *)v21 == -1073741571 )
      _o__resetstkoflw();
    LODWORD(v30) = *(_DWORD *)v15;
    v13 = v30;
    v5 = this;
    v16 = v18;
    v6 = v17;
    if ( (int)v30 < 0 )
      goto LABEL_24;
    v3 = a3;
    v4 = a2;
  }
  v9 = (struct GraphStreamingResourceManager::DeviceRegistrations::RegistrationData *)(v16 + 16);
  v10 = (GraphStreamingResourceManager *)((char *)v5 - 8);
  v11 = *(__int64 (__fastcall **)(GraphStreamingResourceManager *, struct IAudioDeviceEndpoint *, struct GraphStreamingResourceManager::DeviceRegistrations::RegistrationData *))(*((_QWORD *)v5 - 1) + 64LL);
  if ( v11 == GraphStreamingResourceManager::InitialRegisterForDevice )
    v12 = GraphStreamingResourceManager::InitialRegisterForDevice(v10, v4, v9);
  else
    v12 = v11(v10, v4, v9);
  v13 = v12;
  if ( v12 >= 0 )
  {
LABEL_8:
    *v3 = (struct DeviceRegistrationToken__ *)v16;
    v13 = 0;
    goto LABEL_9;
  }
LABEL_24:
  if ( v16 )
    ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::RemoveAtPos(
      (char *)v5 + 200,
      v16);
LABEL_9:
  if ( v23 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v13;
}
