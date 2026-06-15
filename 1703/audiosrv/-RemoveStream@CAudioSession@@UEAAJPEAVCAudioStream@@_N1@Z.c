/*
 * XREFs of ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N1@Z @ 0x1800148D0
 * Callers:
 *     ?FinalRelease@CVADServer@@QEAAXXZ @ 0x18001D0E0 (-FinalRelease@CVADServer@@QEAAXXZ.c)
 *     ?DestroyStream@CVADServer@@UEAAJ_K@Z @ 0x180032590 (-DestroyStream@CVADServer@@UEAAJ_K@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800029E4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z @ 0x180004700 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z.c)
 *     ?GetConnectedStreamGroup@CProcessSubmixProxy@@UEAAJPEAPEAUIStreamGroupProxy@@@Z @ 0x180007C30 (-GetConnectedStreamGroup@CProcessSubmixProxy@@UEAAJPEAPEAUIStreamGroupProxy@@@Z.c)
 *     ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18000A420 (-UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x180013D40 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?ReleaseClientReference@CAudioStream@@UEAAKXZ @ 0x180019490 (-ReleaseClientReference@CAudioStream@@UEAAKXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x1800207F0 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?SubmitWork@CAudioThreadPool@@UEAAXPEAU_TP_WORK@@@Z @ 0x180024210 (-SubmitWork@CAudioThreadPool@@UEAAXPEAU_TP_WORK@@@Z.c)
 *     ?GrowBuffer@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@AEAA_N_K@Z @ 0x18002553C (-GrowBuffer@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@AEAA_N.c)
 *     ?OnDestroyStream@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@@Z @ 0x18002B5F0 (-OnDestroyStream@CSpatialAudioResourceManager@Sarm@@UEAAXPEAUIAudioStreamInfo@@@Z.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     _invalid_parameter_noinfo @ 0x180049B5A (_invalid_parameter_noinfo.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?SetAudioHandle@CAudioStream@@QEAAJ_KPEAUIAudioDeviceGraph@@0K@Z @ 0x18007A44C (-SetAudioHandle@CAudioStream@@QEAAJ_KPEAUIAudioDeviceGraph@@0K@Z.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18007B17C (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCAudioSessionManager@@V?$CElementTraits@PEAVCAudioSessionManager@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x18007BE1C (-RemoveAt@-$CAtlArray@PEAVCAudioSessionManager@@V-$CElementTraits@PEAVCAudioSessionManager@@@ATL.c)
 *     ?Add@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioStream@@@Z @ 0x18007BEA0 (-Add@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAV.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_dq @ 0x180090B04 (WPP_SF_dq.c)
 *     WPP_SF_qq @ 0x180090D74 (WPP_SF_qq.c)
 */

