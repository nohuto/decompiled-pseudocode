/*
 * XREFs of ?GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180007920
 * Callers:
 *     ?BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@KKW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@5PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEBUtWAVEFORMATEX@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@K_NPEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180008C70 (-BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioPro.c)
 *     ?CreateStream@CDeviceGraphManager@@UEAAJPEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUStreamGroupParams@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800A5560 (-CreateStream@CDeviceGraphManager@@UEAAJPEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioG.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180008690 (-Release@-$RuntimeClass@U-$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@W.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIDeviceGraphObjectsStore@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180009D40 (-Release@-$RuntimeClass@U-$InterfaceList@UIDeviceGraphObjectsStore@@VNil@Details@WRL@Microsoft@@.c)
 *     ?Lock@CDeviceGraphObjectsStore@@UEAA?AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@XZ @ 0x18000B410 (-Lock@CDeviceGraphObjectsStore@@UEAA-AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@X.c)
 *     ?AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x18000B900 (-AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z.c)
 *     ?FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@@@Z @ 0x18000B980 (-FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@.c)
 *     ?GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x18000BD10 (-GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z.c)
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x18002B320 (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     ??$MakeAndInitialize@VCSharedStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Z @ 0x18002B8BC (--$MakeAndInitialize@VCSharedStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEA.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800466D0 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Z @ 0x1800A4880 (--$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@.c)
 */

__int64 __fastcall CDeviceGraphManager::GetStreamGroup(
        CDeviceGraphManager *this,
        struct StreamGroupParams *a2,
        int a3,
        struct AUDIO_DEVICE_MODE_DESCRIPTOR *a4,
        struct IStreamGroupProxy **a5)
{
  const unsigned __int16 *v7; // rdx
  int (*v8)(CDeviceGraphStore *__hidden, const unsigned __int16 *, struct IDeviceGraphObjectsStore **); // rax
  int DeviceGraphStoreForEndpoint; // eax
  int v10; // ebx
  void (__fastcall *v11)(struct IDeviceGraphObjectsStore *, LPCRITICAL_SECTION *); // rax
  struct IStreamGroupProxy **v12; // r15
  __int64 (__fastcall *v13)(CDeviceGraphObjectsStore *__hidden, const struct StreamGroupParams *, struct IStreamGroupProxy **); // rax
  int StreamGroup; // eax
  struct IDeviceGraphObjectsStore *v15; // rcx
  void (*v16)(void); // rax
  struct IStreamGroupProxy *v18; // rcx
  unsigned int v19; // ebx
  unsigned __int64 v20; // rax
  char *v21; // rax
  char *v22; // rsi
  int v23; // ecx
  __int64 v24; // rax
  int v25; // eax
  unsigned int v26; // edx
  __int64 v27; // rcx
  __int64 v28; // rax
  struct IStreamGroupProxy *v29; // rcx
  int v30; // eax
  __int64 (__fastcall *v31)(CDeviceGraphObjectsStore *__hidden, struct Microsoft::WRL::WeakRef *); // rax
  int v32; // eax
  struct StreamGroupParams *v33; // rcx
  void (*v34)(void); // rax
  struct IStreamGroupProxy *v35; // rax
  struct IStreamGroupProxy *v36; // [rsp+20h] [rbp-30h] BYREF
  struct IDeviceGraphObjectsStore *v37; // [rsp+28h] [rbp-28h] BYREF
  char *v38; // [rsp+30h] [rbp-20h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-18h] BYREF
  struct StreamGroupParams *v40; // [rsp+78h] [rbp+28h] BYREF
  int v41; // [rsp+80h] [rbp+30h] BYREF

