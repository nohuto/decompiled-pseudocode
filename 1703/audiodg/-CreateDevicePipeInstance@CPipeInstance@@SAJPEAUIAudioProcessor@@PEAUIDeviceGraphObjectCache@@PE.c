/*
 * XREFs of ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x1400145A0
 * Callers:
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000FE20 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1400014A8 (--1Completer@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     ??0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z @ 0x14000D6E0 (--0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x1400112E0 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1.c)
 *     ?InnerGetCommon@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z @ 0x1400116C0 (-InnerGetCommon@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x140015220 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?GetFreeNode@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXXZ @ 0x1400152C0 (-GetFreeNode@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXX.c)
 *     ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14001AEE0 (-CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14001B070 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     ??2@YAPEAX_K@Z @ 0x14001CB28 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     atexit @ 0x14001D4BC (atexit.c)
 *     _wcsicmp @ 0x14001DC14 (_wcsicmp.c)
 *     memset @ 0x14001DC2C (memset.c)
 *     _CxxThrowException_0 @ 0x14001E752 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x140030CE4 (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x140030F84 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140032784 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x140036454 (WPP_SF_.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140036954 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?CleanupProcessNodeList@@YAXAEAV?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@@Z @ 0x14003ECF0 (-CleanupProcessNodeList@@YAXAEAV-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@.c)
 *     WPP_SF__guid_ @ 0x14003FBC8 (WPP_SF__guid_.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140044210 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPipeInstance::CreateDevicePipeInstance(
        struct IAudioProcessor *a1,
        struct IDeviceGraphObjectCache *a2,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a3,
        struct CPipeInstance **a4)
{
  struct AUDIO_DEVICE_PIPE_DESCRIPTOR *v4; // r12
  struct CDeviceProcessNode *v5; // r14
  int v6; // r15d
  int v7; // esi
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rbx
  struct ATL::CAtlPlex *v11; // rdx
  struct ATL::CAtlPlex *v12; // rcx
  __int64 v13; // rcx
  unsigned int v14; // r13d
  int v15; // ebx
  int v16; // edi
  GUID *v17; // rax
  GUID v18; // xmm6
  unsigned int Data1; // esi
  const struct _GUID *v20; // r12
  int v21; // r15d
  LSTATUS v22; // eax
  int Common; // ebx
  DWORD v24; // edi
  HKEY v25; // rsi
  LSTATUS v26; // eax
  struct ATL::CAtlPlex *v27; // rax
  struct ATL::CAtlPlex *v28; // rdi
  char *v29; // rax
  struct ATL::CAtlPlex *v30; // rsi
  __int64 v31; // rbx
  struct ATL::CAtlPlex *j; // rdx
  struct ATL::CAtlPlex *v33; // rax
  LSTATUS v34; // eax
  LSTATUS v35; // eax
  CLSID *v36; // rcx
  struct APO_REG_PROPERTIES *v37; // rax
  __int64 v38; // rdx
  int v39; // eax
  __int64 v40; // rbx
  struct ATL::CAtlPlex *v41; // rdx
  struct ATL::CAtlPlex *v42; // rcx
  int v43; // eax
  __int64 v44; // rbx
  struct ATL::CAtlPlex *v45; // rdx
  struct ATL::CAtlPlex *v46; // rcx
  int v47; // eax
  __int64 v48; // rbx
  struct ATL::CAtlPlex *v49; // rdx
  struct ATL::CAtlPlex *v50; // rcx
  CPipeInstance *v51; // rax
  CPipeInstance *v52; // rsi
  struct IAudioProcessor *v53; // rdi
  __int64 v54; // rcx
  struct IDeviceGraphObjectCache *v55; // r15
  __int64 v56; // rcx
  __int64 v57; // rdi
  unsigned __int64 v58; // rbx
  __int64 v59; // r15
  __int64 v60; // r12
  __int64 *v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rax
  unsigned __int64 v64; // rcx
  __int64 v65; // rcx
  _QWORD *v66; // rax
  int v67; // r8d
  _QWORD *v68; // rdx
  int i; // r8d
  struct AUDIO_DEVICE_PIPE_DESCRIPTOR *v70; // r12
  int EndpointGuidFromEndpointId; // eax
  char *v72; // rdi
  unsigned __int64 v73; // r15
  _WORD *v74; // r10
  int v75; // r12d
  int v76; // eax
  unsigned __int64 v77; // rcx
  _WORD *v78; // rdx
  int v79; // r8d
  __int64 v80; // r9
  unsigned __int64 v81; // rbx
  signed __int64 v82; // rdi
  __int16 v83; // ax
  unsigned __int64 v84; // r15
  _BYTE *v85; // rdx
  unsigned int v86; // eax
  _QWORD *v87; // rcx
  void (__stdcall *v89)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID); // rdx
  void *v90; // r8
  void (__stdcall *v91)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID); // rdx
  void *v92; // r8
  int v93; // eax
  int v94; // eax
  struct ATL::CAtlPlex *v95; // r8
  __int64 v96; // rax
  struct ATL::CAtlPlex *v97; // rcx
  _BYTE v98[32]; // [rsp+0h] [rbp-E58h] BYREF
  int v99; // [rsp+40h] [rbp-E18h]
  struct ATL::CAtlPlex *v100; // [rsp+48h] [rbp-E10h] BYREF
  int v101; // [rsp+50h] [rbp-E08h]
  WINBOOL v102; // [rsp+54h] [rbp-E04h] BYREF
  WINBOOL fPending; // [rsp+58h] [rbp-E00h] BYREF
  __int128 v104; // [rsp+60h] [rbp-DF8h] BYREF
  __int64 v105; // [rsp+70h] [rbp-DE8h]
  struct ATL::CAtlPlex *v106[2]; // [rsp+78h] [rbp-DE0h] BYREF
  unsigned __int64 v107; // [rsp+88h] [rbp-DD0h]
  LPOLESTR lpsz; // [rsp+90h] [rbp-DC8h] BYREF
  struct _FILETIME ftLastWriteTime; // [rsp+98h] [rbp-DC0h] BYREF
  int v110; // [rsp+A0h] [rbp-DB8h]
  LPVOID Context; // [rsp+A8h] [rbp-DB0h] BYREF
  GUID v112; // [rsp+B0h] [rbp-DA8h] BYREF
  struct CDeviceProcessNode *v113; // [rsp+C0h] [rbp-D98h] BYREF
  HKEY hKey; // [rsp+C8h] [rbp-D90h] BYREF
  void (__fastcall ***v115)(_QWORD, __int64); // [rsp+D0h] [rbp-D88h] BYREF
  int pExceptionObject; // [rsp+D8h] [rbp-D80h] BYREF
  int v117; // [rsp+DCh] [rbp-D7Ch] BYREF
  int v118; // [rsp+E0h] [rbp-D78h] BYREF
  int v119; // [rsp+E4h] [rbp-D74h] BYREF
  int v120; // [rsp+E8h] [rbp-D70h] BYREF
  int v121; // [rsp+ECh] [rbp-D6Ch] BYREF
  int v122; // [rsp+F0h] [rbp-D68h] BYREF
  int v123; // [rsp+F4h] [rbp-D64h] BYREF
  int v124; // [rsp+F8h] [rbp-D60h] BYREF
  int v125; // [rsp+FCh] [rbp-D5Ch] BYREF
  struct AUDIO_DEVICE_PIPE_DESCRIPTOR *v126; // [rsp+100h] [rbp-D58h]
  CPipeInstance *v127; // [rsp+108h] [rbp-D50h]
  DWORD Type; // [rsp+110h] [rbp-D48h] BYREF
  struct IAudioProcessor *v129; // [rsp+118h] [rbp-D40h]
  struct IDeviceGraphObjectCache *v130; // [rsp+120h] [rbp-D38h]
  struct CPipeInstance **v131; // [rsp+128h] [rbp-D30h]
  __int64 v132; // [rsp+130h] [rbp-D28h]
  long *v133; // [rsp+138h] [rbp-D20h] BYREF
  ATL::CAtlException *v134; // [rsp+140h] [rbp-D18h] BYREF
  __int128 v135; // [rsp+150h] [rbp-D08h] BYREF
  int v136; // [rsp+160h] [rbp-CF8h]
  int v137; // [rsp+570h] [rbp-8E8h]
  int v138; // [rsp+578h] [rbp-8E0h]
  GUID pclsid; // [rsp+5A0h] [rbp-8B8h] BYREF
  struct APO_REG_PROPERTIES v140; // [rsp+5B0h] [rbp-8A8h] BYREF
  WCHAR Name[512]; // [rsp+A00h] [rbp-458h] BYREF

  v132 = -2LL;
  v4 = a3;
  v126 = a3;
  v130 = a2;
  v129 = a1;
  v131 = a4;
  v5 = 0LL;
  v113 = 0LL;
  v127 = 0LL;
  v100 = 0LL;
  v115 = 0LL;
  v104 = 0LL;
  v105 = 0LL;
  *(_OWORD *)v106 = 0LL;
  LODWORD(v107) = 10;
  v6 = 0;
  v101 = 0;
  v7 = 0;
  v99 = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids);
  }
  try
  {
    v8 = *((_QWORD *)v4 + 3);
    if ( v8 )
    {
      v9 = CProcessNode::CreateDummyProcessNode(*((unsigned int *)v4 + 18), v8, &v115);
      if ( v9 < 0 )
      {
        pExceptionObject = v9;
        throw (long *)&pExceptionObject;
      }
      v10 = *((_QWORD *)&v104 + 1);
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(&v104);
      v11 = v106[1];
      hKey = (HKEY)v106[1];
      v12 = *(struct ATL::CAtlPlex **)v106[1];
      *((_QWORD *)v106[1] + 2) = v115;
      v106[1] = v12;
      *((_QWORD *)v11 + 1) = v10;
      *(_QWORD *)v11 = 0LL;
      ++v105;
      if ( *((_QWORD *)&v104 + 1) )
        **((_QWORD **)&v104 + 1) = v11;
      else
        *(_QWORD *)&v104 = v11;
      *((_QWORD *)&v104 + 1) = v11;
      v115 = 0LL;
    }
    if ( !*((_DWORD *)v4 + 18) )
    {
      v6 = 1;
      v101 = 1;
      InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
      if ( fPending )
      {
        ftLastWriteTime = (struct _FILETIME)&`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
        Context = &qword_140086158;
        qword_140086158 = (__int64)&AudioDgTelemetryProvider::`vftable';
        qword_140086170 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
        v110 = 0;
        wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&ftLastWriteTime, v89, v90);
      }
      if ( !*((_QWORD *)Context + 1) )
        goto LABEL_148;
      InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &v102, (LPVOID *)&lpsz);
      if ( v102 )
      {
        ftLastWriteTime = (struct _FILETIME)&`AudioDgTelemetryProvider::Instance'::`2'::wrapper;
        lpsz = (LPOLESTR)&qword_140086158;
        qword_140086158 = (__int64)&AudioDgTelemetryProvider::`vftable';
        qword_140086170 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
        v110 = 0;
        wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(&ftLastWriteTime, v91, v92);
      }
      v13 = *((_QWORD *)lpsz + 1);
      if ( *(_DWORD *)v13 > 4u
        && (*(_QWORD *)(v13 + 16) & 0x400000000000LL) != 0
        && (*(_QWORD *)(v13 + 24) & 0x400000000000LL) == *(_QWORD *)(v13 + 24) )
      {
        v7 = 1;
        v99 = 1;
      }
      else
      {
LABEL_148:
        v7 = v99;
      }
    }
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= *((_DWORD *)v4 + 24) )
      {
        if ( v6 )
        {
          pclsid = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          v39 = CAPOProcessNode::CreateAPOProcessNode(
                  &GUID_d69e0717_dd4b_4b25_997a_da813833b8ac,
                  *((_DWORD *)v4 + 18),
                  1,
                  0,
                  (__int128 *)&pclsid,
                  &v100);
          if ( v39 < 0 )
          {
            v120 = v39;
            throw (long *)&v120;
          }
          v40 = *((_QWORD *)&v104 + 1);
          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(&v104);
          v41 = v106[1];
          ftLastWriteTime = (struct _FILETIME)v106[1];
          v42 = *(struct ATL::CAtlPlex **)v106[1];
          *((_QWORD *)v106[1] + 2) = v100;
          v106[1] = v42;
          *((_QWORD *)v41 + 1) = v40;
          *(_QWORD *)v41 = 0LL;
          ++v105;
          if ( *((_QWORD *)&v104 + 1) )
            **((_QWORD **)&v104 + 1) = v41;
          else
            *(_QWORD *)&v104 = v41;
          *((_QWORD *)&v104 + 1) = v41;
          v100 = 0LL;
        }
        if ( v7 )
        {
          pclsid = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          v43 = CAPOProcessNode::CreateAPOProcessNode(
                  &GUID_693badea_1eb1_4013_b799_285f624a55bd,
                  *((_DWORD *)v4 + 18),
                  1,
                  0,
                  (__int128 *)&pclsid,
                  &v100);
          if ( v43 < 0 )
          {
            v121 = v43;
            throw (long *)&v121;
          }
          v44 = *((_QWORD *)&v104 + 1);
          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(&v104);
          v45 = v106[1];
          ftLastWriteTime = (struct _FILETIME)v106[1];
          v46 = *(struct ATL::CAtlPlex **)v106[1];
          *((_QWORD *)v106[1] + 2) = v100;
          v106[1] = v46;
          *((_QWORD *)v45 + 1) = v44;
          *(_QWORD *)v45 = 0LL;
          ++v105;
          if ( *((_QWORD *)&v104 + 1) )
            **((_QWORD **)&v104 + 1) = v45;
          else
            *(_QWORD *)&v104 = v45;
          *((_QWORD *)&v104 + 1) = v45;
          v100 = 0LL;
        }
        v47 = CDeviceProcessNode::CreateDeviceProcessNode(v4, &v113);
        if ( v47 < 0 )
        {
          v122 = v47;
          throw (long *)&v122;
        }
        v48 = *((_QWORD *)&v104 + 1);
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(&v104);
        v49 = v106[1];
        ftLastWriteTime = (struct _FILETIME)v106[1];
        v50 = *(struct ATL::CAtlPlex **)v106[1];
        *((_QWORD *)v106[1] + 2) = v113;
        v106[1] = v50;
        *((_QWORD *)v49 + 1) = v48;
        *(_QWORD *)v49 = 0LL;
        ++v105;
        if ( *((_QWORD *)&v104 + 1) )
          **((_QWORD **)&v104 + 1) = v49;
        else
          *(_QWORD *)&v104 = v49;
        *((_QWORD *)&v104 + 1) = v49;
        v113 = 0LL;
        v51 = (CPipeInstance *)operator new(0x130uLL);
        if ( v51 )
          v52 = CPipeInstance::CPipeInstance(v51, READ_DATA_PIPE);
        else
          v52 = 0LL;
        v127 = v52;
        if ( !v52 )
        {
          v123 = -2147024882;
          throw (long *)&v123;
        }
        *((_OWORD *)v52 + 18) = *(_OWORD *)((char *)v4 + 148);
        *((_DWORD *)v52 + 3) = *((_DWORD *)v4 + 18);
        *((_DWORD *)v52 + 32) = *((_DWORD *)v4 + 20) != 0;
        *((_DWORD *)v52 + 31) = *((_DWORD *)v4 + 25) == 1;
        v53 = v129;
        if ( *((struct IAudioProcessor **)v52 + 18) != v129 )
        {
          if ( v129 )
            (*(void (__fastcall **)(struct IAudioProcessor *))(*(_QWORD *)v129 + 8LL))(v129);
          v54 = *((_QWORD *)v52 + 18);
          if ( v54 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
          *((_QWORD *)v52 + 18) = v53;
        }
        v55 = v130;
        if ( *((struct IDeviceGraphObjectCache **)v52 + 29) != v130 )
        {
          if ( v130 )
            (*(void (__fastcall **)(struct IDeviceGraphObjectCache *))(*(_QWORD *)v130 + 8LL))(v130);
          v56 = *((_QWORD *)v52 + 29);
          if ( v56 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
          *((_QWORD *)v52 + 29) = v55;
        }
        v57 = *((_QWORD *)&v104 + 1);
        v58 = -1LL;
        while ( v57 )
        {
          v59 = v57;
          v57 = *(_QWORD *)(v57 + 8);
          v60 = *((_QWORD *)v52 + 2);
          if ( !*((_QWORD *)v52 + 6) )
          {
            v64 = *((unsigned int *)v52 + 14);
            if ( *((_DWORD *)v52 + 14) )
            {
              if ( 0xFFFFFFFFFFFFFFFFuLL / v64 < 0x18 )
                goto LABEL_192;
              v65 = 24 * v64;
            }
            else
            {
              v65 = 0LL;
            }
            if ( (unsigned __int64)~v65 < 8 || (v66 = malloc(v65 + 8)) == 0LL )
LABEL_192:
              ATL::AtlThrowImpl(-2147024882);
            *v66 = *((_QWORD *)v52 + 5);
            *((_QWORD *)v52 + 5) = v66;
            v67 = *((_DWORD *)v52 + 14);
            v68 = &v66[2 * (v67 - 1) + 1 + (unsigned int)(v67 - 1)];
            for ( i = v67 - 1; i >= 0; --i )
            {
              *v68 = *((_QWORD *)v52 + 6);
              *((_QWORD *)v52 + 6) = v68;
              v68 -= 3;
            }
          }
          v61 = (__int64 *)*((_QWORD *)v52 + 6);
          ftLastWriteTime = (struct _FILETIME)v61;
          v62 = *v61;
          if ( v61 )
            v61[2] = *(_QWORD *)(v59 + 16);
          *((_QWORD *)v52 + 6) = v62;
          v61[1] = 0LL;
          *v61 = v60;
          ++*((_QWORD *)v52 + 4);
          v63 = *((_QWORD *)v52 + 2);
          if ( v63 )
            *(_QWORD *)(v63 + 8) = v61;
          else
            *((_QWORD *)v52 + 3) = v61;
          *((_QWORD *)v52 + 2) = v61;
        }
        v70 = v126;
        *((_DWORD *)v52 + 51) = *((_DWORD *)v126 + 22) != -1;
        EndpointGuidFromEndpointId = GetEndpointGuidFromEndpointId(*((_QWORD *)v70 + 7), (char *)v52 + 152);
        if ( EndpointGuidFromEndpointId < 0 )
        {
          v124 = EndpointGuidFromEndpointId;
          throw (long *)&v124;
        }
        v72 = (char *)*((_QWORD *)v70 + 7);
        do
          ++v58;
        while ( *(_WORD *)&v72[2 * v58] );
        *((_QWORD *)v52 + 23) = 0LL;
        v73 = v58 + 1;
        if ( v58 + 1 < v58 )
        {
          v76 = -2147024362;
        }
        else
        {
          *((_QWORD *)v52 + 23) = 0LL;
          if ( !is_mul_ok(v73, 2uLL) )
          {
            v75 = -2147024362;
            v76 = -2147024362;
            goto LABEL_132;
          }
          v74 = CoTaskMemAlloc(2 * v73);
          *((_QWORD *)v52 + 23) = v74;
          if ( v74 )
          {
            v75 = 0;
            v76 = 0;
            if ( v73 > 0x7FFFFFFF || v58 >= 0x7FFFFFFF )
            {
              if ( v58 != -1LL )
                *v74 = 0;
            }
            else
            {
              if ( !v72 )
              {
                v72 = (char *)&unk_14006B308;
                v58 = 0LL;
              }
              if ( v73 )
              {
                v77 = v73;
                v78 = v74;
                v79 = 0;
                v80 = 0LL;
                v81 = v58 - v73;
                v82 = v72 - (char *)v74;
                while ( v81 + v77 )
                {
                  v83 = *(_WORD *)((char *)v78 + v82);
                  if ( !v83 )
                    break;
                  *v78++ = v83;
                  ++v80;
                  if ( !--v77 )
                  {
                    --v78;
                    --v80;
                    v79 = -2147024774;
                    break;
                  }
                }
                *v78 = 0;
                v84 = v73 - v80;
                if ( v79 >= 0 && v84 > 1 && 2 * v84 > 2 )
                  memset(&v74[v80 + 1], 0, 2 * v84 - 2);
                v76 = 0;
              }
            }
LABEL_132:
            if ( v75 >= 0 )
            {
              LODWORD(v85) = (_DWORD)v126;
              v86 = (int)((float)((float)*(int *)(*((_QWORD *)v126 + 1) + 8LL)
                                / (float)*(unsigned __int16 *)(*((_QWORD *)v126 + 1) + 12LL))
                        * (double)(int)*((_QWORD *)v126 + 4)
                        / 10000000.0
                        + 0.5);
              *((_DWORD *)v52 + 35) = v86;
              if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              {
                WPP_SF_D(
                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                  11LL,
                  &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids,
                  v86);
              }
              goto LABEL_219;
            }
          }
          else
          {
            v76 = -2147024882;
          }
        }
        v125 = v76;
        throw (long *)&v125;
      }
      v15 = *((_DWORD *)v4 + 20) & (1 << v14);
      v16 = *((_DWORD *)v4 + 23);
      if ( !v15 )
        goto LABEL_25;
      if ( *((_DWORD *)v4 + 22) == v14 )
      {
        if ( v6 )
        {
          v112 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          v93 = CAPOProcessNode::CreateAPOProcessNode(
                  &GUID_d69e0717_dd4b_4b25_997a_da813833b8ac,
                  *((_DWORD *)v4 + 18),
                  1,
                  0,
                  (__int128 *)&v112,
                  &v100);
          if ( v93 < 0 )
          {
            v117 = v93;
            throw (long *)&v117;
          }
          *(_QWORD *)&v112.Data1 = v100;
          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v104, &v112);
          v100 = 0LL;
          v101 = 0;
        }
        if ( v7 )
        {
          v112 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          v94 = CAPOProcessNode::CreateAPOProcessNode(
                  &GUID_693badea_1eb1_4013_b799_285f624a55bd,
                  *((_DWORD *)v4 + 18),
                  1,
                  0,
                  (__int128 *)&v112,
                  &v100);
          if ( v94 < 0 )
          {
            v118 = v94;
            throw (long *)&v118;
          }
          *(_QWORD *)&v112.Data1 = v100;
          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v104, &v112);
          v100 = 0LL;
          v99 = 0;
        }
      }
      if ( v16 != v14 )
        v17 = (GUID *)((char *)v4 + 120);
      else
LABEL_25:
        v17 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      if ( v15 )
      {
        if ( v16 == v14 )
          fPending = 3;
        else
          fPending = 2;
      }
      else
      {
        fPending = 0;
      }
      v18 = *v17;
      Data1 = *((_DWORD *)v4 + 18);
      v112.Data1 = Data1;
      v20 = (const struct _GUID *)((char *)v4 + 16 * v14 + 164);
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF__guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_a00fb4be71793c9c12457d7c93fa59d1_Traceguids, v20);
      }
      v21 = 0;
      v22 = RegOpenKeyExW(HKEY_CLASSES_ROOT, L"AudioEngine\\AudioProcessingObjects", 0, 0x20019u, &hKey);
      Common = v22;
      if ( v22 )
      {
        if ( v22 > 0 )
          Common = (unsigned __int16)v22 | 0x80070000;
      }
      else
      {
        v24 = 0;
        do
        {
          v25 = hKey;
          lpsz = 0LL;
          v21 = 0;
          v102 = 512;
          v26 = RegEnumKeyExW(hKey, v24, Name, (LPDWORD)&v102, 0LL, 0LL, 0LL, &ftLastWriteTime);
          if ( !v26 || v26 == 234 )
          {
            Common = StringFromCLSID(v20, &lpsz);
            if ( Common >= 0 && !wcsicmp(Name, lpsz) )
            {
              v34 = RegOpenKeyExW(v25, Name, 0, 0x20019u, (PHKEY)&Context);
              Common = v34;
              if ( v34 )
              {
                if ( v34 > 0 )
                  Common = (unsigned __int16)v34 | 0x80070000;
              }
              else
              {
                Common = InnerGetCommon((HKEY)Context, v20, &v140);
                if ( Common >= 0 )
                {
                  v140.u32NumAPOInterfaces = 1;
                  v102 = 1024;
                  v35 = RegQueryValueExW((HKEY)Context, L"APOInterface0", 0LL, &Type, (LPBYTE)Name, (LPDWORD)&v102);
                  Common = v35;
                  if ( v35 )
                  {
                    if ( v35 > 0 )
                      Common = (unsigned __int16)v35 | 0x80070000;
                  }
                  else
                  {
                    Common = CLSIDFromString(Name, &pclsid);
                    if ( Common >= 0 )
                    {
                      v140.iidAPOInterfaceList[0] = pclsid;
                      v36 = (CLSID *)&v135;
                      v37 = &v140;
                      v38 = 8LL;
                      do
                      {
                        *v36 = v37->clsid;
                        v36[1] = *(CLSID *)&v37->Flags;
                        v36[2] = *(CLSID *)&v37->szFriendlyName[6];
                        v36[3] = *(CLSID *)&v37->szFriendlyName[14];
                        v36[4] = *(CLSID *)&v37->szFriendlyName[22];
                        v36[5] = *(CLSID *)&v37->szFriendlyName[30];
                        v36[6] = *(CLSID *)&v37->szFriendlyName[38];
                        v36 += 8;
                        v36[-1] = *(CLSID *)&v37->szFriendlyName[46];
                        v37 = (struct APO_REG_PROPERTIES *)((char *)v37 + 128);
                        --v38;
                      }
                      while ( v38 );
                      *v36 = v37->clsid;
                      v36[1] = *(CLSID *)&v37->Flags;
                      v36[2] = *(CLSID *)&v37->szFriendlyName[6];
                      v36[3] = *(CLSID *)&v37->szFriendlyName[14];
                      v36[4].Data1 = *(_DWORD *)&v37->szFriendlyName[22];
                      v21 = 1;
                    }
                  }
                }
                RegCloseKey((HKEY)Context);
              }
            }
          }
          else
          {
            Common = -2005139398;
          }
          if ( lpsz )
          {
            CoTaskMemFree(lpsz);
            lpsz = 0LL;
          }
          if ( Common < 0 )
            break;
          ++v24;
        }
        while ( !v21 );
        RegCloseKey(hKey);
        Data1 = v112.Data1;
      }
      if ( Common >= 0 )
      {
        if ( !v21 )
          Common = -2005139430;
        if ( Common >= 0 )
        {
          if ( v138 == 1 && v137 == 1 )
          {
            v27 = (struct ATL::CAtlPlex *)operator new(0x38uLL);
            v28 = v27;
            if ( v27 )
            {
              *((_QWORD *)v27 + 1) = 0LL;
              *((_QWORD *)v27 + 2) = 0LL;
              *((_DWORD *)v27 + 6) = Data1;
              *((_QWORD *)v27 + 4) = 0LL;
              *((_DWORD *)v27 + 10) = 2;
              *(_QWORD *)v27 = &CAPOProcessNode::`vftable';
              *((_DWORD *)v27 + 12) = v136;
            }
            else
            {
              v28 = 0LL;
            }
            if ( v28 )
            {
              v29 = (char *)operator new(0x38uLL);
              if ( v29 )
              {
                *((_QWORD *)v29 + 5) = 0LL;
                *((_DWORD *)v29 + 12) = 1;
                *(_DWORD *)v29 = 0;
                *((_DWORD *)v29 + 1) = fPending;
                *(_OWORD *)(v29 + 8) = v135;
                *(GUID *)(v29 + 24) = v18;
                v30 = v28;
                v100 = v28;
                *((_QWORD *)v28 + 4) = v29;
                goto LABEL_54;
              }
            }
            Common = -2147024882;
            if ( v28 )
              (**(void (__fastcall ***)(struct ATL::CAtlPlex *, __int64))v28)(v28, 1LL);
          }
          else
          {
            Common = -2005139401;
          }
        }
      }
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          19LL,
          &WPP_a00fb4be71793c9c12457d7c93fa59d1_Traceguids,
          (unsigned int)Common);
      }
      AudDGTraceLoggingErrorHelper("CAPOProcessNode::CreateAPOProcessNode", 0x222u, Common);
      v30 = v100;
LABEL_54:
      if ( Common < 0 )
      {
        v119 = Common;
        throw (long *)&v119;
      }
      v31 = *((_QWORD *)&v104 + 1);
      j = v106[1];
      if ( !v106[1] )
      {
        v95 = ATL::CAtlPlex::Create(v106, (unsigned int)v107, 0x18uLL);
        if ( !v95 )
          ATL::AtlThrowImpl(-2147024882);
        v96 = (unsigned int)(v107 - 1);
        v97 = (struct ATL::CAtlPlex *)((char *)v95 + 16 * v96 + 8 * v96 + 8);
        for ( j = v106[1]; (int)v96 >= 0; LODWORD(v96) = v96 - 1 )
        {
          *(_QWORD *)v97 = j;
          j = v97;
          v106[1] = v97;
          v97 = (struct ATL::CAtlPlex *)((char *)v97 - 24);
        }
      }
      v100 = j;
      v33 = *(struct ATL::CAtlPlex **)j;
      *((_QWORD *)j + 2) = v30;
      v106[1] = v33;
      *((_QWORD *)j + 1) = v31;
      *(_QWORD *)j = 0LL;
      ++v105;
      if ( *((_QWORD *)&v104 + 1) )
        **((_QWORD **)&v104 + 1) = j;
      else
        *(_QWORD *)&v104 = j;
      *((_QWORD *)&v104 + 1) = j;
      v100 = 0LL;
      ++v14;
      v4 = v126;
      v6 = v101;
      v7 = v99;
    }
  }
  catch ( long *v133 )
  {
    v85 = v98;
    v101 = *(_DWORD *)v133;
    v75 = v101;
    v52 = v127;
    v5 = v113;
  }
  catch ( ATL::CAtlException *v134 )
  {
    v85 = v98;
    v101 = *(_DWORD *)v134;
    v75 = v101;
    v52 = v127;
    v5 = v113;
  }
LABEL_219:
  if ( v75 < 0 )
  {
    if ( v115 )
      (**v115)(v115, 1LL);
    if ( v100 )
      (**(void (__fastcall ***)(struct ATL::CAtlPlex *, __int64))v100)(v100, 1LL);
    if ( v5 )
      (**(void (__fastcall ***)(struct CDeviceProcessNode *, __int64))v5)(v5, 1LL);
    if ( v52 )
      CPipeInstance::`scalar deleting destructor'(v52, (unsigned int)v85);
    else
      CleanupProcessNodeList(&v104);
  }
  else
  {
    *v131 = v52;
  }
  v87 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      12LL,
      &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids,
      (unsigned int)v75);
    v87 = WPP_GLOBAL_Control;
  }
  if ( v75 < 0 )
  {
    if ( v87 != &WPP_GLOBAL_Control && (*((_DWORD *)v87 + 7) & 0x20000) != 0 && *((_BYTE *)v87 + 25) >= 2u )
      WPP_SF_D(v87[2], 13LL, &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids, (unsigned int)v75);
    AudDGTraceLoggingErrorHelper("CPipeInstance::CreateDevicePipeInstance", 0x11Fu, v75);
  }
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll(&v104);
  return (unsigned int)v75;
}
