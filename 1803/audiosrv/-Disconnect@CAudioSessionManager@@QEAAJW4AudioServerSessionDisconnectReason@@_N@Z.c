/*
 * XREFs of ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180004468
 * Callers:
 *     ?NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z @ 0x180008268 (-NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x18009D970 (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 *     ?FinalRelease@CAudioSessionManagerProvider@@QEAAXXZ @ 0x1800B49F8 (-FinalRelease@CAudioSessionManagerProvider@@QEAAXXZ.c)
 *     ?DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z @ 0x1800BB6F4 (-DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z.c)
 *     ?SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z @ 0x1800BE670 (-SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z.c)
 *     ?RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800D2804 (-RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDe.c)
 * Callees:
 *     ?GetStartPosition@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@W4RmResourceType@@@2@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x18000524C (-GetStartPosition@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmR.c)
 *     ?GetNextValue@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@AEAPEAU__POSITION@@@Z @ 0x1800052B4 (-GetNextValue@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
 *     ??1?$com_ptr_t@UIDeviceGraphObjectsStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005384 (--1-$com_ptr_t@UIDeviceGraphObjectsStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA@XZ @ 0x1800053B8 (--1-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x1800199C0 (-GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x180043BB0 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180097360 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800973E4 (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x1800980C8 (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     WPP_SF_ @ 0x18009ECC8 (WPP_SF_.c)
 *     WPP_SF_S @ 0x18009ECE8 (WPP_SF_S.c)
 *     ?ForceExpire@CAudioSession@@QEAAXXZ @ 0x1800A9500 (-ForceExpire@CAudioSession@@QEAAXXZ.c)
 *     ??$emplace_back@AEBV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Z @ 0x1800B0F58 (--$emplace_back@AEBV-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIStreamGro.c)
 *     ?Add@?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioSession@@@Z @ 0x1800B1698 (-Add@-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_KAEBQE.c)
 *     ?RemoveAtPos@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800B3414 (-RemoveAtPos@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTrai.c)
 *     ?FreeResourcesAndLockForStreamGroupConnectionDisconnection@CAudioResourceManager@@QEAA?AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIDeviceGraphObjectsStore@@@Z @ 0x1800D14C0 (-FreeResourcesAndLockForStreamGroupConnectionDisconnection@CAudioResourceManager@@QEAA-AVSyncLoc.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CAudioSessionManager::Disconnect(__int64 a1, unsigned int a2, char a3)
{
  char v3; // r13
  unsigned int v4; // r15d
  __int64 v5; // rsi
  _QWORD *v6; // r14
  const unsigned __int16 *v7; // rdx
  int (*v8)(CDeviceGraphStore *__hidden, const unsigned __int16 *, struct IDeviceGraphObjectsStore **); // rax
  int DeviceGraphStoreForEndpoint; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  int j; // r12d
  _QWORD *v13; // r15
  _QWORD *v15; // r13
  struct _RTL_CRITICAL_SECTION *v16; // rbx
  struct _RTL_CRITICAL_SECTION *v17; // r12
  struct _RTL_CRITICAL_SECTION *v18; // rax
  __int64 StartPosition; // rax
  _QWORD *v20; // rbx
  __int64 v21; // r8
  _QWORD *NextValue; // rax
  _QWORD *v23; // rbx
  __int64 v24; // r8
  CAudioSession **v25; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // rbx
  _QWORD *k; // rbx
  __int64 v29; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+28h] [rbp-B0h] BYREF
  LPCRITICAL_SECTION i; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD *v32; // [rsp+38h] [rbp-A0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-98h] BYREF
  char v34; // [rsp+48h] [rbp-90h]
  struct _RTL_CRITICAL_SECTION *v35; // [rsp+50h] [rbp-88h]
  _QWORD *v36; // [rsp+58h] [rbp-80h] BYREF
  __int128 v37; // [rsp+60h] [rbp-78h]
  __int64 v38; // [rsp+70h] [rbp-68h] BYREF
  __int64 v39; // [rsp+78h] [rbp-60h]
  __int64 v40; // [rsp+80h] [rbp-58h]
  int v41; // [rsp+88h] [rbp-50h]
  __int64 v42; // [rsp+90h] [rbp-48h]
  ATL::CAtlException *v43; // [rsp+98h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]
  __int64 v45; // [rsp+E0h] [rbp+8h] BYREF
  unsigned int v46; // [rsp+E8h] [rbp+10h]
  char v47; // [rsp+F0h] [rbp+18h]
  struct IDeviceGraphObjectsStore *v48; // [rsp+F8h] [rbp+20h] BYREF

  v47 = a3;
  v46 = a2;
  v45 = a1;
  v42 = -2LL;
  v3 = a3;
  v4 = a2;
  v5 = a1;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      51LL,
      &WPP_bc4145dd143a32c0713a8429d6f998aa_Traceguids,
      *(_QWORD *)(a1 + 304));
  }
  v6 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v48 = 0LL;
  v7 = *(const unsigned __int16 **)(v5 + 304);
  v8 = *(int (**)(CDeviceGraphStore *__hidden, const unsigned __int16 *, struct IDeviceGraphObjectsStore **))(*(_QWORD *)g_DeviceGraphStore + 24LL);
  if ( v8 == CDeviceGraphStore::GetDeviceGraphStoreForEndpoint )
    DeviceGraphStoreForEndpoint = CDeviceGraphStore::GetDeviceGraphStoreForEndpoint(g_DeviceGraphStore, v7, &v48);
  else
    DeviceGraphStoreForEndpoint = ((__int64 (__fastcall *)(CDeviceGraphStore *, const unsigned __int16 *, struct IDeviceGraphObjectsStore **))v8)(
                                    g_DeviceGraphStore,
                                    v7,
                                    &v48);
  v11 = DeviceGraphStoreForEndpoint;
  if ( DeviceGraphStoreForEndpoint < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x69F,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)DeviceGraphStoreForEndpoint,
      v29);
    wil::com_ptr_t<IDeviceGraphObjectsStore,wil::err_returncode_policy>::~com_ptr_t<IDeviceGraphObjectsStore,wil::err_returncode_policy>(&v48);
    return v11;
  }
  else
  {
    if ( v4 != 6 && v4 != 1 )
    {
      CAudioResourceManager::FreeResourcesAndLockForStreamGroupConnectionDisconnection(v10, &i, v48);
      if ( i )
        LeaveCriticalSection(i);
      v15 = (_QWORD *)(v5 + 136);
      v32 = (_QWORD *)(v5 + 136);
      EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 136));
      v16 = (struct _RTL_CRITICAL_SECTION *)(v5 + 136);
      lpCriticalSection = (LPCRITICAL_SECTION)(v5 + 136);
      v17 = *(struct _RTL_CRITICAL_SECTION **)(v5 + 176);
      v18 = *(struct _RTL_CRITICAL_SECTION **)(v5 + 184);
      for ( i = v18; ; v18 = i )
      {
        v35 = v17;
        if ( v17 == v18 )
          break;
        v30 = 0LL;
        if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(v17, &v30) >= 0 && v30 )
        {
          v29 = 0LL;
          if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v30, &v29) >= 0 )
          {
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v29 + 384LL))(v29, *(_QWORD *)(v5 + 304));
            try
            {
              std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::emplace_back<Microsoft::WRL::ComPtr<IStreamGroupProxy> const &>(
                &v36,
                &v29);
            }
            catch ( std::bad_alloc )
            {
              v5 = v45;
              v4 = v46;
              v16 = lpCriticalSection;
              v17 = v35;
              v15 = v32;
            }
            v6 = v36;
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
        }
        Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v30);
        v17 = (struct _RTL_CRITICAL_SECTION *)((char *)v17 + 8);
      }
      if ( v15 )
        LeaveCriticalSection(v16);
      v3 = v47;
    }
    v38 = 0LL;
    v39 = 0LL;
    v40 = 0LL;
    v41 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)(v5 + 24);
    v34 = 0;
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    if ( v4 == 1 )
    {
      while ( 1 )
      {
        StartPosition = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,enum RmResourceType,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<enum RmResourceType>>::GetStartPosition(v5 + 64);
        if ( !StartPosition )
          break;
        v32 = *(_QWORD **)(StartPosition + 80);
        v20 = v32;
        ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveAtPos(
          v5 + 64,
          StartPosition);
        LOBYTE(v21) = v3;
        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(v20[2] + 32LL))(v20 + 2, v4, v21);
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 52LL, &WPP_bc4145dd143a32c0713a8429d6f998aa_Traceguids);
        }
        (*(void (__fastcall **)(_QWORD *, __int64))(*v20 + 192LL))(v20, v5);
        (*(void (__fastcall **)(_QWORD *, struct ISessionInternalEvents *))(*v20 + 192LL))(v20, g_PolicyEventsHandler);
        (*(void (__fastcall **)(_QWORD *, struct ISessionInternalEvents *))(*v20 + 192LL))(
          v20,
          g_TelephonyControlEventsHandler);
        try
        {
          ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::Add(&v38, &v32);
        }
        catch ( ATL::CAtlException *v43 )
        {
          if ( *(_DWORD *)v43 == -1073741571 )
            _o__resetstkoflw();
          v5 = v45;
          v4 = v46;
          v6 = v36;
          v3 = v47;
          continue;
        }
      }
    }
    else
    {
      v45 = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,enum RmResourceType,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<enum RmResourceType>>::GetStartPosition(v5 + 64);
      while ( v45 )
      {
        NextValue = (_QWORD *)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNextValue(
                                v5 + 64,
                                &v45);
        v23 = (_QWORD *)*NextValue;
        if ( *NextValue )
        {
          (*(void (__fastcall **)(_QWORD))(*v23 + 8LL))(*NextValue);
          LOBYTE(v24) = v3;
          (*(void (__fastcall **)(_QWORD *, _QWORD, __int64))(v23[2] + 32LL))(v23 + 2, v4, v24);
          (*(void (__fastcall **)(_QWORD *))(*v23 + 16LL))(v23);
        }
      }
    }
    if ( v34 )
      LeaveCriticalSection(lpCriticalSection);
    for ( j = 0; j < (int)v39; ++j )
    {
      v25 = (CAudioSession **)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](&v38, j);
      CAudioSession::ForceExpire(*v25);
      v26 = (_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](&v38, j);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v26 + 16LL))(*v26);
    }
    if ( v4 == 6 || v4 == 1 )
    {
      v13 = (_QWORD *)v37;
    }
    else
    {
      v27 = v6;
      v13 = (_QWORD *)v37;
      while ( v27 != v13 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v27 + 392LL))(*v27, *(_QWORD *)(v5 + 304));
        ++v27;
      }
    }
    ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::~CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>(&v38);
    wil::com_ptr_t<IDeviceGraphObjectsStore,wil::err_returncode_policy>::~com_ptr_t<IDeviceGraphObjectsStore,wil::err_returncode_policy>(&v48);
    if ( v6 )
    {
      for ( k = v6; k != v13; ++k )
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(k);
      std::_Deallocate(v6, (__int64)(*((_QWORD *)&v37 + 1) - (_QWORD)v6) >> 3, 8uLL);
    }
    return 0LL;
  }
}
