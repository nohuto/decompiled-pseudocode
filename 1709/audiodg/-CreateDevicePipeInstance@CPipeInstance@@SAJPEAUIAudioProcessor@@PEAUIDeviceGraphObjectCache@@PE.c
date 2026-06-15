/*
 * XREFs of ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140003230
 * Callers:
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000CC90 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x140001290 (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     _TlgKeywordOn @ 0x1400012EC (_TlgKeywordOn.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x140001CC0 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x1400057E0 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?GetFreeNode@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXXZ @ 0x140005880 (-GetFreeNode@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXX.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x1400059CC (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ??0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z @ 0x14000A960 (--0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x14000AA90 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14000E410 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140017230 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140019B74 (-CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     atexit @ 0x14001D22C (atexit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D278 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x14001E511 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x1400303C0 (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031DE4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x140035F54 (WPP_SF_.c)
 *     WPP_SF_D @ 0x140035F74 (WPP_SF_D.c)
 *     ?CleanupProcessNodeList@@YAXAEAV?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@@Z @ 0x14003F958 (-CleanupProcessNodeList@@YAXAEAV-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044BC0 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPipeInstance::CreateDevicePipeInstance(
        struct IAudioProcessor *a1,
        struct IDeviceGraphObjectCache *a2,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a3,
        struct CPipeInstance **a4)
{
  struct CDeviceProcessNode *v5; // r14
  int v6; // r15d
  int v7; // r12d
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rbx
  struct ATL::CAtlPlex *v11; // rdx
  struct ATL::CAtlPlex *v12; // rcx
  const struct _TlgProvider_t *v13; // rcx
  unsigned int i; // ebx
  int v15; // esi
  GUID *v16; // rax
  int v17; // eax
  __int64 v18; // rdi
  struct ATL::CAtlPlex *j; // rdx
  struct ATL::CAtlPlex *v20; // rcx
  int v21; // eax
  __int64 v22; // rbx
  struct ATL::CAtlPlex *v23; // rdx
  struct ATL::CAtlPlex *v24; // rcx
  int v25; // eax
  __int64 v26; // rbx
  struct ATL::CAtlPlex *v27; // rdx
  struct ATL::CAtlPlex *v28; // rcx
  int v29; // eax
  __int64 v30; // rbx
  struct ATL::CAtlPlex *v31; // rdx
  struct ATL::CAtlPlex *v32; // rcx
  CPipeInstance *v33; // rax
  CPipeInstance *v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // r15
  struct ATL::CAtlPlex *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rax
  struct ATL::CAtlPlex *v43; // r8
  int v44; // edx
  _QWORD *v45; // rcx
  int k; // edx
  int EndpointGuidFromEndpointId; // eax
  const unsigned __int16 *v48; // rsi
  unsigned __int64 v49; // rdi
  unsigned __int64 v50; // r12
  unsigned __int128 v51; // rax
  char *v52; // rax
  int v53; // r15d
  unsigned int v54; // eax
  _QWORD *v55; // rcx
  void (__stdcall *v57)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID); // rdx
  void *v58; // r8
  void (__stdcall *v59)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID); // rdx
  void *v60; // r8
  int APOProcessNode; // eax
  int v62; // eax
  struct ATL::CAtlPlex *v63; // r8
  __int64 v64; // rax
  struct ATL::CAtlPlex *v65; // rcx
  _BYTE v66[32]; // [rsp+0h] [rbp-148h] BYREF
  unsigned __int16 **v67; // [rsp+20h] [rbp-128h]
  unsigned __int64 *v68; // [rsp+28h] [rbp-120h]
  unsigned __int64 v69; // [rsp+40h] [rbp-108h] BYREF
  __int128 v70; // [rsp+48h] [rbp-100h] BYREF
  __int64 v71; // [rsp+58h] [rbp-F0h]
  struct ATL::CAtlPlex *v72[2]; // [rsp+60h] [rbp-E8h] BYREF
  unsigned __int64 v73; // [rsp+70h] [rbp-D8h]
  unsigned __int16 *v74[2]; // [rsp+80h] [rbp-C8h] BYREF
  struct CDeviceProcessNode *v75; // [rsp+90h] [rbp-B8h] BYREF
  void (__fastcall ***v76)(_QWORD, __int64); // [rsp+98h] [rbp-B0h] BYREF
  int pExceptionObject; // [rsp+A0h] [rbp-A8h] BYREF
  WINBOOL v78; // [rsp+A4h] [rbp-A4h] BYREF
  int v79; // [rsp+A8h] [rbp-A0h] BYREF
  int v80; // [rsp+ACh] [rbp-9Ch] BYREF
  int v81; // [rsp+B0h] [rbp-98h] BYREF
  int v82; // [rsp+B4h] [rbp-94h] BYREF
  int v83; // [rsp+B8h] [rbp-90h] BYREF
  int v84; // [rsp+BCh] [rbp-8Ch] BYREF
  int v85; // [rsp+C0h] [rbp-88h] BYREF
  int v86; // [rsp+C4h] [rbp-84h] BYREF
  int v87; // [rsp+C8h] [rbp-80h] BYREF
  CPipeInstance *v88; // [rsp+D0h] [rbp-78h]
  LPVOID Context; // [rsp+D8h] [rbp-70h] BYREF
  LPVOID v90; // [rsp+E0h] [rbp-68h] BYREF
  int v91; // [rsp+E8h] [rbp-60h]
  __int64 v92; // [rsp+F0h] [rbp-58h]
  long *v93; // [rsp+F8h] [rbp-50h] BYREF
  ATL::CAtlException *v94; // [rsp+100h] [rbp-48h] BYREF
  struct ATL::CAtlPlex *fPending; // [rsp+160h] [rbp+18h] BYREF
  struct CPipeInstance **v98; // [rsp+168h] [rbp+20h]

  v98 = a4;
  v92 = -2LL;
  v5 = 0LL;
  v75 = 0LL;
  v88 = 0LL;
  v69 = 0LL;
  v76 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  *(_OWORD *)v72 = 0LL;
  LODWORD(v73) = 10;
  v6 = 0;
  v7 = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_467e7e5d32f730dac41c79a61116708c_Traceguids);
  }
  try
  {
    v8 = *((_QWORD *)a3 + 3);
    if ( v8 )
    {
      v9 = CProcessNode::CreateDummyProcessNode(*((unsigned int *)a3 + 18), v8, &v76);
      if ( v9 < 0 )
      {
        pExceptionObject = v9;
        throw (long *)&pExceptionObject;
      }
      v10 = *((_QWORD *)&v70 + 1);
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(&v70);
      v11 = v72[1];
      fPending = v72[1];
      v12 = *(struct ATL::CAtlPlex **)v72[1];
      *((_QWORD *)v72[1] + 2) = v76;
      v72[1] = v12;
      *((_QWORD *)v11 + 1) = v10;
      *(_QWORD *)v11 = 0LL;
      ++v71;
      if ( *((_QWORD *)&v70 + 1) )
        **((_QWORD **)&v70 + 1) = v11;
      else
        *(_QWORD *)&v70 = v11;
      *((_QWORD *)&v70 + 1) = v11;
      v76 = 0LL;
    }
    if ( !*((_DWORD *)a3 + 18) )
    {
      v6 = 1;
      InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context);
      if ( (_DWORD)fPending )
      {
        v90 = &`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
        Context = &qword_14008A158;
        qword_14008A158 = (__int64)&AudioDgTelemetryProvider::`vftable';
        qword_14008A170 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
        v91 = 0;
        wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&v90, v57, v58);
      }
      if ( *((_QWORD *)Context + 1) )
      {
        InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &v78, &v90);
        if ( v78 )
        {
          v74[0] = (unsigned __int16 *)&`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
          v90 = &qword_14008A158;
          qword_14008A158 = (__int64)&AudioDgTelemetryProvider::`vftable';
          qword_14008A170 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
          LODWORD(v74[1]) = 0;
          wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(v74, v59, v60);
        }
        v13 = (const struct _TlgProvider_t *)*((_QWORD *)v90 + 1);
        if ( *(_DWORD *)v13 > 4u && TlgKeywordOn(v13, 0x400000000000uLL) )
          v7 = 1;
      }
    }
    for ( i = 0; i < *((_DWORD *)a3 + 24); ++i )
    {
      v15 = *((_DWORD *)a3 + 23);
      if ( (*((_DWORD *)a3 + 20) & (1 << i)) == 0 )
        goto LABEL_23;
      if ( *((_DWORD *)a3 + 22) == i )
      {
        if ( v6 )
        {
          *(GUID *)v74 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          v68 = &v69;
          v67 = v74;
          APOProcessNode = CAPOProcessNode::CreateAPOProcessNode(
                             &GUID_d69e0717_dd4b_4b25_997a_da813833b8ac,
                             *((unsigned int *)a3 + 18),
                             1LL);
          if ( APOProcessNode < 0 )
          {
            v79 = APOProcessNode;
            throw (long *)&v79;
          }
          fPending = (struct ATL::CAtlPlex *)v69;
          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v70, &fPending);
          v69 = 0LL;
          v6 = 0;
        }
        if ( v7 )
        {
          *(GUID *)v74 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          v68 = &v69;
          v67 = v74;
          v62 = CAPOProcessNode::CreateAPOProcessNode(
                  &GUID_693badea_1eb1_4013_b799_285f624a55bd,
                  *((unsigned int *)a3 + 18),
                  1LL);
          if ( v62 < 0 )
          {
            v80 = v62;
            throw (long *)&v80;
          }
          fPending = (struct ATL::CAtlPlex *)v69;
          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v70, &fPending);
          v69 = 0LL;
          v7 = 0;
        }
      }
      if ( v15 != i )
        v16 = (GUID *)((char *)a3 + 120);
      else
LABEL_23:
        v16 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      *(GUID *)v74 = *v16;
      v68 = &v69;
      v67 = v74;
      v17 = CAPOProcessNode::CreateAPOProcessNode((char *)a3 + 16 * i + 168, *((unsigned int *)a3 + 18), 0LL);
      if ( v17 < 0 )
      {
        v81 = v17;
        throw (long *)&v81;
      }
      v18 = *((_QWORD *)&v70 + 1);
      j = v72[1];
      if ( !v72[1] )
      {
        v63 = ATL::CAtlPlex::Create(v72, (unsigned int)v73, 0x18uLL);
        if ( !v63 )
          ATL::AtlThrowImpl(-2147024882);
        v64 = (unsigned int)(v73 - 1);
        v65 = (struct ATL::CAtlPlex *)((char *)v63 + 16 * v64 + 8 * v64 + 8);
        for ( j = v72[1]; (int)v64 >= 0; LODWORD(v64) = v64 - 1 )
        {
          *(_QWORD *)v65 = j;
          j = v65;
          v72[1] = v65;
          v65 = (struct ATL::CAtlPlex *)((char *)v65 - 24);
        }
      }
      fPending = j;
      v20 = *(struct ATL::CAtlPlex **)j;
      *((_QWORD *)j + 2) = v69;
      v72[1] = v20;
      *((_QWORD *)j + 1) = v18;
      *(_QWORD *)j = 0LL;
      ++v71;
      if ( *((_QWORD *)&v70 + 1) )
        **((_QWORD **)&v70 + 1) = j;
      else
        *(_QWORD *)&v70 = j;
      *((_QWORD *)&v70 + 1) = j;
      v69 = 0LL;
    }
    if ( v6 )
    {
      *(GUID *)v74 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v68 = &v69;
      v67 = v74;
      v21 = CAPOProcessNode::CreateAPOProcessNode(
              &GUID_d69e0717_dd4b_4b25_997a_da813833b8ac,
              *((unsigned int *)a3 + 18),
              1LL);
      if ( v21 < 0 )
      {
        v82 = v21;
        throw (long *)&v82;
      }
      v22 = *((_QWORD *)&v70 + 1);
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(&v70);
      v23 = v72[1];
      fPending = v72[1];
      v24 = *(struct ATL::CAtlPlex **)v72[1];
      *((_QWORD *)v72[1] + 2) = v69;
      v72[1] = v24;
      *((_QWORD *)v23 + 1) = v22;
      *(_QWORD *)v23 = 0LL;
      ++v71;
      if ( *((_QWORD *)&v70 + 1) )
        **((_QWORD **)&v70 + 1) = v23;
      else
        *(_QWORD *)&v70 = v23;
      *((_QWORD *)&v70 + 1) = v23;
      v69 = 0LL;
    }
    if ( v7 )
    {
      *(GUID *)v74 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v68 = &v69;
      v67 = v74;
      v25 = CAPOProcessNode::CreateAPOProcessNode(
              &GUID_693badea_1eb1_4013_b799_285f624a55bd,
              *((unsigned int *)a3 + 18),
              1LL);
      if ( v25 < 0 )
      {
        v83 = v25;
        throw (long *)&v83;
      }
      v26 = *((_QWORD *)&v70 + 1);
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(&v70);
      v27 = v72[1];
      fPending = v72[1];
      v28 = *(struct ATL::CAtlPlex **)v72[1];
      *((_QWORD *)v72[1] + 2) = v69;
      v72[1] = v28;
      *((_QWORD *)v27 + 1) = v26;
      *(_QWORD *)v27 = 0LL;
      ++v71;
      if ( *((_QWORD *)&v70 + 1) )
        **((_QWORD **)&v70 + 1) = v27;
      else
        *(_QWORD *)&v70 = v27;
      *((_QWORD *)&v70 + 1) = v27;
      v69 = 0LL;
    }
    v29 = CDeviceProcessNode::CreateDeviceProcessNode(a3, &v75);
    if ( v29 < 0 )
    {
      v84 = v29;
      throw (long *)&v84;
    }
    v30 = *((_QWORD *)&v70 + 1);
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(&v70);
    v31 = v72[1];
    fPending = v72[1];
    v32 = *(struct ATL::CAtlPlex **)v72[1];
    *((_QWORD *)v72[1] + 2) = v75;
    v72[1] = v32;
    *((_QWORD *)v31 + 1) = v30;
    *(_QWORD *)v31 = 0LL;
    ++v71;
    if ( *((_QWORD *)&v70 + 1) )
      **((_QWORD **)&v70 + 1) = v31;
    else
      *(_QWORD *)&v70 = v31;
    *((_QWORD *)&v70 + 1) = v31;
    v75 = 0LL;
    v33 = (CPipeInstance *)operator new(0x138uLL, (const struct std::nothrow_t *)&std::nothrow);
    fPending = v33;
    if ( v33 )
      v34 = CPipeInstance::CPipeInstance(v33, READ_DATA_PIPE);
    else
      v34 = 0LL;
    v88 = v34;
    if ( !v34 )
    {
      v85 = -2147024882;
      throw (long *)&v85;
    }
    *((_OWORD *)v34 + 18) = *(_OWORD *)((char *)a3 + 152);
    *((_DWORD *)v34 + 3) = *((_DWORD *)a3 + 18);
    *((_DWORD *)v34 + 32) = *((_DWORD *)a3 + 20) != 0;
    *((_DWORD *)v34 + 31) = *((_DWORD *)a3 + 25) == 1;
    if ( *((struct IAudioProcessor **)v34 + 18) != a1 )
    {
      if ( a1 )
        (*(void (__fastcall **)(struct IAudioProcessor *))(*(_QWORD *)a1 + 8LL))(a1);
      v35 = *((_QWORD *)v34 + 18);
      if ( v35 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
      *((_QWORD *)v34 + 18) = a1;
    }
    if ( *((struct IDeviceGraphObjectCache **)v34 + 29) != a2 )
    {
      if ( a2 )
        (*(void (__fastcall **)(struct IDeviceGraphObjectCache *))(*(_QWORD *)a2 + 8LL))(a2);
      v36 = *((_QWORD *)v34 + 29);
      if ( v36 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
      *((_QWORD *)v34 + 29) = a2;
    }
    v37 = *((_QWORD *)&v70 + 1);
    while ( v37 )
    {
      v38 = v37;
      v37 = *(_QWORD *)(v37 + 8);
      v39 = *((_QWORD *)v34 + 2);
      if ( !*((_QWORD *)v34 + 6) )
      {
        v43 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)v34 + 5, *((unsigned int *)v34 + 14), 0x18uLL);
        if ( !v43 )
          ATL::AtlThrowImpl(-2147024882);
        v44 = *((_DWORD *)v34 + 14);
        v45 = (_QWORD *)((char *)v43 + 16 * (v44 - 1) + 8 * (unsigned int)(v44 - 1) + 8);
        for ( k = v44 - 1; k >= 0; --k )
        {
          *v45 = *((_QWORD *)v34 + 6);
          *((_QWORD *)v34 + 6) = v45;
          v45 -= 3;
        }
      }
      v40 = (struct ATL::CAtlPlex *)*((_QWORD *)v34 + 6);
      fPending = v40;
      v41 = *(_QWORD *)v40;
      if ( v40 )
        *((_QWORD *)v40 + 2) = *(_QWORD *)(v38 + 16);
      *((_QWORD *)v34 + 6) = v41;
      *((_QWORD *)v40 + 1) = 0LL;
      *(_QWORD *)v40 = v39;
      ++*((_QWORD *)v34 + 4);
      v42 = *((_QWORD *)v34 + 2);
      if ( v42 )
        *(_QWORD *)(v42 + 8) = v40;
      else
        *((_QWORD *)v34 + 3) = v40;
      *((_QWORD *)v34 + 2) = v40;
    }
    *((_DWORD *)v34 + 51) = *((_DWORD *)a3 + 22) != -1;
    *((_DWORD *)v34 + 76) = *((_DWORD *)a3 + 37);
    EndpointGuidFromEndpointId = GetEndpointGuidFromEndpointId(*((_QWORD *)a3 + 7), (char *)v34 + 152);
    if ( EndpointGuidFromEndpointId < 0 )
    {
      v86 = EndpointGuidFromEndpointId;
      throw (long *)&v86;
    }
    v48 = (const unsigned __int16 *)*((_QWORD *)a3 + 7);
    v49 = -1LL;
    do
      ++v49;
    while ( v48[v49] );
    *((_QWORD *)v34 + 23) = 0LL;
    v50 = v49 + 1;
    if ( v49 + 1 < v49 )
    {
      v53 = -2147024362;
    }
    else
    {
      *((_QWORD *)v34 + 23) = 0LL;
      v51 = v50 * (unsigned __int128)2uLL;
      if ( is_mul_ok(v50, 2uLL) )
      {
        v52 = (char *)CoTaskMemAlloc(2 * v50);
        *((_QWORD *)v34 + 23) = v52;
        if ( !v52 )
        {
          v53 = -2147024882;
          goto LABEL_122;
        }
        v53 = 0;
        StringCchCopyNExW(v52, v49 + 1, v48, v49);
      }
      else
      {
        v53 = -2147024362;
      }
      if ( v53 >= 0 )
      {
        v54 = (int)((float)((float)*(int *)(*((_QWORD *)a3 + 1) + 8LL)
                          / (float)*(unsigned __int16 *)(*((_QWORD *)a3 + 1) + 12LL))
                  * (double)(int)*((_QWORD *)a3 + 4)
                  / 10000000.0
                  + 0.5);
        *((_DWORD *)v34 + 35) = v54;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_467e7e5d32f730dac41c79a61116708c_Traceguids, v54);
        }
        goto LABEL_141;
      }
    }
LABEL_122:
    v87 = v53;
    throw (long *)&v87;
  }
  catch ( long *v93 )
  {
    *((_QWORD *)&v51 + 1) = v66;
    LODWORD(fPending) = *(_DWORD *)v93;
    v53 = (int)fPending;
    v34 = v88;
    v5 = v75;
  }
  catch ( ATL::CAtlException *v94 )
  {
    *((_QWORD *)&v51 + 1) = v66;
    LODWORD(fPending) = *(_DWORD *)v94;
    v53 = (int)fPending;
    v34 = v88;
    v5 = v75;
  }
LABEL_141:
  if ( v53 < 0 )
  {
    if ( v76 )
      (**v76)(v76, 1LL);
    if ( v69 )
      (**(void (__fastcall ***)(unsigned __int64, __int64))v69)(v69, 1LL);
    if ( v5 )
      (**(void (__fastcall ***)(struct CDeviceProcessNode *, __int64))v5)(v5, 1LL);
    if ( v34 )
      CPipeInstance::`scalar deleting destructor'(v34, DWORD2(v51));
    else
      CleanupProcessNodeList(&v70);
  }
  else
  {
    *v98 = v34;
  }
  v55 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      12LL,
      &WPP_467e7e5d32f730dac41c79a61116708c_Traceguids,
      (unsigned int)v53);
    v55 = WPP_GLOBAL_Control;
  }
  if ( v53 < 0 )
  {
    if ( v55 != &WPP_GLOBAL_Control && (*((_DWORD *)v55 + 7) & 0x20000) != 0 && *((_BYTE *)v55 + 25) >= 2u )
      WPP_SF_D(v55[2], 13LL, &WPP_467e7e5d32f730dac41c79a61116708c_Traceguids, (unsigned int)v53);
    AudDGTraceLoggingErrorHelper("CPipeInstance::CreateDevicePipeInstance", 0x124u, v53);
  }
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll(&v70);
  return (unsigned int)v53;
}
