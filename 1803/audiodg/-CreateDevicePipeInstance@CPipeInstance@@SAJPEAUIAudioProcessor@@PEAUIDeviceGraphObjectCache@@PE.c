/*
 * XREFs of ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x1400115D0
 * Callers:
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000EB40 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x140001970 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140001C78 (-CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140002F60 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x140007D20 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?GetFreeNode@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXXZ @ 0x140007DC0 (-GetFreeNode@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXX.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x140007EE4 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ??0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z @ 0x14000CBF0 (--0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x14000FBD0 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x140010660 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x14001A700 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     _TlgKeywordOn @ 0x14001B050 (_TlgKeywordOn.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001C338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x14001D6E1 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x14002F3F4 (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140033DE8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x140034B74 (WPP_SF_.c)
 *     WPP_SF_D @ 0x140034C3C (WPP_SF_D.c)
 *     ?CleanupProcessNodeList@@YAXAEAV?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@@Z @ 0x14003D918 (-CleanupProcessNodeList@@YAXAEAV-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140043450 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPipeInstance::CreateDevicePipeInstance(__int64 a1, __int64 a2, __int64 a3, CPipeInstance **a4)
{
  struct CDeviceProcessNode *v5; // r14
  int v6; // r12d
  int v7; // r13d
  struct ATL::CAtlPlex *v8; // rcx
  const struct tWAVEFORMATEX *v9; // rdx
  int v10; // eax
  __int64 v11; // rbx
  struct ATL::CAtlPlex *v12; // rdx
  const struct _TlgProvider_t *v13; // rcx
  unsigned int i; // ebx
  int v15; // edi
  int v16; // esi
  GUID *v17; // rax
  int v18; // r9d
  int v19; // eax
  __int64 v20; // rdi
  struct ATL::CAtlPlex *j; // rdx
  struct ATL::CAtlPlex *v22; // rcx
  int v23; // eax
  __int64 v24; // rbx
  struct ATL::CAtlPlex *v25; // rdx
  struct ATL::CAtlPlex *v26; // rcx
  int v27; // eax
  __int64 v28; // rbx
  struct ATL::CAtlPlex *v29; // rdx
  struct ATL::CAtlPlex *v30; // rcx
  int DeviceProcessNode; // eax
  __int64 v32; // rbx
  struct ATL::CAtlPlex *v33; // rdx
  struct ATL::CAtlPlex *v34; // rcx
  CPipeInstance *v35; // rax
  CPipeInstance *v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // r12
  struct ATL::CAtlPlex *v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  struct ATL::CAtlPlex *v45; // r8
  int v46; // edx
  _QWORD *v47; // rcx
  int k; // edx
  int EndpointGuidFromEndpointId; // eax
  const unsigned __int16 *v50; // rsi
  unsigned __int64 v51; // rdi
  unsigned __int64 v52; // r13
  unsigned __int128 v53; // rax
  unsigned __int16 *v54; // rax
  int v55; // r12d
  unsigned int v56; // eax
  _QWORD *v57; // rcx
  CPipeInstance **v58; // rdi
  int v60; // eax
  int v61; // eax
  struct ATL::CAtlPlex *v62; // r8
  __int64 v63; // rax
  struct ATL::CAtlPlex *v64; // rcx
  _BYTE v65[32]; // [rsp+0h] [rbp-128h] BYREF
  unsigned __int16 **v66; // [rsp+20h] [rbp-108h]
  unsigned __int64 *v67; // [rsp+28h] [rbp-100h]
  unsigned int v68; // [rsp+30h] [rbp-F8h]
  unsigned __int64 v69; // [rsp+40h] [rbp-E8h] BYREF
  __int128 v70; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v71; // [rsp+58h] [rbp-D0h]
  struct ATL::CAtlPlex *v72[2]; // [rsp+60h] [rbp-C8h] BYREF
  unsigned __int64 v73; // [rsp+70h] [rbp-B8h]
  struct CDeviceProcessNode *v74; // [rsp+78h] [rbp-B0h] BYREF
  void (__fastcall ***v75)(_QWORD, __int64); // [rsp+80h] [rbp-A8h] BYREF
  unsigned __int16 *v76[2]; // [rsp+90h] [rbp-98h] BYREF
  int pExceptionObject; // [rsp+A0h] [rbp-88h] BYREF
  int v78; // [rsp+A4h] [rbp-84h] BYREF
  int v79; // [rsp+A8h] [rbp-80h] BYREF
  int v80; // [rsp+ACh] [rbp-7Ch] BYREF
  int v81; // [rsp+B0h] [rbp-78h] BYREF
  int v82; // [rsp+B4h] [rbp-74h] BYREF
  int v83; // [rsp+B8h] [rbp-70h] BYREF
  int v84; // [rsp+BCh] [rbp-6Ch] BYREF
  int v85; // [rsp+C0h] [rbp-68h] BYREF
  int v86; // [rsp+C4h] [rbp-64h] BYREF
  CPipeInstance *v87; // [rsp+C8h] [rbp-60h]
  __int64 v88; // [rsp+D0h] [rbp-58h]
  long *v89; // [rsp+D8h] [rbp-50h] BYREF
  ATL::CAtlException *v90; // [rsp+E0h] [rbp-48h] BYREF
  struct ATL::CAtlPlex *v93; // [rsp+140h] [rbp+18h] BYREF
  CPipeInstance **v94; // [rsp+148h] [rbp+20h]

  v94 = a4;
  v88 = -2LL;
  v5 = 0LL;
  v74 = 0LL;
  v87 = 0LL;
  v69 = 0LL;
  v75 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  *(_OWORD *)v72 = 0LL;
  LODWORD(v73) = 10;
  v6 = 0;
  v7 = 0;
  v8 = (struct ATL::CAtlPlex *)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_0100469152753b0964101f667eb0634c_Traceguids);
  }
  try
  {
    v9 = *(const struct tWAVEFORMATEX **)(a3 + 24);
    if ( v9 )
    {
      v10 = CProcessNode::CreateDummyProcessNode(*(_DWORD *)(a3 + 72), v9, &v75);
      if ( v10 < 0 )
      {
        pExceptionObject = v10;
        throw (long *)&pExceptionObject;
      }
      v11 = *((_QWORD *)&v70 + 1);
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode((__int64)&v70);
      v12 = v72[1];
      v93 = v72[1];
      v8 = *(struct ATL::CAtlPlex **)v72[1];
      *((_QWORD *)v72[1] + 2) = v75;
      v72[1] = v8;
      *((_QWORD *)v12 + 1) = v11;
      *(_QWORD *)v12 = 0LL;
      ++v71;
      if ( *((_QWORD *)&v70 + 1) )
        **((_QWORD **)&v70 + 1) = v12;
      else
        *(_QWORD *)&v70 = v12;
      *((_QWORD *)&v70 + 1) = v12;
      v75 = 0LL;
    }
    if ( !*(_DWORD *)(a3 + 72) )
    {
      v6 = 1;
      v13 = (const struct _TlgProvider_t *)wil::details::static_lazy<AudioDgTelemetryProvider>::get(
                                             (__int64)v8,
                                             lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)[1];
      if ( v13 )
      {
        if ( *(_DWORD *)v13 > 4u && TlgKeywordOn(v13, 0x400000000000uLL) )
          v7 = 1;
      }
    }
    for ( i = 0; i < *(_DWORD *)(a3 + 96); ++i )
    {
      v15 = *(_DWORD *)(a3 + 80) & (1 << i);
      v16 = *(_DWORD *)(a3 + 92);
      if ( !v15 )
        goto LABEL_19;
      if ( *(_DWORD *)(a3 + 88) == i )
      {
        if ( v6 )
        {
          *(GUID *)v76 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          v60 = CAPOProcessNode::CreateAPOProcessNode(
                  &GUID_d69e0717_dd4b_4b25_997a_da813833b8ac,
                  *(_DWORD *)(a3 + 72),
                  1,
                  0,
                  (__int128 *)v76,
                  &v69);
          if ( v60 < 0 )
          {
            v78 = v60;
            throw (long *)&v78;
          }
          v93 = (struct ATL::CAtlPlex *)v69;
          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 **)&v70, (__int64 *)&v93);
          v69 = 0LL;
          v6 = 0;
        }
        if ( v7 )
        {
          *(GUID *)v76 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          v61 = CAPOProcessNode::CreateAPOProcessNode(
                  &GUID_693badea_1eb1_4013_b799_285f624a55bd,
                  *(_DWORD *)(a3 + 72),
                  1,
                  0,
                  (__int128 *)v76,
                  &v69);
          if ( v61 < 0 )
          {
            v79 = v61;
            throw (long *)&v79;
          }
          v93 = (struct ATL::CAtlPlex *)v69;
          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 **)&v70, (__int64 *)&v93);
          v69 = 0LL;
          v7 = 0;
        }
      }
      if ( v16 != i )
        v17 = (GUID *)(a3 + 120);
      else
LABEL_19:
        v17 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      if ( v15 )
      {
        if ( v16 == i )
          v18 = 3;
        else
          v18 = 2;
      }
      else
      {
        v18 = 0;
      }
      *(GUID *)v76 = *v17;
      v19 = CAPOProcessNode::CreateAPOProcessNode(
              (const struct _GUID *)(16LL * i + a3 + 168),
              *(_DWORD *)(a3 + 72),
              0,
              v18,
              (__int128 *)v76,
              &v69);
      if ( v19 < 0 )
      {
        v80 = v19;
        throw (long *)&v80;
      }
      v20 = *((_QWORD *)&v70 + 1);
      j = v72[1];
      if ( !v72[1] )
      {
        v62 = ATL::CAtlPlex::Create(v72, (unsigned int)v73, 0x18uLL);
        if ( !v62 )
          ATL::AtlThrowImpl(-2147024882);
        v63 = (unsigned int)(v73 - 1);
        v64 = (struct ATL::CAtlPlex *)((char *)v62 + 16 * v63 + 8 * v63 + 8);
        for ( j = v72[1]; (int)v63 >= 0; LODWORD(v63) = v63 - 1 )
        {
          *(_QWORD *)v64 = j;
          j = v64;
          v72[1] = v64;
          v64 = (struct ATL::CAtlPlex *)((char *)v64 - 24);
        }
      }
      v93 = j;
      v22 = *(struct ATL::CAtlPlex **)j;
      *((_QWORD *)j + 2) = v69;
      v72[1] = v22;
      *((_QWORD *)j + 1) = v20;
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
      *(GUID *)v76 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v23 = CAPOProcessNode::CreateAPOProcessNode(
              &GUID_d69e0717_dd4b_4b25_997a_da813833b8ac,
              *(_DWORD *)(a3 + 72),
              1,
              0,
              (__int128 *)v76,
              &v69);
      if ( v23 < 0 )
      {
        v81 = v23;
        throw (long *)&v81;
      }
      v24 = *((_QWORD *)&v70 + 1);
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode((__int64)&v70);
      v25 = v72[1];
      v93 = v72[1];
      v26 = *(struct ATL::CAtlPlex **)v72[1];
      *((_QWORD *)v72[1] + 2) = v69;
      v72[1] = v26;
      *((_QWORD *)v25 + 1) = v24;
      *(_QWORD *)v25 = 0LL;
      ++v71;
      if ( *((_QWORD *)&v70 + 1) )
        **((_QWORD **)&v70 + 1) = v25;
      else
        *(_QWORD *)&v70 = v25;
      *((_QWORD *)&v70 + 1) = v25;
      v69 = 0LL;
    }
    if ( v7 )
    {
      *(GUID *)v76 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v27 = CAPOProcessNode::CreateAPOProcessNode(
              &GUID_693badea_1eb1_4013_b799_285f624a55bd,
              *(_DWORD *)(a3 + 72),
              1,
              0,
              (__int128 *)v76,
              &v69);
      if ( v27 < 0 )
      {
        v82 = v27;
        throw (long *)&v82;
      }
      v28 = *((_QWORD *)&v70 + 1);
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode((__int64)&v70);
      v29 = v72[1];
      v93 = v72[1];
      v30 = *(struct ATL::CAtlPlex **)v72[1];
      *((_QWORD *)v72[1] + 2) = v69;
      v72[1] = v30;
      *((_QWORD *)v29 + 1) = v28;
      *(_QWORD *)v29 = 0LL;
      ++v71;
      if ( *((_QWORD *)&v70 + 1) )
        **((_QWORD **)&v70 + 1) = v29;
      else
        *(_QWORD *)&v70 = v29;
      *((_QWORD *)&v70 + 1) = v29;
      v69 = 0LL;
    }
    DeviceProcessNode = CDeviceProcessNode::CreateDeviceProcessNode(
                          (struct AUDIO_DEVICE_PIPE_DESCRIPTOR *)a3,
                          (struct IAudioMediaType ***)&v74);
    if ( DeviceProcessNode < 0 )
    {
      v83 = DeviceProcessNode;
      throw (long *)&v83;
    }
    v32 = *((_QWORD *)&v70 + 1);
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode((__int64)&v70);
    v33 = v72[1];
    v93 = v72[1];
    v34 = *(struct ATL::CAtlPlex **)v72[1];
    *((_QWORD *)v72[1] + 2) = v74;
    v72[1] = v34;
    *((_QWORD *)v33 + 1) = v32;
    *(_QWORD *)v33 = 0LL;
    ++v71;
    if ( *((_QWORD *)&v70 + 1) )
      **((_QWORD **)&v70 + 1) = v33;
    else
      *(_QWORD *)&v70 = v33;
    *((_QWORD *)&v70 + 1) = v33;
    v74 = 0LL;
    v35 = (CPipeInstance *)operator new(0x138uLL, (const struct std::nothrow_t *)&std::nothrow);
    v93 = v35;
    if ( v35 )
      v36 = CPipeInstance::CPipeInstance(v35, READ_DATA_PIPE);
    else
      v36 = 0LL;
    v87 = v36;
    if ( !v36 )
    {
      v84 = -2147024882;
      throw (long *)&v84;
    }
    *((_OWORD *)v36 + 18) = *(_OWORD *)(a3 + 152);
    *((_DWORD *)v36 + 3) = *(_DWORD *)(a3 + 72);
    *((_DWORD *)v36 + 32) = *(_DWORD *)(a3 + 80) != 0;
    *((_DWORD *)v36 + 31) = *(_DWORD *)(a3 + 100) == 1;
    v37 = *((_QWORD *)v36 + 18);
    if ( v37 != a1 )
    {
      if ( a1 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
        v37 = *((_QWORD *)v36 + 18);
      }
      if ( v37 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
      *((_QWORD *)v36 + 18) = a1;
    }
    v38 = *((_QWORD *)v36 + 29);
    if ( v38 != a2 )
    {
      if ( a2 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
        v38 = *((_QWORD *)v36 + 29);
      }
      if ( v38 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
      *((_QWORD *)v36 + 29) = a2;
    }
    v39 = *((_QWORD *)&v70 + 1);
    while ( v39 )
    {
      v40 = v39;
      v39 = *(_QWORD *)(v39 + 8);
      v41 = *((_QWORD *)v36 + 2);
      if ( !*((_QWORD *)v36 + 6) )
      {
        v45 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)v36 + 5, *((unsigned int *)v36 + 14), 0x18uLL);
        if ( !v45 )
          ATL::AtlThrowImpl(-2147024882);
        v46 = *((_DWORD *)v36 + 14);
        v47 = (_QWORD *)((char *)v45 + 16 * (v46 - 1) + 8 * (unsigned int)(v46 - 1) + 8);
        for ( k = v46 - 1; k >= 0; --k )
        {
          *v47 = *((_QWORD *)v36 + 6);
          *((_QWORD *)v36 + 6) = v47;
          v47 -= 3;
        }
      }
      v42 = (struct ATL::CAtlPlex *)*((_QWORD *)v36 + 6);
      v93 = v42;
      v43 = *(_QWORD *)v42;
      *((_QWORD *)v42 + 2) = *(_QWORD *)(v40 + 16);
      *((_QWORD *)v36 + 6) = v43;
      *((_QWORD *)v42 + 1) = 0LL;
      *(_QWORD *)v42 = v41;
      ++*((_QWORD *)v36 + 4);
      v44 = *((_QWORD *)v36 + 2);
      if ( v44 )
        *(_QWORD *)(v44 + 8) = v42;
      else
        *((_QWORD *)v36 + 3) = v42;
      *((_QWORD *)v36 + 2) = v42;
    }
    *((_DWORD *)v36 + 51) = *(_DWORD *)(a3 + 88) != -1;
    *((_DWORD *)v36 + 76) = *(_DWORD *)(a3 + 148);
    EndpointGuidFromEndpointId = GetEndpointGuidFromEndpointId(*(_QWORD *)(a3 + 56), (char *)v36 + 152);
    if ( EndpointGuidFromEndpointId < 0 )
    {
      v85 = EndpointGuidFromEndpointId;
      throw (long *)&v85;
    }
    v50 = *(const unsigned __int16 **)(a3 + 56);
    v51 = -1LL;
    do
      ++v51;
    while ( v50[v51] );
    *((_QWORD *)v36 + 23) = 0LL;
    v52 = v51 + 1;
    if ( v51 + 1 < v51 )
    {
      v55 = -2147024362;
    }
    else
    {
      *((_QWORD *)v36 + 23) = 0LL;
      v53 = v52 * (unsigned __int128)2uLL;
      if ( is_mul_ok(v52, 2uLL) )
      {
        v54 = (unsigned __int16 *)CoTaskMemAlloc(2 * v52);
        *((_QWORD *)v36 + 23) = v54;
        if ( !v54 )
        {
          v55 = -2147024882;
          goto LABEL_125;
        }
        v55 = 0;
        StringCchCopyNExW(v54, v51 + 1, v50, v51, v66, v67, v68);
      }
      else
      {
        v55 = -2147024362;
      }
      if ( v55 >= 0 )
      {
        v56 = (int)((float)((float)*(int *)(*(_QWORD *)(a3 + 8) + 8LL)
                          / (float)*(unsigned __int16 *)(*(_QWORD *)(a3 + 8) + 12LL))
                  * (double)(int)*(_QWORD *)(a3 + 32)
                  / 10000000.0
                  + 0.5);
        *((_DWORD *)v36 + 35) = v56;
        v57 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_0100469152753b0964101f667eb0634c_Traceguids, v56);
          v57 = WPP_GLOBAL_Control;
        }
        goto LABEL_144;
      }
    }
LABEL_125:
    v86 = v55;
    throw (long *)&v86;
  }
  catch ( long *v89 )
  {
    *((_QWORD *)&v53 + 1) = v65;
    LODWORD(v93) = *(_DWORD *)v89;
    v57 = WPP_GLOBAL_Control;
    v55 = (int)v93;
    v36 = v87;
    v5 = v74;
  }
  catch ( ATL::CAtlException *v90 )
  {
    *((_QWORD *)&v53 + 1) = v65;
    LODWORD(v93) = *(_DWORD *)v90;
    v57 = WPP_GLOBAL_Control;
    v55 = (int)v93;
    v36 = v87;
    v5 = v74;
  }
LABEL_144:
  if ( v55 < 0 )
  {
    if ( v75 )
      (**v75)(v75, 1LL);
    if ( v69 )
      (**(void (__fastcall ***)(unsigned __int64, __int64))v69)(v69, 1LL);
    if ( v5 )
      (**(void (__fastcall ***)(struct CDeviceProcessNode *, __int64))v5)(v5, 1LL);
    if ( v36 )
      CPipeInstance::`scalar deleting destructor'(v36, DWORD2(v53));
    else
      CleanupProcessNodeList(&v70);
    goto LABEL_82;
  }
  v58 = v94;
  if ( v36 != *v94 )
  {
    if ( *v94 )
      CPipeInstance::`scalar deleting destructor'(*v94, DWORD2(v53));
    *v58 = v36;
LABEL_82:
    v57 = WPP_GLOBAL_Control;
  }
  if ( v57 != &WPP_GLOBAL_Control && (*((_DWORD *)v57 + 7) & 0x20000) != 0 && *((_BYTE *)v57 + 25) >= 4u )
  {
    WPP_SF_D(v57[2], 12LL, &WPP_0100469152753b0964101f667eb0634c_Traceguids, (unsigned int)v55);
    v57 = WPP_GLOBAL_Control;
  }
  if ( v55 < 0 )
  {
    if ( v57 != &WPP_GLOBAL_Control && (*((_DWORD *)v57 + 7) & 0x20000) != 0 && *((_BYTE *)v57 + 25) >= 2u )
      WPP_SF_D(v57[2], 13LL, &WPP_0100469152753b0964101f667eb0634c_Traceguids, (unsigned int)v55);
    AudDGTraceLoggingErrorHelper("CPipeInstance::CreateDevicePipeInstance", 0x124u, v55);
  }
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)&v70);
  return (unsigned int)v55;
}
