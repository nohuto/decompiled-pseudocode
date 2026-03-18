/*
 * XREFs of ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C008A630
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C0001008 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0002754 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0005B1C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C000AEB4 (-GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     ?GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C000AEF4 (-GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C000B508 (-GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000CC30 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D61C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000D744 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C000D830 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D864 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0022E14 (-IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1C008ACA0 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x1C0093880 (-DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C0098DC4 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00BC4E4 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPR.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C12EC (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C00C1704 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C1E20 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00DD7A0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00E6AF0 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z @ 0x1C00E873C (-GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00F7E04 (DxgkReleaseSessionModeChangeLock.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00F7EEC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00F8DD4 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00F8DF0 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00FB0E0 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C01722B0 (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z @ 0x1C0183968 (-DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z.c)
 *     ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C01B5A70 (-PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 */

__int64 __fastcall DxgkCddPresentOnScreen(struct _DXGKCDD_PRESENT_ON_SCREEN *a1, __int64 a2)
{
  char v3; // r15
  int PairingAdapters; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  DXGADAPTER *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  DXGSESSIONMGR *v13; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  SESSION_VIEW *v22; // r12
  __int64 v23; // rax
  struct DISPLAY_SOURCE *v24; // r12
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r13
  __int64 v30; // r12
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  struct DXGDEVICE *v34; // rbx
  __int64 v35; // r9
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  ADAPTER_DISPLAY *v40; // rsi
  D3DKMT_HANDLE v41; // edi
  struct tagRECT v42; // xmm6
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // eax
  __int64 v44; // rdx
  bool v45; // zf
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  unsigned int v51; // r13d
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v52; // r15d
  __int64 v53; // rcx
  struct tagRECT *v54; // rdi
  struct tagRECT *v55; // rbx
  int v56; // eax
  const RECT *v57; // r8
  DXGCONTEXT *v58; // rsi
  int v59; // eax
  int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // rcx
  char *v63; // rdi
  struct DXGDEVICE *v64; // rcx
  int v66; // eax
  _QWORD *v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rbx
  __int64 v70; // rax
  _QWORD *v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  _QWORD *v74; // rbx
  unsigned __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  _QWORD *v82; // rax
  LONG right; // ecx
  unsigned int i; // edx
  __int64 v85; // rcx
  __int64 hAllocation; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  void *pData; // rax
  LONG CddShadowPitch; // eax
  int v91; // eax
  __int64 v92; // rdx
  __int64 VidPnSourceId; // rcx
  __int64 v94; // rax
  _QWORD *v95; // rax
  UINT v96; // eax
  int v97; // edx
  int v98; // ecx
  RECT v99; // xmm1
  _QWORD *v100; // rax
  _QWORD *v101; // rax
  int v102; // eax
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  LONG v107; // eax
  unsigned int v108; // ecx
  int v109; // r15d
  int v110; // r13d
  __int64 v111; // rsi
  struct tagRECT *v112; // rbx
  int v113; // edi
  __int64 v114; // r8
  __int64 v115; // r9
  int v116; // eax
  struct DXGCONTEXT *v117; // rbx
  int v118; // eax
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // rdi
  _QWORD *v122; // rax
  __int64 v123; // rdx
  __int64 v124; // rcx
  struct DXGCONTEXT *v125; // rbx
  __int64 v126; // rdi
  __int64 v127; // rax
  __int64 v128; // r9
  char v129; // [rsp+58h] [rbp-B0h]
  char v130; // [rsp+59h] [rbp-AFh]
  char v131; // [rsp+5Ah] [rbp-AEh]
  char v132; // [rsp+5Bh] [rbp-ADh] BYREF
  unsigned int v133; // [rsp+5Ch] [rbp-ACh] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v134[2]; // [rsp+60h] [rbp-A8h]
  PVOID P; // [rsp+68h] [rbp-A0h]
  unsigned int v136[2]; // [rsp+70h] [rbp-98h] BYREF
  struct DXGCONTEXT *v137; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v138; // [rsp+80h] [rbp-88h]
  DXGDEVICE *v139; // [rsp+88h] [rbp-80h]
  struct tagRECT v140; // [rsp+90h] [rbp-78h] BYREF
  ADAPTER_DISPLAY *v141; // [rsp+A0h] [rbp-68h]
  struct DXGDEVICE *v142; // [rsp+A8h] [rbp-60h]
  int v143; // [rsp+B8h] [rbp-50h]
  int v144; // [rsp+BCh] [rbp-4Ch]
  int v145; // [rsp+C0h] [rbp-48h]
  _D3DKMT_UNLOCK v146; // [rsp+C8h] [rbp-40h] BYREF
  DXGADAPTER *v147; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v148; // [rsp+E0h] [rbp-28h]
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // [rsp+E8h] [rbp-20h]
  struct tagRECT v150; // [rsp+F0h] [rbp-18h] BYREF
  struct _LUID v151; // [rsp+100h] [rbp-8h] BYREF
  ADAPTER_RENDER **v152; // [rsp+108h] [rbp+0h]
  SESSION_VIEW *SessionViewFromSource; // [rsp+110h] [rbp+8h]
  _BYTE v154[8]; // [rsp+118h] [rbp+10h] BYREF
  __int64 v155; // [rsp+120h] [rbp+18h]
  char v156; // [rsp+128h] [rbp+20h]
  struct _DXGKARG_PRESENT_DISPLAYONLY v157; // [rsp+138h] [rbp+30h] BYREF
  _D3DKMT_LOCK v158; // [rsp+178h] [rbp+70h] BYREF
  _BYTE v159[8]; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 v160; // [rsp+1B0h] [rbp+A8h]
  char v161; // [rsp+1B8h] [rbp+B0h]
  _QWORD v162[2]; // [rsp+1C0h] [rbp+B8h] BYREF
  _BYTE v163[16]; // [rsp+1D0h] [rbp+C8h] BYREF
  unsigned __int64 v164; // [rsp+1E0h] [rbp+D8h] BYREF
  _BYTE v165[8]; // [rsp+1E8h] [rbp+E0h] BYREF
  _BYTE v166[32]; // [rsp+1F0h] [rbp+E8h] BYREF
  _BYTE v167[56]; // [rsp+210h] [rbp+108h] BYREF
  _BYTE v168[8]; // [rsp+248h] [rbp+140h] BYREF
  _BYTE v169[32]; // [rsp+250h] [rbp+148h] BYREF
  _BYTE v170[56]; // [rsp+270h] [rbp+168h] BYREF
  _QWORD v171[8]; // [rsp+2A8h] [rbp+1A0h] BYREF
  struct _D3DKMT_PRESENT v172; // [rsp+2E8h] [rbp+1E0h] BYREF
  _BYTE v173[64]; // [rsp+8C8h] [rbp+7C0h] BYREF

  v131 = 0;
  v3 = 0;
  if ( !a1 )
  {
    v68 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v68 + 24) = -1073741811LL;
LABEL_68:
    WdLogEvent5_WdError(v68);
    return 3221225485LL;
  }
  if ( *(_DWORD *)a1 > 3u )
  {
    v70 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v70 + 24) = *(int *)a1;
    *(_QWORD *)(v70 + 32) = -1073741811LL;
    WdLogEvent5_WdEvent(v70);
    return 3221225485LL;
  }
  PairingAdapters = DxgkpGetPairingAdapters(
                      *((struct DXGADAPTER **)a1 + 1),
                      *((_DWORD *)a1 + 4),
                      0LL,
                      0LL,
                      &v147,
                      &v164);
  v9 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v71 = (_QWORD *)WdLogNewEntry5_WdError(v6, v5);
    v71[3] = *((_QWORD *)a1 + 1);
    v71[4] = *((unsigned int *)a1 + 4);
    v71[5] = v9;
    WdLogEvent5_WdError(v71);
    return (unsigned int)v9;
  }
  v10 = v147;
  if ( !v147 )
  {
    v72 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
    *(_QWORD *)(v72 + 24) = 1006LL;
    WdLogEvent5_WdAssertion(v72);
  }
  v151 = *(struct _LUID *)((char *)v10 + 268);
  DXGADAPTER::ReleaseReference(v10);
  v13 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 73);
  if ( v13 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v13, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v69 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v69 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
    v68 = v69;
    *(_QWORD *)(v69 + 32) = -1073741811LL;
    goto LABEL_68;
  }
  v132 = 0;
  v16 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v132, 0);
  v19 = v16;
  if ( v16 < 0 )
  {
    v73 = WdLogNewEntry5_WdError(v18, v17);
    *(_QWORD *)(v73 + 24) = v19;
    WdLogEvent5_WdError(v73);
  }
  else
  {
    SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                              SessionDataForSpecifiedSession,
                              &v151,
                              *((_DWORD *)a1 + 4));
    v22 = SessionViewFromSource;
    if ( SessionViewFromSource )
    {
      v23 = *((unsigned int *)a1 + 19);
      if ( (unsigned int)v23 <= 4 )
      {
        P = v173;
LABEL_13:
        PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v22);
        v24 = PrimaryDisplaySource;
        if ( PrimaryDisplaySource )
        {
          while ( 1 )
          {
            v142 = 0LL;
            v137 = 0LL;
            v133 = 0;
            v136[0] = 0;
            v129 = 0;
            v130 = 0;
            memset(&v158, 0, sizeof(v158));
            *(_QWORD *)&v146.hDevice = 0LL;
            v146.phAllocations = 0LL;
            memset(&v172, 0, sizeof(v172));
            v141 = (ADAPTER_DISPLAY *)*((_QWORD *)v24 + 1);
            v29 = *((_QWORD *)v141 + 2);
            v148 = v29;
            v147 = (DXGADAPTER *)v29;
            if ( !v29 )
            {
              v78 = WdLogNewEntry5_WdAssertion(v26, v25, v27, v28);
              *(_QWORD *)(v78 + 24) = 1096LL;
              WdLogEvent5_WdAssertion(v78);
            }
            if ( !*(_QWORD *)(v29 + 2280) )
            {
              v79 = WdLogNewEntry5_WdAssertion(v26, v25, v27, v28);
              *(_QWORD *)(v79 + 24) = 1097LL;
              WdLogEvent5_WdAssertion(v79);
            }
            v30 = *((unsigned int *)v24 + 4);
            CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession((struct _LUID *)(v29 + 268));
            v19 = CddDeviceAndContextForCurrentSession;
            if ( CddDeviceAndContextForCurrentSession >= 0 )
              break;
            v80 = WdLogNewEntry5_WdError(v33, v32);
            *(_QWORD *)(v80 + 24) = v29;
            *(_QWORD *)(v80 + 32) = v19;
            WdLogEvent5_WdError(v80);
LABEL_55:
            PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(SessionViewFromSource, PrimaryDisplaySource);
            v24 = PrimaryDisplaySource;
            if ( !PrimaryDisplaySource )
            {
              v3 = v131;
              goto LABEL_57;
            }
          }
          v34 = v142;
          v139 = v142;
          DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD(
            (DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v163,
            v142);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
            (__int64)v171,
            &v137,
            1u);
          v156 = 0;
          v152 = (ADAPTER_RENDER **)((char *)v34 + 16);
          v155 = *(_QWORD *)(*((_QWORD *)v34 + 2) + 16LL);
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v154);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v165, (__int64)v34, 1LL, v35, 0);
          if ( v171[0] )
          {
            v37 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v165);
            v19 = v37;
            if ( v37 < 0 )
            {
              v82 = (_QWORD *)WdLogNewEntry5_WdError(v39, v38);
              v82[3] = v34;
              v82[4] = v19;
              goto LABEL_127;
            }
            v40 = v141;
            ADAPTER_DISPLAY::GetCddAllocationHandles(v141, v30, &v133, v136);
            if ( v133 )
            {
              v41 = v136[0];
              if ( v136[0] )
              {
LABEL_23:
                v158.hDevice = *((_DWORD *)v34 + 83);
                v158.hAllocation = v41;
                v146.hDevice = *((_DWORD *)v34 + 83);
                v146.phAllocations = &v158.hAllocation;
                v146.NumAllocations = 1;
                ADAPTER_DISPLAY::GetCddDisplayMode((DXGADAPTER **)v40, v30);
                v42 = *ADAPTER_DISPLAY::GetDwmClipBox((DXGADAPTER **)v40, v30);
                v140 = v42;
                if ( (((unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(v40, (unsigned int)v30, 1LL) - 2) & 0xFFFFFFFD) == 0 )
                {
                  right = v140.right;
                  v140.right = v140.bottom;
                  v140.bottom = right;
                  v42 = v140;
                }
                CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(v40, (unsigned int)v30, 0LL);
                v45 = *(_DWORD *)a1 == 1;
                v134[0] = CurrentOrientation;
                if ( v45 )
                {
                  if ( !*(_QWORD *)(v29 + 2288) && ADAPTER_DISPLAY::IsIdenticalMode((DXGADAPTER **)v40, v30) )
                  {
                    v57 = (const RECT *)P;
                    for ( i = 0; i < *((_DWORD *)a1 + 19); v57[v85] = *(const RECT *)(*((_QWORD *)a1 + 10) + 16 * v85) )
                      v85 = i++;
LABEL_35:
                    if ( !*(_QWORD *)(v29 + 2288) )
                    {
                      memset(&v157, 0, sizeof(v157));
                      pData = v158.pData;
                      v157.VidPnSourceId = v30;
                      if ( !v129 )
                        pData = (void *)*((_QWORD *)a1 + 3);
                      v157.pSource = pData;
                      v157.BytesPerPixel = 4;
                      CddShadowPitch = ADAPTER_DISPLAY::GetCddShadowPitch(v40, (unsigned int)v30, v87, v88);
                      v157.Flags.Value = 0;
                      v157.Pitch = CddShadowPitch;
                      v91 = ADAPTER_DISPLAY::GetCurrentOrientation(v40, (unsigned int)v30, 1LL);
                      v63 = (char *)P;
                      v157.pDirtyRect = (RECT *)P;
                      VidPnSourceId = v91 != 1;
                      v157.NumMoves = 0;
                      v157.pMoves = 0LL;
                      v157.Flags.Value = VidPnSourceId | v157.Flags.Value & 0xFFFFFFFE;
                      v157.NumDirtyRects = *((_DWORD *)a1 + 19);
                      v94 = *((_QWORD *)v40 + 33);
                      if ( v94
                        && (VidPnSourceId = v157.VidPnSourceId, v157.VidPnSourceId < *(_DWORD *)v94)
                        && (v92 = *(_QWORD *)(v94 + 8)) != 0 )
                      {
                        LODWORD(v19) = BLTQUEUE::PresentDisplayOnly(
                                         (BLTQUEUE *)(v92 + 2704LL * v157.VidPnSourceId),
                                         &v157);
                      }
                      else
                      {
                        LODWORD(v19) = -1073741811;
                      }
                      if ( (int)v19 < 0 )
                      {
                        v95 = (_QWORD *)WdLogNewEntry5_WdError(VidPnSourceId, v92);
                        v95[3] = v29;
                        v95[4] = (int)v19;
                        v95[5] = 1370LL;
                        goto LABEL_103;
                      }
LABEL_43:
                      if ( *(_DWORD *)a1 != 2 )
                      {
LABEL_44:
                        if ( v130 )
                        {
                          v117 = v137;
                          v118 = ADAPTER_DISPLAY::PresentCddPrimary(
                                   *(ADAPTER_DISPLAY **)(v29 + 2280),
                                   v137,
                                   v30,
                                   (struct COREDEVICEACCESS *)v165);
                          v121 = v118;
                          if ( v118 < 0 )
                          {
                            v122 = (_QWORD *)WdLogNewEntry5_WdError(v120, v119);
                            v122[3] = v117;
                            v122[4] = v121;
                            v122[5] = 1551LL;
                            WdLogEvent5_WdError(v122);
                          }
                        }
                        v131 = 1;
LABEL_46:
                        v34 = v139;
                        goto LABEL_47;
                      }
                      v34 = v139;
                      v102 = DXGDEVICE::Lock(v139, &v158, (struct COREDEVICEACCESS *)v165);
                      v19 = v102;
                      v145 = v102;
                      if ( v102 >= 0 )
                      {
                        v107 = *((_DWORD *)a1 + 8);
                        v150.left = 0;
                        v150.top = 0;
                        v150.right = v107;
                        v150.bottom = *((_DWORD *)a1 + 9);
                        v129 = 1;
                        if ( v134[0] != D3DKMDT_VPPR_IDENTITY )
                        {
                          if ( v134[0] == D3DKMDT_VPPR_ROTATE90 )
                          {
                            v134[0] = D3DKMDT_VPPR_ROTATE270;
                          }
                          else if ( v134[0] == D3DKMDT_VPPR_ROTATE270 )
                          {
                            v134[0] = D3DKMDT_VPPR_ROTATE90;
                          }
                        }
                        v108 = 0;
                        v138 = 0;
                        if ( *((_DWORD *)a1 + 19) )
                        {
                          v143 = v140.bottom - v140.top;
                          v109 = v140.bottom - v140.top;
                          v144 = v140.right - v140.left;
                          v110 = v140.right - v140.left;
                          v111 = 4LL * v140.left;
                          do
                          {
                            v112 = (struct tagRECT *)&v63[16 * v108];
                            v113 = ADAPTER_DISPLAY::GetCddShadowPitch(v141, (unsigned int)v30, v105, v106);
                            v116 = ADAPTER_DISPLAY::GetCddShadowPitch(v141, (unsigned int)v30, v114, v115);
                            DxgkpBlitA8R8R8G8(
                              (unsigned __int8 *)v158.pData + v111 + (unsigned int)(v140.top * v116),
                              v110,
                              v109,
                              v113,
                              v134[0],
                              *((unsigned __int8 **)a1 + 3),
                              *((_DWORD *)a1 + 10),
                              &v150,
                              v112,
                              v112);
                            v63 = (char *)P;
                            v108 = v138 + 1;
                            v138 = v108;
                          }
                          while ( v108 < *((_DWORD *)a1 + 19) );
                          LODWORD(v19) = v145;
                          v29 = v148;
                        }
                        goto LABEL_44;
                      }
                      v95 = (_QWORD *)WdLogNewEntry5_WdError(v104, v103);
                      v95[3] = v29;
                      v95[4] = v30;
                      v95[5] = v158.hAllocation;
                      v95[6] = v19;
LABEL_103:
                      WdLogEvent5_WdError(v95);
LABEL_47:
                      if ( !v129 )
                        goto LABEL_48;
                      DXGDEVICE::Unlock(v34, &v146, 0);
                      if ( (int)v19 >= 0 )
                        goto LABEL_48;
                      v82 = (_QWORD *)WdLogNewEntry5_WdError(v124, v123);
                      hAllocation = (int)v19;
                      v82[3] = v29;
                      v82[4] = v30;
                      goto LABEL_126;
                    }
                    v58 = v137;
                    v172.hWindow = 0LL;
                    v172.BroadcastContextCount = 0;
                    v172.pSrcSubRects = v57;
                    v172.hDevice = *((_DWORD *)v137 + 6);
                    v172.SubRectCnt = *((_DWORD *)a1 + 19);
                    v59 = *(_DWORD *)a1;
                    if ( *(_DWORD *)a1 )
                    {
                      v172.Flags.Value |= 1u;
                      if ( v59 == 1 )
                      {
                        v172.hDestination = v133;
                        v172.hSource = v41;
                      }
                      else
                      {
                        v172.hSource = v133;
                        if ( v59 != 2 )
                        {
                          v97 = *((_DWORD *)a1 + 9);
                          v98 = *((_DWORD *)a1 + 8);
                          v172.hDestination = v133;
                          DxgkpConvertRects(
                            v98,
                            v97,
                            v134[0],
                            &v140,
                            2u,
                            (struct tagRECT *)((char *)a1 + 44),
                            (struct tagRECT *)((char *)a1 + 44));
                          v99 = *(RECT *)((char *)a1 + 60);
                          v172.SrcRect = *(RECT *)((char *)a1 + 44);
                          v172.DstRect = v99;
                          goto LABEL_41;
                        }
                        v172.hDestination = v41;
                      }
                      v172.SrcRect = v42;
                    }
                    else
                    {
                      v96 = *((_DWORD *)a1 + 5);
                      v172.Flags.Value |= 2u;
                      v172.hSource = 0;
                      v172.Color = v96;
                      v172.hDestination = v133;
                    }
                    v172.DstRect = v42;
LABEL_41:
                    v60 = DXGCONTEXT::PresentFromCdd(
                            v58,
                            &v172,
                            v30,
                            (struct COREDEVICEACCESS *)v165,
                            (struct DXGADAPTERSTOPRESETLOCKSHARED *)v154,
                            &v137);
                    v19 = v60;
                    if ( v60 < 0 )
                    {
                      if ( v60 == -1071775482 )
                      {
                        v100 = (_QWORD *)WdLogNewEntry5_WdEvent();
                        v100[3] = v137;
                        v100[4] = -1071775482LL;
                        v100[5] = 1456LL;
                        WdLogEvent5_WdEvent(v100);
                      }
                      else if ( v60 != -1071774910 )
                      {
                        v101 = (_QWORD *)WdLogNewEntry5_WdError(v62, v61);
                        v101[3] = v137;
                        v101[4] = v19;
                        v101[5] = 1463LL;
                        WdLogEvent5_WdError(v101);
                      }
                      goto LABEL_46;
                    }
                    v63 = (char *)P;
                    goto LABEL_43;
                  }
                  v46 = DXGDEVICE::Lock(v34, &v158, (struct COREDEVICEACCESS *)v165);
                  v19 = v46;
                  if ( v46 < 0 )
                  {
                    v82 = (_QWORD *)WdLogNewEntry5_WdError(v48, v47);
                    v82[3] = v29;
                    v82[4] = v30;
                    hAllocation = v158.hAllocation;
                    v82[6] = v19;
LABEL_126:
                    v82[5] = hAllocation;
                    goto LABEL_127;
                  }
                  v138 = 0;
                  v40 = v141;
                  v129 = 1;
                  if ( *((_DWORD *)a1 + 19) )
                  {
                    v51 = v138;
                    v52 = v134[0];
                    do
                    {
                      v53 = 16LL * v51;
                      v54 = (struct tagRECT *)((char *)P + v53);
                      v55 = (struct tagRECT *)(v53 + *((_QWORD *)a1 + 10));
                      v56 = ADAPTER_DISPLAY::GetCddShadowPitch(v40, (unsigned int)v30, v49, v50);
                      DxgkpBlitA8R8R8G8(
                        *((unsigned __int8 **)a1 + 3),
                        *((_DWORD *)a1 + 8),
                        *((_DWORD *)a1 + 9),
                        *((_DWORD *)a1 + 10),
                        v52,
                        (unsigned __int8 *)v158.pData,
                        v56,
                        &v140,
                        v55,
                        v54);
                      ++v51;
                    }
                    while ( v51 < *((_DWORD *)a1 + 19) );
                    v42 = v140;
                    v29 = v148;
                    v34 = v139;
                    v41 = v136[0];
                  }
                  if ( *(_QWORD *)(v29 + 2288) )
                  {
                    DXGDEVICE::Unlock(v34, &v146, 0);
                    v129 = 0;
                  }
LABEL_34:
                  v57 = (const RECT *)P;
                  goto LABEL_35;
                }
                if ( *(_QWORD *)(v29 + 2288) )
                {
                  DxgkpConvertRects(
                    *((_DWORD *)a1 + 8),
                    *((_DWORD *)a1 + 9),
                    CurrentOrientation,
                    &v140,
                    *((_DWORD *)a1 + 19),
                    *((struct tagRECT **)a1 + 10),
                    (struct tagRECT *)P);
                  goto LABEL_34;
                }
                LODWORD(v19) = -1073741637;
                v82 = (_QWORD *)WdLogNewEntry5_WdError((unsigned int)CurrentOrientation, v44);
                v82[3] = v29;
                v82[4] = *(int *)a1;
                v82[5] = -1073741637LL;
LABEL_127:
                WdLogEvent5_WdError(v82);
                goto LABEL_48;
              }
            }
            v66 = ADAPTER_DISPLAY::DelayCreateCddAllocations(
                    v40,
                    v34,
                    v30,
                    &v133,
                    v136,
                    (struct COREDEVICEACCESS *)v165);
            v19 = v66;
            if ( v66 == -1073741637 )
            {
              LODWORD(v19) = -1071775482;
              v67 = (_QWORD *)WdLogNewEntry5_WdEvent();
              v67[5] = -1071775482LL;
            }
            else
            {
              if ( v66 >= 0 )
              {
                v41 = v136[0];
                v40 = v141;
                v130 = 1;
                goto LABEL_23;
              }
              v67 = (_QWORD *)WdLogNewEntry5_WdEvent();
              v67[5] = v19;
            }
            v67[4] = v30;
            v67[3] = v29;
            WdLogEvent5_WdEvent(v67);
          }
          else
          {
            LODWORD(v19) = -1073741801;
            v81 = WdLogNewEntry5_WdLowResource(v36);
            *(_QWORD *)(v81 + 24) = -1073741801LL;
            WdLogEvent5_WdLowResource(v81);
          }
