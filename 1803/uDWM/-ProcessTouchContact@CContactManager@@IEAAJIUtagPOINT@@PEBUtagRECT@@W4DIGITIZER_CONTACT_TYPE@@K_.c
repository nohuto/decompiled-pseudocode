/*
 * XREFs of ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18008C180
 * Callers:
 *     ?OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z @ 0x18008A434 (-OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z.c)
 *     ?OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z @ 0x18008B2B8 (-OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020D50 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x1800390E4 (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCDirectTouchVisual@@@Z @ 0x18003D3A8 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     ?UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z @ 0x18003D51C (-UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x18003DBA0 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004B360 (memset_0.c)
 *     McTemplateU0d @ 0x180073CC4 (McTemplateU0d.c)
 *     ??$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCIndirectTouchVisual@@@Z @ 0x180088BC4 (--$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCIndirectTouchVisual@.c)
 *     ??$CreateTouchVisual@VCTouchDragVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTouchDragVisual@@@Z @ 0x1800891BC (--$CreateTouchVisual@VCTouchDragVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTouchDragVisual@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UCTouchContact@@$0A@@@QEAAJPEFBUCTouchContact@@I@Z @ 0x1800894E8 (-AddMultipleAndSet@-$DynArray@UCTouchContact@@$0A@@@QEAAJPEFBUCTouchContact@@I@Z.c)
 *     ?CheckShowContact@CContactManager@@AEAA_NW4DWM_SHOWCONTACT@@0@Z @ 0x18008985C (-CheckShowContact@CContactManager@@AEAA_NW4DWM_SHOWCONTACT@@0@Z.c)
 *     ?CleanupFinishedAnimations@CContactManager@@AEAAXXZ @ 0x18008987C (-CleanupFinishedAnimations@CContactManager@@AEAAXXZ.c)
 *     ?FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x180089B98 (-FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVi.c)
 *     ?IsOKToCleanup@CPressTapVisual@@UEAA_NXZ @ 0x18008A0E0 (-IsOKToCleanup@CPressTapVisual@@UEAA_NXZ.c)
 *     ?RemoveAt@?$DynArray@UCTouchContact@@$0A@@@QEAAJI@Z @ 0x18008CEE8 (-RemoveAt@-$DynArray@UCTouchContact@@$0A@@@QEAAJI@Z.c)
 *     ?StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K_N@Z @ 0x18008D068 (-StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 *     ?FadeOut@CDirectTouchVisual@@QEAAJXZ @ 0x18008D268 (-FadeOut@CDirectTouchVisual@@QEAAJXZ.c)
 *     ?IsInInitialDelay@CDirectTouchVisual@@QEBA_NXZ @ 0x18008D354 (-IsInInitialDelay@CDirectTouchVisual@@QEBA_NXZ.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x18008D36C (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?SetContactPosition@CTextTetherVisual@@QEAAJAEBUtagPOINT@@AEBUtagRECT@@@Z @ 0x18008E5B4 (-SetContactPosition@CTextTetherVisual@@QEAAJAEBUtagPOINT@@AEBUtagRECT@@@Z.c)
 *     ?SnapToAnchor@CTextTetherVisual@@QEAAJXZ @ 0x18008E5E0 (-SnapToAnchor@CTextTetherVisual@@QEAAJXZ.c)
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x180090338 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?UpdateShowContact@CTouchDragVisual@@QEAAXW4DWM_SHOWCONTACT@@@Z @ 0x1800908BC (-UpdateShowContact@CTouchDragVisual@@QEAAXW4DWM_SHOWCONTACT@@@Z.c)
 *     ?SnapToAnchor@CTetherVisual@@QEAAJXZ @ 0x180091138 (-SnapToAnchor@CTetherVisual@@QEAAJXZ.c)
 *     ?UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z @ 0x1800915E0 (-UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z.c)
 *     ?StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x18009A364 (-StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x18009A4EC (-StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x18009A66C (-StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009A968 (-UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?IsHolding@CTouchPressHoldVisual@@QEAA_NXZ @ 0x1800A5648 (-IsHolding@CTouchPressHoldVisual@@QEAA_NXZ.c)
 *     ?IsOKToCleanup@CTouchPressHoldVisual@@UEAA_NXZ @ 0x1800A5670 (-IsOKToCleanup@CTouchPressHoldVisual@@UEAA_NXZ.c)
 */

