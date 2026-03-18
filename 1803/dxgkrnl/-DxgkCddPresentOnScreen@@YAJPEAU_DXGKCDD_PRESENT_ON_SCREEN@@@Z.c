/*
 * XREFs of ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0170610
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0001008 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0001070 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001884 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001954 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0002D98 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C0009964 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0009998 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0014394 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C00143D0 (-GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     ?GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C0014410 (-GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0015700 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0019B40 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0019C0C (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C0027DE0 (-GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     ?IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0027F38 (-IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C009EDEC (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00A25B0 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00A9CC4 (DxgkReleaseSessionModeChangeLock.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00A9DAC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00AA3F4 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00AA410 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00E1B78 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E29C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E8760 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C00E9030 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F1EA8 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00F48DC (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1C0152708 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z @ 0x1C01545C0 (-GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C01560D4 (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x1C0171718 (-DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z.c)
 *     ?DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z @ 0x1C0172340 (-DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01A2B0C (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTBLTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C01B2E2C (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTBLTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@P.c)
 *     ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C01D6024 (-PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 */

__int64 __fastcall DxgkCddPresentOnScreen(struct _DXGKCDD_PRESENT_ON_SCREEN *a1, __int64 a2)
{
  char v2; // r13
  __int64 v4; // rcx
  __int64 v6; // rax
  int PairingAdapters; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  _QWORD *v10; // rax
  DXGADAPTER *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  DXGSESSIONMGR *SessionDataForSpecifiedSession; // rbx
  unsigned int CurrentProcessSessionId; // eax
  __int64 v17; // rbx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rax
  _BYTE *v23; // rcx
  DXGSESSIONDATA **SessionViewFromSource; // rax
  __int64 v25; // rcx
  SESSION_VIEW *v26; // r15
  _QWORD *v27; // rax
  __int64 v28; // rcx
  _QWORD *v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rax
  struct DISPLAY_SOURCE *v33; // r12
  __int64 v34; // rcx
  ADAPTER_DISPLAY *v35; // rdi
  __int64 v36; // r13
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // r12
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v41; // rcx
  __int64 v42; // rax
  SIZE_T v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  struct DXGDEVICE *v46; // rbx
  __int64 v47; // rax
  __int64 v48; // r9
  __int64 v49; // rcx
  __int64 v50; // rax
  int v51; // eax
  __int64 v52; // rcx
  _QWORD *v53; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v54; // esi
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  _QWORD *v58; // rax
  struct tagRECT v59; // xmm6
  LONG right; // ecx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // eax
  bool v62; // zf
  struct tagRECT *v63; // r8
  unsigned int i; // edx
  __int64 v65; // rcx
  int v66; // eax
  __int64 v67; // rcx
  __int64 hAllocation; // rcx
  unsigned int v69; // esi
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v70; // r15d
  ADAPTER_DISPLAY *v71; // r13
  __int64 v72; // rcx
  struct tagRECT *v73; // rdi
  struct tagRECT *v74; // rbx
  int v75; // eax
  void *pData; // rax
  int v77; // eax
  __int64 VidPnSourceId; // rcx
  __int64 v79; // rax
  __int64 v80; // rdx
  _QWORD *v81; // rax
  DXGCONTEXT *v82; // rdi
  int v83; // eax
  UINT v84; // eax
  int v85; // edx
  int v86; // ecx
  RECT v87; // xmm1
  int v88; // eax
  __int64 v89; // rdx
  __int64 v90; // rcx
  _QWORD *v91; // rax
  _QWORD *v92; // rax
  int v93; // eax
  __int64 v94; // rcx
  LONG v95; // eax
  unsigned int v96; // ecx
  int v97; // r15d
  int v98; // r13d
  __int64 v99; // rsi
  struct tagRECT *v100; // rbx
  int CddShadowPitch; // edi
  int v102; // eax
  struct DXGCONTEXT *v103; // rbx
  int v104; // eax
  __int64 v105; // rcx
  __int64 v106; // rdi
  _QWORD *v107; // rax
  __int64 v108; // rcx
  __int64 v109; // rcx
  __int64 v110; // rbx
  __int64 v111; // rax
  __int64 v112; // rdi
  struct DXGDEVICE *v113; // rbx
  __int64 v114; // rax
  __int64 v115; // r9
  __int64 v116; // rbx
  __int64 v117; // rax
  __int64 v118; // r9
  struct DXGDEVICE *v119; // rcx
  struct DXGCONTEXT *v120; // rbx
  __int64 v121; // rdi
  __int64 v122; // rax
  __int64 v123; // r9
  char v124; // [rsp+58h] [rbp-B0h]
  char v125; // [rsp+59h] [rbp-AFh]
  char v126; // [rsp+5Ah] [rbp-AEh] BYREF
  unsigned int v127; // [rsp+5Ch] [rbp-ACh] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v128[2]; // [rsp+60h] [rbp-A8h] BYREF
  struct tagRECT *v129; // [rsp+68h] [rbp-A0h]
  struct DXGCONTEXT *v130; // [rsp+70h] [rbp-98h] BYREF
  DXGDEVICE *v131; // [rsp+78h] [rbp-90h]
  struct DXGDEVICE *v132; // [rsp+80h] [rbp-88h] BYREF
  struct tagRECT v133; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v134; // [rsp+A0h] [rbp-68h]
  ADAPTER_DISPLAY *v135; // [rsp+A8h] [rbp-60h]
  struct DXGHWQUEUE *v136; // [rsp+B0h] [rbp-58h] BYREF
  int v137; // [rsp+B8h] [rbp-50h]
  int v138; // [rsp+BCh] [rbp-4Ch]
  int v139; // [rsp+C0h] [rbp-48h]
  struct _D3DKMT_UNLOCK v140; // [rsp+C8h] [rbp-40h] BYREF
  DXGADAPTER *v141; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v142; // [rsp+E0h] [rbp-28h]
  struct DXGHWQUEUE *v143; // [rsp+E8h] [rbp-20h]
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // [rsp+F0h] [rbp-18h]
  struct tagRECT v145; // [rsp+F8h] [rbp-10h] BYREF
  struct _LUID v146; // [rsp+108h] [rbp+0h] BYREF
  SESSION_VIEW *v147; // [rsp+110h] [rbp+8h]
  ADAPTER_RENDER **v148; // [rsp+118h] [rbp+10h]
  _BYTE v149[8]; // [rsp+120h] [rbp+18h] BYREF
  __int64 v150; // [rsp+128h] [rbp+20h]
  char v151; // [rsp+130h] [rbp+28h]
  struct _DXGKARG_PRESENT_DISPLAYONLY v152; // [rsp+138h] [rbp+30h] BYREF
  struct _D3DKMT_LOCK v153; // [rsp+178h] [rbp+70h] BYREF
  _BYTE v154[8]; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 v155; // [rsp+1B0h] [rbp+A8h]
  char v156; // [rsp+1B8h] [rbp+B0h]
  _BYTE v157[8]; // [rsp+1C0h] [rbp+B8h] BYREF
  __int64 v158; // [rsp+1C8h] [rbp+C0h]
  char v159; // [rsp+1D0h] [rbp+C8h]
  _BYTE v160[8]; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 v161; // [rsp+1E0h] [rbp+D8h]
  char v162; // [rsp+1E8h] [rbp+E0h]
  _QWORD v163[2]; // [rsp+1F0h] [rbp+E8h] BYREF
  _QWORD v164[2]; // [rsp+200h] [rbp+F8h] BYREF
  _QWORD v165[2]; // [rsp+210h] [rbp+108h] BYREF
  unsigned __int64 v166; // [rsp+220h] [rbp+118h] BYREF
  _BYTE v167[16]; // [rsp+228h] [rbp+120h] BYREF
  _BYTE v168[8]; // [rsp+238h] [rbp+130h] BYREF
  _BYTE v169[32]; // [rsp+240h] [rbp+138h] BYREF
  _BYTE v170[56]; // [rsp+260h] [rbp+158h] BYREF
  _BYTE v171[8]; // [rsp+298h] [rbp+190h] BYREF
  _BYTE v172[32]; // [rsp+2A0h] [rbp+198h] BYREF
  _BYTE v173[56]; // [rsp+2C0h] [rbp+1B8h] BYREF
  _BYTE v174[8]; // [rsp+2F8h] [rbp+1F0h] BYREF
  _BYTE v175[32]; // [rsp+300h] [rbp+1F8h] BYREF
  _BYTE v176[56]; // [rsp+320h] [rbp+218h] BYREF
  _BYTE v177[8]; // [rsp+358h] [rbp+250h] BYREF
  _BYTE v178[32]; // [rsp+360h] [rbp+258h] BYREF
  _BYTE v179[56]; // [rsp+380h] [rbp+278h] BYREF
  _QWORD v180[8]; // [rsp+3B8h] [rbp+2B0h] BYREF
  struct _D3DKMT_SUBMITPRESENTBLTTOHWQUEUE v181; // [rsp+3F8h] [rbp+2F0h] BYREF
  _BYTE v182[64]; // [rsp+9E8h] [rbp+8E0h] BYREF

  v2 = 0;
  v125 = 0;
  if ( !a1 )
  {
    v4 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v4 + 24) = -1073741811LL;
LABEL_3:
    WdLogEvent5_WdError(v4);
    return 3221225485LL;
  }
  if ( *(_DWORD *)a1 > 3u )
  {
    v6 = WdLogNewEntry5_WdEvent(a1, a2);
    *(_QWORD *)(v6 + 24) = *(int *)a1;
    *(_QWORD *)(v6 + 32) = -1073741811LL;
    WdLogEvent5_WdEvent(v6);
    return 3221225485LL;
  }
  PairingAdapters = DxgkpGetPairingAdapters(
                      *((struct DXGADAPTER **)a1 + 1),
                      *((_DWORD *)a1 + 4),
                      0LL,
                      0LL,
                      &v141,
                      &v166);
  v9 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v10[3] = *((_QWORD *)a1 + 1);
    v10[4] = *((unsigned int *)a1 + 4);
    v10[5] = v9;
    WdLogEvent5_WdError(v10);
    return (unsigned int)v9;
  }
  v11 = v141;
  if ( !v141 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v12 + 24) = 1006LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v146 = *(struct _LUID *)((char *)v11 + 268);
  DXGADAPTER::ReleaseReferenceNoTracking(v11);
  SessionDataForSpecifiedSession = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v13) + 74);
  if ( SessionDataForSpecifiedSession )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v14);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                       SessionDataForSpecifiedSession,
                                       CurrentProcessSessionId);
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v17 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v17 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v18);
    v4 = v17;
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    goto LABEL_3;
  }
  v126 = 0;
  v19 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v126, 0);
  v21 = v19;
  if ( v19 < 0 )
  {
    v22 = WdLogNewEntry5_WdError(v20);
    *(_QWORD *)(v22 + 24) = v21;
    WdLogEvent5_WdError(v22);
LABEL_165:
    LODWORD(v9) = v21;
    goto LABEL_166;
  }
  SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                            SessionDataForSpecifiedSession,
                            &v146,
                            *((_DWORD *)a1 + 4));
  v147 = (SESSION_VIEW *)SessionViewFromSource;
  v26 = (SESSION_VIEW *)SessionViewFromSource;
  if ( !SessionViewFromSource )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdError(v25);
    v28 = *((unsigned int *)a1 + 4);
    v29 = v27;
    v27[3] = v28;
    v27[4] = v11;
    v27[5] = (unsigned int)PsGetCurrentProcessSessionId(v28);
    v30 = (__int64)v29;
    v29[6] = -1073741811LL;
