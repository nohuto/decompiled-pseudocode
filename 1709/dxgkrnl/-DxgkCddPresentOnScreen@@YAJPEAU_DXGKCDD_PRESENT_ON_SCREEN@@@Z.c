/*
 * XREFs of ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C007D550
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001D2C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00039DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003AA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C0006DB8 (-GetDwmClipBox@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     ?GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C0006DF8 (-GetCddShadowPitch@ADAPTER_DISPLAY@@QEBAII@Z.c)
 *     ?IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C00074AC (-IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000757C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00075C0 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1C00076C8 (-GetCddDisplayMode@ADAPTER_DISPLAY@@QEBAAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0007B20 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000810C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00087FC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008830 (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C000E084 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C000E0EC (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z @ 0x1C007DCE0 (-DelayCreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAI1PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C007EA24 (-PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00844BC (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00903E0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0094290 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0094B50 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009D730 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00AC29C (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z @ 0x1C00ADD68 (-GetCddAllocationHandles@ADAPTER_DISPLAY@@QEBAXIPEAI0@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00AFBE8 (DxgkReleaseSessionModeChangeLock.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00B1CE4 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00B2DB4 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00B5194 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00B51B0 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C00C1650 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPR.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00E1C1C (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z @ 0x1C00EC610 (-DxgkpBlitA8R8R8G8@@YAJPEAEJJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@0JPEBUtagRECT@@PEAU2@3@Z.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C0175B20 (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z @ 0x1C0187B68 (-DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z.c)
 */

