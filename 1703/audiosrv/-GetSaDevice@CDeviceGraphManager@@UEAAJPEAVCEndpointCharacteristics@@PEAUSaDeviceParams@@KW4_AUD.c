/*
 * XREFs of ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAPEAUISaDeviceProxy@@@Z @ 0x180007600
 * Callers:
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_N4PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x180004BE4 (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDevi.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180008690 (-Release@-$RuntimeClass@U-$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@W.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIDeviceGraphObjectsStore@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180009D40 (-Release@-$RuntimeClass@U-$InterfaceList@UIDeviceGraphObjectsStore@@VNil@Details@WRL@Microsoft@@.c)
 *     ?Lock@CDeviceGraphObjectsStore@@UEAA?AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@XZ @ 0x18000B410 (-Lock@CDeviceGraphObjectsStore@@UEAA-AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@X.c)
 *     ?AddSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@AEAVWeakRef@WRL@Microsoft@@@Z @ 0x18000B740 (-AddSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@AEAVWeakRef@WRL@Microsoft@@@Z.c)
 *     ?FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@HPEAPEAUISaDeviceProxy@@@Z @ 0x18000B7E0 (-FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@HPEAPEAUI.c)
 *     ?GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x18000BD10 (-GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z.c)
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ??$AsWeak@UISaDeviceProxy@@@WRL@Microsoft@@YAJPEAUISaDeviceProxy@@PEAVWeakRef@01@@Z @ 0x18002B418 (--$AsWeak@UISaDeviceProxy@@@WRL@Microsoft@@YAJPEAUISaDeviceProxy@@PEAVWeakRef@01@@Z.c)
 *     ??$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCharacteristics@@AEAW4_AUDCLNT_SHAREMODE@@AEAKPEAUSaDeviceResourceParams@@@Details@WRL@Microsoft@@YAJPEAPEAUISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCharacteristics@@AEAW4_AUDCLNT_SHAREMODE@@AEAK$$QEAPEAUSaDeviceResourceParams@@@Z @ 0x18002D0A8 (--$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCh.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     memset @ 0x180049B8A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?SharedAndExclusiveCanCoexist@CEndpointCharacteristics@@QEAA_NXZ @ 0x1800BEDA4 (-SharedAndExclusiveCanCoexist@CEndpointCharacteristics@@QEAA_NXZ.c)
 */