LABEL_164:
    WdLogEvent5_WdError(v30);
    LODWORD(v21) = -1073741811;
    goto LABEL_165;
  }
  v31 = (unsigned int)(*((_DWORD *)SessionViewFromSource + 8) - *((_DWORD *)SessionViewFromSource + 6));
  if ( *((_DWORD *)a1 + 8) != (_DWORD)v31
    || (v31 = (unsigned int)(*((_DWORD *)SessionViewFromSource + 9) - *((_DWORD *)SessionViewFromSource + 7)),
        *((_DWORD *)a1 + 9) != (_DWORD)v31) )
  {
    v30 = WdLogNewEntry5_WdError(v31);
    *(_QWORD *)(v30 + 24) = -1073741811LL;
    goto LABEL_164;
  }
  v32 = *((unsigned int *)a1 + 19);
  if ( (unsigned int)v32 > 4 )
  {
    v43 = 16 * v32;
    if ( !is_mul_ok(*((unsigned int *)a1 + 19), 0x10uLL) )
      v43 = -1LL;
    v129 = (struct tagRECT *)operator new[](v43, 0x4B677844u, PagedPool);
    if ( !v129 )
    {
      v45 = WdLogNewEntry5_WdLowResource(v44);
      LODWORD(v9) = -1073741801;
      *(_QWORD *)(v45 + 24) = *((unsigned int *)a1 + 19);
      *(_QWORD *)(v45 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v45);
      goto LABEL_166;
    }
  }
  else
  {
    v129 = (struct tagRECT *)v182;
  }
  PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v26);
  v33 = PrimaryDisplaySource;
  if ( !PrimaryDisplaySource )
    goto LABEL_158;
  do
  {
    v132 = 0LL;
    v130 = 0LL;
    v136 = 0LL;
    v127 = 0;
    v128[0] = D3DKMDT_VPPR_UNINITIALIZED;
    v124 = 0;
    memset(&v153, 0, sizeof(v153));
    *(_QWORD *)&v140.hDevice = 0LL;
    v140.phAllocations = 0LL;
    memset(&v181, 0, sizeof(v181));
    v35 = (ADAPTER_DISPLAY *)*((_QWORD *)v33 + 1);
    v135 = v35;
    v36 = *((_QWORD *)v35 + 2);
    v142 = v36;
    v141 = (DXGADAPTER *)v36;
    if ( !v36 )
    {
      v37 = WdLogNewEntry5_WdAssertion(v34);
      *(_QWORD *)(v37 + 24) = 1107LL;
      WdLogEvent5_WdAssertion(v37);
    }
    if ( !*(_QWORD *)(v36 + 2456) )
    {
      v38 = WdLogNewEntry5_WdAssertion(v34);
      *(_QWORD *)(v38 + 24) = 1108LL;
      WdLogEvent5_WdAssertion(v38);
    }
    v39 = *((unsigned int *)v33 + 4);
    CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                             (struct _LUID *)(v36 + 268),
                                             &v132,
                                             &v130,
                                             &v136);
    v21 = CddDeviceAndContextForCurrentSession;
    if ( CddDeviceAndContextForCurrentSession < 0 )
    {
      v42 = WdLogNewEntry5_WdError(v41);
      *(_QWORD *)(v42 + 24) = v36;
      *(_QWORD *)(v42 + 32) = v21;
      WdLogEvent5_WdError(v42);
      goto LABEL_156;
    }
    v46 = v132;
    v131 = v132;
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v167, v132);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v180,
      &v130,
      1u);
    v148 = (ADAPTER_RENDER **)((char *)v46 + 16);
    v47 = *((_QWORD *)v46 + 2);
    v151 = 0;
    v150 = *(_QWORD *)(v47 + 16);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v149);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v168, (__int64)v46, 1, v48, 0);
    v143 = v136;
    if ( v180[0] )
    {
      v51 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v168);
      v21 = v51;
      if ( v51 < 0 )
      {
        v53 = (_QWORD *)WdLogNewEntry5_WdError(v52);
        v53[3] = v46;
        v53[4] = v21;
LABEL_119:
        WdLogEvent5_WdError(v53);
        goto LABEL_120;
      }
      ADAPTER_DISPLAY::GetCddAllocationHandles((DXGADAPTER **)v35, v39, &v127, (unsigned int *)v128);
      if ( v127 )
      {
        v54 = v128[0];
        if ( v128[0] )
          goto LABEL_46;
      }
      v55 = ADAPTER_DISPLAY::DelayCreateCddAllocations(
              (DXGADAPTER **)v35,
              v46,
              v39,
              &v127,
              (unsigned int *)v128,
              (struct COREDEVICEACCESS *)v168);
      v21 = v55;
      if ( v55 == -1073741637 )
      {
        LODWORD(v21) = -1071775482;
        v58 = (_QWORD *)WdLogNewEntry5_WdEvent(v57, v56);
        v58[5] = -1071775482LL;
LABEL_42:
        v58[4] = v39;
        v58[3] = v36;
        WdLogEvent5_WdEvent(v58);
        goto LABEL_120;
      }
      if ( v55 < 0 )
      {
        v58 = (_QWORD *)WdLogNewEntry5_WdEvent(v57, v56);
        v58[5] = v21;
        goto LABEL_42;
      }
      v54 = v128[0];
