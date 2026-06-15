/*
 * XREFs of ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAPEAUISaDeviceProxy@@@Z @ 0x18001A970
 * Callers:
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_N4PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x18001FE74 (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDevi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800099F0 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ?GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x1800199C0 (-GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z.c)
 *     ??$AsWeak@UISaDeviceProxy@@@WRL@Microsoft@@YAJPEAUISaDeviceProxy@@PEAVWeakRef@01@@Z @ 0x18001B4E0 (--$AsWeak@UISaDeviceProxy@@@WRL@Microsoft@@YAJPEAUISaDeviceProxy@@PEAVWeakRef@01@@Z.c)
 *     ?AddSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@AEAVWeakRef@WRL@Microsoft@@@Z @ 0x18001B970 (-AddSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@AEAVWeakRef@WRL@Microsoft@@@Z.c)
 *     ?FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@HPEAPEAUISaDeviceProxy@@@Z @ 0x18001BA20 (-FindSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@W4_AUDCLNT_SHAREMODE@@HPEAPEAUI.c)
 *     ?RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@W4_AUDCLNT_SHAREMODE@@KAEAUSaDeviceResourceParams@@@Z @ 0x18001F420 (-RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@P.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     atexit @ 0x180060F5C (atexit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x180063378 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??1?$MakeAllocator@VCDeviceGraphObjectsStore@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180098418 (--1-$MakeAllocator@VCDeviceGraphObjectsStore@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$ComPtr@VCSaDeviceProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x180099C1C (--1-$ComPtr@VCSaDeviceProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?SharedAndExclusiveCanCoexist@CEndpointCharacteristics@@QEAA_NXZ @ 0x1800ED35C (-SharedAndExclusiveCanCoexist@CEndpointCharacteristics@@QEAA_NXZ.c)
 */