__int64 __fastcall DxgkCddPresentOnScreen(struct _DXGKCDD_PRESENT_ON_SCREEN *a1)
{
  char v2; // r13
  int PairingAdapters; // eax
  __int64 v4; // rcx
  __int64 v5; // rbx
  DXGADAPTER *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx
  DXGSESSIONMGR *v9; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rsi
  struct SESSION_VIEW *SessionViewFromSource; // rax
  __int64 v16; // rcx
  SESSION_VIEW *v17; // r15
  __int64 v18; // rcx
  __int64 v19; // rax
  struct DISPLAY_SOURCE *v20; // r12
  __int64 v21; // rcx
  __int64 v22; // r13
  __int64 v23; // r12
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v25; // rcx
  struct DXGDEVICE *v26; // rbx
  __int64 v27; // rax
  __int64 v28; // r9
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  ADAPTER_DISPLAY *v32; // rsi
  D3DKMT_HANDLE v33; // edi
  struct tagRECT v34; // xmm6
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // eax
  bool v36; // zf
  const RECT *v37; // r8
  unsigned int i; // edx
  __int64 v39; // rcx
  void *pData; // rax
  int v41; // eax
  __int64 VidPnSourceId; // rcx
  char *v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rdx
  struct DXGDEVICE *v46; // rcx
  int v48; // eax
  __int64 v49; // rcx
  unsigned int v50; // esi
  ADAPTER_DISPLAY *v51; // r13
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v52; // r15d
  __int64 v53; // rcx
  struct tagRECT *v54; // rdi
  struct tagRECT *v55; // rbx
  int v56; // eax
  DXGCONTEXT *v57; // rsi
  int v58; // eax
  int v59; // eax
  __int64 v60; // rcx
  int v61; // eax
  _QWORD *v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rbx
  __int64 v65; // rax
  _QWORD *v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  _QWORD *v69; // rbx
  __int64 v70; // rcx
  SIZE_T v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rax
  int v74; // ebx
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  _QWORD *v79; // rax
  LONG right; // ecx
  __int64 hAllocation; // rcx
  _QWORD *v82; // rax
  UINT v83; // eax
  int v84; // edx
  int v85; // ecx
  RECT v86; // xmm1
  _QWORD *v87; // rax
  _QWORD *v88; // rax
  int v89; // eax
  __int64 v90; // rcx
  LONG v91; // eax
  unsigned int v92; // ecx
  int v93; // r15d
  int v94; // r13d
  __int64 v95; // rsi
  struct tagRECT *v96; // rbx
  int CddShadowPitch; // edi
  int v98; // eax
  struct DXGCONTEXT *v99; // rbx
  int v100; // eax
  __int64 v101; // rcx
  __int64 v102; // rdi
  _QWORD *v103; // rax
  __int64 v104; // rcx
  struct DXGCONTEXT *v105; // rbx
  __int64 v106; // rdi
  __int64 v107; // rax
  __int64 v108; // r9
  char v109; // [rsp+58h] [rbp-B0h]
  char v110; // [rsp+59h] [rbp-AFh]
  char v111; // [rsp+5Ah] [rbp-AEh] BYREF
  unsigned int v112; // [rsp+5Ch] [rbp-ACh] BYREF
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v113[2]; // [rsp+60h] [rbp-A8h]
  PVOID P; // [rsp+68h] [rbp-A0h]
  unsigned int v115[2]; // [rsp+70h] [rbp-98h] BYREF
  struct DXGCONTEXT *v116; // [rsp+78h] [rbp-90h] BYREF
  ADAPTER_DISPLAY *v117; // [rsp+80h] [rbp-88h]
  DXGDEVICE *v118; // [rsp+88h] [rbp-80h]
  struct tagRECT v119; // [rsp+90h] [rbp-78h] BYREF
  unsigned int v120; // [rsp+A0h] [rbp-68h]
  struct DXGDEVICE *v121; // [rsp+A8h] [rbp-60h] BYREF
  int v122; // [rsp+B8h] [rbp-50h]
  int v123; // [rsp+BCh] [rbp-4Ch]
  int v124; // [rsp+C0h] [rbp-48h]
  _D3DKMT_UNLOCK v125; // [rsp+C8h] [rbp-40h] BYREF
  DXGADAPTER *v126; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v127; // [rsp+E0h] [rbp-28h]
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // [rsp+E8h] [rbp-20h]
  struct tagRECT v129; // [rsp+F0h] [rbp-18h] BYREF
  struct _LUID v130; // [rsp+100h] [rbp-8h] BYREF
  ADAPTER_RENDER **v131; // [rsp+108h] [rbp+0h]
  SESSION_VIEW *v132; // [rsp+110h] [rbp+8h]
  _BYTE v133[8]; // [rsp+118h] [rbp+10h] BYREF
  __int64 v134; // [rsp+120h] [rbp+18h]
  char v135; // [rsp+128h] [rbp+20h]
  _DXGKARG_PRESENT_DISPLAYONLY v136; // [rsp+138h] [rbp+30h] BYREF
  _D3DKMT_LOCK v137; // [rsp+178h] [rbp+70h] BYREF
  _BYTE v138[8]; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 v139; // [rsp+1B0h] [rbp+A8h]
  char v140; // [rsp+1B8h] [rbp+B0h]
  _QWORD v141[2]; // [rsp+1C0h] [rbp+B8h] BYREF
  _BYTE v142[16]; // [rsp+1D0h] [rbp+C8h] BYREF
  unsigned __int64 v143; // [rsp+1E0h] [rbp+D8h] BYREF
  _BYTE v144[8]; // [rsp+1E8h] [rbp+E0h] BYREF
  _BYTE v145[32]; // [rsp+1F0h] [rbp+E8h] BYREF
  _BYTE v146[56]; // [rsp+210h] [rbp+108h] BYREF
  _BYTE v147[8]; // [rsp+248h] [rbp+140h] BYREF
  _BYTE v148[32]; // [rsp+250h] [rbp+148h] BYREF
  _BYTE v149[56]; // [rsp+270h] [rbp+168h] BYREF
  _QWORD v150[8]; // [rsp+2A8h] [rbp+1A0h] BYREF
  struct _D3DKMT_PRESENT v151; // [rsp+2E8h] [rbp+1E0h] BYREF
  _BYTE v152[64]; // [rsp+8C8h] [rbp+7C0h] BYREF

  v110 = 0;
  v2 = 0;
  if ( !a1 )
  {
    v63 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v63 + 24) = -1073741811LL;
LABEL_81:
    WdLogEvent5_WdError(v63);
    return 3221225485LL;
  }
  if ( *(_DWORD *)a1 > 3u )
  {
    v65 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v65 + 24) = *(int *)a1;
    *(_QWORD *)(v65 + 32) = -1073741811LL;
    WdLogEvent5_WdEvent(v65);
    return 3221225485LL;
  }
  PairingAdapters = DxgkpGetPairingAdapters(
                      *((struct DXGADAPTER **)a1 + 1),
                      *((_DWORD *)a1 + 4),
                      0LL,
                      0LL,
                      &v126,
                      &v143);
  v5 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v66 = (_QWORD *)WdLogNewEntry5_WdError(v4);
    v66[3] = *((_QWORD *)a1 + 1);
    v66[4] = *((unsigned int *)a1 + 4);
    v66[5] = v5;
    WdLogEvent5_WdError(v66);
    return (unsigned int)v5;
  }
  v6 = v126;
  if ( !v126 )
  {
    v67 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v67 + 24) = 1006LL;
    WdLogEvent5_WdAssertion(v67);
  }
  v130 = *(struct _LUID *)((char *)v6 + 268);
  DXGADAPTER::ReleaseReferenceNoTracking(v6);
  v9 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v7) + 73);
  if ( v9 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v9, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v64 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v64 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
    v63 = v64;
    *(_QWORD *)(v64 + 32) = -1073741811LL;
    goto LABEL_81;
  }
  v111 = 0;
  v12 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v111, 0);
  v14 = v12;
  if ( v12 < 0 )
  {
    v68 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v68 + 24) = v14;
    WdLogEvent5_WdError(v68);
