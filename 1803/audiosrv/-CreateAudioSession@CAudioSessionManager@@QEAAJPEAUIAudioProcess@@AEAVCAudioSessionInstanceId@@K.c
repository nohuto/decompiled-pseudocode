/*
 * XREFs of ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x1800333A0
 * Callers:
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x1800045E0 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x180025900 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x1800B2300 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x1800B45B0 (AudioSessionManagerGetSessionForStreamSwitch.c)
 * Callees:
 *     ?FindUniqueNonNullAudioSession@CAudioSessionManager@@IEAAJPEAPEAVCAudioSession@@K@Z @ 0x18000431C (-FindUniqueNonNullAudioSession@CAudioSessionManager@@IEAAJPEAPEAVCAudioSession@@K@Z.c)
 *     ?GroupAudioSessionsWithNullGUIDs@CAudioSessionManager@@IEAAJU_GUID@@K@Z @ 0x180004A04 (-GroupAudioSessionsWithNullGUIDs@CAudioSessionManager@@IEAAJU_GUID@@K@Z.c)
 *     ?GetGroupingParam@CAudioSession@@UEAAJPEAU_GUID@@@Z @ 0x180005170 (-GetGroupingParam@CAudioSession@@UEAAJPEAU_GUID@@@Z.c)
 *     ?GetProcessId@CAudioSession@@UEAAJPEAK@Z @ 0x1800051F0 (-GetProcessId@CAudioSession@@UEAAJPEAK@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180017F1C (--1-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180018A18 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?CreateNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBVCAudioSessionInstanceId@@II@Z @ 0x1800190E8 (-CreateNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTrait.c)
 *     ?SetAt@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBVCAudioSessionInstanceId@@AEBQEAVCAudioSession@@@Z @ 0x1800191E4 (-SetAt@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V-.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180030BB0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180031BD0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z @ 0x180032AC4 (-NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z.c)
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@@Z @ 0x180033FF4 (-FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@.c)
 *     ?Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z @ 0x180034080 (-Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z.c)
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x1800340D0 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     ?AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x180034230 (-AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 *     ?FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z @ 0x180034D70 (-FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z.c)
 *     ?IsSystemSoundsSession@CAudioSession@@UEAAHXZ @ 0x1800354B0 (-IsSystemSoundsSession@CAudioSession@@UEAAHXZ.c)
 *     ??0CPerStreamVolumeAudioSession@@QEAA@XZ @ 0x18003589C (--0CPerStreamVolumeAudioSession@@QEAA@XZ.c)
 *     ?RemoveKey@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_NAEBVCAudioSessionInstanceId@@@Z @ 0x180042CC0 (-RemoveKey@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18006010C (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18009BB24 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?ForceExpire@CAudioSession@@QEAAXXZ @ 0x1800A9500 (-ForceExpire@CAudioSession@@QEAAXXZ.c)
 *     ?RegisterOwnerProcess@CAudioSession@@QEAAJPEAUIAudioProcess@@@Z @ 0x1800AC664 (-RegisterOwnerProcess@CAudioSession@@QEAAJPEAUIAudioProcess@@@Z.c)
 *     WPP_SF_SS @ 0x1800B0B54 (WPP_SF_SS.c)
 *     ??0CPerEndpointVolumeAudioSession@@QEAA@XZ @ 0x1800B1104 (--0CPerEndpointVolumeAudioSession@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=22
__int64 __fastcall CAudioSessionManager::CreateAudioSession(
        CAudioSessionManager *this,
        struct IAudioProcess *a2,
        struct CAudioSessionInstanceId *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        struct CAudioSession **a7)
{
  struct CAudioSessionInstanceId *v7; // r15
  struct _RTL_CRITICAL_SECTION *v9; // rbx
  struct CAudioSession *v10; // r13
  __int64 v11; // r8
  __int64 v12; // r9
  char *v13; // rdi
  struct ATL::CStringData *(__fastcall *v14)(ATL::CAtlStringMgr *__hidden); // rax
  __int64 *v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  volatile signed __int32 *v18; // rcx
  __int64 v19; // rbx
  volatile signed __int32 *v20; // rcx
  unsigned int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 *i; // rdi
  int v25; // eax
  int v26; // eax
  __int64 v27; // rax
  char *v28; // r14
  struct ATL::CStringData *(__fastcall *v29)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *NilString; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r8
  __int64 v34; // r9
  volatile signed __int32 *v35; // rbx
  __int64 v36; // rdi
  __int64 v37; // rax
  unsigned int v38; // edi
  volatile signed __int32 *v39; // rdx
  _QWORD *v40; // rcx
  void (*v41)(void); // rax
  HANDLE *v42; // rcx
  unsigned int v43; // esi
  __int64 j; // rbx
  int v45; // eax
  int v46; // eax
  __int64 v47; // rax
  int v48; // ebx
  struct CAudioSession **v49; // r12
  int v50; // r14d
  _QWORD *v51; // rdi
  _QWORD *v52; // rsi
  const char *v53; // r9
  __int64 result; // rax
  void (*v55)(void); // rax
  unsigned int v56; // ebx
  CPerStreamVolumeAudioSession *v57; // rax
  CAudioSession *v58; // rax
  __int64 (__usercall *v59)@<rax>(CAudioSession *__hidden@<rcx>, struct IAudioProcess *@<rdx>, struct CAudioSessionInstanceId *@<r8>, unsigned int@<r9d>, unsigned int, unsigned int); // r10
  int v60; // eax
  unsigned int v61; // ebx
  CAudioSessionManager *v62; // rsi
  struct IAudioProcess *v63; // rdi
  __int64 (__fastcall *v64)(CAudioSession *__hidden, struct ISessionInternalEvents *); // rax
  int v65; // eax
  unsigned int v66; // ebx
  __int64 (__fastcall *v67)(CAudioSession *__hidden, struct ISessionInternalEvents *); // rax
  int v68; // eax
  unsigned int v69; // ebx
  __int64 (__fastcall *v70)(CAudioSession *__hidden, struct ISessionInternalEvents *); // rax
  int v71; // eax
  unsigned int v72; // ebx
  struct CAudioSession *v73; // rbx
  __int64 (*v74)(void); // rax
  int IsSystemSoundsSession; // eax
  __int64 v76; // rcx
  __int64 (__fastcall *v77)(CAudioSession *, unsigned int *); // rax
  int v78; // eax
  __int64 (__fastcall *v79)(CAudioSession *, struct _GUID *); // rax
  int v80; // eax
  __int64 v81; // rax
  const struct _TlgProvider_t *v82; // rbx
  LPCGUID v83; // r8
  LPCGUID v84; // r9
  ATL::CAtlException *v85; // rbx
  CPerEndpointVolumeAudioSession *v86; // rax
  unsigned int v87; // ebx
  int v88; // eax
  unsigned int v89; // ebx
  int cData; // [rsp+20h] [rbp-308h]
  char v91; // [rsp+40h] [rbp-2E8h]
  CAudioSession *v92; // [rsp+48h] [rbp-2E0h] BYREF
  struct CAudioSession *v93; // [rsp+50h] [rbp-2D8h] BYREF
  LPCRITICAL_SECTION v94; // [rsp+58h] [rbp-2D0h] BYREF
  char v95; // [rsp+60h] [rbp-2C8h]
  unsigned int v96; // [rsp+68h] [rbp-2C0h] BYREF
  volatile signed __int32 *v97; // [rsp+70h] [rbp-2B8h] BYREF
  int v98; // [rsp+78h] [rbp-2B0h]
  int v99; // [rsp+7Ch] [rbp-2ACh] BYREF
  struct IAudioProcess *v100; // [rsp+80h] [rbp-2A8h]
  unsigned int v101; // [rsp+88h] [rbp-2A0h]
  volatile signed __int32 *v102; // [rsp+90h] [rbp-298h] BYREF
  __int128 v103; // [rsp+98h] [rbp-290h]
  CAudioSession **v104; // [rsp+A8h] [rbp-280h]
  char v105; // [rsp+B0h] [rbp-278h]
  struct CAudioSessionInstanceId *v106; // [rsp+B8h] [rbp-270h]
  CAudioSession *v107; // [rsp+C0h] [rbp-268h] BYREF
  struct CAudioSession **v108; // [rsp+C8h] [rbp-260h]
  __int128 v109; // [rsp+D0h] [rbp-258h]
  char v110; // [rsp+E0h] [rbp-248h]
  unsigned int v111; // [rsp+E8h] [rbp-240h]
  unsigned int v112; // [rsp+ECh] [rbp-23Ch]
  struct CAudioSession *v113; // [rsp+F0h] [rbp-238h]
  char *v114; // [rsp+F8h] [rbp-230h]
  CAudioSessionManager *v115; // [rsp+100h] [rbp-228h]
  char *v116; // [rsp+108h] [rbp-220h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+110h] [rbp-218h] BYREF
  char v118; // [rsp+118h] [rbp-210h]
  int v119; // [rsp+120h] [rbp-208h]
  int v120; // [rsp+124h] [rbp-204h]
  int v121; // [rsp+128h] [rbp-200h]
  int v122; // [rsp+12Ch] [rbp-1FCh]
  volatile signed __int32 *v123; // [rsp+130h] [rbp-1F8h]
  LPVOID lpMem; // [rsp+138h] [rbp-1F0h]
  volatile signed __int32 *v125; // [rsp+140h] [rbp-1E8h]
  struct ATL::CStringData *v126; // [rsp+148h] [rbp-1E0h]
  char *v127; // [rsp+150h] [rbp-1D8h]
  __int64 *v128; // [rsp+158h] [rbp-1D0h]
  CAudioSession *v129; // [rsp+160h] [rbp-1C8h] BYREF
  CAudioSessionManager *v130; // [rsp+168h] [rbp-1C0h]
  struct IAudioProcess *v131; // [rsp+170h] [rbp-1B8h]
  struct CAudioSessionInstanceId *v132; // [rsp+178h] [rbp-1B0h]
  struct CAudioSession **v133; // [rsp+180h] [rbp-1A8h]
  _QWORD *v134; // [rsp+188h] [rbp-1A0h]
  int v135; // [rsp+190h] [rbp-198h]
  __int128 v136; // [rsp+198h] [rbp-190h]
  int v137; // [rsp+1A8h] [rbp-180h]
  CAudioSession **v138; // [rsp+1B0h] [rbp-178h]
  char v139; // [rsp+1B8h] [rbp-170h]
  int v140; // [rsp+1C0h] [rbp-168h]
  unsigned int v141; // [rsp+1C4h] [rbp-164h]
  __int128 v142; // [rsp+1C8h] [rbp-160h]
  CAudioSession **v143; // [rsp+1D8h] [rbp-150h]
  CAudioSession **v144; // [rsp+1E0h] [rbp-148h]
  char v145; // [rsp+1E8h] [rbp-140h]
  __int64 v146; // [rsp+1F0h] [rbp-138h]
  __int64 v147; // [rsp+1F8h] [rbp-130h]
  char *v148; // [rsp+200h] [rbp-128h]
  __int64 *v149; // [rsp+208h] [rbp-120h]
  char *v150; // [rsp+210h] [rbp-118h]
  __int64 v151; // [rsp+218h] [rbp-110h]
  __int64 v152; // [rsp+220h] [rbp-108h]
  __int64 v153; // [rsp+228h] [rbp-100h]
  struct ATL::CStringData *v154; // [rsp+230h] [rbp-F8h]
  CPerStreamVolumeAudioSession *v155; // [rsp+238h] [rbp-F0h]
  __int64 *v156; // [rsp+240h] [rbp-E8h]
  ATL::CAtlException *v157[5]; // [rsp+248h] [rbp-E0h] BYREF
  struct _GUID v158; // [rsp+270h] [rbp-B8h] BYREF
  _QWORD *v159; // [rsp+280h] [rbp-A8h]
  HANDLE *v160; // [rsp+288h] [rbp-A0h]
  struct _GUID v161; // [rsp+290h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2A0h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+2C0h] [rbp-68h] BYREF
  int *v164; // [rsp+2D0h] [rbp-58h]
  int v165; // [rsp+2D8h] [rbp-50h]
  int v166; // [rsp+2DCh] [rbp-4Ch]
  wil::details::in1diag3 *retaddr; // [rsp+328h] [rbp+0h]

  v151 = -2LL;
  v101 = a4;
  v7 = a3;
  v106 = a3;
  v100 = a2;
  v115 = this;
  v130 = this;
  v131 = a2;
  v132 = a3;
  v108 = a7;
  v133 = a7;
  try
  {
    v91 = 1;
    *a7 = 0LL;
    v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
    v94 = (LPCRITICAL_SECTION)((char *)this + 24);
    v95 = 0;
    ATL::CCritSecLock::Lock(&v94);
    v93 = 0LL;
    v10 = 0LL;
    v113 = 0LL;
    lpCriticalSection = v9;
    v118 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    v13 = (char *)this + 64;
    v114 = v13;
    v14 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24);
    if ( v14 == ATL::CAtlStringMgr::GetNilString )
    {
      _InterlockedIncrement(&dword_18018AA50);
      v15 = &qword_18018AA40;
      v10 = v113;
      v13 = v114;
    }
    else
    {
      v15 = (__int64 *)v14((ATL::CAtlStringMgr *)&ATL::g_strmgr);
    }
    v156 = v15;
    v97 = (volatile signed __int32 *)(v15 + 3);
    v135 = CAudioSessionInstanceId::ToString((__int64)v7, (const void **)&v97, v11, v12);
    if ( v135 < 0 )
    {
      lpMem = (LPVOID)(v97 - 6);
      if ( _InterlockedExchangeAdd(v97 - 2, 0xFFFFFFFF) <= 1 )
      {
        v40 = *(_QWORD **)lpMem;
        v159 = v40;
        v41 = *(void (**)(void))(*v40 + 8LL);
        if ( (char *)v41 == (char *)ATL::CAtlStringMgr::Free
          && (v42 = (HANDLE *)v40[1],
              v160 = v42,
              v41 = (void (*)(void))*((_QWORD *)*v42 + 1),
              (char *)v41 == (char *)ATL::CWin32Heap::Free) )
        {
          HeapFree(v42[1], 0, lpMem);
        }
        else
        {
          v41();
        }
      }
      v21 = 0;
      v112 = 0;
      v10 = v113;
      v13 = v114;
    }
    else
    {
      v18 = v97;
      v19 = *((int *)v97 - 4);
      v122 = v19;
      v157[1] = (ATL::CAtlException *)(v97 - 6);
      v137 = 1 - *((_DWORD *)v97 - 2);
      v140 = *((_DWORD *)v97 - 3) - v19;
      if ( (v137 | v140) < 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((const void **)&v97, v19, v16, v17);
        v18 = v97;
      }
      _o__wcsupr_s(v18, (int)v19 + 1);
      if ( (int)v19 < 0 || (int)v19 > *((_DWORD *)v97 - 3) )
        ATL::AtlThrowImpl(-2147024809);
      *((_DWORD *)v97 - 4) = v19;
      *((_WORD *)v97 + v19) = 0;
      v20 = v97;
      if ( !v97 )
        ATL::AtlThrowImpl(-2147467259);
      v21 = 0;
      v111 = 0;
      v123 = v97;
      while ( *(_WORD *)v20 )
      {
        v21 = *(unsigned __int16 *)v20 + 33 * v21;
        v111 = v21;
        v20 = (volatile signed __int32 *)((char *)v20 + 2);
        v123 = v20;
      }
      v157[3] = (ATL::CAtlException *)(v97 - 6);
      ATL::CStringData::Release((ATL::CStringData *)(v97 - 6));
      v112 = v21;
    }
    v141 = v21;
    if ( *((_DWORD *)v13 + 4) == 17 )
      v22 = v21 % 0x11;
    else
      v22 = v21 % *((_DWORD *)v13 + 4);
    v119 = v22;
    v23 = *(_QWORD *)v13;
    if ( v23 )
    {
      for ( i = *(__int64 **)(v23 + 8 * v22); ; i = (__int64 *)i[11] )
      {
        v128 = i;
        if ( !i )
          break;
        v120 = *((_DWORD *)i + 24);
        if ( v120 == v21 )
        {
          v146 = *(_QWORD *)v7;
          v147 = *i;
          if ( !(unsigned int)_o__wcsicmp(v147, v146) )
          {
            v148 = (char *)v7 + 56;
            v149 = i + 7;
            v25 = *((_DWORD *)i + 16);
            if ( v25 == *((_DWORD *)v7 + 16) && (v25 || *((_DWORD *)i + 14) == *((_DWORD *)v7 + 14)) )
            {
              v150 = (char *)v7 + 8;
              v157[2] = (ATL::CAtlException *)(i + 1);
              v26 = *((_DWORD *)i + 12);
              if ( v26 == *((_DWORD *)v7 + 12) )
              {
                if ( v26 || (v152 = *((_QWORD *)v7 + 1), v153 = i[1], !(unsigned int)_o__wcsicmp(v153, v152)) )
                {
                  v27 = i[3] - *((_QWORD *)v7 + 3);
                  if ( !v27 )
                    v27 = i[4] - *((_QWORD *)v7 + 4);
                  if ( !v27 )
                  {
                    v28 = (char *)v115 + 64;
                    v127 = (char *)v115 + 64;
                    v29 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24);
                    if ( v29 == ATL::CAtlStringMgr::GetNilString )
                      NilString = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
                    else
                      NilString = v29((ATL::CAtlStringMgr *)&ATL::g_strmgr);
                    v154 = NilString;
                    v102 = (volatile signed __int32 *)((char *)NilString + 24);
                    v7 = v106;
                    v121 = CAudioSessionInstanceId::ToString((__int64)v106, (const void **)&v102, v31, v32);
                    if ( v121 < 0 )
                    {
                      v126 = (struct ATL::CStringData *)(v102 - 6);
                      if ( _InterlockedExchangeAdd(v102 - 2, 0xFFFFFFFF) <= 1 )
                      {
                        v55 = *(void (**)(void))(**(_QWORD **)v126 + 8LL);
                        if ( (char *)v55 == (char *)ATL::CAtlStringMgr::Free )
                          ATL::CAtlStringMgr::Free(*(ATL::CAtlStringMgr **)v126, v126);
                        else
                          v55();
                      }
                      v38 = 0;
                      v28 = v127;
                    }
                    else
                    {
                      v35 = v102;
                      v36 = *((int *)v102 - 4);
                      if ( ((1 - *((_DWORD *)v102 - 2)) | (*((_DWORD *)v102 - 3) - (int)v36)) < 0 )
                      {
                        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((const void **)&v102, v36, v33, v34);
                        v35 = v102;
                      }
                      _o__wcsupr_s(v35, (int)v36 + 1);
                      if ( (int)v36 < 0 || (int)v36 > *((_DWORD *)v35 - 3) )
                        ATL::AtlThrowImpl(-2147024809);
                      *((_DWORD *)v35 - 4) = v36;
                      v37 = v36;
                      v38 = 0;
                      *((_WORD *)v35 + v37) = 0;
                      v39 = v35;
                      v125 = v35;
                      while ( *(_WORD *)v39 )
                      {
                        v38 = *(unsigned __int16 *)v39 + 33 * v38;
                        v39 = (volatile signed __int32 *)((char *)v39 + 2);
                        v125 = v39;
                      }
                      ATL::CStringData::Release((ATL::CStringData *)(v35 - 6));
                    }
                    if ( *((_DWORD *)v28 + 4) == 17 )
                      v43 = v38 % 0x11;
                    else
                      v43 = v38 % *((_DWORD *)v28 + 4);
                    if ( *(_QWORD *)v28 )
                    {
                      for ( j = *(_QWORD *)(*(_QWORD *)v28 + 8LL * v43); j; j = *(_QWORD *)(j + 88) )
                      {
                        if ( *(_DWORD *)(j + 96) == v38 && !(unsigned int)_o__wcsicmp(*(_QWORD *)j, *(_QWORD *)v7) )
                        {
                          v45 = *(_DWORD *)(j + 64);
                          if ( v45 == *((_DWORD *)v7 + 16) && (v45 || *(_DWORD *)(j + 56) == *((_DWORD *)v7 + 14)) )
                          {
                            v46 = *(_DWORD *)(j + 48);
                            if ( v46 == *((_DWORD *)v7 + 12)
                              && (v46 || !(unsigned int)_o__wcsicmp(*(_QWORD *)(j + 8), *((_QWORD *)v7 + 1))) )
                            {
                              v47 = *(_QWORD *)(j + 24) - *((_QWORD *)v7 + 3);
                              if ( !v47 )
                                v47 = *(_QWORD *)(j + 32) - *((_QWORD *)v7 + 4);
                              if ( !v47 )
                                goto LABEL_58;
                            }
                          }
                        }
                      }
                    }
                    j = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::CreateNode(
                          (__int64)v28,
                          v7,
                          v43,
                          v38);
LABEL_58:
                    v10 = *(struct CAudioSession **)(j + 80);
                    v113 = v10;
                    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                    {
                      WPP_SF_SS(
                        *((_QWORD *)WPP_GLOBAL_Control + 2),
                        10,
                        (unsigned int)&WPP_bc4145dd143a32c0713a8429d6f998aa_Traceguids,
                        0,
                        *((_QWORD *)v7 + 9));
                    }
                    break;
                  }
                }
              }
              v7 = v106;
            }
          }
        }
      }
    }
    if ( v10 )
      (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v10 + 8LL))(v10);
    v93 = v10;
    if ( v10 )
      v48 = 0;
    else
      v48 = -2147024894;
    if ( v118 )
      LeaveCriticalSection(lpCriticalSection);
    if ( v48 >= 0 )
    {
      v49 = v108;
      if ( (v101 & 0x20) != 0 )
        *((_DWORD *)v10 + 120) = 1;
LABEL_69:
      v50 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v100 + 40LL))(v100);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)v10 + 736));
      v116 = (char *)v10 + 736;
      v51 = (_QWORD *)*((_QWORD *)v10 + 97);
      v134 = v51;
      v52 = (_QWORD *)*((_QWORD *)v10 + 98);
      while ( v51 != v52 )
      {
        if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v51 + 40LL))(*v51) == v50 )
        {
          Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&v116);
LABEL_73:
          if ( v91 )
            (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v10 + 216LL))(v10);
          v93 = 0LL;
          *v49 = v10;
          if ( v95 )
          {
            LeaveCriticalSection(v94);
            v95 = 0;
          }
          return 0LL;
        }
        v134 = ++v51;
      }
      if ( v10 != (struct CAudioSession *)-736LL )
      {
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v10 + 736));
        v116 = 0LL;
      }
      v88 = CAudioSession::RegisterOwnerProcess(v10, v100);
      v89 = v88;
      if ( v88 >= 0 )
        goto LABEL_73;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x195,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)v88,
        cData);
      wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::~com_ptr_t<CAudioSession,wil::err_returncode_policy>(&v93);
      if ( v95 )
      {
        LeaveCriticalSection(v94);
        v95 = 0;
      }
      return v89;
    }
    LeaveCriticalSection(v94);
    v95 = 0;
    v92 = 0LL;
    v56 = v101;
    if ( (v101 & 8) != 0 )
    {
      v57 = (CPerStreamVolumeAudioSession *)operator new(0x448uLL, (const struct std::nothrow_t *)&std::nothrow);
      v155 = v57;
      if ( v57 )
        v58 = CPerStreamVolumeAudioSession::CPerStreamVolumeAudioSession(v57);
      else
        v58 = 0LL;
    }
    else
    {
      v86 = (CPerEndpointVolumeAudioSession *)operator new(0x410uLL, (const struct std::nothrow_t *)&std::nothrow);
      *(_QWORD *)&v136 = v86;
      if ( v86 )
        v58 = CPerEndpointVolumeAudioSession::CPerEndpointVolumeAudioSession(v86);
      else
        v58 = 0LL;
    }
    v92 = v58;
    if ( !v58 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x111,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)0x8007000ELL,
        cData);
      wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::~com_ptr_t<CAudioSession,wil::err_returncode_policy>(&v92);
      wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::~com_ptr_t<CAudioSession,wil::err_returncode_policy>(&v93);
      return 2147942414LL;
    }
    v59 = *(__int64 (__usercall **)@<rax>(CAudioSession *__hidden@<rcx>, struct IAudioProcess *@<rdx>, struct CAudioSessionInstanceId *@<r8>, unsigned int@<r9d>, unsigned int, unsigned int))(*(_QWORD *)v58 + 200LL);
    cData = a5;
    if ( v59 == CAudioSession::FinishConstruction )
      v60 = CAudioSession::FinishConstruction(v58, v100, v7, v56, a5, a6);
    else
      v60 = ((__int64 (__fastcall *)(CAudioSession *, struct IAudioProcess *, struct CAudioSessionInstanceId *, _QWORD))v59)(
              v58,
              v100,
              v7,
              v56);
    v61 = v60;
    if ( v60 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x113,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)v60,
        cData);
      wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::~com_ptr_t<CAudioSession,wil::err_returncode_policy>(&v92);
      wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::~com_ptr_t<CAudioSession,wil::err_returncode_policy>(&v93);
      return v61;
    }
    ATL::CCritSecLock::Lock(&v94);
    v93 = 0LL;
    if ( v10 )
      (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v10 + 16LL))(v10);
    v62 = v115;
    if ( (int)CAudioSessionManager::FindAudioSession(v115, v7, &v93) >= 0 )
    {
      CAudioSession::ForceExpire(v92);
      v10 = v93;
      v49 = v108;
LABEL_132:
      wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::~com_ptr_t<CAudioSession,wil::err_returncode_policy>(&v92);
      goto LABEL_69;
    }
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_SS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        11,
        (unsigned int)&WPP_bc4145dd143a32c0713a8429d6f998aa_Traceguids,
        0,
        *((_QWORD *)v7 + 9));
    }
    v98 = 0;
    try
    {
      v129 = v92;
      ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::SetAt(
        (__int64)v62 + 64,
        v7,
        &v129);
    }
    catch ( ATL::CAtlException *v157 )
    {
      v85 = v157[0];
      if ( *(_DWORD *)v157[0] == -1073741571 )
        _o__resetstkoflw();
      v98 = *(_DWORD *)v85;
      v87 = v98;
      if ( v98 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x11E,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
          (const char *)(unsigned int)v98,
          cData);
        wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::~com_ptr_t<CAudioSession,wil::err_returncode_policy>(&v92);
        wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::~com_ptr_t<CAudioSession,wil::err_returncode_policy>(&v93);
        if ( v95 )
        {
          LeaveCriticalSection(v94);
          v95 = 0;
        }
        return v87;
      }
      v62 = v130;
      v63 = v131;
      v100 = v131;
      v7 = v132;
      v49 = v133;
      goto LABEL_97;
    }
    v49 = v108;
    v63 = v100;
LABEL_97:
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v92 + 8LL))(v92);
    *(_QWORD *)&v142 = v62;
    *((_QWORD *)&v142 + 1) = v7;
    v143 = &v92;
    v103 = v142;
    v104 = &v92;
    v105 = 1;
    v64 = *(__int64 (__fastcall **)(CAudioSession *__hidden, struct ISessionInternalEvents *))(*(_QWORD *)v92 + 184LL);
    if ( v64 == CAudioSession::AddSessionNotification )
      v65 = CAudioSession::AddSessionNotification(v92, v62);
    else
      v65 = v64(v92, v62);
    v66 = v65;
    if ( v65 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12B,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)v65,
        cData);
      if ( v105 )
      {
        v105 = 0;
        ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveKey(
          v103 + 64,
          *((_QWORD *)&v103 + 1));
        (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)*v104 + 16LL))(*v104);
      }
      wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::~com_ptr_t<CAudioSession,wil::err_returncode_policy>(&v92);
      wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::~com_ptr_t<CAudioSession,wil::err_returncode_policy>(&v93);
      if ( v95 )
      {
        LeaveCriticalSection(v94);
        v95 = 0;
      }
      return v66;
    }
    *(_QWORD *)&v136 = &v92;
    *((_QWORD *)&v136 + 1) = v62;
    v109 = v136;
    v110 = 1;
    v67 = *(__int64 (__fastcall **)(CAudioSession *__hidden, struct ISessionInternalEvents *))(*(_QWORD *)v92 + 184LL);
    if ( v67 == CAudioSession::AddSessionNotification )
      v68 = CAudioSession::AddSessionNotification(v92, g_PolicyEventsHandler);
    else
      v68 = v67(v92, g_PolicyEventsHandler);
    v69 = v68;
    if ( v68 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x132,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)v68,
        cData);
      if ( v110 )
      {
        v110 = 0;
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v109 + 192LL))(*(_QWORD *)v109, *((_QWORD *)&v109 + 1));
      }
      if ( v105 )
      {
        v105 = 0;
        ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveKey(
          v103 + 64,
          *((_QWORD *)&v103 + 1));
        (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)*v104 + 16LL))(*v104);
      }
      wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::~com_ptr_t<CAudioSession,wil::err_returncode_policy>(&v92);
      wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::~com_ptr_t<CAudioSession,wil::err_returncode_policy>(&v93);
      if ( v95 )
      {
        LeaveCriticalSection(v94);
        v95 = 0;
      }
      return v69;
    }
    v138 = &v92;
    v139 = 1;
    v70 = *(__int64 (__fastcall **)(CAudioSession *__hidden, struct ISessionInternalEvents *))(*(_QWORD *)v92 + 184LL);
    if ( v70 == CAudioSession::AddSessionNotification )
      v71 = CAudioSession::AddSessionNotification(v92, g_TelephonyControlEventsHandler);
    else
      v71 = v70(v92, g_TelephonyControlEventsHandler);
    v72 = v71;
    if ( v71 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x139,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)v71,
        cData);
      v139 = 0;
      (*(void (__fastcall **)(CAudioSession *, struct ISessionInternalEvents *))(*(_QWORD *)v92 + 192LL))(
        v92,
        g_PolicyEventsHandler);
      if ( v110 )
      {
        v110 = 0;
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v109 + 192LL))(*(_QWORD *)v109, *((_QWORD *)&v109 + 1));
      }
      if ( v105 )
      {
        v105 = 0;
        ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveKey(
          v103 + 64,
          *((_QWORD *)&v103 + 1));
        (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)*v104 + 16LL))(*v104);
      }
      wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::~com_ptr_t<CAudioSession,wil::err_returncode_policy>(&v92);
      wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::~com_ptr_t<CAudioSession,wil::err_returncode_policy>(&v93);
      if ( v95 )
      {
        LeaveCriticalSection(v94);
        v95 = 0;
      }
      return v72;
    }
    v144 = &v92;
    v145 = 1;
    CAudioSessionManager::NotifyActiveSession(v62, v92);
    v10 = v92;
    v73 = v93;
    v93 = v92;
    if ( v92 )
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v92 + 8LL))(v92);
    if ( v73 )
      (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v73 + 16LL))(v73);
    v91 = 0;
    v145 = 0;
    v139 = 0;
    v110 = 0;
    v105 = 0;
    v74 = *(__int64 (**)(void))(*((_QWORD *)v10 + 3) + 24LL);
    if ( (char *)v74 == (char *)CAudioSession::IsSystemSoundsSession )
      IsSystemSoundsSession = CAudioSession::IsSystemSoundsSession((struct CAudioSession *)((char *)v10 + 24));
    else
      IsSystemSoundsSession = v74();
    if ( !IsSystemSoundsSession
      && !(*(unsigned __int8 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v63 + 440LL))(v63) )
    {
      v96 = 0;
      v77 = *(__int64 (__fastcall **)(CAudioSession *, unsigned int *))(*(_QWORD *)v10 + 128LL);
      v78 = v77 == CAudioSession::GetProcessId ? CAudioSession::GetProcessId(v10, &v96) : v77(v10, &v96);
      if ( v78 >= 0 )
      {
        v107 = 0LL;
        if ( (int)CAudioSessionManager::FindUniqueNonNullAudioSession(v62, &v107, v96) >= 0 )
        {
          v161 = GUID_00000000_0000_0000_0000_000000000000;
          v79 = *(__int64 (__fastcall **)(CAudioSession *, struct _GUID *))(*(_QWORD *)v107 + 168LL);
          v80 = v79 == CAudioSession::GetGroupingParam ? CAudioSession::GetGroupingParam(v107, &v161) : v79(v107, &v161);
          if ( v80 >= 0 )
          {
            v81 = *((_QWORD *)v10 + 85) - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
            if ( !v81 )
              v81 = *((_QWORD *)v10 + 86) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
            if ( v81 )
            {
              v158 = v161;
              CAudioSessionManager::GroupAudioSessionsWithNullGUIDs(v62, &v158, v96);
            }
            else
            {
              (*(void (__fastcall **)(struct CAudioSession *, struct _GUID *, _QWORD))(*(_QWORD *)v10 + 176LL))(
                v10,
                &v161,
                0LL);
            }
          }
        }
        wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::~com_ptr_t<CAudioSession,wil::err_returncode_policy>(&v107);
      }
    }
    v82 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                                       v76,
                                                       lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                         + 1);
    if ( *(_DWORD *)v82 > 4u )
    {
      TlgCreateWsz(&pDesc, *((LPCWSTR *)v10 + 91));
      v99 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v63 + 40LL))(v63);
      v164 = &v99;
      v165 = 4;
      v166 = 0;
      TlgWrite(v82, &unk_180145421, v83, v84, 4u, &pData);
    }
    if ( v110 )
    {
      v110 = 0;
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v109 + 192LL))(*(_QWORD *)v109, *((_QWORD *)&v109 + 1));
    }
    if ( v105 )
    {
      v105 = 0;
      ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveKey(
        v103 + 64,
        *((_QWORD *)&v103 + 1));
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)*v104 + 16LL))(*v104);
    }
    goto LABEL_132;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1AC,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
                           v53);
  }
  return result;
}