LABEL_46:
      v153.hDevice = *((_DWORD *)v46 + 83);
      v153.hAllocation = v54;
      v140.hDevice = *((_DWORD *)v46 + 83);
      v140.phAllocations = &v153.hAllocation;
      v140.NumAllocations = 1;
      ADAPTER_DISPLAY::GetCddDisplayMode((DXGADAPTER **)v35, v39);
      v59 = *ADAPTER_DISPLAY::GetDwmClipBox((DXGADAPTER **)v35, v39);
      v133 = v59;
      if ( (((unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation((__int64)v35, v39, 1) - 2) & 0xFFFFFFFD) == 0 )
      {
        right = v133.right;
        v133.right = v133.bottom;
        v133.bottom = right;
        v59 = v133;
      }
      CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation((__int64)v35, v39, 0);
      v62 = *(_DWORD *)a1 == 1;
      v128[1] = CurrentOrientation;
      if ( v62 )
      {
        if ( !*(_QWORD *)(v36 + 2464) && ADAPTER_DISPLAY::IsIdenticalMode((DXGADAPTER **)v35, v39) )
        {
          v63 = v129;
          for ( i = 0; i < *((_DWORD *)a1 + 19); v63[v65] = *(struct tagRECT *)(*((_QWORD *)a1 + 10) + 16 * v65) )
            v65 = i++;
LABEL_64:
          if ( !*(_QWORD *)(v36 + 2464) )
          {
            memset(&v152, 0, sizeof(v152));
            pData = v153.pData;
            v152.VidPnSourceId = v39;
            if ( !v124 )
              pData = (void *)*((_QWORD *)a1 + 3);
            v152.pSource = pData;
            v152.BytesPerPixel = 4;
            v152.Pitch = ADAPTER_DISPLAY::GetCddShadowPitch(v35, v39);
            v152.Flags.Value = 0;
            v77 = ADAPTER_DISPLAY::GetCurrentOrientation((__int64)v35, v39, 1);
            v152.NumMoves = 0;
            VidPnSourceId = v77 != 1;
            v152.pMoves = 0LL;
            v152.Flags.Value = VidPnSourceId | v152.Flags.Value & 0xFFFFFFFE;
            v152.NumDirtyRects = *((_DWORD *)a1 + 19);
            v152.pDirtyRect = v129;
            v79 = *((_QWORD *)v35 + 33);
            if ( v79
              && (VidPnSourceId = v152.VidPnSourceId, v152.VidPnSourceId < *(_DWORD *)v79)
              && (v80 = *(_QWORD *)(v79 + 8)) != 0 )
            {
              LODWORD(v21) = BLTQUEUE::PresentDisplayOnly((BLTQUEUE *)(v80 + 2704LL * v152.VidPnSourceId), &v152);
            }
            else
            {
              LODWORD(v21) = -1073741811;
            }
            if ( (int)v21 < 0 )
            {
              v81 = (_QWORD *)WdLogNewEntry5_WdError(VidPnSourceId);
              v81[3] = v36;
              v81[4] = (int)v21;
              v81[5] = 1381LL;
LABEL_77:
              WdLogEvent5_WdError(v81);
              goto LABEL_115;
            }
            goto LABEL_95;
          }
          if ( v143 )
          {
            v181.hHwQueue = *((_DWORD *)v143 + 6);
            v181.HwQueueProgressFenceId = *((_QWORD *)a1 + 11);
          }
          v82 = v130;
          v181.PrivatePresentData.hWindow = 0LL;
          v181.PrivatePresentData.BroadcastContextCount = 0;
          v181.PrivatePresentData.pSrcSubRects = v63;
          v181.PrivatePresentData.hDevice = *((_DWORD *)v130 + 6);
          v181.PrivatePresentData.SubRectCnt = *((_DWORD *)a1 + 19);
          v83 = *(_DWORD *)a1;
          if ( *(_DWORD *)a1 )
          {
            v181.PrivatePresentData.Flags.Value |= 1u;
            if ( v83 == 1 )
            {
              v181.PrivatePresentData.hDestination = v127;
              v181.PrivatePresentData.hSource = v54;
            }
            else
            {
              v181.PrivatePresentData.hSource = v127;
              if ( v83 != 2 )
              {
                v85 = *((_DWORD *)a1 + 9);
                v86 = *((_DWORD *)a1 + 8);
                v181.PrivatePresentData.hDestination = v127;
                DxgkpConvertRects(
                  v86,
                  v85,
                  v128[1],
                  &v133,
                  2u,
                  (struct tagRECT *)((char *)a1 + 44),
                  (struct tagRECT *)((char *)a1 + 44));
                v87 = *(RECT *)((char *)a1 + 60);
                v181.PrivatePresentData.SrcRect = *(RECT *)((char *)a1 + 44);
                v181.PrivatePresentData.DstRect = v87;
                goto LABEL_89;
              }
              v181.PrivatePresentData.hDestination = v54;
            }
            v181.PrivatePresentData.SrcRect = v59;
          }
          else
          {
            v84 = *((_DWORD *)a1 + 5);
            v181.PrivatePresentData.Flags.Value |= 2u;
            v181.PrivatePresentData.hSource = 0;
            v181.PrivatePresentData.Color = v84;
            v181.PrivatePresentData.hDestination = v127;
          }
          v181.PrivatePresentData.DstRect = v59;
LABEL_89:
          v88 = DXGCONTEXT::PresentFromCdd(
                  v82,
                  &v181,
                  v39,
                  (struct COREDEVICEACCESS *)v168,
                  (struct DXGADAPTERSTOPRESETLOCKSHARED *)v149,
                  &v130);
          v21 = v88;
          if ( v88 < 0 )
          {
            if ( v88 == -1071775482 )
            {
              v91 = (_QWORD *)WdLogNewEntry5_WdEvent(v90, v89);
              v91[3] = v130;
              v91[4] = -1071775482LL;
              v91[5] = 1473LL;
              WdLogEvent5_WdEvent(v91);
            }
            else if ( v88 != -1071774910 )
            {
              v92 = (_QWORD *)WdLogNewEntry5_WdError(v90);
              v92[3] = v130;
              v92[4] = v21;
              v92[5] = 1480LL;
              WdLogEvent5_WdError(v92);
            }
            goto LABEL_114;
          }
          v35 = v135;
LABEL_95:
          if ( *(_DWORD *)a1 == 2 )
          {
            v46 = v131;
            v93 = DXGDEVICE::Lock((PERESOURCE *)v131, &v153, (struct COREDEVICEACCESS *)v168);
            v21 = v93;
            v139 = v93;
            if ( v93 < 0 )
            {
              v81 = (_QWORD *)WdLogNewEntry5_WdError(v94);
              v81[3] = v36;
              v81[4] = v39;
              v81[5] = v153.hAllocation;
              v81[6] = v21;
              goto LABEL_77;
            }
            v95 = *((_DWORD *)a1 + 8);
            v145.left = 0;
            v145.top = 0;
            v145.right = v95;
            v145.bottom = *((_DWORD *)a1 + 9);
            v124 = 1;
            if ( v128[1] != D3DKMDT_VPPR_IDENTITY )
            {
              if ( v128[1] == D3DKMDT_VPPR_ROTATE90 )
              {
                v128[1] = D3DKMDT_VPPR_ROTATE270;
              }
              else if ( v128[1] == D3DKMDT_VPPR_ROTATE270 )
              {
                v128[1] = D3DKMDT_VPPR_ROTATE90;
              }
            }
            v96 = 0;
            v134 = 0;
            if ( *((_DWORD *)a1 + 19) )
            {
              v137 = v133.bottom - v133.top;
              v97 = v133.bottom - v133.top;
              v138 = v133.right - v133.left;
              v98 = v133.right - v133.left;
              v99 = 4LL * v133.left;
              do
              {
                v100 = &v129[v96];
                CddShadowPitch = ADAPTER_DISPLAY::GetCddShadowPitch(v35, v39);
                v102 = ADAPTER_DISPLAY::GetCddShadowPitch(v135, v39);
                DxgkpBlitA8R8R8G8(
                  (unsigned __int8 *)v153.pData + v99 + (unsigned int)(v133.top * v102),
                  v98,
                  v97,
                  CddShadowPitch,
                  v128[1],
                  *((unsigned __int8 **)a1 + 3),
                  *((_DWORD *)a1 + 10),
                  &v145,
                  v100,
                  v100);
                v35 = v135;
                v96 = v134 + 1;
                v134 = v96;
              }
              while ( v96 < *((_DWORD *)a1 + 19) );
              LODWORD(v21) = v139;
              v36 = v142;
            }
          }
          if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)v36) )
          {
            if ( !(unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*(DXGADAPTER ***)(v36 + 2456), v39) )
            {
              if ( ADAPTER_DISPLAY::IsVidPnSourceActive(*(ADAPTER_DISPLAY **)(v36 + 2456), v39) )
              {
                if ( !ADAPTER_DISPLAY::IsVidPnSourceVisible(*(ADAPTER_DISPLAY **)(v36 + 2456), v39) )
                {
                  v103 = v130;
                  v104 = ADAPTER_DISPLAY::PresentCddPrimary(
                           *(ADAPTER_DISPLAY **)(v36 + 2456),
                           v130,
                           v39,
                           (struct COREDEVICEACCESS *)v168);
                  v106 = v104;
                  if ( v104 < 0 )
                  {
                    v107 = (_QWORD *)WdLogNewEntry5_WdError(v105);
                    v107[3] = v103;
                    v107[4] = v106;
                    v107[5] = 1572LL;
                    WdLogEvent5_WdError(v107);
                  }
                }
              }
            }
          }
          v125 = 1;