LABEL_146:
    v74 = v14;
    goto LABEL_147;
  }
  SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(
                            SessionDataForSpecifiedSession,
                            &v130,
                            *((_DWORD *)a1 + 4));
  v132 = SessionViewFromSource;
  v17 = SessionViewFromSource;
  if ( !SessionViewFromSource )
  {
    v69 = (_QWORD *)WdLogNewEntry5_WdError(v16);
    v69[3] = *((unsigned int *)a1 + 4);
    v69[4] = v6;
    v69[5] = (unsigned int)PsGetCurrentProcessSessionId();
    v70 = (__int64)v69;
    v69[6] = -1073741811LL;
LABEL_145:
    WdLogEvent5_WdError(v70);
    LODWORD(v14) = -1073741811;
    goto LABEL_146;
  }
  v18 = (unsigned int)(*((_DWORD *)SessionViewFromSource + 8) - *((_DWORD *)SessionViewFromSource + 6));
  if ( *((_DWORD *)a1 + 8) != (_DWORD)v18
    || (v18 = (unsigned int)(*((_DWORD *)SessionViewFromSource + 9) - *((_DWORD *)SessionViewFromSource + 7)),
        *((_DWORD *)a1 + 9) != (_DWORD)v18) )
  {
    v70 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v70 + 24) = -1073741811LL;
    goto LABEL_145;
  }
  v19 = *((unsigned int *)a1 + 19);
  if ( (unsigned int)v19 <= 4 )
  {
    P = v152;
LABEL_15:
    PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v17);
    v20 = PrimaryDisplaySource;
    if ( PrimaryDisplaySource )
    {
      while ( 1 )
      {
        v121 = 0LL;
        v116 = 0LL;
        v112 = 0;
        v115[0] = 0;
        v109 = 0;
        memset(&v137, 0, sizeof(v137));
        *(_QWORD *)&v125.hDevice = 0LL;
        v125.phAllocations = 0LL;
        memset(&v151, 0, sizeof(v151));
        v117 = (ADAPTER_DISPLAY *)*((_QWORD *)v20 + 1);
        v22 = *((_QWORD *)v117 + 2);
        v127 = v22;
        v126 = (DXGADAPTER *)v22;
        if ( !v22 )
        {
          v75 = WdLogNewEntry5_WdAssertion(v21);
          *(_QWORD *)(v75 + 24) = 1105LL;
          WdLogEvent5_WdAssertion(v75);
        }
        if ( !*(_QWORD *)(v22 + 2304) )
        {
          v76 = WdLogNewEntry5_WdAssertion(v21);
          *(_QWORD *)(v76 + 24) = 1106LL;
          WdLogEvent5_WdAssertion(v76);
        }
        v23 = *((unsigned int *)v20 + 4);
        CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(
                                                 (struct _LUID *)(v22 + 268),
                                                 &v121,
                                                 &v116);
        v14 = CddDeviceAndContextForCurrentSession;
        if ( CddDeviceAndContextForCurrentSession >= 0 )
          break;
        v77 = WdLogNewEntry5_WdError(v25);
        *(_QWORD *)(v77 + 24) = v22;
        *(_QWORD *)(v77 + 32) = v14;
        WdLogEvent5_WdError(v77);
LABEL_52:
        PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v132, PrimaryDisplaySource);
        v20 = PrimaryDisplaySource;
        if ( !PrimaryDisplaySource )
        {
          v2 = v110;
          goto LABEL_54;
        }
      }
      v26 = v121;
      v118 = v121;
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v142, v121);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
        (__int64)v150,
        &v116,
        1u);
      v131 = (ADAPTER_RENDER **)((char *)v26 + 16);
      v27 = *((_QWORD *)v26 + 2);
      v135 = 0;
      v134 = *(_QWORD *)(v27 + 16);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v133);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v144, (__int64)v26, 1, v28, 0);
      if ( v150[0] )
      {
        v30 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v144);
        v14 = v30;
        if ( v30 < 0 )
        {
          v79 = (_QWORD *)WdLogNewEntry5_WdError(v31);
          v79[3] = v26;
          v79[4] = v14;
          goto LABEL_132;
        }
        v32 = v117;
        ADAPTER_DISPLAY::GetCddAllocationHandles(v117, v23, &v112, v115);
        if ( v112 )
        {
          v33 = v115[0];
          if ( v115[0] )
          {
LABEL_25:
            v137.hDevice = *((_DWORD *)v26 + 83);
            v137.hAllocation = v33;
            v125.hDevice = *((_DWORD *)v26 + 83);
            v125.phAllocations = &v137.hAllocation;
            v125.NumAllocations = 1;
            ADAPTER_DISPLAY::GetCddDisplayMode((DXGADAPTER **)v32, v23);
            v34 = *ADAPTER_DISPLAY::GetDwmClipBox((DXGADAPTER **)v32, v23);
            v119 = v34;
            if ( (((unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(v32, (unsigned int)v23, 1LL) - 2) & 0xFFFFFFFD) == 0 )
            {
              right = v119.right;
              v119.right = v119.bottom;
              v119.bottom = right;
              v34 = v119;
            }
            CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(v32, (unsigned int)v23, 0LL);
            v36 = *(_DWORD *)a1 == 1;
            v113[0] = CurrentOrientation;
            if ( v36 )
            {
              if ( !*(_QWORD *)(v22 + 2312) && ADAPTER_DISPLAY::IsIdenticalMode((DXGADAPTER **)v32, v23) )
              {
                v37 = (const RECT *)P;
                for ( i = 0; i < *((_DWORD *)a1 + 19); v37[v39] = *(const RECT *)(*((_QWORD *)a1 + 10) + 16 * v39) )
                  v39 = i++;
LABEL_32:
                if ( !*(_QWORD *)(v22 + 2312) )
                {
                  memset(&v136, 0, sizeof(v136));
                  pData = v137.pData;
                  v136.VidPnSourceId = v23;
                  if ( !v109 )
                    pData = (void *)*((_QWORD *)a1 + 3);
                  v136.pSource = pData;
                  v136.BytesPerPixel = 4;
                  v136.Pitch = ADAPTER_DISPLAY::GetCddShadowPitch(v32, v23);
                  v136.Flags.Value = 0;
                  v41 = ADAPTER_DISPLAY::GetCurrentOrientation(v32, (unsigned int)v23, 1LL);
                  v136.NumMoves = 0;
                  VidPnSourceId = v41 != 1;
                  v136.pMoves = 0LL;
                  v43 = (char *)P;
                  v136.pDirtyRect = (RECT *)P;
                  v136.Flags.Value = VidPnSourceId | v136.Flags.Value & 0xFFFFFFFE;
                  v136.NumDirtyRects = *((_DWORD *)a1 + 19);
                  v44 = *((_QWORD *)v32 + 33);
                  if ( v44
                    && (VidPnSourceId = v136.VidPnSourceId, v136.VidPnSourceId < *(_DWORD *)v44)
                    && (v45 = *(_QWORD *)(v44 + 8)) != 0 )
                  {
                    LODWORD(v14) = BLTQUEUE::PresentDisplayOnly((BLTQUEUE *)(v45 + 2704LL * v136.VidPnSourceId), &v136);
                  }
                  else
                  {
                    LODWORD(v14) = -1073741811;
                  }
                  if ( (int)v14 < 0 )
                  {
                    v82 = (_QWORD *)WdLogNewEntry5_WdError(VidPnSourceId);
                    v82[3] = v22;
                    v82[4] = (int)v14;
                    v82[5] = 1378LL;
                    goto LABEL_105;
                  }
LABEL_40:
                  if ( *(_DWORD *)a1 != 2 )
                  {
LABEL_41:
                    if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)v22) )
                    {
                      if ( !(unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*(DXGADAPTER ***)(v22 + 2304), v23) )
                      {
                        if ( ADAPTER_DISPLAY::IsVidPnSourceActive(*(ADAPTER_DISPLAY **)(v22 + 2304), v23) )
                        {
                          if ( !ADAPTER_DISPLAY::IsVidPnSourceVisible(*(ADAPTER_DISPLAY **)(v22 + 2304), v23) )
                          {
                            v99 = v116;
                            v100 = ADAPTER_DISPLAY::PresentCddPrimary(
                                     *(ADAPTER_DISPLAY **)(v22 + 2304),
                                     v116,
                                     v23,
                                     (struct COREDEVICEACCESS *)v144);
                            v102 = v100;
                            if ( v100 < 0 )
                            {
                              v103 = (_QWORD *)WdLogNewEntry5_WdError(v101);
                              v103[3] = v99;
                              v103[4] = v102;
                              v103[5] = 1563LL;
                              WdLogEvent5_WdError(v103);
                            }
                          }
                        }
                      }
                    }
                    v110 = 1;
LABEL_43:
                    v26 = v118;
                    goto LABEL_44;
                  }
                  v26 = v118;
                  v89 = DXGDEVICE::Lock(v118, &v137, (struct COREDEVICEACCESS *)v144);
                  v14 = v89;
                  v124 = v89;
                  if ( v89 >= 0 )
                  {
                    v91 = *((_DWORD *)a1 + 8);
                    v129.left = 0;
                    v129.top = 0;
                    v129.right = v91;
                    v129.bottom = *((_DWORD *)a1 + 9);
                    v109 = 1;
                    if ( v113[0] != D3DKMDT_VPPR_IDENTITY )
                    {
                      if ( v113[0] == D3DKMDT_VPPR_ROTATE90 )
                      {
                        v113[0] = D3DKMDT_VPPR_ROTATE270;
                      }
                      else if ( v113[0] == D3DKMDT_VPPR_ROTATE270 )
                      {
                        v113[0] = D3DKMDT_VPPR_ROTATE90;
                      }
                    }
                    v92 = 0;
                    v120 = 0;
                    if ( *((_DWORD *)a1 + 19) )
                    {
                      v122 = v119.bottom - v119.top;
                      v93 = v119.bottom - v119.top;
                      v123 = v119.right - v119.left;
                      v94 = v119.right - v119.left;
                      v95 = 4LL * v119.left;
                      do
                      {
                        v96 = (struct tagRECT *)&v43[16 * v92];
                        CddShadowPitch = ADAPTER_DISPLAY::GetCddShadowPitch(v117, v23);
                        v98 = ADAPTER_DISPLAY::GetCddShadowPitch(v117, v23);
                        DxgkpBlitA8R8R8G8(
                          (unsigned __int8 *)v137.pData + v95 + (unsigned int)(v119.top * v98),
                          v94,
                          v93,
                          CddShadowPitch,
                          v113[0],
                          *((unsigned __int8 **)a1 + 3),
                          *((_DWORD *)a1 + 10),
                          &v129,
                          v96,
                          v96);
                        v43 = (char *)P;
                        v92 = v120 + 1;
                        v120 = v92;
                      }
                      while ( v92 < *((_DWORD *)a1 + 19) );
                      LODWORD(v14) = v124;
                      v22 = v127;
                    }
                    goto LABEL_41;
                  }
                  v82 = (_QWORD *)WdLogNewEntry5_WdError(v90);
                  v82[3] = v22;
                  v82[4] = v23;
                  v82[5] = v137.hAllocation;
                  v82[6] = v14;
LABEL_105:
                  WdLogEvent5_WdError(v82);
LABEL_44:
                  if ( !v109 )
                    goto LABEL_45;
                  DXGDEVICE::Unlock(v26, &v125, 0);
                  if ( (int)v14 >= 0 )
                    goto LABEL_45;
                  v79 = (_QWORD *)WdLogNewEntry5_WdError(v104);
                  hAllocation = (int)v14;
                  v79[3] = v22;
                  v79[4] = v23;
                  goto LABEL_131;
                }
                v57 = v116;
                v151.hWindow = 0LL;
                v151.BroadcastContextCount = 0;
                v151.pSrcSubRects = v37;
                v151.hDevice = *((_DWORD *)v116 + 6);
                v151.SubRectCnt = *((_DWORD *)a1 + 19);
                v58 = *(_DWORD *)a1;
                if ( *(_DWORD *)a1 )
                {
                  v151.Flags.Value |= 1u;
                  if ( v58 == 1 )
                  {
                    v151.hDestination = v112;
                    v151.hSource = v33;
                  }
                  else
                  {
                    v151.hSource = v112;
                    if ( v58 != 2 )
                    {
                      v84 = *((_DWORD *)a1 + 9);
                      v85 = *((_DWORD *)a1 + 8);
                      v151.hDestination = v112;
                      DxgkpConvertRects(
                        v85,
                        v84,
                        v113[0],
                        &v119,
                        2u,
                        (struct tagRECT *)((char *)a1 + 44),
                        (struct tagRECT *)((char *)a1 + 44));
                      v86 = *(RECT *)((char *)a1 + 60);
                      v151.SrcRect = *(RECT *)((char *)a1 + 44);
                      v151.DstRect = v86;
                      goto LABEL_74;
                    }
                    v151.hDestination = v33;
                  }
                  v151.SrcRect = v34;
                }
                else
                {
                  v83 = *((_DWORD *)a1 + 5);
                  v151.Flags.Value |= 2u;
                  v151.hSource = 0;
                  v151.Color = v83;
                  v151.hDestination = v112;
                }
                v151.DstRect = v34;
LABEL_74:
                v59 = DXGCONTEXT::PresentFromCdd(
                        v57,
                        &v151,
                        v23,
                        (struct COREDEVICEACCESS *)v144,
                        (struct DXGADAPTERSTOPRESETLOCKSHARED *)v133,
                        &v116);
                v14 = v59;
                if ( v59 < 0 )
                {
                  if ( v59 == -1071775482 )
                  {
                    v87 = (_QWORD *)WdLogNewEntry5_WdEvent();
                    v87[3] = v116;
                    v87[4] = -1071775482LL;
                    v87[5] = 1464LL;
                    WdLogEvent5_WdEvent(v87);
                  }
                  else if ( v59 != -1071774910 )
                  {
                    v88 = (_QWORD *)WdLogNewEntry5_WdError(v60);
                    v88[3] = v116;
                    v88[4] = v14;
                    v88[5] = 1471LL;
                    WdLogEvent5_WdError(v88);
                  }
                  goto LABEL_43;
                }
                v43 = (char *)P;
                goto LABEL_40;
              }
              v48 = DXGDEVICE::Lock(v26, &v137, (struct COREDEVICEACCESS *)v144);
              v14 = v48;
              if ( v48 < 0 )
              {
                v79 = (_QWORD *)WdLogNewEntry5_WdError(v49);
                v79[3] = v22;
                v79[4] = v23;
                hAllocation = v137.hAllocation;
                v79[6] = v14;
LABEL_131:
                v79[5] = hAllocation;
                goto LABEL_132;
              }
              v50 = 0;
              v109 = 1;
              if ( *((_DWORD *)a1 + 19) )
              {
                v51 = v117;
                v52 = v113[0];
                do
                {
                  v53 = 16LL * v50;
                  v54 = (struct tagRECT *)((char *)P + v53);
                  v55 = (struct tagRECT *)(v53 + *((_QWORD *)a1 + 10));
                  v56 = ADAPTER_DISPLAY::GetCddShadowPitch(v51, v23);
                  DxgkpBlitA8R8R8G8(
                    *((unsigned __int8 **)a1 + 3),
                    *((_DWORD *)a1 + 8),
                    *((_DWORD *)a1 + 9),
                    *((_DWORD *)a1 + 10),
                    v52,
                    (unsigned __int8 *)v137.pData,
                    v56,
                    &v119,
                    v55,
                    v54);
                  ++v50;
                }
                while ( v50 < *((_DWORD *)a1 + 19) );
                v34 = v119;
                v22 = v127;
                v26 = v118;
                v33 = v115[0];
              }
              if ( *(_QWORD *)(v22 + 2312) )
              {
                DXGDEVICE::Unlock(v26, &v125, 0);
                v109 = 0;
              }
              v32 = v117;
LABEL_68:
              v37 = (const RECT *)P;
              goto LABEL_32;
            }
            if ( *(_QWORD *)(v22 + 2312) )
            {
              DxgkpConvertRects(
                *((_DWORD *)a1 + 8),
                *((_DWORD *)a1 + 9),
                CurrentOrientation,
                &v119,
                *((_DWORD *)a1 + 19),
                *((struct tagRECT **)a1 + 10),
                (struct tagRECT *)P);
              goto LABEL_68;
            }
            LODWORD(v14) = -1073741637;
            v79 = (_QWORD *)WdLogNewEntry5_WdError((unsigned int)CurrentOrientation);
            v79[3] = v22;
            v79[4] = *(int *)a1;
            v79[5] = -1073741637LL;