__int64 __fastcall CAudioSession::RemoveStream(CAudioSession *this, struct CAudioStream *a2, char a3, char a4)
{
  char v4; // r12
  char v5; // r15
  unsigned int v6; // r14d
  __int64 v8; // rdi
  struct IAudioStreamInfo *v10; // rdx
  void (__fastcall *v11)(Sarm::CSpatialAudioResourceManager *__hidden, struct IAudioStreamInfo *); // rax
  struct IAudioDeviceGraph *v12; // r8
  unsigned int v13; // esi
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r15
  _QWORD *v20; // rcx
  __int64 (__fastcall *v21)(CAudioSession *); // rax
  struct ISubmixProxy *v22; // rdx
  struct IAudioStreamInfo *v23; // r8
  __int64 (__fastcall *v24)(CAudioResourceManager *, struct ISubmixProxy *, struct IAudioStreamInfo *); // rax
  int v25; // eax
  CProcessSubmixProxy *v26; // rcx
  int v27; // esi
  __int64 (__fastcall *v28)(CProcessSubmixProxy *, struct IStreamGroupProxy **); // rax
  __int64 v29; // r9
  __int64 (__fastcall *v30)(__int64, int, unsigned int, unsigned int); // rax
  __int64 v31; // rcx
  char *v32; // rcx
  unsigned __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  unsigned int (__fastcall *v38)(CAudioStream *__hidden); // rax
  struct _TP_WORK *v39; // rdx
  void (__fastcall *v40)(CAudioThreadPool *__hidden, struct _TP_WORK *); // rax
  const void *v42; // r9
  void *v43; // rcx
  size_t v44; // r8
  unsigned __int64 v45; // rdx
  unsigned int v46; // r15d
  unsigned __int64 v47; // rcx
  _QWORD *v48; // rsi
  __int64 v49; // rcx
  const void *v50; // r9
  void *v51; // rcx
  size_t v52; // r8
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-30h] BYREF
  char v54; // [rsp+38h] [rbp-28h]
  LPCRITICAL_SECTION v55; // [rsp+40h] [rbp-20h] BYREF
  CAudioSession *v56; // [rsp+48h] [rbp-18h]
  __int64 v57; // [rsp+50h] [rbp-10h]
  struct IStreamGroupProxy *v58; // [rsp+A0h] [rbp+40h] BYREF
  char v59; // [rsp+B0h] [rbp+50h]
  char v60; // [rsp+B8h] [rbp+58h]

  v60 = a4;
  v59 = a3;
  v4 = 0;
  v5 = a4;
  v6 = 0;
  v8 = 0LL;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 81LL, &WPP_0c5ff841e5503cc39024c97173620901_Traceguids, this, a2);
  }
  if ( g_SpatialAudioResourceManager )
  {
    if ( a2 )
      v10 = (struct CAudioStream *)((char *)a2 + 8);
    else
      v10 = 0LL;
    v11 = *(void (__fastcall **)(Sarm::CSpatialAudioResourceManager *__hidden, struct IAudioStreamInfo *))(*(_QWORD *)g_SpatialAudioResourceManager + 32LL);
    if ( v11 == Sarm::CSpatialAudioResourceManager::OnDestroyStream )
      Sarm::CSpatialAudioResourceManager::OnDestroyStream(g_SpatialAudioResourceManager, v10);
    else
      v11(g_SpatialAudioResourceManager, v10);
  }
  LOBYTE(v56) = 0;
  v55 = (LPCRITICAL_SECTION)((char *)this + 48);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v55);
  v12 = (struct IAudioDeviceGraph *)*((_QWORD *)this + 13);
  v13 = 0;
  if ( v12 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      if ( v14 >= (unsigned __int64)v12 )
        ATL::AtlThrowImpl(-2147024809);
      if ( *(struct CAudioStream **)(*((_QWORD *)this + 12) + 8 * v14) == a2 )
        break;
      v14 = ++v13;
      if ( v13 >= (unsigned __int64)v12 )
        goto LABEL_33;
    }
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      if ( (unsigned __int64)v13 >= *((_QWORD *)this + 13) )
        ATL::AtlThrowImpl(-2147024809);
      WPP_SF_dq(*((_QWORD *)WPP_GLOBAL_Control + 2), 82LL, v13, v13, *(_QWORD *)(*((_QWORD *)this + 12) + 8LL * v13));
    }
    v4 = 1;
    if ( (unsigned __int64)v13 >= *((_QWORD *)this + 13) )
      ATL::AtlThrowImpl(-2147024809);
    v15 = *((_QWORD *)this + 12);
    v16 = v13 + 1LL;
    v8 = *(_QWORD *)(v15 + 8LL * v13);
    if ( v16 < v13 || (v17 = *((_QWORD *)this + 13), v16 > v17) )
      ATL::AtlThrowImpl(-2147024809);
    v18 = v17 - v16;
    if ( v18 )
    {
      v42 = (const void *)(v15 + 8 * v16);
      v43 = (void *)(v15 + 8LL * v13);
      v44 = 8 * v18;
      if ( 8 * v18 )
      {
        if ( !v43 || !v42 )
        {
          *(_DWORD *)_o__errno(v43, v18, v44, v42) = 22;
          invalid_parameter_noinfo();
          ATL::AtlThrowImpl(-2147024809);
        }
        memmove(v43, v42, v44);
      }
    }
    --*((_QWORD *)this + 13);
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 200);
    v54 = 0;
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    v19 = *((_QWORD *)this + 31);
    if ( v19 >= *((_QWORD *)this + 32)
      && !(unsigned __int8)ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::GrowBuffer(
                             (char *)this + 240,
                             v19 + 1) )
    {
      ATL::AtlThrowImpl(-2147024882);
    }
    v20 = (_QWORD *)(*((_QWORD *)this + 30) + 8 * v19);
    if ( v20 )
      *v20 = v8;
    ++*((_QWORD *)this + 31);
    if ( v54 )
      LeaveCriticalSection(lpCriticalSection);
    --*((_DWORD *)this + 22);
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        83LL,
        &WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
        *((unsigned int *)this + 22));
    }
    v5 = v60;
  }