__int64 __fastcall CContactManager::ProcessTouchContact(
        __int64 a1,
        unsigned int a2,
        struct tagPOINT a3,
        const struct tagRECT *a4,
        int a5,
        char a6,
        unsigned __int64 a7)
{
  __int64 v8; // rax
  unsigned int v9; // edx
  unsigned int v10; // r12d
  struct tagPOINT v11; // rbx
  __int64 v13; // rsi
  __int64 v14; // r8
  int v15; // r14d
  __int64 v16; // rsi
  __int64 v17; // rdi
  CIndirectTouchVisual *v18; // rcx
  __int64 v19; // rax
  CContactManager *v20; // r15
  unsigned int v21; // eax
  unsigned int v22; // edx
  int v23; // r14d
  CContactManager *v24; // rcx
  int v25; // eax
  volatile signed __int32 *v26; // rdx
  CBaseObject *v27; // rcx
  unsigned int v28; // eax
  unsigned int v29; // edx
  int v30; // r14d
  CContactManager *v31; // rcx
  int v32; // eax
  volatile signed __int32 *v33; // rdx
  CBaseObject *v34; // rcx
  struct CTouchVisual *v35; // r14
  CDirectTouchVisual *v36; // rcx
  __int64 v37; // r14
  CDesktopManager *v38; // r9
  __int64 v39; // rcx
  int Touch; // eax
  __int64 v41; // r8
  __int64 v42; // r9
  int v43; // r9d
  CContactManager *v44; // rcx
  CDirectTouchVisual *v45; // rcx
  CTouchDragVisual *v46; // rcx
  float *v47; // rcx
  CIndirectTouchVisual *v48; // rcx
  CTetherVisual *v49; // rcx
  CTextTetherVisual *v50; // rcx
  CContactManager *v51; // r13
  CContactManager *v52; // rcx
  struct CTouchVisual *v53; // r14
  bool v54; // r13
  int v55; // r14d
  int v56; // edx
  CContactManager *v57; // rcx
  __int64 v58; // r8
  char v59; // al
  int started; // eax
  unsigned int v61; // eax
  unsigned int v62; // edx
  int v63; // r14d
  CContactManager *v64; // rcx
  int v65; // eax
  volatile signed __int32 *v66; // rdx
  struct CTouchVisual *v67; // r14
  __int64 v68; // r15
  bool v69; // r14
  __int64 v70; // rcx
  __int64 v71; // rax
  unsigned int v72; // edx
  int v73; // r14d
  int v74; // eax
  unsigned int v75; // eax
  unsigned int v76; // edx
  int v77; // r14d
  int v78; // eax
  volatile signed __int32 *v79; // rdx
  CBaseObject *v80; // rcx
  unsigned int v81; // eax
  unsigned int v82; // edx
  int v83; // r14d
  CContactManager *v84; // rcx
  int v85; // eax
  volatile signed __int32 *v86; // rdx
  CBaseObject *v87; // rcx
  unsigned int v88; // eax
  unsigned int v89; // edx
  int v90; // r14d
  CContactManager *v91; // rcx
  int v92; // eax
  volatile signed __int32 *v93; // rdx
  CBaseObject *v94; // rcx
  struct CTouchVisual *v95; // r14
  CContactManager *v96; // rcx
  unsigned int v97; // eax
  unsigned int v98; // edx
  int v99; // r14d
  int v100; // eax
  CBaseObject *v101; // rcx
  __int128 *v102; // rdx
  struct tagRECT v103; // xmm0
  CContactManager *v104; // rcx
  CContactManager *v105; // rcx
  unsigned int v107; // [rsp+20h] [rbp-E0h]
  CContactManager *v108; // [rsp+40h] [rbp-C0h] BYREF
  struct tagPOINT v109; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v110; // [rsp+50h] [rbp-B0h]
  void *v111; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v112; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v113; // [rsp+68h] [rbp-98h] BYREF
  __int64 v114; // [rsp+70h] [rbp-90h] BYREF
  __int64 v115; // [rsp+78h] [rbp-88h] BYREF
  __int64 v116; // [rsp+80h] [rbp-80h] BYREF
  __int128 v117; // [rsp+88h] [rbp-78h] BYREF
  __int128 v118; // [rsp+A0h] [rbp-60h] BYREF
  struct tagPOINT v119; // [rsp+B0h] [rbp-50h]
  struct tagRECT v120; // [rsp+B8h] [rbp-48h]
  unsigned int v121; // [rsp+C8h] [rbp-38h]
  struct CVisual *v122[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v123; // [rsp+E0h] [rbp-20h]
  __int64 v124; // [rsp+E8h] [rbp-18h]
  __int128 v125; // [rsp+F0h] [rbp-10h]
  __int64 v126; // [rsp+100h] [rbp+0h]
  char v127; // [rsp+108h] [rbp+8h]
  char v128; // [rsp+109h] [rbp+9h]

  v8 = 0xFFFFFFFFLL;
  v9 = 0;
  v111 = (void *)a4;
  v10 = 0;
  v108 = (CContactManager *)a1;
  v11 = a3;
  v13 = a1;
  v109 = a3;
  v110 = -1;
  if ( *(_DWORD *)(a1 + 80) )
  {
    v14 = *(_QWORD *)(a1 + 56);
    while ( 1 )
    {
      a1 = 112LL * v9;
      if ( *(_DWORD *)(a1 + v14) == a2 )
        break;
      if ( ++v9 >= *(_DWORD *)(v13 + 80) )
      {
        v8 = v110;
        goto LABEL_7;
      }
    }
    v8 = v9;
    v110 = v9;
  }
LABEL_7:
  v15 = a5;
  if ( (a6 & 0x80) == 0 && a5 == 1 )
    v15 = 3;
  if ( (int)v8 < 0 )
  {
    if ( v15 != 2 && (v15 != 1 || (a6 & 0x80) == 0) )
      return v10;
    if ( a6 < 0 )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
        goto LABEL_192;
      v102 = (__int128 *)&UdwmIndirectTouchVisual_Received_Info;
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
        goto LABEL_192;
      v102 = (__int128 *)&UdwmDirectTouchDownAnimation_Start;
    }
    McTemplateU0d(a1, v102, a2);
LABEL_192:
    memset_0(&v118, 0, 0x70uLL);
    v103 = *a4;
    *((struct tagPOINT *)&v118 + 1) = v11;
    v119 = v11;
    LODWORD(v118) = a2;
    v121 = -1;
    DWORD1(v118) = v15 == 2;
    *(_OWORD *)v122 = 0LL;
    v124 = 0LL;
    v123 = 0LL;
    v126 = 0LL;
    v127 = 0;
    v120 = v103;
    v125 = 0LL;
    if ( a6 < 0 )
    {
      v128 = 0;
      Touch = CreateTouchVisual<CIndirectTouchVisual>(
                *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                a7,
                &v122[1]);
      v10 = Touch;
      if ( Touch < 0 )
      {
        v107 = 1510;
        goto LABEL_59;
      }
      *((_DWORD *)v122[1] + 104) = a2;
      CContactManager::AddToTouchNode(v105, a7, (struct CVisual **)v122[1]);
      if ( v15 == 1 )
        CIndirectTouchVisual::StartHover(v122[1], &v109, v121);
      else
        CIndirectTouchVisual::StartEngage(v122[1], &v109, v121);
    }
    else
    {
      v128 = 1;
      Touch = CreateTouchVisual<CDirectTouchVisual>(
                *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                a7,
                v122);
      v10 = Touch;
      if ( Touch < 0 )
      {
        v107 = 1504;
        goto LABEL_59;
      }
      CContactManager::AddToTouchNode(v104, a7, (struct CVisual **)v122[0]);
      CDirectTouchVisual::StartDown(v122[0], &v109, a4, v121);
    }
    DynArray<CTouchContact,0>::AddMultipleAndSet(v13 + 56, &v118);
    return v10;
  }
  v16 = *(_QWORD *)(v13 + 56);
  v17 = 112 * v8;
  if ( v15 == 1 )
  {
    v18 = *(CIndirectTouchVisual **)(v17 + v16 + 56);
    if ( v18 )
    {
      if ( *(_DWORD *)(v17 + v16 + 4) )
      {
        CIndirectTouchVisual::StartHover(v18, &v109, *(unsigned int *)(v17 + v16 + 40));
        v19 = *(_QWORD *)(v17 + v16 + 72);
        *(_DWORD *)(v17 + v16 + 4) = 0;
        v20 = v108;
        if ( v19 )
        {
          v112 = v19;
          v21 = *((_DWORD *)v108 + 44);
          v22 = v21 + 1;
          v23 = v21 + 1 < v21 ? 0x80070216 : 0;
          if ( v21 + 1 >= v21 )
          {
            if ( v22 > *((_DWORD *)v108 + 43) )
            {
              v25 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v108 + 152, 8, 1, &v112);
              v23 = v25;
              if ( v25 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v25, 0xC0u);
            }
            else
            {
              v24 = (CContactManager *)*((unsigned int *)v108 + 44);
              *(_QWORD *)(*((_QWORD *)v108 + 19) + 8LL * (_QWORD)v24) = v112;
              *((_DWORD *)v20 + 44) = v22;
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0xB5u);
          }
          v26 = *(volatile signed __int32 **)(v17 + v16 + 72);
          if ( v23 < 0 )
          {
            CContactManager::StopAndRemoveFromRootNode(v24, (struct CTouchVisual *)v26);
          }
          else
          {
            _InterlockedIncrement(v26 + 2);
            CTetherVisual::SnapToAnchor(*(CTetherVisual **)(v17 + v16 + 72));
          }
          v27 = *(CBaseObject **)(v17 + v16 + 72);
          if ( v27 )
          {
            CBaseObject::Release(v27);
            *(_QWORD *)(v17 + v16 + 72) = 0LL;
          }
        }
        if ( *(_QWORD *)(v17 + v16 + 80) )
        {
          v108 = *(CContactManager **)(v17 + v16 + 80);
          v28 = *((_DWORD *)v20 + 44);
          v29 = v28 + 1;
          v30 = v28 + 1 < v28 ? 0x80070216 : 0;
          if ( v28 + 1 >= v28 )
          {
            if ( v29 > *((_DWORD *)v20 + 43) )
            {
              v32 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v20 + 152, 8, 1, &v108);
              v30 = v32;
              if ( v32 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v32, 0xC0u);
            }
            else
            {
              v31 = (CContactManager *)*((unsigned int *)v20 + 44);
              *(_QWORD *)(*((_QWORD *)v20 + 19) + 8LL * (_QWORD)v31) = v108;
              *((_DWORD *)v20 + 44) = v29;
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v30, 0xB5u);
          }
          v33 = *(volatile signed __int32 **)(v17 + v16 + 80);
          if ( v30 < 0 )
          {
            CContactManager::StopAndRemoveFromRootNode(v31, (struct CTouchVisual *)v33);
          }
          else
          {
            _InterlockedIncrement(v33 + 2);
            CTextTetherVisual::SnapToAnchor(*(CTextTetherVisual **)(v17 + v16 + 80));
          }
          v34 = *(CBaseObject **)(v17 + v16 + 80);
          if ( v34 )
          {
            CBaseObject::Release(v34);
            *(_QWORD *)(v17 + v16 + 80) = 0LL;
          }
        }
      }
      else
      {
        CIndirectTouchVisual::UpdateLocation(v18, &v109);
      }
    }
    return v10;
  }
  if ( v15 != 2 )
  {
    if ( v15 != 3 )
    {
      v10 = -2147024809;
      v107 = 1468;
      v43 = -2147024809;
      goto LABEL_60;
    }
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0d(a1, &UdwmTouchUpReceived_Info, a2);
    v51 = v108;
    CContactManager::CleanupFinishedAnimations(v108);
    if ( *(_BYTE *)(v17 + v16 + 105) )
    {
      v53 = *(struct CTouchVisual **)(v17 + v16 + 48);
      v54 = v53 && CDirectTouchVisual::IsInInitialDelay(*(CDirectTouchVisual **)(v17 + v16 + 48));
      CContactManager::StopAndRemoveFromRootNode(v52, v53);
      if ( v53 )
        CBaseObject::Release(v53);
      v55 = *(_DWORD *)(v17 + v16 + 40);
      if ( !CContactManager::CheckShowContact((__int64)v108, v55, 2)
        || !*(_DWORD *)(v17 + v16 + 4)
        || *(_QWORD *)(v17 + v16 + 88) && CContactManager::CheckShowContact((__int64)v52, v55, 4)
        || *(_QWORD *)(v17 + v16 + 64)
        || *(_QWORD *)(v17 + v16 + 96)
        || (int)CContactManager::FindStationaryAnimation((__int64)v52, a2, 2) >= 0
        || (int)CContactManager::FindStationaryAnimation((__int64)v52, v56, 3) >= 0 )
      {
        v51 = v52;
      }
      else
      {
        if ( !CContactManager::CheckShowContact((__int64)v52, v55, 1) || v54 )
          v59 = v58;
        else
          v59 = 0;
        v51 = v57;
        started = CContactManager::StartStationaryAnimationWithDelay(v57, a2, v58, &v109, v111, a7, v59);
        v10 = started;
        if ( started < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x54Fu);
          return v10;
        }
      }
    }
    else if ( *(_QWORD *)(v17 + v16 + 56) )
    {
      v113 = *(_QWORD *)(v17 + v16 + 56);
      v61 = *((_DWORD *)v108 + 44);
      v62 = v61 + 1;
      v63 = v61 + 1 < v61 ? 0x80070216 : 0;
      if ( v61 + 1 >= v61 )
      {
        if ( v62 > *((_DWORD *)v108 + 43) )
        {
          v65 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v108 + 152, 8, 1, &v113);
          v63 = v65;
          if ( v65 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v65, 0xC0u);
        }
        else
        {
          v64 = (CContactManager *)*((unsigned int *)v108 + 44);
          *(_QWORD *)(*((_QWORD *)v108 + 19) + 8LL * (_QWORD)v64) = v113;
          *((_DWORD *)v51 + 44) = v62;
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v63, 0xB5u);
      }
      v66 = *(volatile signed __int32 **)(v17 + v16 + 56);
      if ( v63 < 0 )
      {
        CContactManager::StopAndRemoveFromRootNode(v64, (struct CTouchVisual *)v66);
      }
      else
      {
        _InterlockedIncrement(v66 + 2);
        CIndirectTouchVisual::StartIdle(*(_QWORD *)(v17 + v16 + 56), &v109, *(unsigned int *)(v17 + v16 + 40));
      }
      v52 = *(CContactManager **)(v17 + v16 + 56);
      if ( v52 )
        CBaseObject::Release(v52);
    }
    v67 = *(struct CTouchVisual **)(v17 + v16 + 88);
    CContactManager::StopAndRemoveFromRootNode(v52, v67);
    if ( v67 )
      CBaseObject::Release(v67);
    v68 = *(_QWORD *)(v17 + v16 + 64);
    if ( !v68 )
    {
LABEL_143:
      if ( *(_QWORD *)(v17 + v16 + 72) )
      {
        v115 = *(_QWORD *)(v17 + v16 + 72);
        v81 = *((_DWORD *)v51 + 44);
        v82 = v81 + 1;
        v83 = v81 + 1 < v81 ? 0x80070216 : 0;
        if ( v81 + 1 >= v81 )
        {
          if ( v82 > *((_DWORD *)v51 + 43) )
          {
            v85 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v51 + 152, 8, 1, &v115);
            v83 = v85;
            if ( v85 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v85, 0xC0u);
          }
          else
          {
            v84 = (CContactManager *)*((unsigned int *)v51 + 44);
            *(_QWORD *)(*((_QWORD *)v51 + 19) + 8LL * (_QWORD)v84) = v115;
            *((_DWORD *)v51 + 44) = v82;
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v83, 0xB5u);
        }
        v86 = *(volatile signed __int32 **)(v17 + v16 + 72);
        if ( v83 < 0 )
        {
          CContactManager::StopAndRemoveFromRootNode(v84, (struct CTouchVisual *)v86);
        }
        else
        {
          _InterlockedIncrement(v86 + 2);
          CTetherVisual::SnapToAnchor(*(CTetherVisual **)(v17 + v16 + 72));
        }
        v87 = *(CBaseObject **)(v17 + v16 + 72);
        if ( v87 )
          CBaseObject::Release(v87);
      }
      if ( *(_QWORD *)(v17 + v16 + 80) )
      {
        v116 = *(_QWORD *)(v17 + v16 + 80);
        v88 = *((_DWORD *)v51 + 44);
        v89 = v88 + 1;
        v90 = v88 + 1 < v88 ? 0x80070216 : 0;
        if ( v88 + 1 >= v88 )
        {
          if ( v89 > *((_DWORD *)v51 + 43) )
          {
            v92 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v51 + 152, 8, 1, &v116);
            v90 = v92;
            if ( v92 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v92, 0xC0u);
          }
          else
          {
            v91 = (CContactManager *)*((unsigned int *)v51 + 44);
            *(_QWORD *)(*((_QWORD *)v51 + 19) + 8LL * (_QWORD)v91) = v116;
            *((_DWORD *)v51 + 44) = v89;
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v90, 0xB5u);
        }
        v93 = *(volatile signed __int32 **)(v17 + v16 + 80);
        if ( v90 < 0 )
        {
          CContactManager::StopAndRemoveFromRootNode(v91, (struct CTouchVisual *)v93);
        }
        else
        {
          _InterlockedIncrement(v93 + 2);
          CTextTetherVisual::SnapToAnchor(*(CTextTetherVisual **)(v17 + v16 + 80));
        }
        v94 = *(CBaseObject **)(v17 + v16 + 80);
        if ( v94 )
          CBaseObject::Release(v94);
      }
      v95 = *(struct CTouchVisual **)(v17 + v16 + 96);
      if ( !v95 )
        goto LABEL_180;
      if ( CPressTapVisual::IsOKToCleanup(*(CPressTapVisual **)(v17 + v16 + 96)) )
        goto LABEL_177;
      v111 = v95;
      v97 = *((_DWORD *)v51 + 44);
      v98 = v97 + 1;
      v99 = v97 + 1 < v97 ? 0x80070216 : 0;
      if ( v97 + 1 >= v97 )
      {
        if ( v98 > *((_DWORD *)v51 + 43) )
        {
          v100 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v51 + 152, 8, 1, &v111);
          v99 = v100;
          if ( v100 >= 0 )
            goto LABEL_181;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v100, 0xC0u);
        }
        else
        {
          v96 = (CContactManager *)*((unsigned int *)v51 + 44);
          *(_QWORD *)(*((_QWORD *)v51 + 19) + 8LL * (_QWORD)v96) = v111;
          *((_DWORD *)v51 + 44) = v98;
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v99, 0xB5u);
      }
      if ( v99 < 0 )
      {
        v95 = *(struct CTouchVisual **)(v17 + v16 + 96);
LABEL_177:
        CContactManager::StopAndRemoveFromRootNode(v96, v95);
        goto LABEL_178;
      }
