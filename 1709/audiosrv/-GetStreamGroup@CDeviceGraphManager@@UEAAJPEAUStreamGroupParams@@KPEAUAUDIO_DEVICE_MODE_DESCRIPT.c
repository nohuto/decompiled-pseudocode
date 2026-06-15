/*
 * XREFs of ?GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180029A10
 * Callers:
 *     ?BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@KKW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@5PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEBUtWAVEFORMATEX@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@K_NPEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800075B0 (-BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioPro.c)
 *     ?CreateStream@CDeviceGraphManager@@UEAAJPEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUStreamGroupParams@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180092D40 (-CreateStream@CDeviceGraphManager@@UEAAJPEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioG.c)
 * Callees:
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x18000CA54 (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     ??$MakeAndInitialize@VCSharedStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Z @ 0x18000D0FC (--$MakeAndInitialize@VCSharedStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEA.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000D200 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     ?Lock@CDeviceGraphObjectsStore@@UEAA?AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@XZ @ 0x18000E930 (-Lock@CDeviceGraphObjectsStore@@UEAA-AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@X.c)
 *     ?AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x18000EDB0 (-AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z.c)
 *     ?FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@@@Z @ 0x18000EE30 (-FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@.c)
 *     ?GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x180011990 (-GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18002A250 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18002B31C (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ @ 0x180030044 (-InternalRelease@-$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Z @ 0x180091C60 (--$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@.c)
 */

__int64 __fastcall CDeviceGraphManager::GetStreamGroup(
        CDeviceGraphManager *this,
        struct StreamGroupParams *a2,
        unsigned int a3,
        struct AUDIO_DEVICE_MODE_DESCRIPTOR *a4,
        struct IStreamGroupProxy **a5)
{
  __int64 (__fastcall *v7)(CDeviceGraphStore *, const unsigned __int16 *, struct IDeviceGraphObjectsStore **); // rax
  const unsigned __int16 *v8; // rdx
  int DeviceGraphStoreForEndpoint; // eax
  signed int v10; // ebx
  _QWORD *(__fastcall *v11)(__int64, LPCRITICAL_SECTION *); // rax
  struct IStreamGroupProxy **v12; // r12
  __int64 (__fastcall *v13)(CDeviceGraphObjectsStore *, const struct StreamGroupParams *, struct IStreamGroupProxy **); // rax
  signed int StreamGroup; // eax
  unsigned int v15; // r15d
  unsigned __int64 v16; // rax
  struct STREAM_GROUP_DESCRIPTOR *v17; // rdi
  char v18; // cl
  int v19; // ecx
  __int64 v20; // rax
  int v21; // eax
  unsigned int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // rax
  signed int v25; // eax
  __int64 *v26; // rax
  __int64 (__fastcall *v27)(CDeviceGraphObjectsStore *, struct Microsoft::WRL::WeakRef *); // rax
  signed int v28; // eax
  volatile signed __int32 *v29; // rcx
  void (*v30)(void); // rax
  CSharedStreamGroupProxy *v31; // rax
  CSharedStreamGroupProxy *v33; // [rsp+20h] [rbp-20h] BYREF
  struct IDeviceGraphObjectsStore *v34; // [rsp+28h] [rbp-18h] BYREF
  const struct StreamGroupParams **v35; // [rsp+30h] [rbp-10h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-8h] BYREF
  const struct StreamGroupParams *v37; // [rsp+78h] [rbp+38h] BYREF
  unsigned int v38; // [rsp+80h] [rbp+40h] BYREF