LABEL_33:
  if ( (_BYTE)v56 )
    LeaveCriticalSection(v55);
  if ( !v4 )
  {
    v54 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 128);
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    v45 = *((_QWORD *)this + 22);
    v46 = 0;
    if ( v45 )
    {
      v47 = 0LL;
      v48 = (_QWORD *)((char *)this + 168);
      while ( 1 )
      {
        if ( v47 >= *((_QWORD *)this + 22) )
          ATL::AtlThrowImpl(-2147024809);
        if ( *(struct CAudioStream **)(*v48 + 8 * v47) == a2 )
          break;
        v47 = ++v46;
        if ( v46 >= v45 )
          goto LABEL_92;
      }
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        if ( (unsigned __int64)v46 >= *((_QWORD *)this + 22) )
          ATL::AtlThrowImpl(-2147024809);
        WPP_SF_dq(*((_QWORD *)WPP_GLOBAL_Control + 2), 84LL, v46, v46, *(_QWORD *)(*v48 + 8LL * v46));
      }
      if ( (unsigned __int64)v46 >= *((_QWORD *)this + 22) )
        ATL::AtlThrowImpl(-2147024809);
      v8 = *(_QWORD *)(*v48 + 8LL * v46);
      v58 = (struct IStreamGroupProxy *)v8;
      ATL::CAtlArray<CAudioSessionManager *,ATL::CElementTraits<CAudioSessionManager *>>::RemoveAt((char *)this + 168);
      LOBYTE(v56) = 0;
      v55 = (LPCRITICAL_SECTION)((char *)this + 200);
      ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v55);
      ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::Add((char *)this + 240, &v58);
      if ( (_BYTE)v56 )
        LeaveCriticalSection(v55);
    }