LABEL_48:
          COREACCESS::~COREACCESS((COREACCESS *)v167);
          COREACCESS::~COREACCESS((COREACCESS *)v166);
          if ( v156 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v154);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v171);
          DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v163);
          if ( v137 )
          {
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v137 + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            {
              v125 = v137;
              v126 = *((_QWORD *)v137 + 2);
              DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
                (DXGDEVICEACCESSLOCKEXCLUSIVE *)v162,
                (struct DXGDEVICE *)v126);
              v127 = *((_QWORD *)v125 + 2);
              v161 = 0;
              v160 = *(_QWORD *)(*(_QWORD *)(v127 + 16) + 16LL);
              DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v159);
              COREDEVICEACCESS::COREDEVICEACCESS((__int64)v168, v126, 2LL, v128, 0);
              COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v168);
              if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v126 + 16) + 16LL) + 176LL) != 4 )
                DXGDEVICE::DestroyContext((DXGDEVICE *)v126, v137, (struct COREDEVICEACCESS *)v168);
              COREACCESS::~COREACCESS((COREACCESS *)v170);
              COREACCESS::~COREACCESS((COREACCESS *)v169);
              if ( v161 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v159);
              if ( v162[0] )
                DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v162);
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v126 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v126 + 16), (struct DXGDEVICE *)v126);
            }
            v64 = v142;
          }
          else
          {
            v64 = v139;
          }
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v64 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*v152, v142);
          goto LABEL_55;
        }
LABEL_57:
        if ( P != v173 && P )
          ExFreePoolWithTag(P, 0);
        if ( v3 )
          LODWORD(v19) = 0;
        goto LABEL_60;
      }
      v75 = 16 * v23;
      if ( !is_mul_ok(*((unsigned int *)a1 + 19), 0x10uLL) )
        v75 = -1LL;
      P = operator new(v75, 0x4B677844u, PagedPool);
      if ( P )
        goto LABEL_13;
      v77 = WdLogNewEntry5_WdLowResource(v76);
      *(_QWORD *)(v77 + 24) = *((unsigned int *)a1 + 19);
      *(_QWORD *)(v77 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v77);
      LODWORD(v19) = -1073741801;
    }
    else
    {
      v74 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20);
      v74[3] = *((unsigned int *)a1 + 4);
      v74[4] = v10;
      v74[5] = (unsigned int)PsGetCurrentProcessSessionId();
      v74[6] = -1073741811LL;
      WdLogEvent5_WdError(v74);
      LODWORD(v19) = -1073741811;
    }
  }
LABEL_60:
  if ( v132 )
    DxgkReleaseSessionModeChangeLock();
  return (unsigned int)v19;
}