__int64 __fastcall CDeviceGraphManager::GetSaDevice(
        CDeviceGraphManager *this,
        struct CEndpointCharacteristics *a2,
        struct SaDeviceParams *a3,
        int a4,
        enum _AUDCLNT_SHAREMODE a5,
        unsigned __int64 a6,
        unsigned int a7,
        struct ISaDeviceProxy **a8)
{
  struct ISaDeviceProxy **v10; // r14
  unsigned int v12; // esi
  const unsigned __int16 *v13; // rdx
  int (*v14)(CDeviceGraphStore *__hidden, const unsigned __int16 *, struct IDeviceGraphObjectsStore **); // rax
  int DeviceGraphStoreForEndpoint; // eax
  int v16; // ebx
  __int64 (__usercall *v17)@<rax>(CDeviceGraphObjectsStore *__hidden@<rcx>, const struct SaDeviceParams *@<rdx>, enum _AUDCLNT_SHAREMODE@<r8d>, int@<r9d>, struct ISaDeviceProxy **); // rax
  int v18; // eax
  unsigned int v19; // esi
  __int64 v20; // rdx
  __int64 (__fastcall *v21)(struct IAudioPolicyManager *, __int64, __int64, __int128 *, struct ISaDeviceProxy **, unsigned int, unsigned __int64 *); // rax
  __int64 v22; // r8
  void (__fastcall *v23)(CDeviceGraphObjectsStore *, LPCRITICAL_SECTION *); // rax
  __int64 (__fastcall *v24)(CDeviceGraphObjectsStore *__hidden, const struct SaDeviceParams *, struct Microsoft::WRL::WeakRef *); // rax
  int v25; // eax
  __int128 *v26; // rcx
  void (*v27)(void); // rax
  struct ISaDeviceProxy *v28; // rcx
  CDeviceGraphObjectsStore *v29; // rcx
  void (*v30)(void); // rax
  struct ISaDeviceProxy **v32; // [rsp+28h] [rbp-E0h]
  struct ISaDeviceProxy *v33; // [rsp+48h] [rbp-C0h] BYREF
  CDeviceGraphObjectsStore *v34; // [rsp+50h] [rbp-B8h] BYREF
  __int128 *v35; // [rsp+58h] [rbp-B0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+60h] [rbp-A8h] BYREF
  _OWORD v37[4]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+A8h] [rbp-60h]
  __int64 v39; // [rsp+B0h] [rbp-58h]
  struct CEndpointCharacteristics *v40; // [rsp+B8h] [rbp-50h] BYREF
  struct SaDeviceParams *v41; // [rsp+C0h] [rbp-48h] BYREF
  LPCRITICAL_SECTION v42[2]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v43; // [rsp+D8h] [rbp-30h] BYREF
  int v44; // [rsp+160h] [rbp+58h] BYREF

  v44 = a4;
  v10 = a8;
  v40 = a2;
  v41 = a3;
  if ( g_u32AEWMILogLevel >= 4 )
  {
    memset(v37, 0, sizeof(v37));
    LOWORD(v37[0]) = 80;
    *(_OWORD *)((char *)&v37[1] + 8) = AEWMIGUID_PERFORMANCE;
    HIDWORD(v37[2]) = 0x20000;
    WORD2(v37[0]) = 1031;
    *(_QWORD *)&v37[3] = 0LL;
    DWORD2(v37[3]) = 0;
    v38 = 0LL;
    v39 = 0LL;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v37);
  }
  Microsoft::WRL::Wrappers::CriticalSection::Lock((char *)this + 32, v42);
  if ( !(*(unsigned int (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 240LL))(g_PolicyManager)
    || (v12 = 1, !CEndpointCharacteristics::SharedAndExclusiveCanCoexist(a2)) )
  {
    v12 = 0;
  }
  v34 = 0LL;
  v13 = *(const unsigned __int16 **)a3;
  v14 = *(int (**)(CDeviceGraphStore *__hidden, const unsigned __int16 *, struct IDeviceGraphObjectsStore **))(*(_QWORD *)g_DeviceGraphStore + 24LL);
  if ( v14 == CDeviceGraphStore::GetDeviceGraphStoreForEndpoint )
    DeviceGraphStoreForEndpoint = CDeviceGraphStore::GetDeviceGraphStoreForEndpoint(g_DeviceGraphStore, v13, &v34);
  else
    DeviceGraphStoreForEndpoint = ((__int64 (__fastcall *)(CDeviceGraphStore *, const unsigned __int16 *, CDeviceGraphObjectsStore **))v14)(
                                    g_DeviceGraphStore,
                                    v13,
                                    &v34);
  v16 = DeviceGraphStoreForEndpoint;
  if ( DeviceGraphStoreForEndpoint >= 0 )
  {
    HIDWORD(v32) = HIDWORD(v10);
    v17 = *(__int64 (__usercall **)@<rax>(CDeviceGraphObjectsStore *__hidden@<rcx>, const struct SaDeviceParams *@<rdx>, enum _AUDCLNT_SHAREMODE@<r8d>, int@<r9d>, struct ISaDeviceProxy **))(*(_QWORD *)v34 + 48LL);
    v18 = v17 == CDeviceGraphObjectsStore::FindSaDevice
        ? CDeviceGraphObjectsStore::FindSaDevice(v34, a3, a5, v12, v10)
        : ((__int64 (__fastcall *)(CDeviceGraphObjectsStore *, struct SaDeviceParams *, _QWORD, _QWORD))v17)(
            v34,
            a3,
            (unsigned int)a5,
            v12);
    v16 = v18;
    if ( v18 == -2005139430 )
    {
      v19 = a7;
      v33 = 0LL;
      v20 = *(_QWORD *)a3;
      v21 = *(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64, __int128 *, struct ISaDeviceProxy **, unsigned int, unsigned __int64 *))(*(_QWORD *)g_PolicyManager + 128LL);
      LODWORD(v32) = *((_DWORD *)a3 + 2);
      v22 = *((unsigned int *)a2 + 37);
      v43 = *((_OWORD *)a3 + 3);
      v16 = v21(g_PolicyManager, v20, v22, &v43, v32, a7, &a6);
      v23 = *(void (__fastcall **)(CDeviceGraphObjectsStore *, LPCRITICAL_SECTION *))(*(_QWORD *)v34 + 64LL);
      if ( (char *)v23 == (char *)CDeviceGraphObjectsStore::Lock )
        CDeviceGraphObjectsStore::Lock(v34, &lpCriticalSection);
      else
        v23(v34, &lpCriticalSection);
      if ( v16 >= 0 )
      {
        *(_QWORD *)&v43 = a6;
        v35 = &v43;
        *((_QWORD *)&v43 + 1) = v19;
        v16 = Microsoft::WRL::Details::MakeAndInitialize<CSaDeviceProxy,ISaDeviceProxy,SaDeviceParams * &,CEndpointCharacteristics * &,enum _AUDCLNT_SHAREMODE &,unsigned long &,SaDeviceResourceParams *>(
                (unsigned int)&v33,
                (unsigned int)&v41,
                (unsigned int)&v40,
                (unsigned int)&a5,
                (__int64)&v44,
                (__int64)&v35);
        if ( v16 < 0 )
        {
          (*(void (__fastcall **)(struct IAudioPolicyManager *, unsigned __int64 *))(*(_QWORD *)g_PolicyManager + 144LL))(
            g_PolicyManager,
            &a6);
        }
        else
        {
          v35 = 0LL;
          v16 = Microsoft::WRL::AsWeak<ISaDeviceProxy>(v33, &v35);
          if ( v16 >= 0 )
          {
            v24 = *(__int64 (__fastcall **)(CDeviceGraphObjectsStore *__hidden, const struct SaDeviceParams *, struct Microsoft::WRL::WeakRef *))(*(_QWORD *)v34 + 56LL);
            if ( v24 == CDeviceGraphObjectsStore::AddSaDevice )
              v25 = CDeviceGraphObjectsStore::AddSaDevice(v34, a3, (struct Microsoft::WRL::WeakRef *)&v35);
            else
              v25 = v24(v34, a3, (struct Microsoft::WRL::WeakRef *)&v35);
            v16 = v25;
          }
          v26 = v35;
          if ( v35 )
          {
            v35 = 0LL;
            v27 = *(void (**)(void))(*(_QWORD *)v26 + 16LL);
            if ( (char *)v27 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
              Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release();
            else
              v27();
          }
          if ( v16 >= 0 )
          {
            *v10 = v33;
            v33 = 0LL;
          }
        }
      }
      if ( lpCriticalSection )
      {
        LeaveCriticalSection(lpCriticalSection);
        lpCriticalSection = 0LL;
      }
      v28 = v33;
      if ( v33 )
      {
        v33 = 0LL;
        (*(void (__fastcall **)(struct ISaDeviceProxy *))(*(_QWORD *)v28 + 16LL))(v28);
      }
    }
  }
  if ( g_u32AEWMILogLevel >= 4 )
  {
    memset(v37, 0, sizeof(v37));
    LOWORD(v37[0]) = 80;
    *(_OWORD *)((char *)&v37[1] + 8) = AEWMIGUID_PERFORMANCE;
    HIDWORD(v37[2]) = 0x20000;
    WORD2(v37[0]) = 1032;
    *(_QWORD *)&v37[3] = 0LL;
    DWORD2(v37[3]) = 0;
    v38 = 0LL;
    v39 = 0LL;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v37);
  }
  v29 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    v30 = *(void (**)(void))(*(_QWORD *)v29 + 16LL);
    if ( (char *)v30 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IDeviceGraphObjectsStore,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IDeviceGraphObjectsStore,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release();
    else
      v30();
  }
  if ( v42[0] )
    LeaveCriticalSection(v42[0]);
  return (unsigned int)v16;
}
