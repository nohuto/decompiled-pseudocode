/*
 * XREFs of ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400055C0
 * Callers:
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000FB00 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x14000FE00 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     ?DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z @ 0x140010740 (-DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z.c)
 *     ?ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x140010890 (-ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z.c)
 *     ?DestroyStream@CSubmixImpl@@UEAAJ_K@Z @ 0x140011370 (-DestroyStream@CSubmixImpl@@UEAAJ_K@Z.c)
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140011570 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x140011F90 (--1CSubmixImpl@@QEAA@XZ.c)
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14003EF70 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 *     AudioDGGetDeviceGraphWnfStateName @ 0x140043280 (AudioDGGetDeviceGraphWnfStateName.c)
 *     ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140044310 (-CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTE.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010310 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D298 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x14003006C (-FreeDataChain@CAtlPlex@ATL@@QEAAXXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@QEAAXXZ @ 0x140030F1C (-RemoveAll@-$CAtlList@PEAVCVirtualProtectedOutput@@V-$CElementTraits@PEAVCVirtualProtectedOutput.c)
 *     ?FreePlexes@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@AEAAXXZ @ 0x140030F84 (-FreePlexes@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElement.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031DE4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?InitHashTable@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@CpuManager@@@6@@ATL@@QEAA_NI_N@Z @ 0x140036B04 (-InitHashTable@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V-$CElementTra.c)
 *     ?PickSize@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@AEBAI_K@Z @ 0x14003735C (-PickSize@-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@A.c)
 *     ?GetValueAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEBAAEAPEAVCSystemAudioDeviceBase@@H@Z @ 0x1400389E0 (-GetValueAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSys.c)
 *     ?Rehash@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@QEAAXI@Z @ 0x140038B28 (-Rehash@-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL.c)
 *     ?FreeNode@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x140040DC8 (-FreeNode@-$CAtlList@PEAVCVirtualProtectedOutput@@V-$CElementTraits@PEAVCVirtualProtectedOutput@.c)
 *     ??_GCDisplayNode@@QEAAPEAXI@Z @ 0x14004346C (--_GCDisplayNode@@QEAAPEAXI@Z.c)
 *     ?DumpDeviceGraph@@YAJPEAVCSubmixImpl@@AEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@2@Z @ 0x140043508 (-DumpDeviceGraph@@YAJPEAVCSubmixImpl@@AEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDi.c)
 *     ?LinkDisplayNodes@@YAXAEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@0@Z @ 0x140043D4C (-LinkDisplayNodes@@YAXAEAV-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDispl.c)
 *     ?SerializeDeviceGraphs@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@PEAPEAEPEAI@Z @ 0x14004420C (-SerializeDeviceGraphs@@YAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@.c)
 */