  v41 = a3;
  v40 = a2;
  v37 = 0LL;
  v7 = *(const unsigned __int16 **)a2;
  v8 = *(int (**)(CDeviceGraphStore *__hidden, const unsigned __int16 *, struct IDeviceGraphObjectsStore **))(*(_QWORD *)g_DeviceGraphStore + 24LL);
  if ( v8 == CDeviceGraphStore::GetDeviceGraphStoreForEndpoint )
    DeviceGraphStoreForEndpoint = CDeviceGraphStore::GetDeviceGraphStoreForEndpoint(g_DeviceGraphStore, v7, &v37);
  else
    DeviceGraphStoreForEndpoint = ((__int64 (__fastcall *)(CDeviceGraphStore *, const unsigned __int16 *, struct IDeviceGraphObjectsStore **))v8)(
                                    g_DeviceGraphStore,
                                    v7,
                                    &v37);
  v10 = DeviceGraphStoreForEndpoint;
  if ( DeviceGraphStoreForEndpoint < 0 )
    goto LABEL_13;
  v11 = *(void (__fastcall **)(struct IDeviceGraphObjectsStore *, LPCRITICAL_SECTION *))(*(_QWORD *)v37 + 64LL);
  if ( (char *)v11 == (char *)CDeviceGraphObjectsStore::Lock )
    CDeviceGraphObjectsStore::Lock(v37, &lpCriticalSection);
  else
    v11(v37, &lpCriticalSection);
  if ( *((_BYTE *)a2 + 48) || *((_BYTE *)a2 + 50) )
  {
    v12 = a5;
    goto LABEL_17;
  }
  v12 = a5;
  v13 = *(__int64 (__fastcall **)(CDeviceGraphObjectsStore *__hidden, const struct StreamGroupParams *, struct IStreamGroupProxy **))(*(_QWORD *)v37 + 24LL);
  if ( v13 == CDeviceGraphObjectsStore::FindStreamGroup )
    StreamGroup = CDeviceGraphObjectsStore::FindStreamGroup(v37, a2, a5);
  else
    StreamGroup = v13(v37, a2, a5);
  v10 = StreamGroup;
  if ( StreamGroup == -2147023728 )
  {
LABEL_17:
    v18 = 0LL;
    v36 = 0LL;
    if ( a4 )
      v19 = *((_DWORD *)a4 + 14);
    else
      v19 = 0;
    v20 = 16 * (v19 + 5LL);
    if ( v20 > 0x7FFFFFFF )
    {
      v22 = 0LL;
    }
    else
    {
      v21 = (char *)CoTaskMemAlloc((unsigned int)v20);
      v38 = v21;
      v22 = v21;
      if ( v21 )
      {
        *(_DWORD *)v21 = *((_DWORD *)a2 + 2);
        *(_QWORD *)(v21 + 4) = *((unsigned __int8 *)a2 + 48);
        if ( a4 )
          v23 = *(unsigned __int16 *)(*((_QWORD *)a4 + 2) + 16LL) + 18;
        else
          v23 = 0;
        *((_DWORD *)v21 + 3) = v23;
        if ( a4 )
          v24 = *((_QWORD *)a4 + 2);
        else
          v24 = 0LL;
        *((_QWORD *)v22 + 2) = v24;
        *((_QWORD *)v22 + 3) = *(_QWORD *)a2;
        *((_DWORD *)v22 + 9) = *(unsigned __int16 *)(*((_QWORD *)a2 + 2) + 16LL) + 18;
        *((_QWORD *)v22 + 5) = *((_QWORD *)a2 + 2);
        *((_QWORD *)v22 + 6) = *((_QWORD *)a2 + 3);
        if ( a4 )
          v25 = *((_DWORD *)a4 + 8);
        else
          v25 = 0;
        *((_DWORD *)v22 + 14) = v25;
        v26 = 0;
        *(_OWORD *)(v22 + 60) = *((_OWORD *)a2 + 2);
        *((_DWORD *)v22 + 19) = v19;
        *((_DWORD *)v22 + 8) = *((unsigned __int8 *)a2 + 50);
        if ( *((_DWORD *)v22 + 19) )
        {
          do
          {
            v27 = 2LL * v26;
            v28 = v26++ + 5LL;
            *(_OWORD *)&v22[16 * v28] = *(_OWORD *)((char *)a4 + 8 * v27 + 60);
          }
          while ( v26 < *((_DWORD *)v22 + 19) );
        }
        if ( *((_BYTE *)a2 + 48) )
        {
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v36);
          v30 = Microsoft::WRL::Details::MakeAndInitialize<CExclusiveStreamGroupProxy,IStreamGroupProxy,StreamGroupParams * &,ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR> &,unsigned long &>(
                  &v36,
                  &v40,
                  &v38,
                  &v41);
        }
        else
        {
          v29 = v36;
          if ( v36 )
          {
            v36 = 0LL;
            (*(void (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v29 + 16LL))(v29);
          }
          v30 = Microsoft::WRL::Details::MakeAndInitialize<CSharedStreamGroupProxy,IStreamGroupProxy,StreamGroupParams * &,ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR> &,unsigned long &>(
                  &v36,
                  &v40,
                  &v38,
                  &v41);
        }
        v10 = v30;
        if ( v30 < 0 )
          goto LABEL_51;
        v40 = 0LL;
        v10 = Microsoft::WRL::AsWeak<IStreamGroupProxy>(v36, &v40);
        if ( v10 >= 0 )
        {
          v31 = *(__int64 (__fastcall **)(CDeviceGraphObjectsStore *__hidden, struct Microsoft::WRL::WeakRef *))(*(_QWORD *)v37 + 32LL);
          if ( v31 == CDeviceGraphObjectsStore::AddStreamGroup )
            v32 = CDeviceGraphObjectsStore::AddStreamGroup(v37, (struct Microsoft::WRL::WeakRef *)&v40);
          else
            v32 = v31(v37, (struct Microsoft::WRL::WeakRef *)&v40);
          v10 = v32;
        }
        v33 = v40;
        if ( v40 )
        {
          v40 = 0LL;
          v34 = *(void (**)(void))(*(_QWORD *)v33 + 16LL);
          if ( (char *)v34 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
            Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release();
          else
            v34();
        }
        if ( v10 < 0 )
        {
LABEL_51:
          v18 = v36;
        }
        else
        {
          v35 = v36;
          v18 = 0LL;
          v36 = 0LL;
          *v12 = v35;
        }
        goto LABEL_43;
      }
      v18 = v36;
    }
    v10 = -2147024882;
LABEL_43:
    if ( v18 )
    {
      v36 = 0LL;
      (*(void (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v18 + 16LL))(v18);
    }
    CoTaskMemFree(v22);
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
LABEL_13:
  v15 = v37;
  if ( v37 )
  {
    v37 = 0LL;
    v16 = *(void (**)(void))(*(_QWORD *)v15 + 16LL);
    if ( (char *)v16 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IDeviceGraphObjectsStore,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IDeviceGraphObjectsStore,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release();
    else
      v16();
  }
  return (unsigned int)v10;
}
