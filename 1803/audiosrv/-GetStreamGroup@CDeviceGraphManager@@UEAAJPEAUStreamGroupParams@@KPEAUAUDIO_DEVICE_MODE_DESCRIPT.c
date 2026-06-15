/*
 * XREFs of ?GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180019FB0
 * Callers:
 *     ?BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@KKW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@5PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEBUtWAVEFORMATEX@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@K_NPEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001B070 (-BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioPro.c)
 *     ?CreateStream@CDeviceGraphManager@@UEAAJPEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUStreamGroupParams@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800C8B10 (-CreateStream@CDeviceGraphManager@@UEAAJPEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioG.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x1800199C0 (-GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z.c)
 *     ?AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x18001BC40 (-AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z.c)
 *     ?FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@@@Z @ 0x18001BE50 (-FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@.c)
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x18001C000 (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     ?RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@K@Z @ 0x18001DC70 (-RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DE.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     atexit @ 0x180060F5C (atexit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x180063378 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180097300 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ??1?$MakeAllocator@VCDeviceGraphObjectsStore@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180098418 (--1-$MakeAllocator@VCDeviceGraphObjectsStore@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$ComPtr@VCSharedStreamGroupProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x180099BFC (--1-$ComPtr@VCSharedStreamGroupProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Z @ 0x1800C77DC (--$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@.c)
 */

__int64 __fastcall CDeviceGraphManager::GetStreamGroup(
        CDeviceGraphManager *this,
        const unsigned __int16 **a2,
        unsigned int a3,
        struct AUDIO_DEVICE_MODE_DESCRIPTOR *a4,
        struct IStreamGroupProxy **a5)
{
  struct IStreamGroupProxy **v5; // rbx
  struct StreamGroupParams *v6; // rsi
  __int64 v7; // rax
  __int64 (__fastcall *v10)(CDeviceGraphStore *, const unsigned __int16 *, struct IDeviceGraphObjectsStore **); // rax
  const unsigned __int16 *v11; // rdx
  int DeviceGraphStoreForEndpoint; // eax
  void (__fastcall *v13)(CDeviceGraphObjectsStore *, LPCRITICAL_SECTION *); // rax
  struct _RTL_CRITICAL_SECTION *v14; // rbx
  _BYTE *v15; // r12
  __int64 (__fastcall *v16)(CDeviceGraphObjectsStore *__hidden, const struct StreamGroupParams *, struct IStreamGroupProxy **); // rax
  int StreamGroup; // eax
  unsigned int v18; // ebx
  unsigned __int64 v19; // rax
  char *v20; // rdi
  int v21; // ecx
  int v22; // r15d
  int v23; // ecx
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // eax
  unsigned int v27; // edx
  __int128 v28; // xmm0
  char *v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v34; // rcx
  signed __int64 v35; // rax
  unsigned int v36; // ecx
  signed __int64 v37; // rtt
  __int64 v38; // r10
  const WCHAR *v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  int v44; // eax
  __int64 (__fastcall *v45)(CDeviceGraphObjectsStore *__hidden, struct Microsoft::WRL::WeakRef *); // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  CDeviceGraphObjectsStore *v49; // rcx
  unsigned int v50; // ebx
  __int64 v52; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD *v53; // [rsp+40h] [rbp-C8h] BYREF
  CDeviceGraphObjectsStore *v54; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v55; // [rsp+50h] [rbp-B8h] BYREF
  WINBOOL fPending[2]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD *v57; // [rsp+60h] [rbp-A8h] BYREF
  const unsigned __int16 **v58; // [rsp+68h] [rbp-A0h] BYREF
  LPVOID Context; // [rsp+70h] [rbp-98h] BYREF
  _QWORD *v60; // [rsp+78h] [rbp-90h] BYREF
  struct IStreamGroupProxy **v61; // [rsp+80h] [rbp-88h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+88h] [rbp-80h] BYREF
  char *v63; // [rsp+90h] [rbp-78h] BYREF
  char *v64; // [rsp+98h] [rbp-70h]
  __int64 v65; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD *v66; // [rsp+A8h] [rbp-60h]
  char *v67; // [rsp+B0h] [rbp-58h]
  char *v68; // [rsp+B8h] [rbp-50h]
  WINBOOL *v69; // [rsp+C0h] [rbp-48h]
  _DWORD v70[2]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v71; // [rsp+D0h] [rbp-38h]
  unsigned __int16 *v72; // [rsp+D8h] [rbp-30h] BYREF
  int v73; // [rsp+E0h] [rbp-28h]
  int v74; // [rsp+E4h] [rbp-24h]
  void *v75; // [rsp+E8h] [rbp-20h]
  int v76; // [rsp+F0h] [rbp-18h]
  int v77; // [rsp+F4h] [rbp-14h]
  __int64 *v78; // [rsp+F8h] [rbp-10h]
  __int64 v79; // [rsp+100h] [rbp-8h]
  __int64 *v80; // [rsp+108h] [rbp+0h]
  __int64 v81; // [rsp+110h] [rbp+8h]
  const WCHAR *v82; // [rsp+118h] [rbp+10h]
  int v83; // [rsp+120h] [rbp+18h]
  int v84; // [rsp+124h] [rbp+1Ch]
  __int64 v85; // [rsp+128h] [rbp+20h]
  __int64 v86; // [rsp+130h] [rbp+28h]
  __int64 v87; // [rsp+138h] [rbp+30h]
  __int64 v88; // [rsp+140h] [rbp+38h]
  char *v89; // [rsp+148h] [rbp+40h]
  __int64 v90; // [rsp+150h] [rbp+48h]
  char *v91; // [rsp+158h] [rbp+50h]
  __int64 v92; // [rsp+160h] [rbp+58h]
  WINBOOL *v93; // [rsp+168h] [rbp+60h]
  __int64 v94; // [rsp+170h] [rbp+68h]
  _BYTE *v95; // [rsp+178h] [rbp+70h]
  __int64 v96; // [rsp+180h] [rbp+78h]
  char *v97; // [rsp+188h] [rbp+80h]
  __int64 v98; // [rsp+190h] [rbp+88h]
  char *v99; // [rsp+198h] [rbp+90h]
  __int64 v100; // [rsp+1A0h] [rbp+98h]
  unsigned int v101; // [rsp+208h] [rbp+100h] BYREF