// Hidden C++ exception states: #wind=5
void PublishDeviceGraphWnfState(void)
{
  unsigned __int64 v0; // rax
  float v1; // xmm1_4
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  float v4; // xmm1_4
  unsigned __int64 v5; // rax
  void *v6; // rbx
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx
  __int64 v9; // rcx
  int v10; // esi
  unsigned int v11; // edi
  _QWORD *ValueAt; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rcx
  int v15; // eax
  CDisplayNode *v16; // rdi
  __int64 v17; // rax
  unsigned int v18; // edx
  unsigned int v19; // r14d
  unsigned int i; // edx
  __int64 v21; // rsi
  __int64 v22; // rdi
  _QWORD *v23; // rbx
  unsigned __int64 v24; // rax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // r14d
  unsigned int j; // edx
  __int64 v29; // rsi
  __int64 v30; // rdi
  _QWORD *v31; // rbx
  unsigned __int64 v32; // rax
  unsigned int v33; // eax
  unsigned int v34; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-D0h] BYREF
  char v36; // [rsp+38h] [rbp-C8h]
  void *Block; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v38; // [rsp+48h] [rbp-B8h]
  int v39; // [rsp+50h] [rbp-B0h]
  int v40; // [rsp+54h] [rbp-ACh]
  int v41; // [rsp+58h] [rbp-A8h]
  int v42; // [rsp+5Ch] [rbp-A4h]
  unsigned __int64 v43; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v44; // [rsp+68h] [rbp-98h]
  int v45; // [rsp+70h] [rbp-90h]
  int v46; // [rsp+74h] [rbp-8Ch]
  ATL::CAtlPlex *v47; // [rsp+78h] [rbp-88h]
  __int64 v48; // [rsp+80h] [rbp-80h]
  void *v49; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v50; // [rsp+98h] [rbp-68h]
  int v51; // [rsp+A0h] [rbp-60h]
  int v52; // [rsp+A4h] [rbp-5Ch]
  int v53; // [rsp+A8h] [rbp-58h]
  int v54; // [rsp+ACh] [rbp-54h]
  unsigned __int64 v55; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v56; // [rsp+B8h] [rbp-48h]
  int v57; // [rsp+C0h] [rbp-40h]
  int v58; // [rsp+C4h] [rbp-3Ch]
  ATL::CAtlPlex *v59; // [rsp+C8h] [rbp-38h]
  __int64 v60; // [rsp+D0h] [rbp-30h]
  __int128 v61; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v62; // [rsp+F0h] [rbp-10h]
  ATL::CAtlPlex *v63[2]; // [rsp+F8h] [rbp-8h]
  int v64; // [rsp+108h] [rbp+8h]
  __int64 v65; // [rsp+110h] [rbp+10h]
  unsigned int v66; // [rsp+150h] [rbp+50h] BYREF
  void *v67; // [rsp+158h] [rbp+58h] BYREF

  v65 = -2LL;
  v61 = 0LL;
  v62 = 0LL;
  *(_OWORD *)v63 = 0LL;
  v64 = 10;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 17;
  v57 = 0;
  v58 = 10;
  v59 = 0LL;
  v60 = 0LL;
  v52 = 1061158912;
  v53 = 1048576000;
  v54 = 1074790400;
  v0 = 0LL;
  v1 = FLOAT_38_25;
  if ( 38.25 >= 9.223372e18 )
  {
    v1 = 38.25 - 9.223372e18;
    if ( (float)(38.25 - 9.223372e18) < 9.223372e18 )
      v0 = 0x8000000000000000uLL;
  }
  v2 = v0 + (unsigned int)(int)v1;
  v55 = v2;
  v3 = 0LL;
  v4 = FLOAT_4_25;
  if ( 9.223372e18 <= 4.25 )
  {
    v4 = 4.25 - 9.223372e18;
    if ( (float)(4.25 - 9.223372e18) < 9.223372e18 )
      v3 = 0x8000000000000000uLL;
  }
  v5 = v3 + (unsigned int)(int)v4;
  v56 = v5;
  if ( v5 < 0x11 )
    v56 = 0LL;
  Block = 0LL;
  v38 = 0LL;
  v39 = 17;
  v45 = 0;
  v46 = 10;
  v47 = 0LL;
  v48 = 0LL;
  v40 = 1061158912;
  v41 = 1048576000;
  v42 = 1074790400;
  v43 = v2;
  v44 = v3 + (unsigned int)(int)v4;
  if ( v5 < 0x11 )
    v44 = 0LL;
  v6 = 0LL;
  v67 = 0LL;
  if ( g_DeviceGraphWnfStateNameCreated )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)&g_CritSecSadMap;
    v36 = 0;
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    v10 = qword_14008A290;
    v11 = 0;
    if ( (int)qword_14008A290 <= 0 )
    {
LABEL_31:
      if ( v36 )
        LeaveCriticalSection(lpCriticalSection);
      lpCriticalSection = (LPCRITICAL_SECTION)&g_CritSecSubmixList;
      v36 = 0;
      ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
      v13 = (_QWORD *)SubmixList;
      if ( !SubmixList )
      {
LABEL_36:
        if ( v36 )
          LeaveCriticalSection(lpCriticalSection);
        LinkDisplayNodes(&v49, &Block);
        v15 = SerializeDeviceGraphs(&v61, &v67, &v66);
        v6 = v67;
        if ( v15 >= 0 )
          RtlPublishWnfStateData(*(_QWORD *)g_hSqmSession.Data4, 0LL, v67, v66, 0LL);
LABEL_40:
        while ( v62 )
        {
          if ( !(_QWORD)v61 )
            ATL::AtlThrowImpl(-2147467259);
          v16 = *(CDisplayNode **)(v61 + 16);
          v17 = *(_QWORD *)v61;
          *(_QWORD *)&v61 = v17;
          if ( v17 )
            *(_QWORD *)(v17 + 8) = 0LL;
          else
            v61 = 0uLL;
          ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::FreeNode(&v61);
          if ( v16 )
            CDisplayNode::`scalar deleting destructor'(v16, v18);
        }
        goto LABEL_12;
      }
      while ( 1 )
      {
        v14 = v13[2];
        v13 = (_QWORD *)*v13;
        if ( (int)DumpDeviceGraph(v14, &v61, &v49, &Block) < 0 )
          break;
        if ( !v13 )
          goto LABEL_36;
      }
    }
    else
    {
      while ( 1 )
      {
        ValueAt = (_QWORD *)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::GetValueAt(
                              v9,
                              v11);
        if ( (*(int (__fastcall **)(_QWORD, __int128 *, void **, void **))(*(_QWORD *)*ValueAt + 192LL))(
               *ValueAt,
               &v61,
               &v49,
               &Block) < 0 )
          break;
        if ( (int)++v11 >= v10 )
          goto LABEL_31;
      }
    }
    if ( v36 )
      LeaveCriticalSection(lpCriticalSection);
    goto LABEL_40;
  }
LABEL_12:
  operator delete(v6);
  ++v45;
  v7 = Block;
  if ( Block )
  {
    v19 = 0;
    for ( i = v39; v19 < i; ++v19 )
    {
      v21 = v7[v19];
      if ( v21 )
      {
        do
        {
          v22 = v21;
          v23 = (_QWORD *)(v21 + 56);
          v21 = *(_QWORD *)(v21 + 56);
          ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::RemoveAll(v22 + 8);
          *v23 = v48;
          v48 = v22;
          v24 = v38 - 1;
          v38 = v24;
          if ( v24 < v44 && !v45 )
          {
            v25 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(&Block);
            ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::Rehash(
              &Block,
              v25);
            v24 = v38;
          }
          if ( !v24 )
            ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::FreePlexes(&Block);
        }
        while ( v21 );
        i = v39;
        v7 = Block;
      }
    }
  }
  operator delete(v7);
  Block = 0LL;
  v38 = 0LL;
  if ( !v45 )
  {
    v26 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(&Block);
    ATL::CAtlMap<IUnknown *,CpuManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<CpuManager::DeviceRegistrations::ListValue>>::InitHashTable(
      &Block,
      v26,
      0LL);
  }
  v48 = 0LL;
  if ( v47 )
  {
    ATL::CAtlPlex::FreeDataChain(v47);
    v47 = 0LL;
  }
  --v45;
  ++v57;
  v8 = v49;
  if ( v49 )
  {
    v27 = 0;
    for ( j = v51; v27 < j; ++v27 )
    {
      v29 = v8[v27];
      if ( v29 )
      {
        do
        {
          v30 = v29;
          v31 = (_QWORD *)(v29 + 56);
          v29 = *(_QWORD *)(v29 + 56);
          ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::RemoveAll(v30 + 8);
          *v31 = v60;
          v60 = v30;
          v32 = v50 - 1;
          v50 = v32;
          if ( v32 < v56 && !v57 )
          {
            v33 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(&v49);
            ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::Rehash(
              &v49,
              v33);
            v32 = v50;
          }
          if ( !v32 )
            ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::FreePlexes(&v49);
        }
        while ( v29 );
        j = v51;
        v8 = v49;
      }
    }
  }
  operator delete(v8);
  v49 = 0LL;
  v50 = 0LL;
  if ( !v57 )
  {
    v34 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(&v49);
    ATL::CAtlMap<IUnknown *,CpuManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<CpuManager::DeviceRegistrations::ListValue>>::InitHashTable(
      &v49,
      v34,
      0LL);
  }
  v60 = 0LL;
  if ( v59 )
  {
    ATL::CAtlPlex::FreeDataChain(v59);
    v59 = 0LL;
  }
  --v57;
  while ( v62 )
  {
    if ( !(_QWORD)v61 )
      ATL::AtlThrowImpl(-2147467259);
    *(_QWORD *)&v61 = *(_QWORD *)v61;
    ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::FreeNode(&v61);
  }
  v61 = 0LL;
  v63[1] = 0LL;
  if ( v63[0] )
    ATL::CAtlPlex::FreeDataChain(v63[0]);
}
