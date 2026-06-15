/*
 * XREFs of ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180034330
 * Callers:
 *     ?StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x180023500 (-StartStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180016F9C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ @ 0x18001DC30 (-UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ.c)
 *     ?AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z @ 0x18001F910 (-AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@@Z @ 0x18001F980 (-erase@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@$0A@@std@@@s.c)
 *     ?ReacquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJKAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@_KP6AX_K@Z$1?ReleaseAudioResourceHandle@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@_K$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1800228E0 (-ReacquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJKAEAV-$unique_any_t@V-$unique_s.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180031F30 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180035590 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?FinalRelease@CAudioSession@@MEAAXXZ @ 0x180047790 (-FinalRelease@CAudioSession@@MEAAXXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18006010C (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x1800980C8 (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?LogProductionAssert@@YAX_KPEBG@Z @ 0x18009BD38 (-LogProductionAssert@@YAX_KPEBG@Z.c)
 *     WPP_SF_qd @ 0x1800A1B30 (WPP_SF_qd.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A66F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_dq @ 0x1800AE2CC (WPP_SF_dq.c)
 *     WPP_SF_qq @ 0x1800AE49C (WPP_SF_qq.c)
 */

__int64 __fastcall CAudioSession::StartStream(CAudioSession *this, struct CAudioStream *a2)
{
  unsigned __int64 v4; // rcx
  char v5; // r12
  unsigned int v6; // r15d
  unsigned __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(CAudioStream *); // rax
  struct IProcessSubmixProxy *v10; // rdi
  __int64 v11; // rdx
  __int64 (__fastcall *v12)(CProcessSubmixProxy *); // rax
  int v13; // eax
  int v14; // r14d
  int v15; // ecx
  CSharedStreamGroupProxy *v16; // rcx
  __int64 (__fastcall *v17)(CSharedStreamGroupProxy *, struct IProcessSubmixProxy *); // rax
  unsigned int v18; // r14d
  bool (__fastcall *v19)(CAudioStream *); // rax
  unsigned int v20; // r14d
  __int64 v21; // rdi
  int v22; // eax
  int v23; // edi
  unsigned int v24; // edi
  CProcessSubmixProxy *v25; // rcx
  __int64 (__fastcall *v26)(CProcessSubmixProxy *, struct IStreamGroupProxy **); // rax
  _QWORD *v27; // rcx
  _QWORD *v28; // r15
  __int64 (__fastcall *v29)(__int64, unsigned int, unsigned int, unsigned int); // rax
  __int64 v30; // r14
  __int64 *v31; // rcx
  __int64 *v32; // r8
  __int64 *v33; // rax
  bool v34; // zf
  int v35; // eax
  int v36; // ecx
  __int64 v37; // rax
  _QWORD *v38; // r15
  unsigned int v39; // ecx
  __int64 (__fastcall *v40)(__int64, unsigned int, unsigned int, unsigned int); // rax
  __int64 v41; // r14
  char v42; // r12
  __int64 *v43; // rcx
  __int64 *v44; // r8
  __int64 *v45; // rax
  int v46; // eax
  int v47; // ecx
  int v48; // eax
  void (__fastcall *v49)(CPerStreamVolumeAudioSession *__hidden, enum _AudioSessionState); // rax
  __int64 (__fastcall *v50)(CAudioSession *); // rax
  volatile signed __int32 *v51; // rbx
  CConstraintModelResourceManager *v53; // rcx
  _QWORD *v54; // r8
  __int64 v55; // rdx
  __int64 (__fastcall *v56)(CConstraintModelResourceManager *, __int64, _QWORD *); // rax
  int v57; // eax
  void (__fastcall *v58)(CAudioSession *__hidden); // rax
  __int64 v59; // r8
  int v60[2]; // [rsp+20h] [rbp-E0h]
  int v61; // [rsp+20h] [rbp-E0h]
  unsigned int v62; // [rsp+40h] [rbp-C0h]
  unsigned int v63; // [rsp+44h] [rbp-BCh]
  unsigned int v64; // [rsp+44h] [rbp-BCh]
  unsigned int v65; // [rsp+48h] [rbp-B8h]
  _QWORD *v66; // [rsp+50h] [rbp-B0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-A8h] BYREF
  char v68; // [rsp+60h] [rbp-A0h]
  __int64 v69; // [rsp+68h] [rbp-98h] BYREF
  __int64 v70; // [rsp+70h] [rbp-90h] BYREF
  __int64 v71; // [rsp+78h] [rbp-88h] BYREF
  void (__fastcall **v72[2])(_QWORD, __int64 *); // [rsp+80h] [rbp-80h] BYREF
  int v73; // [rsp+90h] [rbp-70h]
  int v74; // [rsp+94h] [rbp-6Ch]
  __int64 v75; // [rsp+98h] [rbp-68h]
  __int64 v76; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v77; // [rsp+A8h] [rbp-58h]
  __int64 v78; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v79; // [rsp+B8h] [rbp-48h]
  wchar_t Buffer[1024]; // [rsp+C0h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+908h] [rbp+808h]

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 52LL, &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids, this, a2);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
  v68 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = *((_QWORD *)this + 13);
  v5 = 0;
  v6 = 0;
  if ( v4 )
  {
    v7 = 0LL;
    while ( *(struct CAudioStream **)(*((_QWORD *)this + 12) + 8 * v7) != a2 )
    {
      v7 = ++v6;
      if ( v6 >= v4 )
        goto LABEL_86;
    }
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      *(_QWORD *)v60 = *(_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                                    (char *)this + 96,
                                    v7);
      WPP_SF_dq(*((_QWORD *)WPP_GLOBAL_Control + 2), 53LL, v59, v6);
    }
    if ( v7 >= *((_QWORD *)this + 13) )
      ATL::AtlThrowImpl(-2147024809);
    _mm_lfence();
    v8 = *(_QWORD *)(*((_QWORD *)this + 12) + 8 * v7);
    v9 = *(__int64 (__fastcall **)(CAudioStream *))(*(_QWORD *)v8 + 72LL);
    if ( v9 == CAudioStream::Start )
    {
      v10 = *(struct IProcessSubmixProxy **)(v8 + 64);
      v11 = *(_QWORD *)(v8 + 56);
      v12 = *(__int64 (__fastcall **)(CProcessSubmixProxy *))(*(_QWORD *)v10 + 40LL);
      if ( v12 == CProcessSubmixProxy::StartStream )
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v10 + 5) + 40LL))(*((_QWORD *)v10 + 5), v11);
        v14 = v13;
        if ( v13 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xADA,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
            (const char *)(unsigned int)v13,
            v60[0]);
        }
        else
        {
          v15 = *((_DWORD *)v10 + 30);
          *((_DWORD *)v10 + 30) = v15 + 1;
          if ( !v15 )
          {
            v16 = (CSharedStreamGroupProxy *)*((_QWORD *)v10 + 24);
            v17 = *(__int64 (__fastcall **)(CSharedStreamGroupProxy *, struct IProcessSubmixProxy *))(*(_QWORD *)v16 + 344LL);
            if ( v17 == CSharedStreamGroupProxy::OnProcessSubmixStarted )
            {
              ++*((_DWORD *)v16 + 68);
              CSharedStreamGroupProxy::UpdateAuxiliaryStreamState((CSharedStreamGroupProxy *)((char *)v16 - 8));
            }
            else
            {
              v17(v16, v10);
            }
          }
          v14 = 0;
        }
      }
      else
      {
        v14 = ((__int64 (__fastcall *)(_QWORD, __int64))v12)(*(_QWORD *)(v8 + 64), v11);
      }
      if ( v14 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x250,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v14,
          v60[0]);
      else
        *(_BYTE *)(v8 + 416) = 1;
    }
    else
    {
      v9((CAudioStream *)v8);
    }
    v18 = *(_DWORD *)(v8 + 420);
    v69 = 0LL;
    v63 = v18;
    v62 = -1;
    if ( !(*(unsigned int (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 136LL))(g_PolicyManager) )
    {
      v24 = 0;
      v62 = 0;
      goto LABEL_24;
    }
    v19 = *(bool (__fastcall **)(CAudioStream *))(*(_QWORD *)(v8 + 8) + 64LL);
    if ( v19 == CAudioStream::IsCaptureStream )
    {
      if ( (unsigned int)(*(_DWORD *)(v8 + 556) - 1) > 1 )
      {
LABEL_21:
        v20 = 0;
LABEL_22:
        v21 = *(_QWORD *)g_PolicyManager;
        v60[0] = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v8 + 80) + 120LL))(*(_QWORD *)(v8 + 80));
        v22 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, _QWORD, _QWORD))(v21 + 64))(
                g_PolicyManager,
                v20,
                *(unsigned int *)(v8 + 552),
                *(unsigned __int8 *)(v8 + 416));
        v23 = v22;
        if ( v22 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4B4,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
            (const char *)(unsigned int)v22,
            v60[0]);
          goto LABEL_113;
        }
        v24 = -1;
        v18 = v63;