  v38 = a3;
  v37 = a2;
  v34 = 0LL;
  Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::InternalRelease(&v34);
  v7 = *(__int64 (__fastcall **)(CDeviceGraphStore *, const unsigned __int16 *, struct IDeviceGraphObjectsStore **))(*(_QWORD *)g_DeviceGraphStore + 24LL);
  v8 = *(const unsigned __int16 **)a2;
  if ( v7 == CDeviceGraphStore::GetDeviceGraphStoreForEndpoint )
    DeviceGraphStoreForEndpoint = CDeviceGraphStore::GetDeviceGraphStoreForEndpoint(g_DeviceGraphStore, v8, &v34);
  else
    DeviceGraphStoreForEndpoint = v7(g_DeviceGraphStore, v8, &v34);
  v10 = DeviceGraphStoreForEndpoint;
  if ( DeviceGraphStoreForEndpoint < 0 )
    goto LABEL_42;
  v11 = *(_QWORD *(__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v34 + 64LL);
  if ( (char *)v11 == (char *)CDeviceGraphObjectsStore::Lock )
    CDeviceGraphObjectsStore::Lock((__int64)v34, &lpCriticalSection);
  else
    v11((__int64)v34, &lpCriticalSection);
  v12 = a5;
  if ( *((_BYTE *)a2 + 48) || *((_BYTE *)a2 + 50) )
  {
    v10 = -2147023728;
  }
  else
  {
    v13 = *(__int64 (__fastcall **)(CDeviceGraphObjectsStore *, const struct StreamGroupParams *, struct IStreamGroupProxy **))(*(_QWORD *)v34 + 24LL);
    if ( v13 == CDeviceGraphObjectsStore::FindStreamGroup )
      StreamGroup = CDeviceGraphObjectsStore::FindStreamGroup(v34, a2, a5);
    else
      StreamGroup = v13(v34, a2, a5);
    v10 = StreamGroup;
  }
  if ( v10 == -2147023728 )
  {
    v33 = 0LL;
    if ( a4 )
      v15 = *((_DWORD *)a4 + 14);
    else
      v15 = 0;
    v16 = 16 * (v15 + 5LL);
    if ( v16 > 0x7FFFFFFF )
    {
      v17 = 0LL;
      v35 = 0LL;
    }
    else
    {
      v35 = (const struct StreamGroupParams **)CoTaskMemAlloc((unsigned int)v16);
      v17 = (struct STREAM_GROUP_DESCRIPTOR *)v35;
      if ( v35 )
      {
        v18 = 1;
LABEL_17:
        v10 = v18 == 0 ? 0x8007000E : 0;
        if ( v18 )
        {
          *(_DWORD *)v17 = *((_DWORD *)a2 + 2);
          *(_QWORD *)((char *)v17 + 4) = *((unsigned __int8 *)a2 + 48);
          if ( a4 )
            v19 = *(unsigned __int16 *)(*((_QWORD *)a4 + 2) + 16LL) + 18;
          else
            v19 = 0;
          *((_DWORD *)v17 + 3) = v19;
          if ( a4 )
            v20 = *((_QWORD *)a4 + 2);
          else
            v20 = 0LL;
          *((_QWORD *)v17 + 2) = v20;
          *((_QWORD *)v17 + 3) = *(_QWORD *)a2;
          *((_DWORD *)v17 + 9) = *(unsigned __int16 *)(*((_QWORD *)a2 + 2) + 16LL) + 18;
          *((_QWORD *)v17 + 5) = *((_QWORD *)a2 + 2);
          *((_QWORD *)v17 + 6) = *((_QWORD *)a2 + 3);
          if ( a4 )
            v21 = *((_DWORD *)a4 + 8);
          else
            v21 = 0;
          *((_DWORD *)v17 + 14) = v21;
          v22 = 0;
          *(_OWORD *)((char *)v17 + 60) = *((_OWORD *)a2 + 2);
          *((_DWORD *)v17 + 19) = v15;
          *((_DWORD *)v17 + 8) = *((unsigned __int8 *)a2 + 50);
          if ( *((_DWORD *)v17 + 19) )
          {
            do
            {
              v23 = 2LL * v22;
              v24 = v22++ + 5LL;
              *((_OWORD *)v17 + v24) = *(_OWORD *)((char *)a4 + 8 * v23 + 60);
            }
            while ( v22 < *((_DWORD *)v17 + 19) );
          }
          if ( *((_BYTE *)a2 + 48) )
          {
            Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v33);
            v25 = Microsoft::WRL::Details::MakeAndInitialize<CExclusiveStreamGroupProxy,IStreamGroupProxy,StreamGroupParams * &,ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR> &,unsigned long &>(
                    &v33,
                    &v37,
                    &v35,
                    &v38);
          }
          else
          {
            Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v33);
            v25 = Microsoft::WRL::Details::MakeAndInitialize<CSharedStreamGroupProxy,IStreamGroupProxy,StreamGroupParams * &,ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR> &,unsigned long &>(
                    &v33,
                    &v37,
                    (struct STREAM_GROUP_DESCRIPTOR **)&v35,
                    &v38);
          }
          v10 = v25;
        }
        if ( v10 >= 0 )
        {
          v37 = 0LL;
          v35 = &v37;
          v26 = (__int64 *)Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v35);
          v10 = Microsoft::WRL::AsWeak<IStreamGroupProxy>((__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v33, v26);
          if ( v10 >= 0 )
          {
            v27 = *(__int64 (__fastcall **)(CDeviceGraphObjectsStore *, struct Microsoft::WRL::WeakRef *))(*(_QWORD *)v34 + 32LL);
            if ( v27 == CDeviceGraphObjectsStore::AddStreamGroup )
              v28 = CDeviceGraphObjectsStore::AddStreamGroup(v34, (struct Microsoft::WRL::WeakRef *)&v37);
            else
              v28 = v27(v34, (struct Microsoft::WRL::WeakRef *)&v37);
            v10 = v28;
          }
          v29 = (volatile signed __int32 *)v37;
          if ( v37 )
          {
            v37 = 0LL;
            v30 = *(void (**)(void))(*(_QWORD *)v29 + 16LL);
            if ( (char *)v30 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
              Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(v29);
            else
              v30();
          }
          if ( v10 >= 0 )
          {
            v31 = v33;
            v33 = 0LL;
            *v12 = v31;
          }
        }
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v33);
        CoTaskMemFree(v17);
        goto LABEL_40;
      }
    }
    v18 = 0;
    goto LABEL_17;
  }
LABEL_40:
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
LABEL_42:
  Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::InternalRelease(&v34);
  return (unsigned int)v10;
}