LABEL_92:
    if ( v54 )
      LeaveCriticalSection(lpCriticalSection);
    v5 = v60;
  }
  if ( v8 )
  {
    if ( v5 )
    {
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
      v56 = this;
      v55 = (LPCRITICAL_SECTION)&CAudioStreamDestroy::`vftable';
      v57 = v8;
      CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 632));
      v21 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL);
      if ( v21 == CAudioSession::Release )
        CAudioSession::Release(this);
      else
        v21(this);
    }
    if ( v59 )
    {
      if ( *(_DWORD *)(v8 + 132) == 2 )
      {
        if ( *(_QWORD *)(v8 + 176) )
        {
          Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)(v8 + 176));
          if ( *(_QWORD *)(v8 + 176) )
            ATL::AtlComPtrAssign((struct IUnknown **)(v8 + 176), 0LL);
        }
        if ( *(_QWORD *)(v8 + 184) )
        {
          Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)(v8 + 184));
          if ( *(_QWORD *)(v8 + 184) )
            ATL::AtlComPtrAssign((struct IUnknown **)(v8 + 184), 0LL);
        }
        if ( *(_QWORD *)(v8 + 192) )
        {
          v49 = *(_QWORD *)(v8 + 192);
          if ( v49 )
          {
            *(_QWORD *)(v8 + 192) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
          }
          if ( *(_QWORD *)(v8 + 192) )
            ATL::AtlComPtrAssign((struct IUnknown **)(v8 + 192), 0LL);
        }
      }
      v22 = *(struct ISubmixProxy **)(v8 + 56);
      v23 = (struct IAudioStreamInfo *)(v8 + 8);
      v24 = *(__int64 (__fastcall **)(CAudioResourceManager *, struct ISubmixProxy *, struct IAudioStreamInfo *))(*(_QWORD *)g_AudioResourceManager + 32LL);
      if ( v24 == CAudioResourceManager::DestroyStream )
        v25 = CAudioResourceManager::DestroyStream(g_AudioResourceManager, v22, v23);
      else
        v25 = v24(g_AudioResourceManager, v22, v23);
      v26 = *(CProcessSubmixProxy **)(v8 + 56);
      v27 = v25;
      v58 = 0LL;
      v28 = *(__int64 (__fastcall **)(CProcessSubmixProxy *, struct IStreamGroupProxy **))(*(_QWORD *)v26 + 80LL);
      if ( v28 == CProcessSubmixProxy::GetConnectedStreamGroup )
        CProcessSubmixProxy::GetConnectedStreamGroup(v26, &v58);
      else
        v28(v26, &v58);
      v29 = *(unsigned int *)(v8 + 404);
      v30 = *(__int64 (__fastcall **)(__int64, int, unsigned int, unsigned int))(*(_QWORD *)v58 + 224LL);
      if ( v30 == CBaseStreamGroupProxy::UpdateStreamResourcePriority )
        CBaseStreamGroupProxy::UpdateStreamResourcePriority((__int64)v58, 2, 0xFFFFFFFF, v29);
      else
        v30((__int64)v58, 2, 0xFFFFFFFF, v29);
      if ( v58 )
        (*(void (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v58 + 16LL))(v58);
      v31 = *(_QWORD *)(v8 + 56);
      if ( v31 )
      {
        *(_QWORD *)(v8 + 56) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
      }
      *(_QWORD *)(v8 + 48) = 0LL;
      if ( v27 < 0 )
        AudSrvTraceLoggingErrorHelper("CAudioStream::CloseAudioHandle", 0x218u, v27);
      v32 = *(char **)(v8 + 512);
      if ( (unsigned __int64)(v32 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        SetEvent(v32);
    }
    else
    {
      CAudioStream::SetAudioHandle((CAudioStream *)v8, 0LL, v12, 0LL, 0xFFFFFFFF);
    }
    *(_QWORD *)(v8 + 64) = 0LL;
    v55 = (LPCRITICAL_SECTION)((char *)this + 200);
    LOBYTE(v56) = 0;
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v55);
    v33 = *((_QWORD *)this + 31);
    if ( v33 )
    {
      v34 = 0LL;
      while ( 1 )
      {
        v35 = *((_QWORD *)this + 30);
        if ( *(_QWORD *)(v35 + 8 * v34) == v8 )
          break;
        v34 = ++v6;
        if ( v6 >= v33 )
          goto LABEL_64;
      }
      v36 = v6 + 1LL;
      if ( v36 < v6 || v6 == -1LL || v36 > v33 )
        ATL::AtlThrowImpl(-2147024809);
      v37 = v33 - v36;
      if ( v37 )
      {
        v50 = (const void *)(v35 + 8 * v36);
        v51 = (void *)(v35 + 8LL * v6);
        v52 = 8 * v37;
        if ( 8 * v37 )
        {
          if ( !v51 || !v50 )
          {
            *(_DWORD *)_o__errno(v51, v37, v52, v50) = 22;
            invalid_parameter_noinfo();
            ATL::AtlThrowImpl(-2147024809);
          }
          memmove(v51, v50, v52);
        }
      }
      --*((_QWORD *)this + 31);
    }
LABEL_64:
    v38 = *(unsigned int (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)v8 + 72LL);
    if ( v38 == CAudioStream::ReleaseClientReference )
      CAudioStream::ReleaseClientReference((CAudioStream *)v8);
    else
      v38((CAudioStream *)v8);
    if ( (_BYTE)v56 )
      LeaveCriticalSection(v55);
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
    v39 = (struct _TP_WORK *)*((_QWORD *)this + 93);
    v40 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_WORK *))(*(_QWORD *)ThreadPool + 72LL);
    if ( v40 == CAudioThreadPool::SubmitWork )
      CAudioThreadPool::SubmitWork(ThreadPool, v39);
    else
      v40(ThreadPool, v39);
  }
  return 0LL;
}