LABEL_114:
          v46 = v131;
LABEL_115:
          if ( !v124 )
            goto LABEL_120;
          DXGDEVICE::Unlock(v46, &v140, 0LL);
          if ( (int)v21 >= 0 )
            goto LABEL_120;
          v53 = (_QWORD *)WdLogNewEntry5_WdError(v108);
          hAllocation = (int)v21;
          v53[3] = v36;
          v53[4] = v39;
          goto LABEL_118;
        }
        v66 = DXGDEVICE::Lock((PERESOURCE *)v46, &v153, (struct COREDEVICEACCESS *)v168);
        v21 = v66;
        if ( v66 < 0 )
        {
          v53 = (_QWORD *)WdLogNewEntry5_WdError(v67);
          v53[3] = v36;
          v53[4] = v39;
          hAllocation = v153.hAllocation;
          v53[6] = v21;
LABEL_118:
          v53[5] = hAllocation;
          goto LABEL_119;
        }
        v69 = 0;
        v124 = 1;
        if ( *((_DWORD *)a1 + 19) )
        {
          v70 = v128[1];
          v71 = v35;
          do
          {
            v72 = v69;
            v73 = &v129[v72];
            v74 = (struct tagRECT *)(v72 * 16 + *((_QWORD *)a1 + 10));
            v75 = ADAPTER_DISPLAY::GetCddShadowPitch(v71, v39);
            DxgkpBlitA8R8R8G8(
              *((unsigned __int8 **)a1 + 3),
              *((_DWORD *)a1 + 8),
              *((_DWORD *)a1 + 9),
              *((_DWORD *)a1 + 10),
              v70,
              (unsigned __int8 *)v153.pData,
              v75,
              &v133,
              v74,
              v73);
            ++v69;
          }
          while ( v69 < *((_DWORD *)a1 + 19) );
          v59 = v133;
          v36 = v142;
          v46 = v131;
          v35 = v135;
        }
        if ( *(_QWORD *)(v36 + 2464) )
        {
          DXGDEVICE::Unlock(v46, &v140, 0LL);
          v124 = 0;
        }
        v54 = v128[0];
      }
      else
      {
        if ( !*(_QWORD *)(v36 + 2464) )
        {
          LODWORD(v21) = -1073741637;
          v53 = (_QWORD *)WdLogNewEntry5_WdError((unsigned int)CurrentOrientation);
          v53[3] = v36;
          v53[4] = *(int *)a1;
          v53[5] = -1073741637LL;
          goto LABEL_119;
        }
        DxgkpConvertRects(
          *((_DWORD *)a1 + 8),
          *((_DWORD *)a1 + 9),
          CurrentOrientation,
          &v133,
          *((_DWORD *)a1 + 19),
          *((struct tagRECT **)a1 + 10),
          v129);
      }
      v63 = v129;
      goto LABEL_64;
    }
    LODWORD(v21) = -1073741801;
    v50 = WdLogNewEntry5_WdLowResource(v49);
    *(_QWORD *)(v50 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v50);
