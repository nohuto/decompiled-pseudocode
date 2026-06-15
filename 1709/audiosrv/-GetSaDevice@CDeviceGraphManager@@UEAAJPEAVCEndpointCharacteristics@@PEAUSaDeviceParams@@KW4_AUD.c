/*
 * XREFs of ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAPEAUISaDeviceProxy@@@Z @ 0x180029750
 * Callers:
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_N4PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x18000FD7C (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDevi.c)
 * Callees:
 *     ??$AsWeak@UISaDeviceProxy@@@WRL@Microsoft@@YAJPEAUISaDeviceProxy@@PEAVWeakRef@01@@Z @ 0x18000A330 (--$AsWeak@UISaDeviceProxy@@@WRL@Microsoft@@YAJPEAUISaDeviceProxy@@PEAVWeakRef@01@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000D200 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     ?Lock@CDeviceGraphObjectsStore@@UEAA?AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@XZ @ 0x18000E930 (-Lock@CDeviceGraphObjectsStore@@UEAA-AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@X.c)
 *     ?AddSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@AEAVWeakRef@WRL@Microsoft@@@Z @ 0x18000EC20 (-AddSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@AEAVWeakRef@WRL@Microsoft@@@Z.c)
 *     ?FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@HPEAPEAUISaDeviceProxy@@@Z @ 0x18000ECD0 (-FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@HPEAPEAUI.c)
 *     ?GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x180011990 (-GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18002A250 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18002B31C (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ @ 0x180030044 (-InternalRelease@-$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@AEAW4_AUDCLNT_SHAREMODE@@AEAKPEAUSaDeviceResourceParams@@@Details@WRL@Microsoft@@YAJPEAPEAUISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCharacteristics@@$$QEAPEAUIDeviceGraphObjectsStore@@AEAW4_AUDCLNT_SHAREMODE@@AEAK$$QEAPEAUSaDeviceResourceParams@@@Z @ 0x18003085C (--$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCh.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?SharedAndExclusiveCanCoexist@CEndpointCharacteristics@@QEAA_NXZ @ 0x1800B826C (-SharedAndExclusiveCanCoexist@CEndpointCharacteristics@@QEAA_NXZ.c)
 *     ?AEWMILOG_PERFORMANCE@@YAXKPEAXEE_K1@Z @ 0x1800F0000 (-AEWMILOG_PERFORMANCE@@YAXKPEAXEE_K1@Z.c)
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
  struct ISaDeviceProxy **v8; // r14
  struct _RTL_CRITICAL_SECTION *v12; // r15
  BOOL v13; // esi
  __int64 (__fastcall *v14)(CDeviceGraphStore *, const unsigned __int16 *, struct IDeviceGraphObjectsStore **); // rax
  const unsigned __int16 *v15; // rdx
  int DeviceGraphStoreForEndpoint; // eax
  void *v17; // rdx
  unsigned int v18; // ecx
  unsigned __int8 v19; // r8
  int v20; // ebx
  __int64 (__fastcall *v21)(CDeviceGraphObjectsStore *, const struct SaDeviceParams *, enum _AUDCLNT_SHAREMODE, int, struct ISaDeviceProxy **); // rax
  int v22; // eax
  unsigned int v23; // esi
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 (__fastcall *v26)(struct IAudioPolicyManager *, __int64, __int64, __int128 *); // rax
  _QWORD *(__fastcall *v27)(__int64, LPCRITICAL_SECTION *); // rax
  __int64 *v28; // rax
  __int64 (__fastcall *v29)(CDeviceGraphObjectsStore *, const struct SaDeviceParams *, struct Microsoft::WRL::WeakRef *); // rax
  int v30; // eax
  volatile signed __int32 *v31; // rcx
  void (*v32)(void); // rax
  struct ISaDeviceProxy *v33; // rax
  struct ISaDeviceProxy **v35; // [rsp+20h] [rbp-79h]
  struct ISaDeviceProxy **v36; // [rsp+20h] [rbp-79h]
  unsigned __int64 v37; // [rsp+28h] [rbp-71h]
  unsigned __int64 v38; // [rsp+28h] [rbp-71h]
  CDeviceGraphObjectsStore *v39; // [rsp+40h] [rbp-59h] BYREF
  volatile signed __int32 *v40; // [rsp+48h] [rbp-51h] BYREF
  struct ISaDeviceProxy *v41; // [rsp+50h] [rbp-49h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-41h] BYREF
  struct SaDeviceParams *v43; // [rsp+60h] [rbp-39h] BYREF
  CDeviceGraphObjectsStore *v44; // [rsp+68h] [rbp-31h] BYREF
  struct CEndpointCharacteristics *v45; // [rsp+70h] [rbp-29h] BYREF
  __int128 v46; // [rsp+80h] [rbp-19h] BYREF
  unsigned __int64 v47; // [rsp+F8h] [rbp+5Fh] BYREF

  LODWORD(v47) = a4;
  v8 = a8;
  v45 = a2;
  v43 = a3;
  AEWMILOG_PERFORMANCE((unsigned int)this, a2, (unsigned __int8)a3, 7u, (unsigned __int64)v35, v37);
  v12 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection(v12);
  v13 = (*(unsigned int (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 240LL))(g_PolicyManager)
     && CEndpointCharacteristics::SharedAndExclusiveCanCoexist(a2);
  v39 = 0LL;
  Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::InternalRelease(&v39);
  v14 = *(__int64 (__fastcall **)(CDeviceGraphStore *, const unsigned __int16 *, struct IDeviceGraphObjectsStore **))(*(_QWORD *)g_DeviceGraphStore + 24LL);
  v15 = *(const unsigned __int16 **)a3;
  if ( v14 == CDeviceGraphStore::GetDeviceGraphStoreForEndpoint )
    DeviceGraphStoreForEndpoint = CDeviceGraphStore::GetDeviceGraphStoreForEndpoint(g_DeviceGraphStore, v15, &v39);
  else
    DeviceGraphStoreForEndpoint = v14(g_DeviceGraphStore, v15, &v39);
  v20 = DeviceGraphStoreForEndpoint;
  if ( DeviceGraphStoreForEndpoint >= 0 )
  {
    v36 = v8;
    v21 = *(__int64 (__fastcall **)(CDeviceGraphObjectsStore *, const struct SaDeviceParams *, enum _AUDCLNT_SHAREMODE, int, struct ISaDeviceProxy **))(*(_QWORD *)v39 + 48LL);
    v22 = v21 == CDeviceGraphObjectsStore::FindSaDevice
        ? CDeviceGraphObjectsStore::FindSaDevice(v39, a3, a5, v13, v8)
        : ((__int64 (__fastcall *)(CDeviceGraphObjectsStore *, struct SaDeviceParams *, _QWORD, BOOL))v21)(
            v39,
            a3,
            (unsigned int)a5,
            v13);
    v20 = v22;
    if ( v22 == -2005139430 )
    {
      v41 = 0LL;
      v23 = a7;
      v24 = *((unsigned int *)a2 + 37);
      v25 = *(_QWORD *)a3;
      LODWORD(v38) = a7;
      v26 = *(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64, __int128 *))(*(_QWORD *)g_PolicyManager
                                                                                                 + 128LL);
      LODWORD(v36) = *((_DWORD *)a3 + 2);
      v46 = *((_OWORD *)a3 + 3);
      v20 = v26(g_PolicyManager, v25, v24, &v46);
      v27 = *(_QWORD *(__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v39 + 64LL);
      if ( (char *)v27 == (char *)CDeviceGraphObjectsStore::Lock )
        CDeviceGraphObjectsStore::Lock((__int64)v39, &lpCriticalSection);
      else
        v27((__int64)v39, &lpCriticalSection);
      if ( v20 >= 0 )
      {
        *(_QWORD *)&v46 = a6;
        v40 = (volatile signed __int32 *)&v46;
        v44 = v39;
        *((_QWORD *)&v46 + 1) = v23;
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v41);
        v20 = Microsoft::WRL::Details::MakeAndInitialize<CSaDeviceProxy,ISaDeviceProxy,SaDeviceParams * &,CEndpointCharacteristics * &,IDeviceGraphObjectsStore *,enum _AUDCLNT_SHAREMODE &,unsigned long &,SaDeviceResourceParams *>(
                (unsigned int)&v41,
                (unsigned int)&v43,
                (unsigned int)&v45,
                (unsigned int)&v44,
                (__int64)&a5,
                (__int64)&v47,
                (__int64)&v40);
        if ( v20 < 0 )
        {
          (*(void (__fastcall **)(struct IAudioPolicyManager *, unsigned __int64 *))(*(_QWORD *)g_PolicyManager + 144LL))(
            g_PolicyManager,
            &a6);
        }
        else
        {
          v40 = 0LL;
          v43 = (struct SaDeviceParams *)&v40;
          v28 = (__int64 *)Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v43);
          v20 = Microsoft::WRL::AsWeak<ISaDeviceProxy>((__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v41, v28);
          if ( v20 >= 0 )
          {
            v29 = *(__int64 (__fastcall **)(CDeviceGraphObjectsStore *, const struct SaDeviceParams *, struct Microsoft::WRL::WeakRef *))(*(_QWORD *)v39 + 56LL);
            if ( v29 == CDeviceGraphObjectsStore::AddSaDevice )
              v30 = CDeviceGraphObjectsStore::AddSaDevice(v39, a3, (struct Microsoft::WRL::WeakRef *)&v40);
            else
              v30 = v29(v39, a3, (struct Microsoft::WRL::WeakRef *)&v40);
            v20 = v30;
          }
          v31 = v40;
          if ( v40 )
          {
            v40 = 0LL;
            v32 = *(void (**)(void))(*(_QWORD *)v31 + 16LL);
            if ( (char *)v32 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
              Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(v31);
            else
              v32();
          }
          if ( v20 >= 0 )
          {
            v33 = v41;
            v41 = 0LL;
            *v8 = v33;
          }
        }
      }
      if ( lpCriticalSection )
      {
        LeaveCriticalSection(lpCriticalSection);
        lpCriticalSection = 0LL;
      }
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v41);
    }
  }
  AEWMILOG_PERFORMANCE(v18, v17, v19, 8u, (unsigned __int64)v36, v38);
  Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::InternalRelease(&v39);
  if ( v12 )
    LeaveCriticalSection(v12);
  return (unsigned int)v20;
}