LABEL_181:
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v17 + v16 + 96) + 8LL));
LABEL_178:
      v101 = *(CBaseObject **)(v17 + v16 + 96);
      if ( v101 )
        CBaseObject::Release(v101);
LABEL_180:
      DynArray<CTouchContact,0>::RemoveAt((char *)v51 + 56, v110);
      return v10;
    }
    v69 = 0;
    if ( CTouchPressHoldVisual::IsHolding(*(CTouchPressHoldVisual **)(v17 + v16 + 64)) )
    {
      v70 = (__int64)v51 + 280;
      LODWORD(v117) = *(_DWORD *)(v17 + v16);
      v71 = *((unsigned int *)v51 + 76);
      *((_QWORD *)&v117 + 1) = v68;
      v72 = v71 + 1;
      v73 = (int)v71 + 1 < (unsigned int)v71 ? 0x80070216 : 0;
      if ( (int)v71 + 1 >= (unsigned int)v71 )
      {
        if ( v72 > *((_DWORD *)v51 + 75) )
        {
          v74 = DynArrayImpl<0>::AddMultipleAndSet(v70, 16, 1, &v117);
          v73 = v74;
          if ( v74 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v74, 0xC0u);
        }
        else
        {
          *(_OWORD *)(*(_QWORD *)v70 + 16 * v71) = v117;
          *((_DWORD *)v51 + 76) = v72;
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v73, 0xB5u);
      }
      v69 = v73 >= 0;
      goto LABEL_138;
    }
    if ( *(_DWORD *)(v68 + 296) == 1 || CTouchPressHoldVisual::IsOKToCleanup((CTouchPressHoldVisual *)v70) )
    {
LABEL_138:
      v79 = *(volatile signed __int32 **)(v17 + v16 + 64);
      if ( v69 )
        _InterlockedIncrement(v79 + 2);
      else
        CContactManager::StopAndRemoveFromRootNode((CContactManager *)v70, (struct CTouchVisual *)v79);
      v80 = *(CBaseObject **)(v17 + v16 + 64);
      if ( v80 )
        CBaseObject::Release(v80);
      goto LABEL_143;
    }
    v114 = v68;
    v75 = *((_DWORD *)v51 + 44);
    v76 = v75 + 1;
    v77 = v75 + 1 < v75 ? 0x80070216 : 0;
    if ( v75 + 1 >= v75 )
    {
      if ( v76 > *((_DWORD *)v51 + 43) )
      {
        v78 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v51 + 152, 8, 1, &v114);
        v77 = v78;
        if ( v78 >= 0 )
        {
LABEL_137:
          v69 = 1;
          goto LABEL_138;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v78, 0xC0u);
      }
      else
      {
        v70 = *((unsigned int *)v51 + 44);
        *(_QWORD *)(*((_QWORD *)v51 + 19) + 8 * v70) = v114;
        *((_DWORD *)v51 + 44) = v76;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v77, 0xB5u);
    }
    if ( v77 < 0 )
    {
      v69 = 0;
      goto LABEL_138;
    }
    goto LABEL_137;
  }
  if ( *(_BYTE *)(v17 + v16 + 105) )
  {
    if ( *(_BYTE *)(v17 + v16 + 104) )
    {
      v35 = *(struct CTouchVisual **)(v17 + v16 + 88);
      CContactManager::StopAndRemoveFromRootNode((CContactManager *)a1, v35);
      if ( v35 )
        CBaseObject::Release(v35);
      *(_QWORD *)(v17 + v16 + 88) = 0LL;
      *(_BYTE *)(v17 + v16 + 104) = 0;
    }
    if ( !*((_BYTE *)v108 + 324)
      && !*(_QWORD *)(v17 + v16 + 72)
      && !*(_QWORD *)(v17 + v16 + 80)
      && !*(_QWORD *)(v17 + v16 + 96)
      && !*(_QWORD *)(v17 + v16 + 64) )
    {
      if ( *(_DWORD *)(v17 + v16 + 40) )
      {
        v36 = *(CDirectTouchVisual **)(v17 + v16 + 48);
        if ( !v36 || !CDirectTouchVisual::IsInInitialDelay(v36) )
        {
          v37 = v17 + v16;
          if ( !*(_QWORD *)(v17 + v16 + 88) )
          {
            v38 = CDesktopManager::s_pDesktopManagerInstance;
            v39 = (unsigned int)((v11.x - *(_DWORD *)(v17 + v16 + 16)) * (v11.x - *(_DWORD *)(v17 + v16 + 16))
                               + (v109.y - *(_DWORD *)(v17 + v16 + 20)) * (v109.y - *(_DWORD *)(v17 + v16 + 20)));
            if ( (int)v39 > (int)(*((double *)CDesktopManager::s_pDesktopManagerInstance + 55) * 225.0) )
            {
              if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
              {
                McTemplateU0d(v39, &UdwmTouchDragVisual_Start, a2);
                v38 = CDesktopManager::s_pDesktopManagerInstance;
              }
              Touch = CreateTouchVisual<CTouchDragVisual>(
                        *((struct IDwmChannel **)v38 + 4),
                        a7,
                        (CTouchDragVisual **)(v37 + 88));
              v10 = Touch;
              if ( Touch < 0 )
              {
                v107 = 1274;
LABEL_59:
                v43 = Touch;
LABEL_60:
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v43, v107);
                return v10;
              }
              CTouchDragVisual::UpdateShowContact(*(_QWORD *)(v37 + 88), *(unsigned int *)(v17 + v16 + 40), v41, v42);
              Touch = CContactManager::AddToTouchNode(v44, a7, *(struct CVisual ***)(v37 + 88));
              v10 = Touch;
              if ( Touch < 0 )
              {
                v107 = 1276;
                goto LABEL_59;
              }
              *(_QWORD *)(*(_QWORD *)(v37 + 88) + 448LL) = v108;
              v45 = *(CDirectTouchVisual **)(v17 + v16 + 48);
              *(_BYTE *)(v17 + v16 + 104) = 0;
              if ( v45 )
                CDirectTouchVisual::FadeOut(v45);
            }
          }
          v46 = *(CTouchDragVisual **)(v37 + 88);
          if ( v46 )
          {
            CTouchDragVisual::NotifyTouchDrag(v46, &v109);
            v11 = v109;
          }
        }
      }
    }
  }
  v47 = *(float **)(v17 + v16 + 48);
  *(struct tagPOINT *)(v17 + v16 + 8) = v11;
  *(struct tagRECT *)(v17 + v16 + 24) = *a4;
  if ( v47 )
    CDirectTouchVisual::UpdateLocationWithScalar((CDirectTouchVisual *)v47, &v109, a4, v47[87]);
  v48 = *(CIndirectTouchVisual **)(v17 + v16 + 56);
  if ( v48 )
  {
    if ( *(_DWORD *)(v17 + v16 + 4) == 1 )
    {
      CIndirectTouchVisual::UpdateLocation(v48, &v109);
    }
    else
    {
      CIndirectTouchVisual::StartEngage(v48, &v109, *(unsigned int *)(v17 + v16 + 40));
      *(_DWORD *)(v17 + v16 + 4) = 1;
    }
  }
  v49 = *(CTetherVisual **)(v17 + v16 + 72);
  if ( v49 )
    CTetherVisual::UpdatePosition(v49, 0LL, &v109);
  v50 = *(CTextTetherVisual **)(v17 + v16 + 80);
  if ( v50 )
    CTextTetherVisual::SetContactPosition(v50, &v109, (const struct tagRECT *)(v17 + v16 + 24));
  return 0;
}