LABEL_120:
    COREACCESS::~COREACCESS((COREACCESS *)v170);
    COREACCESS::~COREACCESS((COREACCESS *)v169);
    if ( v151 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v149);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v180);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v167);
    if ( v143 )
    {
      v110 = _InterlockedDecrement64((volatile signed __int64 *)v143 + 7);
      if ( v110 < 0 )
      {
        v111 = WdLogNewEntry5_WdAssertion(v109);
        *(_QWORD *)(v111 + 24) = 91LL;
        WdLogEvent5_WdAssertion(v111);
      }
      if ( !v110 )
      {
        v112 = *((_QWORD *)v136 + 2);
        v113 = *(struct DXGDEVICE **)(v112 + 16);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v163, v113);
        v114 = *((_QWORD *)v113 + 2);
        v156 = 0;
        v155 = *(_QWORD *)(v114 + 16);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v154);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v171, (__int64)v113, 2, v115, 0);
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v171);
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v113 + 2) + 16LL) + 176LL) != 4 )
          DXGCONTEXT::DestroyHwQueue((DXGCONTEXT *)v112, v136, (struct COREDEVICEACCESS *)v171);
        COREACCESS::~COREACCESS((COREACCESS *)v173);
        COREACCESS::~COREACCESS((COREACCESS *)v172);
        if ( v156 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v154);
        if ( v163[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v163);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v112 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        {
          v116 = *(_QWORD *)(v112 + 16);
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
            (DXGDEVICEACCESSLOCKEXCLUSIVE *)v164,
            (struct DXGDEVICE *)v116);
          v117 = *(_QWORD *)(v112 + 16);
          v159 = 0;
          v158 = *(_QWORD *)(*(_QWORD *)(v117 + 16) + 16LL);
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v157);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v174, v116, 2, v118, 0);
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v174);
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v116 + 16) + 16LL) + 176LL) != 4 )
            DXGDEVICE::DestroyContext((PERESOURCE *)v116, (struct DXGCONTEXT *)v112, (struct COREDEVICEACCESS *)v174);
          COREACCESS::~COREACCESS((COREACCESS *)v176);
          COREACCESS::~COREACCESS((COREACCESS *)v175);
          if ( v159 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v157);
          if ( v164[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v164);
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v116 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v116 + 16), (struct DXGDEVICE *)v116);
        }
      }
      v119 = v132;
    }
    else
    {
      v119 = v131;
    }
    if ( v130 )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v130 + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      {
        v120 = v130;
        v121 = *((_QWORD *)v130 + 2);
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
          (DXGDEVICEACCESSLOCKEXCLUSIVE *)v165,
          (struct DXGDEVICE *)v121);
        v122 = *((_QWORD *)v120 + 2);
        v162 = 0;
        v161 = *(_QWORD *)(*(_QWORD *)(v122 + 16) + 16LL);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v160);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v177, v121, 2, v123, 0);
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v177);
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v121 + 16) + 16LL) + 176LL) != 4 )
          DXGDEVICE::DestroyContext((PERESOURCE *)v121, v130, (struct COREDEVICEACCESS *)v177);
        COREACCESS::~COREACCESS((COREACCESS *)v179);
        COREACCESS::~COREACCESS((COREACCESS *)v178);
        if ( v162 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v160);
        if ( v165[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v165);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v121 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v121 + 16), (struct DXGDEVICE *)v121);
      }
      v119 = v132;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v119 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*v148, v132);
LABEL_156:
    PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v147, PrimaryDisplaySource);
    v33 = PrimaryDisplaySource;
  }
  while ( PrimaryDisplaySource );
  v2 = v125;
LABEL_158:
  v23 = v182;
  if ( v129 != (struct tagRECT *)v182 )
    operator delete[](v129);
  LODWORD(v9) = 0;
  if ( !v2 )
    LODWORD(v9) = v21;
LABEL_166:
  if ( v126 )
    DxgkReleaseSessionModeChangeLock((__int64)v23);
  return (unsigned int)v9;
}
