/*
 * XREFs of ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixProxy@@@Z @ 0x18001E380
 * Callers:
 *     ?BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@KKW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@5PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEBUtWAVEFORMATEX@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@K_NPEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001B070 (-BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioPro.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$emplace_back@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAXAEBVWeakRef@WRL@Microsoft@@@Z @ 0x180014EA0 (--$emplace_back@AEBVWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakR.c)
 *     ??$AsWeak@UISaDeviceProxy@@@WRL@Microsoft@@YAJPEAUISaDeviceProxy@@PEAVWeakRef@01@@Z @ 0x18001B4E0 (--$AsWeak@UISaDeviceProxy@@@WRL@Microsoft@@YAJPEAUISaDeviceProxy@@PEAVWeakRef@01@@Z.c)
 *     ?RuntimeClassInitialize@CProcessSubmixProxy@@QEAAJPEBUProcessSubmixParams@@PEAUPROCESS_SUBMIX_DESCRIPTOR@@PEAUIStreamGroupProxy@@K@Z @ 0x18001D2B0 (-RuntimeClassInitialize@CProcessSubmixProxy@@QEAAJPEBUProcessSubmixParams@@PEAUPROCESS_SUBMIX_DE.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002DEE0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x180043BB0 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800494E0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180097338 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180097360 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$As@UIProcessSubmixProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800973A8 (--$As@UIProcessSubmixProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr.c)
 *     ??_G_WorkTask@@QEAAPEAXI@Z @ 0x1800979F4 (--_G_WorkTask@@QEAAPEAXI@Z.c)
 *     ??1?$MakeAllocator@VCDeviceGraphObjectsStore@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180098418 (--1-$MakeAllocator@VCDeviceGraphObjectsStore@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     _lambda_ce21942885de90a1a6198292e021f395_::operator() @ 0x1800999C0 (_lambda_ce21942885de90a1a6198292e021f395_--operator().c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A66F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall CBaseStreamGroupProxy::GetProcessSubmix(
        __int64 **this,
        struct ProcessSubmixParams *a2,
        __int64 a3,
        struct IProcessSubmixProxy **a4)
{
  int *v4; // r12
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  struct _RTL_CRITICAL_SECTION *v7; // rsi
  const char *v8; // r9
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 *v11; // rbx
  __int64 *v12; // r15
  __int64 *i; // rdi
  __int64 v14; // rax
  __int64 *v15; // r15
  __int64 *j; // rdi
  __int64 v17; // rcx
  __int64 *v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // r15
  int v21; // r12d
  char v22; // al
  __int64 (__fastcall ***v23)(_QWORD, GUID *, __int64 *); // rax
  __int64 (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // rdi
  __int64 *v25; // rdx
  char *v26; // rax
  char *v27; // rbx
  int v28; // r15d
  __int64 (__fastcall *v29)(char *, GUID *, _QWORD); // rax
  __int64 (__fastcall ***v30)(_QWORD, _QWORD, _QWORD); // rcx
  int v31; // eax
  unsigned int v32; // ebx
  __int64 (__fastcall ***v33)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v34; // rax
  __int64 v35; // rsi
  signed int v36; // edi
  PTP_POOL Threadpool; // rax
  signed int LastError; // eax
  signed int v39; // eax
  _QWORD *v40; // rax
  unsigned int v41; // edx
  _QWORD *v42; // rbx
  HANDLE ProcessHeap; // rax
  _QWORD *v44; // rax
  _QWORD *v45; // rdi
  std::_Ref_count_base *v46; // rcx
  _BYTE *v47; // rdx
  struct _TP_WORK *ThreadpoolWork; // rsi
  signed int v49; // eax
  _QWORD *v50; // rdx
  struct IProcessSubmixProxy *v51; // rax
  int v52; // [rsp+20h] [rbp-208h]
  __int64 (__fastcall ***v53)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-1F8h] BYREF
  __int64 (__fastcall ***v54)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-1F0h] BYREF
  __int64 v55; // [rsp+40h] [rbp-1E8h] BYREF
  int *v56; // [rsp+48h] [rbp-1E0h] BYREF
  _BYTE *v57; // [rsp+50h] [rbp-1D8h]
  char *v58; // [rsp+58h] [rbp-1D0h] BYREF
  char *v59; // [rsp+60h] [rbp-1C8h]
  struct _RTL_CRITICAL_SECTION *v60; // [rsp+68h] [rbp-1C0h]
  char *v61; // [rsp+70h] [rbp-1B8h] BYREF
  _QWORD *v62; // [rsp+78h] [rbp-1B0h] BYREF
  __int64 v63; // [rsp+80h] [rbp-1A8h] BYREF
  __int64 (__fastcall ***v64)(_QWORD, GUID *, __int64 *); // [rsp+88h] [rbp-1A0h] BYREF
  struct IProcessSubmixProxy **v65; // [rsp+90h] [rbp-198h]
  _QWORD v66[7]; // [rsp+98h] [rbp-190h] BYREF
  _QWORD *v67; // [rsp+D0h] [rbp-158h]
  _BYTE v68[56]; // [rsp+D8h] [rbp-150h] BYREF
  _BYTE *v69; // [rsp+110h] [rbp-118h]
  __int64 v70; // [rsp+118h] [rbp-110h]
  _QWORD *v71; // [rsp+120h] [rbp-108h]
  _QWORD *v72; // [rsp+128h] [rbp-100h]
  _DWORD v73[4]; // [rsp+130h] [rbp-F8h] BYREF
  __int64 v74; // [rsp+140h] [rbp-E8h]
  int v75; // [rsp+148h] [rbp-E0h]
  __int64 v76; // [rsp+150h] [rbp-D8h]
  int v77; // [rsp+158h] [rbp-D0h]
  __int64 v78; // [rsp+160h] [rbp-C8h]
  __int64 v79; // [rsp+168h] [rbp-C0h]
  int v80; // [rsp+170h] [rbp-B8h]
  __int128 v81; // [rsp+174h] [rbp-B4h]
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+0h]

  v70 = -2LL;
  v65 = a4;
  v4 = (int *)a2;
  v56 = (int *)a2;
  try
  {
    v6 = (struct _RTL_CRITICAL_SECTION *)(this + 19);
    v59 = (char *)(this + 19);
    EnterCriticalSection((LPCRITICAL_SECTION)(this + 19));
    v7 = v6;
    v60 = v6;
    if ( ((unsigned __int8 (__fastcall *)(__int64 **))(*this)[18])(this) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x172,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)0x80070057LL,
        v52);
      if ( v6 )
        LeaveCriticalSection(v6);
      return 2147942487LL;
    }
    EnterCriticalSection(v6);
    v11 = this[27];
    v12 = this[28];
    if ( v11 != v12 )
    {
      do
      {
        if ( (unsigned __int8)lambda_ce21942885de90a1a6198292e021f395_::operator()(v10, v11) )
          break;
        ++v11;
      }
      while ( v11 != v12 );
      if ( v11 != v12 )
      {
        for ( i = v11 + 1; i != v12; ++i )
        {
          if ( !(unsigned __int8)lambda_ce21942885de90a1a6198292e021f395_::operator()(v10, i) )
          {
            v14 = 0LL;
            if ( &v62 != (_QWORD **)i )
            {
              v14 = *i;
              *i = 0LL;
            }
            v10 = *v11;
            *v11 = v14;
            if ( v10 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
            ++v11;
          }
        }
      }
    }
    if ( v11 != this[28] )
    {
      v15 = this[28];
      for ( j = v11; j != v15; ++j )
      {
        v17 = *j;
        if ( *j )
        {
          *j = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
      this[28] = v11;
    }
    if ( this != (__int64 **)-152LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)(this + 19));
    v53 = 0LL;
    v18 = this[27];
    while ( v18 != this[28] )
    {
      v19 = *v18;
      v63 = v19;
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
      v55 = 0LL;
      if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(&v63, &v55) >= 0 && v55 )
      {
        v54 = 0LL;
        if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IProcessSubmixProxy>(&v55, &v54) < 0
          || ((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v54)[25])(v54) )
        {
          goto LABEL_33;
        }
        v20 = *(_QWORD *)v4;
        v21 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v54)[12])(v54);
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v20 + 40LL))(v20) == v21 )
        {
          v22 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v54)[14])(v54);
          v4 = v56;
          if ( *((_BYTE *)v56 + 8) == v22 )
          {
            v23 = v53;
            v24 = v54;
            if ( v53 != v54 )
            {
              if ( v54 )
              {
                ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v54)[1])(v54);
                v23 = v53;
              }
              v64 = v23;
              v53 = v24;
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v64);
            }
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v54);
            Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v55);
            if ( v19 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
            break;
          }
LABEL_33:
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v54);
          goto LABEL_34;
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v54);
        Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v55);
        if ( v19 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        v4 = v56;
LABEL_41:
        ++v18;
      }
      else
      {
LABEL_34:
        Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v55);
        if ( !v19 )
          goto LABEL_41;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        ++v18;
      }
    }
    if ( v53 )
      goto LABEL_120;
    memset_0(v73, 0, 0xA8uLL);
    v25 = (__int64 *)*((_QWORD *)v4 + 2);
    v73[0] = *((_DWORD *)v25 + 2);
    v73[1] = 0;
    v76 = *v25;
    v73[2] = *(unsigned __int16 *)(v25[2] + 16) + 18;
    v74 = v25[2];
    v77 = *(unsigned __int16 *)(v25[2] + 16) + 18;
    v78 = v25[2];
    v79 = v25[3];
    v80 = 0;
    v81 = *((_OWORD *)v25 + 2);
    v75 = *((unsigned __int8 *)v25 + 50);
    v53 = 0LL;
    v26 = (char *)operator new(0xE0uLL, (const struct std::nothrow_t *)&std::nothrow);
    v27 = v26;
    v58 = v26;
    if ( !v26 )
    {
      Microsoft::WRL::Details::MakeAllocator<CDeviceGraphObjectsStore>::~MakeAllocator<CDeviceGraphObjectsStore>(&v58);
      v28 = -2147024882;
      goto LABEL_64;
    }
    *((_QWORD *)v26 + 5) = 1LL;
    *(_QWORD *)v26 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IProcessSubmixProxy,IInspectable>::`vftable'{for `IInspectable'};
    *((_QWORD *)v26 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IProcessSubmixProxy,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IProcessSubmixProxy,IWeakReferenceSource,IInspectable>'};
    *((_QWORD *)v26 + 2) = &CProcessSubmixProxy::`vftable'{for `IWeakReferenceSource'};
    *((_QWORD *)v26 + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IProcessSubmixProxy,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v27 = &CProcessSubmixProxy::`vftable'{for `IInspectable'};
    *((_QWORD *)v27 + 1) = &CProcessSubmixProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IProcessSubmixProxy,IWeakReferenceSource,IInspectable>'};
    *((_QWORD *)v27 + 2) = &CProcessSubmixProxy::`vftable'{for `IWeakReferenceSource'};
    *((_QWORD *)v27 + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IProcessSubmixProxy,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
    *((_QWORD *)v27 + 6) = 0LL;
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v27 + 56), 0, 0);
    *((_QWORD *)v27 + 12) = 0LL;
    *((_DWORD *)v27 + 26) = 0;
    *((_QWORD *)v27 + 14) = 0LL;
    *((_DWORD *)v27 + 30) = 0;
    *((_WORD *)v27 + 62) = 0;
    *((_DWORD *)v27 + 32) = 0;
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v27 + 136), 0, 0);
    *((_QWORD *)v27 + 22) = 0LL;
    *((_QWORD *)v27 + 23) = 0LL;
    *((_QWORD *)v27 + 24) = 0LL;
    *((_QWORD *)v27 + 25) = 0LL;
    *((_QWORD *)v27 + 26) = 0LL;
    *((_QWORD *)v27 + 27) = 0LL;
    v61 = v27;
    v58 = 0LL;
    v28 = CProcessSubmixProxy::RuntimeClassInitialize(
            (CProcessSubmixProxy *)v27,
            (const struct ProcessSubmixParams *)v4,
            (struct PROCESS_SUBMIX_DESCRIPTOR *)v73,
            (struct IStreamGroupProxy *)this);
    if ( v28 >= 0 )
    {
      v29 = **(__int64 (__fastcall ***)(char *, GUID *, _QWORD))v27;
      if ( (char *)v29 == (char *)&Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IProcessSubmixProxy,IInspectable>::QueryInterface )
      {
        if ( (unsigned int)InlineIsEqualGUID(
                             &GUID_f6433915_a28f_478e_ab30_7d0e99580da0,
                             &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
        {
          v30 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v27;
          v53 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v27;
        }
        else
        {
          v30 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))(v27 + 8);
          v53 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(v27 + 8);
        }
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v30)[1])(v30);
        v28 = 0;
      }
      else
      {
        v28 = v29(v27, &GUID_f6433915_a28f_478e_ab30_7d0e99580da0, &v53);
      }
      (*(void (__fastcall **)(char *))(*(_QWORD *)v27 + 16LL))(v27);
    }
    else
    {
      Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)&v61);
      Microsoft::WRL::Details::MakeAllocator<CDeviceGraphObjectsStore>::~MakeAllocator<CDeviceGraphObjectsStore>(&v58);
    }
    if ( v28 < 0 )
    {
LABEL_64:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19B,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v28,
        v52);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v53);
      if ( v59 )
        LeaveCriticalSection(v7);
      return (unsigned int)v28;
    }
    v56 = 0LL;
    v31 = Microsoft::WRL::AsWeak<ISaDeviceProxy>(v53, &v56);
    v32 = v31;
    if ( v31 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19F,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v31,
        v52);
      if ( v56 )
        (*(void (__fastcall **)(int *))(*(_QWORD *)v56 + 16LL))(v56);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v53);
      if ( v59 )
        LeaveCriticalSection(v7);
      return v32;
    }
    std::vector<Microsoft::WRL::WeakRef>::emplace_back<Microsoft::WRL::WeakRef const &>(this + 27, (__int64 *)&v56);
    v62 = v66;
    v33 = v53;
    if ( v53 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v53)[1])(v53);
    v66[0] = off_1801216E8;
    v66[1] = v33;
    v67 = v66;
    v71 = v66;
    v34 = (*(__int64 (__fastcall **)(CAudioSrv *))(*(_QWORD *)g_AudioService + 112LL))(g_AudioService);
    v35 = v34;
    v36 = 0;
    if ( *(_BYTE *)(v34 + 80) )
    {
LABEL_113:
      if ( v67 )
      {
        v50 = v66;
        LOBYTE(v50) = v67 != v66;
        (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v67 + 32LL))(v67, v50);
        v67 = 0LL;
      }
      if ( v36 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1A7,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v36,
          v52);
      if ( v56 )
        (*(void (__fastcall **)(int *))(*(_QWORD *)v56 + 16LL))(v56);
      v7 = v60;
LABEL_120:
      v51 = (struct IProcessSubmixProxy *)v53;
      v53 = 0LL;
      *v65 = v51;
      if ( v59 )
        LeaveCriticalSection(v7);
      return 0LL;
    }
    if ( !*(_QWORD *)v34 )
    {
      Threadpool = CreateThreadpool(0LL);
      *(_QWORD *)v35 = Threadpool;
      if ( !Threadpool )
      {
        LastError = GetLastError();
        v36 = LastError;
        if ( LastError > 0 )
          v36 = (unsigned __int16)LastError | 0x80070000;
        if ( v36 < 0 )
          goto LABEL_113;
      }
      if ( !SetThreadpoolThreadMinimum(*(PTP_POOL *)v35, 1u) )
      {
        v39 = GetLastError();
        v36 = v39;
        if ( v39 > 0 )
          v36 = (unsigned __int16)v39 | 0x80070000;
        if ( v36 < 0 )
          goto LABEL_113;
      }
      SetThreadpoolThreadMaximum(*(PTP_POOL *)v35, 1u);
      *(_QWORD *)(v35 + 16) = *(_QWORD *)v35;
    }
    v40 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v42 = v40;
    v57 = v40;
    if ( v40 )
    {
      *v40 = 0LL;
      v40[1] = 0LL;
      v40[2] = 0LL;
    }
    else
    {
      v42 = 0LL;
    }
    v72 = v42;
    v36 = -2147024882;
    if ( v42 )
    {
      v57 = v68;
      v69 = 0LL;
      if ( v67 )
        v69 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))*v67)(v67, v68);
      v57 = v68;
      v42[2] = v35;
      ProcessHeap = GetProcessHeap();
      v44 = HeapAlloc(ProcessHeap, 0, 0x50uLL);
      v45 = v44;
      v62 = v44;
      if ( v44 )
      {
        *((_DWORD *)v44 + 2) = 1;
        *((_DWORD *)v44 + 3) = 1;
        *v44 = &std::_Ref_count_obj<std::function<void (void)>>::`vftable';
        v61 = (char *)(v44 + 2);
        v44[9] = 0LL;
        if ( v69 )
          v44[9] = (**(__int64 (__fastcall ***)(_BYTE *, __int64))v69)(v69, (__int64)(v44 + 2));
      }
      else
      {
        v45 = 0LL;
      }
      *v42 = v45 + 2;
      v46 = (std::_Ref_count_base *)v42[1];
      v42[1] = v45;
      if ( v46 )
        std::_Ref_count_base::_Decref(v46);
      v36 = -2147024882;
      if ( *v42 )
        v36 = 0;
      if ( v69 )
      {
        v47 = v68;
        LOBYTE(v47) = v69 != v68;
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v69 + 32LL))(v69, v47);
        v69 = 0LL;
      }
    }
    if ( v36 >= 0 )
    {
      ThreadpoolWork = CreateThreadpoolWork(
                         (PTP_WORK_CALLBACK)CSerialWorkQueue::WorkCallback,
                         v42,
                         (PTP_CALLBACK_ENVIRON)(v35 + 8));
      if ( ThreadpoolWork )
      {
        v36 = 0;
      }
      else
      {
        v49 = GetLastError();
        v36 = v49;
        if ( v49 > 0 )
          v36 = (unsigned __int16)v49 | 0x80070000;
        if ( v36 < 0 )
          goto LABEL_111;
      }
      v42 = 0LL;
      SubmitThreadpoolWork(ThreadpoolWork);
    }
LABEL_111:
    if ( v42 )
      _WorkTask::`scalar deleting destructor'((_WorkTask *)v42, v41);
    goto LABEL_113;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1AD,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                           v8);
  }
  return result;
}