LABEL_24:
        if ( v24 == *(_DWORD *)(v8 + 420) )
        {
LABEL_62:
          v48 = *((_DWORD *)this + 68) + 1;
          *((_DWORD *)this + 68) = v48;
          if ( v48 == 1 )
          {
            if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_qd(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                54LL,
                &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids,
                this);
            }
            LeaveCriticalSection(lpCriticalSection);
            v49 = *(void (__fastcall **)(CPerStreamVolumeAudioSession *__hidden, enum _AudioSessionState))(*(_QWORD *)this + 96LL);
            if ( v49 == CPerStreamVolumeAudioSession::NewState )
              CPerStreamVolumeAudioSession::NewState(this, AudioSessionStateActive);
            else
              v49(this, AudioSessionStateActive);
          }
          else if ( v68 )
          {
            LeaveCriticalSection(lpCriticalSection);
          }
          (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
          v34 = *(_DWORD *)(v8 + 512) == 1;
          v72[0] = (void (__fastcall **)(_QWORD, __int64 *))&CAudioStreamStateChanged::`vftable';
          v72[1] = (void (__fastcall **)(_QWORD, __int64 *))this;
          v73 = 0;
          v74 = 1;
          v75 = v8;
          if ( v34 )
          {
            v60[0] = 1;
            StringCchPrintfW(
              Buffer,
              1024LL,
              L"Stream %p: From [%d (%s)] to [%d (%s)]",
              v8,
              *(_QWORD *)v60,
              *(_QWORD *)(v8 + 520),
              1,
              L"CAudioSession::StartStream");
            LogProductionAssert(0x6C966DuLL, Buffer);
          }
          *(_DWORD *)(v8 + 512) = 1;
          *(_QWORD *)(v8 + 520) = L"CAudioSession::StartStream";
          CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(
            (LPCRITICAL_SECTION)((char *)this + 496),
            v72);
          v50 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL);
          if ( v50 == CAudioSession::Release )
          {
            v51 = (volatile signed __int32 *)((char *)this + 32);
            if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
            {
              v58 = *(void (__fastcall **)(CAudioSession *__hidden))(*(_QWORD *)v51 + 32LL);
              if ( v58 == CAudioSession::FinalRelease )
                CAudioSession::FinalRelease((CAudioSession *)v51);
              else
                v58((CAudioSession *)v51);
              (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v51 + 24LL))(v51, 1LL);
            }
          }
          else
          {
            v50(this);
          }
          return 0LL;
        }
        v25 = *(CProcessSubmixProxy **)(v8 + 64);
        *(_DWORD *)(v8 + 420) = v24;
        v66 = 0LL;
        v26 = *(__int64 (__fastcall **)(CProcessSubmixProxy *, struct IStreamGroupProxy **))(*(_QWORD *)v25 + 80LL);
        if ( v26 == CProcessSubmixProxy::GetConnectedStreamGroup )
        {
          v27 = (_QWORD *)*((_QWORD *)v25 + 24);
          if ( !v27 )
          {
            v28 = 0LL;
            v66 = 0LL;
            goto LABEL_29;
          }
          v66 = v27;
          (*(void (__fastcall **)(_QWORD *))(*v27 + 8LL))(v27);
        }
        else
        {
          v26(v25, (struct IStreamGroupProxy **)&v66);
        }
        v28 = v66;
        v24 = v62;
LABEL_29:
        v29 = *(__int64 (__fastcall **)(__int64, unsigned int, unsigned int, unsigned int))(*v28 + 216LL);
        if ( v29 == CBaseStreamGroupProxy::UpdateStreamResourcePriority )
        {
          v30 = v28[9];
          v65 = *(_DWORD *)(v30 + 56);
          EnterCriticalSection((LPCRITICAL_SECTION)v30);
          v31 = *(__int64 **)(v30 + 40);
          v70 = v30;
          v32 = v31;
          v33 = (__int64 *)v31[1];
          if ( *((_BYTE *)v33 + 25) )
            goto LABEL_105;
          do
          {
            if ( *((_DWORD *)v33 + 7) < v63 )
            {
              v33 = (__int64 *)v33[2];
            }
            else
            {
              v32 = v33;
              v33 = (__int64 *)*v33;
            }
          }
          while ( !*((_BYTE *)v33 + 25) );
          if ( v32 == v31 || v63 < *((_DWORD *)v32 + 7) )
LABEL_105:
            v32 = v31;
          v34 = (*((_DWORD *)v32 + 8))-- == 1;
          if ( v34 )
            std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::erase(
              (__int64 **)(v30 + 40),
              &v76,
              v32);
          v35 = CResourcePriorityTracker::AddResourcePriorityToMap((CResourcePriorityTracker *)v30, v24);
          v23 = v35;
          if ( v35 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x57,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
              (const char *)(unsigned int)v35,
              v60[0]);
            Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&v70);
          }
          else
          {
            if ( *(_QWORD *)(v30 + 48) )
            {
              v5 = 0;
              v77 = **(_QWORD **)(v30 + 40);
              v36 = *(_DWORD *)(v77 + 28);
              if ( v36 != *(_DWORD *)(v30 + 56) )
              {
                v5 = 1;
                *(_DWORD *)(v30 + 56) = v36;
              }
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)v30);
            v23 = 0;
            if ( v5 )
            {
              v37 = v28[9];
              v38 = (_QWORD *)v28[11];
              v39 = *(_DWORD *)(v37 + 56);
              v64 = v39;
              if ( v38 )
              {
                v40 = *(__int64 (__fastcall **)(__int64, unsigned int, unsigned int, unsigned int))(*v38 + 72LL);
                if ( v40 == CSaDeviceProxy::UpdateStreamGroupResourcePriority )
                {
                  v41 = v38[6];
                  v42 = 0;
                  EnterCriticalSection((LPCRITICAL_SECTION)v41);
                  v43 = *(__int64 **)(v41 + 40);
                  v71 = v41;
                  v44 = v43;
                  v45 = (__int64 *)v43[1];
                  if ( *((_BYTE *)v45 + 25) )
                    goto LABEL_108;
                  do
                  {
                    if ( *((_DWORD *)v45 + 7) < v65 )
                    {
                      v45 = (__int64 *)v45[2];
                    }
                    else
                    {
                      v44 = v45;
                      v45 = (__int64 *)*v45;
                    }
                  }
                  while ( !*((_BYTE *)v45 + 25) );
                  if ( v44 == v43 || v65 < *((_DWORD *)v44 + 7) )
LABEL_108:
                    v44 = v43;
                  v34 = (*((_DWORD *)v44 + 8))-- == 1;
                  if ( v34 )
                    std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::erase(
                      (__int64 **)(v41 + 40),
                      &v78,
                      v44);
                  v46 = CResourcePriorityTracker::AddResourcePriorityToMap((CResourcePriorityTracker *)v41, v64);
                  v23 = v46;
                  if ( v46 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x57,
                      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                      (const char *)(unsigned int)v46,
                      v60[0]);
                    Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&v71);
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x707,
                      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                      (const char *)(unsigned int)v23,
                      v61);
                  }
                  else
                  {
                    if ( *(_QWORD *)(v41 + 48) )
                    {
                      v42 = 0;
                      v79 = **(_QWORD **)(v41 + 40);
                      v47 = *(_DWORD *)(v79 + 28);
                      if ( v47 != *(_DWORD *)(v41 + 56) )
                      {
                        v42 = 1;
                        *(_DWORD *)(v41 + 56) = v47;
                      }
                    }
                    LeaveCriticalSection((LPCRITICAL_SECTION)v41);
                    if ( !v42 )
                      goto LABEL_58;
                    v53 = g_AudioResourceManager;
                    v54 = v38 + 7;
                    v55 = *(unsigned int *)(v38[6] + 56LL);
                    v56 = *(__int64 (__fastcall **)(CConstraintModelResourceManager *, __int64, _QWORD *))(*(_QWORD *)g_AudioResourceManager + 48LL);
                    if ( (char *)v56 == (char *)CAudioResourceManager::ReacquireSaDeviceResource
                      && (v53 = (CConstraintModelResourceManager *)*((_QWORD *)g_AudioResourceManager + 5),
                          v56 = *(__int64 (__fastcall **)(CConstraintModelResourceManager *, __int64, _QWORD *))(*(_QWORD *)v53 + 72LL),
                          (char *)v56 == (char *)CConstraintModelResourceManager::ReacquireSaDeviceResource) )
                    {
                      v57 = CConstraintModelResourceManager::ReacquireSaDeviceResource(v53, v55, v54);
                    }
                    else
                    {
                      v57 = v56(v53, v55, v54);
                    }
                    v23 = v57;
                    if ( v57 < 0 )
                      wil::details::in1diag3::Return_Hr(
                        retaddr,
                        (void *)0x70C,
                        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                        (const char *)(unsigned int)v57,
                        v60[0]);
                    else
LABEL_58:
                      v23 = 0;
                  }
                }
                else
                {
                  v23 = v40((__int64)v38, 1u, v39, v65);
                }
              }
            }
          }
        }
        else
        {
          v23 = v29((__int64)v28, 1u, v24, v18);
        }
        if ( v23 >= 0 )
        {
          if ( v66 )
            (*(void (__fastcall **)(_QWORD *))(*v66 + 16LL))(v66);
          goto LABEL_62;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4C5,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v23,
          v60[0]);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v66);
LABEL_113:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v69);
        if ( v23 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xBB0,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
            (const char *)(unsigned int)v23,
            v60[0]);
        goto LABEL_62;
      }
    }
    else if ( !v19((CAudioStream *)(v8 + 8)) )
    {
      goto LABEL_21;
    }
    v20 = 1;
    goto LABEL_22;
  }
LABEL_86:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBAE,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
    (const char *)0x88890004LL,
    v60[0]);
  if ( v68 )
    LeaveCriticalSection(lpCriticalSection);
  return 2290679812LL;
}