__int64 __fastcall CDeviceGraphManager::GetSaDevice(
        CDeviceGraphManager *this,
        struct CEndpointCharacteristics *a2,
        struct SaDeviceParams *a3,
        unsigned int a4,
        enum _AUDCLNT_SHAREMODE a5,
        struct SaDeviceResourceParams *a6,
        struct ISaDeviceProxy **a7)
{
  BOOL v10; // edi
  const unsigned __int16 *v11; // rdx
  __int64 (__fastcall *v12)(CDeviceGraphStore *, const unsigned __int16 *, struct IDeviceGraphObjectsStore **); // rax
  int DeviceGraphStoreForEndpoint; // eax
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 (__fastcall *v16)(CDeviceGraphObjectsStore *__hidden, const struct SaDeviceParams *, enum _AUDCLNT_SHAREMODE, int, struct ISaDeviceProxy **); // rax
  int SaDevice; // eax
  void (__fastcall *v18)(CDeviceGraphObjectsStore *, LPCRITICAL_SECTION *); // rax
  struct _RTL_CRITICAL_SECTION *v19; // rbx
  CDeviceGraphObjectsStore *v20; // r14
  _QWORD *v21; // rax
  volatile signed __int64 *v22; // rbx
  int v23; // edi
  struct Microsoft::WRL::Details::ModuleBase *v24; // rcx
  __int64 v25; // rcx
  void (__fastcall *v26)(__int64, LPCRITICAL_SECTION *); // rax
  struct _RTL_CRITICAL_SECTION *v27; // rdi
  signed __int64 v28; // rax
  unsigned int v29; // ecx
  signed __int64 v30; // rtt
  __int64 v31; // rdx
  void *v32; // r8
  __int64 v33; // r10
  const WCHAR *v34; // rdx
  const WCHAR *v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rcx
  int v39; // eax
  unsigned __int64 v40; // r9
  __int64 v41; // rdx
  __int64 (__fastcall *v42)(CDeviceGraphObjectsStore *__hidden, const struct SaDeviceParams *, struct Microsoft::WRL::WeakRef *); // rax
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rdx
  CDeviceGraphObjectsStore *v48; // rcx
  int v50; // [rsp+28h] [rbp-E0h]
  int v51; // [rsp+38h] [rbp-D0h]
  _QWORD *v52; // [rsp+48h] [rbp-C0h] BYREF
  CDeviceGraphObjectsStore *v53; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v54; // [rsp+58h] [rbp-B0h] BYREF
  int v55; // [rsp+60h] [rbp-A8h] BYREF
  WINBOOL v56; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v57; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD *v58; // [rsp+70h] [rbp-98h] BYREF
  LPVOID Context; // [rsp+78h] [rbp-90h] BYREF
  LPCRITICAL_SECTION v60; // [rsp+80h] [rbp-88h] BYREF
  volatile signed __int64 *v61; // [rsp+88h] [rbp-80h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+90h] [rbp-78h] BYREF
  __int64 v63; // [rsp+98h] [rbp-70h] BYREF
  struct ISaDeviceProxy **v64; // [rsp+A0h] [rbp-68h]
  LPCRITICAL_SECTION v65; // [rsp+A8h] [rbp-60h]
  _DWORD v66[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v67; // [rsp+B8h] [rbp-50h]
  union _RTL_RUN_ONCE *v68; // [rsp+C0h] [rbp-48h] BYREF
  int v69; // [rsp+C8h] [rbp-40h]
  unsigned __int16 *v70; // [rsp+D8h] [rbp-30h] BYREF
  int v71; // [rsp+E0h] [rbp-28h]
  int v72; // [rsp+E4h] [rbp-24h]
  void *v73; // [rsp+E8h] [rbp-20h]
  int v74; // [rsp+F0h] [rbp-18h]
  int v75; // [rsp+F4h] [rbp-14h]
  __int64 *v76; // [rsp+F8h] [rbp-10h]
  __int64 v77; // [rsp+100h] [rbp-8h]
  int *v78; // [rsp+108h] [rbp+0h]
  __int64 v79; // [rsp+110h] [rbp+8h]
  const WCHAR *v80; // [rsp+118h] [rbp+10h]
  int v81; // [rsp+120h] [rbp+18h]
  int v82; // [rsp+124h] [rbp+1Ch]
  __int64 v83; // [rsp+128h] [rbp+20h]
  __int64 v84; // [rsp+130h] [rbp+28h]
  __int64 v85; // [rsp+138h] [rbp+30h]
  __int64 v86; // [rsp+140h] [rbp+38h]
  char *v87; // [rsp+148h] [rbp+40h]
  __int64 v88; // [rsp+150h] [rbp+48h]
  char *v89; // [rsp+158h] [rbp+50h]
  __int64 v90; // [rsp+160h] [rbp+58h]
  __int64 *v91; // [rsp+168h] [rbp+60h]
  __int64 v92; // [rsp+170h] [rbp+68h]
  char *v93; // [rsp+178h] [rbp+70h]
  __int64 v94; // [rsp+180h] [rbp+78h]
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  v64 = a7;
  v65 = (LPCRITICAL_SECTION)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v10 = (*(unsigned int (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 216LL))(g_PolicyManager)
     && CEndpointCharacteristics::SharedAndExclusiveCanCoexist(a2);
  v11 = *(const unsigned __int16 **)a3;
  v53 = 0LL;
  v12 = *(__int64 (__fastcall **)(CDeviceGraphStore *, const unsigned __int16 *, struct IDeviceGraphObjectsStore **))(*(_QWORD *)g_DeviceGraphStore + 24LL);
  if ( v12 == CDeviceGraphStore::GetDeviceGraphStoreForEndpoint )
    DeviceGraphStoreForEndpoint = CDeviceGraphStore::GetDeviceGraphStoreForEndpoint(g_DeviceGraphStore, v11, &v53);
  else
    DeviceGraphStoreForEndpoint = v12(g_DeviceGraphStore, v11, &v53);
  v14 = DeviceGraphStoreForEndpoint;
  if ( DeviceGraphStoreForEndpoint < 0 )
  {
    v15 = 2151LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)v14,
      v50);
    goto LABEL_71;
  }
  v50 = (int)a7;
  v16 = *(__int64 (__fastcall **)(CDeviceGraphObjectsStore *__hidden, const struct SaDeviceParams *, enum _AUDCLNT_SHAREMODE, int, struct ISaDeviceProxy **))(*(_QWORD *)v53 + 56LL);
  if ( v16 == CDeviceGraphObjectsStore::FindSaDevice )
    SaDevice = CDeviceGraphObjectsStore::FindSaDevice(v53, a3, a5, v10, a7);
  else
    SaDevice = ((__int64 (__fastcall *)(CDeviceGraphObjectsStore *, struct SaDeviceParams *, _QWORD, BOOL))v16)(
                 v53,
                 a3,
                 (unsigned int)a5,
                 v10);
  v14 = SaDevice;
  if ( SaDevice >= 0 )
    goto LABEL_70;
  if ( SaDevice != -2005139430 )
  {
    v15 = 2156LL;
    goto LABEL_16;
  }
  v18 = *(void (__fastcall **)(CDeviceGraphObjectsStore *, LPCRITICAL_SECTION *))(*(_QWORD *)v53 + 72LL);
  if ( (char *)v18 == (char *)&CDeviceGraphObjectsStore::Lock )
  {
    v19 = (struct _RTL_CRITICAL_SECTION *)((char *)v53 + 24);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v53 + 24));
    v60 = v19;
  }
  else
  {
    v18(v53, &v60);
  }
  v20 = v53;
  v52 = 0LL;
  v21 = operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
  v58 = v21;
  v22 = v21;
  if ( v21 )
  {
    v24 = Microsoft::WRL::Details::ModuleBase::module_;
    v21[5] = 1LL;
    *v21 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ISaDeviceProxy,IInspectable>::`vftable'{for `IInspectable'};
    v21[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ISaDeviceProxy,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ISaDeviceProxy,IWeakReferenceSource,IInspectable>'};
    v21[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ISaDeviceProxy,IInspectable>::`vftable'{for `IWeakReferenceSource'};
    v21[3] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ISaDeviceProxy,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
    if ( v24 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v24 + 8LL))(v24);
    *v22 = (volatile signed __int64)&CSaDeviceProxy::`vftable'{for `IInspectable'};
    *((_QWORD *)v22 + 1) = &CSaDeviceProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ISaDeviceProxy,IWeakReferenceSource,IInspectable>'};
    v61 = v22;
    *((_QWORD *)v22 + 2) = &CSaDeviceProxy::`vftable'{for `IWeakReferenceSource'};
    *((_QWORD *)v22 + 3) = &CSaDeviceProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
    *((_QWORD *)v22 + 6) = 0LL;
    *((_QWORD *)v22 + 7) = 0LL;
    *((_QWORD *)v22 + 8) = 0LL;
    *((_QWORD *)v22 + 10) = 0LL;
    *((_QWORD *)v22 + 13) = 0LL;
    *((_QWORD *)v22 + 14) = 0LL;
    v58 = 0LL;
    v23 = CSaDeviceProxy::RuntimeClassInitialize((CSaDeviceProxy *)v22, a3, a2, v20, a5, a4, a6);
    if ( v23 >= 0 )
    {
      v52 = v22 + 1;
      (*(void (__fastcall **)(_QWORD *))(*((_QWORD *)v22 + 1) + 8LL))((_QWORD *)v22 + 1);
      if ( v22 )
      {
        v25 = *((_QWORD *)v22 + 14);
        v26 = *(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v25 + 72LL);
        if ( (char *)v26 == (char *)&CDeviceGraphObjectsStore::Lock )
        {
          v27 = (struct _RTL_CRITICAL_SECTION *)(v25 + 24);
          EnterCriticalSection((LPCRITICAL_SECTION)(v25 + 24));
          lpCriticalSection = v27;
        }
        else
        {
          v26(v25, &lpCriticalSection);
        }
        v28 = *((_QWORD *)v22 + 5);
        while ( v28 >= 0 )
        {
          if ( (_DWORD)v28 == 0x7FFFFFFF )
            goto LABEL_40;
          v29 = v28 - 1;
          v30 = v28;
          v28 = _InterlockedCompareExchange64(v22 + 5, v28 - 1, v28);
          if ( v30 == v28 )
            goto LABEL_37;
        }
        v29 = ATL::SafeDecrementReferenceMultiThread((int *)(2 * v28 + 16));
LABEL_37:
        if ( !v29 )
        {
          (*(void (__fastcall **)(volatile signed __int64 *, __int64))(*v61 + 48))(v61, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
LABEL_40:
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
      }
      v23 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<CSaDeviceProxy>::~ComPtr<CSaDeviceProxy>(&v61);
      Microsoft::WRL::Details::MakeAllocator<CDeviceGraphObjectsStore>::~MakeAllocator<CDeviceGraphObjectsStore>(&v58);
    }
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<CDeviceGraphObjectsStore>::~MakeAllocator<CDeviceGraphObjectsStore>(&v58);
    v23 = -2147024882;
  }
  v55 = v23;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &v56, &Context) && v56 )
  {
    v68 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_18018A2A0;
    qword_18018A2A0 = &AudioSrvTelemetryProvider::`vftable';
    qword_18018A2B8 = (TraceLoggingHProvider)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v69 = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer((unsigned int *)&v68, v31, v32);
  }
  v33 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v33 > 4u )
  {
    v34 = &word_180133238;
    v35 = *(const WCHAR **)a3;
    v63 = (__int64)v52;
    v76 = &v63;
    v78 = &v55;
    LODWORD(v36) = 0;
    v77 = 8LL;
    v79 = 4LL;
    if ( v35 )
    {
      v34 = v35;
      v36 = -1LL;
      do
        ++v36;
      while ( v35[v36] );
    }
    v37 = *((_QWORD *)a3 + 2);
    v81 = 2 * v36 + 2;
    v80 = v34;
    v82 = 0;
    v84 = 4LL;
    v83 = v37 + 4;
    v85 = v37 + 2;
    v87 = (char *)a3 + 48;
    v89 = (char *)a3 + 32;
    LODWORD(v57) = *((_DWORD *)a3 + 2);
    v91 = &v57;
    v93 = (char *)a3 + 96;
    v86 = 2LL;
    v88 = 16LL;
    v90 = 8LL;
    v92 = 4LL;
    v94 = 1LL;
    v66[1] = 4;
    v70 = *(unsigned __int16 **)(v33 + 8);
    v66[0] = ((unsigned int)&unk_180145CAD - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v38 = *(_QWORD *)(v33 + 32);
    v67 = 0LL;
    v71 = *v70;
    v73 = &unk_180145CB8;
    v72 = 2;
    v74 = 147;
    v75 = 1;
    EtwEventWriteTransfer(v38, v66, 0LL, 0LL, 11, &v70, v51);
  }
  v14 = v55;
  if ( v55 >= 0 )
  {
    v54 = 0LL;
    v39 = Microsoft::WRL::AsWeak<ISaDeviceProxy>(v52, &v54);
    v14 = v39;
    if ( v39 < 0 )
    {
      v40 = (unsigned int)v39;
      v41 = 2183LL;
      goto LABEL_60;
    }
    v42 = *(__int64 (__fastcall **)(CDeviceGraphObjectsStore *__hidden, const struct SaDeviceParams *, struct Microsoft::WRL::WeakRef *))(*(_QWORD *)v53 + 64LL);
    if ( v42 == CDeviceGraphObjectsStore::AddSaDevice )
      v43 = CDeviceGraphObjectsStore::AddSaDevice(v53, a3, (struct Microsoft::WRL::WeakRef *)&v54);
    else
      v43 = v42(v53, a3, (struct Microsoft::WRL::WeakRef *)&v54);
    v14 = v43;
    if ( v43 < 0 )
    {
      v40 = (unsigned int)v43;
      v41 = 2184LL;
LABEL_60:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v41,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)v40,
        v50);
      v44 = v54;
      if ( v54 )
      {
        v54 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
      }
      goto LABEL_62;
    }
    v45 = 0LL;
    v46 = (__int64)v52;
    v52 = 0LL;
    *v64 = (struct ISaDeviceProxy *)v46;
    v47 = v54;
    if ( v54 )
    {
      v54 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
      v45 = (__int64)v52;
    }
    if ( v45 )
    {
      v52 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
    }
    if ( v60 )
      LeaveCriticalSection(v60);
LABEL_70:
    v14 = 0;
    goto LABEL_71;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x883,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)v55,
    v50);
LABEL_62:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v52);
  if ( v60 )
    LeaveCriticalSection(v60);
LABEL_71:
  v48 = v53;
  if ( v53 )
  {
    v53 = 0LL;
    (*(void (__fastcall **)(CDeviceGraphObjectsStore *))(*(_QWORD *)v48 + 16LL))(v48);
  }
  if ( v65 )
    LeaveCriticalSection(v65);
  return v14;
}