LABEL_132:
            WdLogEvent5_WdError(v79);
            goto LABEL_45;
          }
        }
        v61 = ADAPTER_DISPLAY::DelayCreateCddAllocations(v32, v26, v23, &v112, v115, (struct COREDEVICEACCESS *)v144);
        v14 = v61;
        if ( v61 == -1073741637 )
        {
          LODWORD(v14) = -1071775482;
          v62 = (_QWORD *)WdLogNewEntry5_WdEvent();
          v62[5] = -1071775482LL;
        }
        else
        {
          if ( v61 >= 0 )
          {
            v33 = v115[0];
            v32 = v117;
            goto LABEL_25;
          }
          v62 = (_QWORD *)WdLogNewEntry5_WdEvent();
          v62[5] = v14;
        }
        v62[4] = v23;
        v62[3] = v22;
        WdLogEvent5_WdEvent(v62);
      }
      else
      {
        LODWORD(v14) = -1073741801;
        v78 = WdLogNewEntry5_WdLowResource(v29);
        *(_QWORD *)(v78 + 24) = -1073741801LL;
        WdLogEvent5_WdLowResource(v78);
      }
LABEL_45:
      COREACCESS::~COREACCESS((COREACCESS *)v146);
      COREACCESS::~COREACCESS((COREACCESS *)v145);
      if ( v135 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v133);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v150);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v142);
      if ( v116 )
      {
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v116 + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        {
          v105 = v116;
          v106 = *((_QWORD *)v116 + 2);
          DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
            (DXGDEVICEACCESSLOCKEXCLUSIVE *)v141,
            (struct DXGDEVICE *)v106);
          v107 = *((_QWORD *)v105 + 2);
          v140 = 0;
          v139 = *(_QWORD *)(*(_QWORD *)(v107 + 16) + 16LL);
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v138);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v147, v106, 2, v108, 0);
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v147);
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v106 + 16) + 16LL) + 176LL) != 4 )
            DXGDEVICE::DestroyContext((DXGDEVICE *)v106, v116, (struct COREDEVICEACCESS *)v147);
          COREACCESS::~COREACCESS((COREACCESS *)v149);
          COREACCESS::~COREACCESS((COREACCESS *)v148);
          if ( v140 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v138);
          if ( v141[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v141);
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v106 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v106 + 16), (struct DXGDEVICE *)v106);
        }
        v46 = v121;
      }
      else
      {
        v46 = v118;
      }
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v46 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*v131, v121);
      goto LABEL_52;
    }
LABEL_54:
    if ( P != v152 && P )
      ExFreePoolWithTag(P, 0);
    if ( v2 )
      LODWORD(v14) = 0;
    goto LABEL_57;
  }
  v71 = 16 * v19;
  if ( !is_mul_ok(*((unsigned int *)a1 + 19), 0x10uLL) )
    v71 = -1LL;
  P = operator new(v71, 0x4B677844u, PagedPool);
  if ( P )
    goto LABEL_15;
  v73 = WdLogNewEntry5_WdLowResource(v72);
  v74 = -1073741801;
  *(_QWORD *)(v73 + 24) = *((unsigned int *)a1 + 19);
  *(_QWORD *)(v73 + 32) = -1073741801LL;
  WdLogEvent5_WdLowResource(v73);
LABEL_147:
  LODWORD(v14) = v74;
LABEL_57:
  if ( v111 )
    DxgkReleaseSessionModeChangeLock();
  return (unsigned int)v14;
}