  v101 = a3;
  v5 = a5;
  v6 = (struct StreamGroupParams *)a2;
  v54 = 0LL;
  v7 = *(_QWORD *)g_DeviceGraphStore;
  v58 = a2;
  v10 = *(__int64 (__fastcall **)(CDeviceGraphStore *, const unsigned __int16 *, struct IDeviceGraphObjectsStore **))(v7 + 24);
  v11 = *a2;
  v61 = a5;
  if ( v10 == CDeviceGraphStore::GetDeviceGraphStoreForEndpoint )
    DeviceGraphStoreForEndpoint = CDeviceGraphStore::GetDeviceGraphStoreForEndpoint(g_DeviceGraphStore, v11, &v54);
  else
    DeviceGraphStoreForEndpoint = v10(g_DeviceGraphStore, v11, &v54);
  LODWORD(v52) = DeviceGraphStoreForEndpoint;
  if ( DeviceGraphStoreForEndpoint < 0 )
    goto LABEL_82;
  v13 = *(void (__fastcall **)(CDeviceGraphObjectsStore *, LPCRITICAL_SECTION *))(*(_QWORD *)v54 + 72LL);
  if ( (char *)v13 == (char *)&CDeviceGraphObjectsStore::Lock )
  {
    v14 = (struct _RTL_CRITICAL_SECTION *)((char *)v54 + 24);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v54 + 24));
    lpCriticalSection = v14;
    v5 = v61;
  }
  else
  {
    v13(v54, &lpCriticalSection);
  }
  v15 = (char *)v6 + 48;
  if ( *((_BYTE *)v6 + 48) || *((_BYTE *)v6 + 50) )
  {
    LODWORD(v52) = -2147023728;
LABEL_16:
    v53 = 0LL;
    if ( a4 )
      v18 = *((_DWORD *)a4 + 14);
    else
      v18 = 0;
    v19 = 16 * (v18 + 5LL);
    if ( v19 <= 0x7FFFFFFF )
      v20 = (char *)CoTaskMemAlloc((unsigned int)v19);
    else
      v20 = 0LL;
    v21 = 0;
    v63 = v20;
    v22 = -2147024882;
    if ( !v20 )
      v21 = -2147024882;
    LODWORD(v52) = v21;
    if ( v20 )
    {
      *(_DWORD *)v20 = *((_DWORD *)v6 + 2);
      v69 = (WINBOOL *)((char *)v6 + 8);
      *(_QWORD *)(v20 + 4) = (unsigned __int8)*v15;
      if ( a4 )
        v23 = *(unsigned __int16 *)(*((_QWORD *)a4 + 2) + 16LL) + 18;
      else
        v23 = 0;
      *((_DWORD *)v20 + 3) = v23;
      if ( a4 )
        v24 = *((_QWORD *)a4 + 2);
      else
        v24 = 0LL;
      *((_QWORD *)v20 + 2) = v24;
      *((_QWORD *)v20 + 3) = *(_QWORD *)v6;
      v25 = *((_QWORD *)v6 + 2);
      v66 = (_QWORD *)((char *)v6 + 16);
      *((_DWORD *)v20 + 9) = *(unsigned __int16 *)(v25 + 16) + 18;
      *((_QWORD *)v20 + 5) = *((_QWORD *)v6 + 2);
      v68 = (char *)v6 + 24;
      *((_QWORD *)v20 + 6) = *((_QWORD *)v6 + 3);
      if ( a4 )
        v26 = *((_DWORD *)a4 + 8);
      else
        v26 = 0;
      *((_DWORD *)v20 + 14) = v26;
      v27 = 0;
      v28 = *((_OWORD *)v6 + 2);
      v67 = (char *)v6 + 32;
      *(_OWORD *)(v20 + 60) = v28;
      *((_DWORD *)v20 + 19) = v18;
      v29 = (char *)v6 + 50;
      *((_DWORD *)v20 + 8) = *((unsigned __int8 *)v6 + 50);
      v64 = (char *)v6 + 50;
      if ( *((_DWORD *)v20 + 19) )
      {
        do
        {
          v30 = 2LL * v27;
          v31 = v27++ + 5LL;
          *(_OWORD *)&v20[16 * v31] = *(_OWORD *)((char *)a4 + 8 * v30 + 60);
        }
        while ( v27 < *((_DWORD *)v20 + 19) );
      }
      if ( *v15 )
      {
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v53);
        v22 = Microsoft::WRL::Details::MakeAndInitialize<CExclusiveStreamGroupProxy,IStreamGroupProxy,StreamGroupParams * &,ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR> &,unsigned long &>(
                &v53,
                &v58,
                &v63,
                &v101);
      }
      else
      {
        v32 = (__int64)v53;
        if ( v53 )
        {
          v53 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
        }
        v53 = 0LL;
        v57 = operator new(0x1C0uLL, (const struct std::nothrow_t *)&std::nothrow);
        v33 = v57;
        if ( v57 )
        {
          v57[1] = &CBaseStreamGroupProxy::`vftable';
          v33[6] = 0LL;
          v33[7] = 0LL;
          v33[9] = 0LL;
          v33[10] = 0LL;
          v33[11] = 0LL;
          v33[12] = 0LL;
          InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v33 + 13), 0, 0);
          InitializeCriticalSectionEx((LPCRITICAL_SECTION)v33 + 4, 0, 0);
          v34 = Microsoft::WRL::Details::ModuleBase::module_;
          v33[25] = 0LL;
          v33[26] = 0LL;
          v33[27] = 0LL;
          v33[28] = 0LL;
          v33[29] = 0LL;
          v33[30] = 0LL;
          *v33 = &CSharedStreamGroupProxy::`vftable'{for `IInspectable'};
          v33[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CBaseStreamGroupProxy,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CBaseStreamGroupProxy>,IWeakReferenceSource,IInspectable>'};
          v33[31] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CBaseStreamGroupProxy,IInspectable>::`vftable'{for `IWeakReferenceSource'};
          v33[32] = &CSharedStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
          v33[34] = 1LL;
          if ( v34 )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v34 + 8LL))(v34);
          *((_DWORD *)v33 + 70) = 0;
          *v33 = &CSharedStreamGroupProxy::`vftable'{for `IInspectable'};
          v33[1] = &CSharedStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CBaseStreamGroupProxy>,IWeakReferenceSource,IInspectable>'};
          v33[31] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CBaseStreamGroupProxy,IInspectable>::`vftable'{for `IWeakReferenceSource'};
          v33[32] = &CSharedStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
          InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v33 + 36), 0, 0);
          *((_BYTE *)v33 + 328) = 0;
          memset_0(v33 + 42, 0, 0x60uLL);
          v33[54] = 0LL;
          v33[55] = 0LL;
          v60 = v33;
          v57 = 0LL;
          v22 = CSharedStreamGroupProxy::RuntimeClassInitialize(
                  (CSharedStreamGroupProxy *)v33,
                  v6,
                  (struct STREAM_GROUP_DESCRIPTOR *)v20,
                  a3);
          if ( v22 >= 0 )
          {
            v53 = v33 + 1;
            (*(void (__fastcall **)(_QWORD *))(v33[1] + 8LL))(v33 + 1);
            if ( v33 )
            {
              v35 = v33[34];
              while ( v35 >= 0 )
              {
                if ( (_DWORD)v35 == 0x7FFFFFFF )
                  goto LABEL_56;
                v36 = v35 - 1;
                v37 = v35;
                v35 = _InterlockedCompareExchange64(v33 + 34, v35 - 1, v35);
                if ( v37 == v35 )
                  goto LABEL_53;
              }
              v36 = ATL::SafeDecrementReferenceMultiThread((int *)(2 * v35 + 16));
LABEL_53:
              if ( !v36 )
              {
                (*(void (__fastcall **)(_QWORD *, __int64))(v60[1] + 408LL))(v60 + 1, 1LL);
                if ( Microsoft::WRL::Details::ModuleBase::module_ )
                  (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                       + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
              }
LABEL_56:
              v6 = (struct StreamGroupParams *)v58;
            }
            v22 = 0;
          }
          else
          {
            Microsoft::WRL::ComPtr<CSharedStreamGroupProxy>::~ComPtr<CSharedStreamGroupProxy>(&v60);
            Microsoft::WRL::Details::MakeAllocator<CDeviceGraphObjectsStore>::~MakeAllocator<CDeviceGraphObjectsStore>(&v57);
          }
        }
        else
        {
          Microsoft::WRL::Details::MakeAllocator<CDeviceGraphObjectsStore>::~MakeAllocator<CDeviceGraphObjectsStore>(&v57);
        }
        v29 = v64;
      }
      LODWORD(v52) = v22;
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, &Context)
        && fPending[0] )
      {
        Context = &qword_18018A2A0;
        qword_18018A2A0 = &AudioSrvTelemetryProvider::`vftable';
        qword_18018A2B8 = (TraceLoggingHProvider)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18018A2A0, qword_18018A2B8);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_18018A2A0);
      }
      v38 = *((_QWORD *)Context + 1);
      if ( *(_DWORD *)v38 > 4u )
      {
        v39 = &word_180133238;
        v65 = (__int64)v53;
        v78 = &v65;
        v80 = &v52;
        LODWORD(v40) = 0;
        v79 = 8LL;
        v81 = 4LL;
        if ( *(_QWORD *)v6 )
        {
          v39 = *(const WCHAR **)v6;
          v40 = -1LL;
          do
            ++v40;
          while ( *(_WORD *)(*(_QWORD *)v6 + 2 * v40) );
        }
        v83 = 2 * v40 + 2;
        v82 = v39;
        v84 = 0;
        v41 = *v66 + 4LL;
        v86 = 4LL;
        v85 = v41;
        v42 = *v66 + 2LL;
        v88 = 2LL;
        v87 = v42;
        v89 = v67;
        v91 = v68;
        v90 = 16LL;
        v92 = 8LL;
        fPending[1] = *v69;
        v93 = &fPending[1];
        v97 = (char *)v6 + 49;
        v94 = 4LL;
        v95 = v15;
        v96 = 1LL;
        v98 = 1LL;
        v99 = v29;
        v100 = 1LL;
        v70[1] = 4;
        v72 = *(unsigned __int16 **)(v38 + 8);
        v70[0] = ((unsigned int)&unk_180145D8D - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
        v43 = *(_QWORD *)(v38 + 32);
        v71 = 0LL;
        v73 = *v72;
        v75 = &unk_180145D98;
        v74 = 2;
        v76 = 163;
        v77 = 1;
        EtwEventWriteTransfer(v43, v70, 0LL, 0LL, 13, &v72, v52);
      }
      if ( (int)v52 >= 0 )
      {
        v55 = 0LL;
        v44 = Microsoft::WRL::AsWeak<IStreamGroupProxy>(v53, &v55);
        LODWORD(v52) = v44;
        if ( v44 >= 0 )
        {
          v45 = *(__int64 (__fastcall **)(CDeviceGraphObjectsStore *__hidden, struct Microsoft::WRL::WeakRef *))(*(_QWORD *)v54 + 40LL);
          if ( v45 == CDeviceGraphObjectsStore::AddStreamGroup )
            v44 = CDeviceGraphObjectsStore::AddStreamGroup(v54, (struct Microsoft::WRL::WeakRef *)&v55);
          else
            v44 = v45(v54, (struct Microsoft::WRL::WeakRef *)&v55);
          LODWORD(v52) = v44;
        }
        v46 = v55;
        if ( v55 )
        {
          v55 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
          v44 = v52;
        }
        if ( v44 >= 0 )
        {
          v47 = (__int64)v53;
          v53 = 0LL;
          *v61 = (struct IStreamGroupProxy *)v47;
        }
      }
    }
    v48 = (__int64)v53;
    if ( v53 )
    {
      v53 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
    }
    CoTaskMemFree(v20);
    goto LABEL_80;
  }
  v16 = *(__int64 (__fastcall **)(CDeviceGraphObjectsStore *__hidden, const struct StreamGroupParams *, struct IStreamGroupProxy **))(*(_QWORD *)v54 + 32LL);
  if ( v16 == CDeviceGraphObjectsStore::FindStreamGroup )
    StreamGroup = CDeviceGraphObjectsStore::FindStreamGroup(v54, v6, v5);
  else
    StreamGroup = v16(v54, v6, v5);
  LODWORD(v52) = StreamGroup;
  if ( StreamGroup == -2147023728 )
    goto LABEL_16;
LABEL_80:
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
LABEL_82:
  v49 = v54;
  v50 = v52;
  if ( v54 )
  {
    v54 = 0LL;
    (*(void (__fastcall **)(CDeviceGraphObjectsStore *))(*(_QWORD *)v49 + 16LL))(v49);
  }
  return v50;
}
