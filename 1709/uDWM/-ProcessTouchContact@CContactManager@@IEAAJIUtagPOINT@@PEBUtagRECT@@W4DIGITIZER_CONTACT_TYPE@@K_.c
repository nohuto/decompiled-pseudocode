/*
 * XREFs of ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180083130
 * Callers:
 *     ?OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z @ 0x1800814E8 (-OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z.c)
 *     ?OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z @ 0x180082394 (-OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020CC0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18003669C (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCDirectTouchVisual@@@Z @ 0x18003964C (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     ?UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z @ 0x1800397BC (-UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180039C50 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     memset_0 @ 0x180045938 (memset_0.c)
 *     McTemplateU0d @ 0x18006CF14 (McTemplateU0d.c)
 *     ??$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCIndirectTouchVisual@@@Z @ 0x18007FABC (--$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCIndirectTouchVisual@.c)
 *     ??$CreateTouchVisual@VCTouchDragVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTouchDragVisual@@@Z @ 0x1800800B4 (--$CreateTouchVisual@VCTouchDragVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTouchDragVisual@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UCTouchContact@@$0A@@@QEAAJPEFBUCTouchContact@@I@Z @ 0x180080518 (-AddMultipleAndSet@-$DynArray@UCTouchContact@@$0A@@@QEAAJPEFBUCTouchContact@@I@Z.c)
 *     ?CheckShowContact@CContactManager@@AEAA_NW4DWM_SHOWCONTACT@@0@Z @ 0x180080898 (-CheckShowContact@CContactManager@@AEAA_NW4DWM_SHOWCONTACT@@0@Z.c)
 *     ?CleanupFinishedAnimations@CContactManager@@AEAAXXZ @ 0x1800808B8 (-CleanupFinishedAnimations@CContactManager@@AEAAXXZ.c)
 *     ?FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x180080BD4 (-FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVi.c)
 *     ?IsOKToCleanup@CPressTapVisual@@UEAA_NXZ @ 0x180081190 (-IsOKToCleanup@CPressTapVisual@@UEAA_NXZ.c)
 *     ?RemoveAt@?$DynArray@UCTouchContact@@$0A@@@QEAAJI@Z @ 0x180083E70 (-RemoveAt@-$DynArray@UCTouchContact@@$0A@@@QEAAJI@Z.c)
 *     ?StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K_N@Z @ 0x180083FDC (-StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 *     ?FadeOut@CDirectTouchVisual@@QEAAJXZ @ 0x180084170 (-FadeOut@CDirectTouchVisual@@QEAAJXZ.c)
 *     ?IsInInitialDelay@CDirectTouchVisual@@QEBA_NXZ @ 0x180084264 (-IsInInitialDelay@CDirectTouchVisual@@QEBA_NXZ.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x18008427C (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?SetContactPosition@CTextTetherVisual@@QEAAJAEBUtagPOINT@@AEBUtagRECT@@@Z @ 0x1800854B4 (-SetContactPosition@CTextTetherVisual@@QEAAJAEBUtagPOINT@@AEBUtagRECT@@@Z.c)
 *     ?SnapToAnchor@CTextTetherVisual@@QEAAJXZ @ 0x1800854E0 (-SnapToAnchor@CTextTetherVisual@@QEAAJXZ.c)
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x180087268 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?UpdateShowContact@CTouchDragVisual@@QEAAXW4DWM_SHOWCONTACT@@@Z @ 0x1800877EC (-UpdateShowContact@CTouchDragVisual@@QEAAXW4DWM_SHOWCONTACT@@@Z.c)
 *     ?SnapToAnchor@CTetherVisual@@QEAAJXZ @ 0x180088078 (-SnapToAnchor@CTetherVisual@@QEAAJXZ.c)
 *     ?UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z @ 0x180088520 (-UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z.c)
 *     ?StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x180091C54 (-StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x180091DDC (-StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x180091F5C (-StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x180092258 (-UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?IsHolding@CTouchPressHoldVisual@@QEAA_NXZ @ 0x18009D118 (-IsHolding@CTouchPressHoldVisual@@QEAA_NXZ.c)
 *     ?IsOKToCleanup@CTouchPressHoldVisual@@UEAA_NXZ @ 0x18009D140 (-IsOKToCleanup@CTouchPressHoldVisual@@UEAA_NXZ.c)
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
  unsigned int v10; // r14d
  struct tagPOINT v11; // rbx
  __int64 v13; // r13
  __int64 v14; // r8
  int v15; // esi
  __int64 v16; // rdi
  CIndirectTouchVisual *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r15
  unsigned int v20; // edx
  CContactManager *v21; // rcx
  unsigned int v22; // eax
  int v23; // esi
  int v24; // eax
  CBaseObject *v25; // rcx
  unsigned int v26; // edx
  CContactManager *v27; // rcx
  unsigned int v28; // eax
  int v29; // esi
  int v30; // eax
  CBaseObject *v31; // rcx
  struct CTouchVisual *v32; // rsi
  CDirectTouchVisual *v33; // rcx
  struct CVisual ***v34; // rsi
  CDesktopManager *v35; // r9
  __int64 v36; // rcx
  int Touch; // eax
  __int64 v38; // r8
  __int64 v39; // r9
  int v40; // r9d
  CContactManager *v41; // rcx
  CDirectTouchVisual *v42; // rcx
  float *v43; // rcx
  CIndirectTouchVisual *v44; // rcx
  CTetherVisual *v45; // rcx
  CTextTetherVisual *v46; // rcx
  CContactManager *v47; // rcx
  struct CTouchVisual *v48; // rsi
  bool v49; // r12
  int v50; // edx
  __int64 v51; // rcx
  __int64 v52; // r8
  char v53; // al
  int started; // eax
  __int64 v55; // r15
  unsigned int v56; // edx
  CContactManager *v57; // rcx
  unsigned int v58; // eax
  int v59; // esi
  int v60; // eax
  struct CTouchVisual *v61; // rsi
  __int64 v62; // rsi
  __int64 v63; // rcx
  int v64; // eax
  __int64 v65; // r8
  unsigned int v66; // edx
  unsigned int v67; // eax
  int v68; // esi
  int v69; // eax
  bool v70; // si
  unsigned int v71; // edx
  unsigned int v72; // eax
  int v73; // esi
  int v74; // eax
  CBaseObject *v75; // rcx
  unsigned int v76; // edx
  CContactManager *v77; // rcx
  unsigned int v78; // eax
  int v79; // esi
  int v80; // eax
  CBaseObject *v81; // rcx
  unsigned int v82; // edx
  CContactManager *v83; // rcx
  unsigned int v84; // eax
  int v85; // esi
  int v86; // eax
  CBaseObject *v87; // rcx
  const struct tagRECT *v88; // rsi
  CContactManager *v89; // rcx
  unsigned int v90; // edx
  unsigned int v91; // eax
  int v92; // esi
  int v93; // eax
  CBaseObject *v94; // rcx
  __int128 *v95; // rdx
  struct tagRECT v96; // xmm0
  CContactManager *v97; // rcx
  unsigned int v98; // r8d
  CContactManager *v99; // rcx
  unsigned int v101; // [rsp+20h] [rbp-E0h]
  unsigned int v102; // [rsp+40h] [rbp-C0h]
  __int64 v103; // [rsp+48h] [rbp-B8h] BYREF
  struct tagPOINT v104; // [rsp+50h] [rbp-B0h] BYREF
  const struct tagRECT *v105; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v106; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v107; // [rsp+68h] [rbp-98h] BYREF
  __int64 v108; // [rsp+70h] [rbp-90h] BYREF
  __int64 v109; // [rsp+78h] [rbp-88h] BYREF
  __int64 v110; // [rsp+80h] [rbp-80h] BYREF
  __int128 v111; // [rsp+88h] [rbp-78h] BYREF
  __int128 v112; // [rsp+A0h] [rbp-60h] BYREF
  struct tagPOINT v113; // [rsp+B0h] [rbp-50h]
  struct tagRECT v114; // [rsp+B8h] [rbp-48h]
  unsigned int v115; // [rsp+C8h] [rbp-38h]
  struct CVisual *v116[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v117; // [rsp+E0h] [rbp-20h]
  __int64 v118; // [rsp+E8h] [rbp-18h]
  __int128 v119; // [rsp+F0h] [rbp-10h]
  __int64 v120; // [rsp+100h] [rbp+0h]
  char v121; // [rsp+108h] [rbp+8h]
  char v122; // [rsp+109h] [rbp+9h]

  v8 = 0xFFFFFFFFLL;
  v9 = 0;
  v105 = a4;
  v10 = 0;
  v103 = a1;
  v11 = a3;
  v13 = a1;
  v104 = a3;
  v102 = -1;
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
        v8 = 0xFFFFFFFFLL;
        goto LABEL_7;
      }
    }
    v8 = v9;
    v102 = v9;
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
        goto LABEL_207;
      v95 = (__int128 *)&UdwmIndirectTouchVisual_Received_Info;
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
        goto LABEL_207;
      v95 = (__int128 *)&UdwmDirectTouchDownAnimation_Start;
    }
    McTemplateU0d(a1, v95, a2);
LABEL_207:
    memset_0(&v112, 0, 0x70uLL);
    v96 = *a4;
    *((struct tagPOINT *)&v112 + 1) = v11;
    v113 = v11;
    LODWORD(v112) = a2;
    v115 = -1;
    DWORD1(v112) = v15 == 2;
    *(_OWORD *)v116 = 0LL;
    v118 = 0LL;
    v117 = 0LL;
    v120 = 0LL;
    v121 = 0;
    v114 = v96;
    v119 = 0LL;
    if ( a6 < 0 )
    {
      v122 = 0;
      Touch = CreateTouchVisual<CIndirectTouchVisual>(
                *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                a7,
                &v116[1]);
      v10 = Touch;
      if ( Touch < 0 )
      {
        v101 = 1510;
        goto LABEL_63;
      }
      *((_DWORD *)v116[1] + 104) = a2;
      CContactManager::AddToTouchNode(v99, a7, (struct CVisual **)v116[1]);
      if ( v15 == 1 )
        CIndirectTouchVisual::StartHover(v116[1], &v104, v115);
      else
        CIndirectTouchVisual::StartEngage(v116[1], &v104, v115);
    }
    else
    {
      v122 = 1;
      Touch = CreateTouchVisual<CDirectTouchVisual>(
                *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                a7,
                v116);
      v10 = Touch;
      if ( Touch < 0 )
      {
        v101 = 1504;
        goto LABEL_63;
      }
      CContactManager::AddToTouchNode(v97, a7, (struct CVisual **)v116[0]);
      CDirectTouchVisual::StartDown(v116[0], &v104, a4, v115);
    }
    DynArray<CTouchContact,0>::AddMultipleAndSet(v13 + 56, &v112, v98);
    return v10;
  }
  v16 = *(_QWORD *)(v13 + 56) + 112 * v8;
  if ( v15 == 1 )
  {
    v17 = *(CIndirectTouchVisual **)(v16 + 56);
    if ( !v17 )
      return v10;
    if ( !*(_DWORD *)(v16 + 4) )
    {
      CIndirectTouchVisual::UpdateLocation(v17, &v104);
      return v10;
    }
    CIndirectTouchVisual::StartHover(v17, &v104, *(unsigned int *)(v16 + 40));
    v18 = *(_QWORD *)(v16 + 72);
    *(_DWORD *)(v16 + 4) = 0;
    v19 = v103;
    if ( !v18 )
    {
LABEL_28:
      if ( !*(_QWORD *)(v16 + 80) )
        return v10;
      v26 = v102;
      v27 = (CContactManager *)*(unsigned int *)(v19 + 176);
      v103 = *(_QWORD *)(v16 + 80);
      v28 = (_DWORD)v27 + 1;
      if ( (int)v27 + 1 >= (unsigned int)v27 )
        v26 = (_DWORD)v27 + 1;
      v29 = v28 < (unsigned int)v27 ? 0x80070216 : 0;
      if ( v28 >= (unsigned int)v27 )
      {
        if ( v26 > *(_DWORD *)(v19 + 172) )
        {
          v30 = DynArrayImpl<0>::AddMultipleAndSet(v19 + 152, 8u, 1, &v103);
          v29 = v30;
          if ( v30 >= 0 )
            goto LABEL_39;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0xC0u);
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)(v19 + 152) + 8LL * (_QWORD)v27) = v103;
          *(_DWORD *)(v19 + 176) = v26;
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0xB5u);
      }
      if ( v29 < 0 )
      {
        CContactManager::StopAndRemoveFromRootNode(v27, *(struct CTouchVisual **)(v16 + 80));
        goto LABEL_40;
      }
LABEL_39:
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v16 + 80) + 8LL));
      CTextTetherVisual::SnapToAnchor(*(CTextTetherVisual **)(v16 + 80));
LABEL_40:
      v31 = *(CBaseObject **)(v16 + 80);
      if ( v31 )
      {
        CBaseObject::Release(v31);
        *(_QWORD *)(v16 + 80) = 0LL;
      }
      return v10;
    }
    v20 = v102;
    v21 = (CContactManager *)*(unsigned int *)(v103 + 176);
    v106 = v18;
    v22 = (_DWORD)v21 + 1;
    if ( (int)v21 + 1 >= (unsigned int)v21 )
      v20 = (_DWORD)v21 + 1;
    v23 = v22 < (unsigned int)v21 ? 0x80070216 : 0;
    if ( v22 >= (unsigned int)v21 )
    {
      if ( v20 > *(_DWORD *)(v103 + 172) )
      {
        v24 = DynArrayImpl<0>::AddMultipleAndSet(v103 + 152, 8u, 1, &v106);
        v23 = v24;
        if ( v24 >= 0 )
          goto LABEL_25;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v103 + 152) + 8LL * (_QWORD)v21) = v106;
        *(_DWORD *)(v19 + 176) = v20;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0xB5u);
    }
    if ( v23 < 0 )
    {
      CContactManager::StopAndRemoveFromRootNode(v21, *(struct CTouchVisual **)(v16 + 72));
      goto LABEL_26;
    }
LABEL_25:
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v16 + 72) + 8LL));
    CTetherVisual::SnapToAnchor(*(CTetherVisual **)(v16 + 72));
LABEL_26:
    v25 = *(CBaseObject **)(v16 + 72);
    if ( v25 )
    {
      CBaseObject::Release(v25);
      *(_QWORD *)(v16 + 72) = 0LL;
    }
    goto LABEL_28;
  }
  if ( v15 != 2 )
  {
    if ( v15 != 3 )
    {
      v10 = -2147024809;
      v101 = 1468;
      v40 = -2147024809;
      goto LABEL_64;
    }
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0d(a1, &UdwmTouchUpReceived_Info, a2);
    CContactManager::CleanupFinishedAnimations((CContactManager *)v13);
    if ( *(_BYTE *)(v16 + 105) )
    {
      v48 = *(struct CTouchVisual **)(v16 + 48);
      v49 = v48 && CDirectTouchVisual::IsInInitialDelay(*(CDirectTouchVisual **)(v16 + 48));
      CContactManager::StopAndRemoveFromRootNode(v47, v48);
      if ( v48 )
        CBaseObject::Release(v48);
      if ( !CContactManager::CheckShowContact(v103, *(_DWORD *)(v16 + 40), 2)
        || !*(_DWORD *)(v16 + 4)
        || *(_QWORD *)(v16 + 88) && CContactManager::CheckShowContact((__int64)v47, *(_DWORD *)(v16 + 40), 4)
        || *(_QWORD *)(v16 + 64)
        || *(_QWORD *)(v16 + 96)
        || (int)CContactManager::FindStationaryAnimation((__int64)v47, a2, 2) >= 0
        || (int)CContactManager::FindStationaryAnimation((__int64)v47, v50, 3) >= 0 )
      {
        v55 = (__int64)v47;
      }
      else
      {
        if ( !CContactManager::CheckShowContact((__int64)v47, *(_DWORD *)(v16 + 40), 1) || v49 )
          v53 = v52;
        else
          v53 = 0;
        started = CContactManager::StartStationaryAnimationWithDelay(v51, a2, v52, &v104, v105, a7, v53);
        v10 = started;
        if ( started < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0x54Fu);
          return v10;
        }
        v55 = v103;
      }
LABEL_123:
      v61 = *(struct CTouchVisual **)(v16 + 88);
      CContactManager::StopAndRemoveFromRootNode(v47, v61);
      if ( v61 )
        CBaseObject::Release(v61);
      v62 = *(_QWORD *)(v16 + 64);
      if ( !v62 )
      {
LABEL_153:
        if ( !*(_QWORD *)(v16 + 72) )
          goto LABEL_167;
        v76 = v102;
        v77 = (CContactManager *)*(unsigned int *)(v55 + 176);
        v109 = *(_QWORD *)(v16 + 72);
        v78 = (_DWORD)v77 + 1;
        if ( (int)v77 + 1 >= (unsigned int)v77 )
          v76 = (_DWORD)v77 + 1;
        v79 = v78 < (unsigned int)v77 ? 0x80070216 : 0;
        if ( v78 >= (unsigned int)v77 )
        {
          if ( v76 > *(_DWORD *)(v55 + 172) )
          {
            v80 = DynArrayImpl<0>::AddMultipleAndSet(v55 + 152, 8u, 1, &v109);
            v79 = v80;
            if ( v80 >= 0 )
              goto LABEL_164;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v80, 0xC0u);
          }
          else
          {
            *(_QWORD *)(*(_QWORD *)(v55 + 152) + 8LL * (_QWORD)v77) = v109;
            *(_DWORD *)(v55 + 176) = v76;
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v79, 0xB5u);
        }
        if ( v79 < 0 )
        {
          CContactManager::StopAndRemoveFromRootNode(v77, *(struct CTouchVisual **)(v16 + 72));
          goto LABEL_165;
        }
LABEL_164:
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v16 + 72) + 8LL));
        CTetherVisual::SnapToAnchor(*(CTetherVisual **)(v16 + 72));
LABEL_165:
        v81 = *(CBaseObject **)(v16 + 72);
        if ( v81 )
          CBaseObject::Release(v81);
LABEL_167:
        if ( !*(_QWORD *)(v16 + 80) )
          goto LABEL_181;
        v82 = v102;
        v83 = (CContactManager *)*(unsigned int *)(v55 + 176);
        v110 = *(_QWORD *)(v16 + 80);
        v84 = (_DWORD)v83 + 1;
        if ( (int)v83 + 1 >= (unsigned int)v83 )
          v82 = (_DWORD)v83 + 1;
        v85 = v84 < (unsigned int)v83 ? 0x80070216 : 0;
        if ( v84 >= (unsigned int)v83 )
        {
          if ( v82 > *(_DWORD *)(v55 + 172) )
          {
            v86 = DynArrayImpl<0>::AddMultipleAndSet(v55 + 152, 8u, 1, &v110);
            v85 = v86;
            if ( v86 >= 0 )
              goto LABEL_178;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v86, 0xC0u);
          }
          else
          {
            *(_QWORD *)(*(_QWORD *)(v55 + 152) + 8LL * (_QWORD)v83) = v110;
            *(_DWORD *)(v55 + 176) = v82;
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v85, 0xB5u);
        }
        if ( v85 < 0 )
        {
          CContactManager::StopAndRemoveFromRootNode(v83, *(struct CTouchVisual **)(v16 + 80));
          goto LABEL_179;
        }
LABEL_178:
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v16 + 80) + 8LL));
        CTextTetherVisual::SnapToAnchor(*(CTextTetherVisual **)(v16 + 80));
LABEL_179:
        v87 = *(CBaseObject **)(v16 + 80);
        if ( v87 )
          CBaseObject::Release(v87);
LABEL_181:
        v88 = *(const struct tagRECT **)(v16 + 96);
        if ( !v88 )
        {
LABEL_196:
          DynArray<CTouchContact,0>::RemoveAt(v55 + 56, v102);
          return v10;
        }
        if ( !CPressTapVisual::IsOKToCleanup(*(CPressTapVisual **)(v16 + 96)) )
        {
          v90 = v102;
          v89 = (CContactManager *)*(unsigned int *)(v55 + 176);
          v105 = v88;
          v91 = (_DWORD)v89 + 1;
          if ( (int)v89 + 1 >= (unsigned int)v89 )
            v90 = (_DWORD)v89 + 1;
          v92 = v91 < (unsigned int)v89 ? 0x80070216 : 0;
          if ( v91 >= (unsigned int)v89 )
          {
            if ( v90 > *(_DWORD *)(v55 + 172) )
            {
              v93 = DynArrayImpl<0>::AddMultipleAndSet(v55 + 152, 8u, 1, &v105);
              v92 = v93;
              if ( v93 >= 0 )
              {
LABEL_192:
                _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v16 + 96) + 8LL));
                goto LABEL_194;
              }
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v93, 0xC0u);
            }
            else
            {
              *(_QWORD *)(*(_QWORD *)(v55 + 152) + 8LL * (_QWORD)v89) = v105;
              *(_DWORD *)(v55 + 176) = v90;
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v92, 0xB5u);
          }
          if ( v92 >= 0 )
            goto LABEL_192;
        }
        CContactManager::StopAndRemoveFromRootNode(v89, *(struct CTouchVisual **)(v16 + 96));
LABEL_194:
        v94 = *(CBaseObject **)(v16 + 96);
        if ( v94 )
          CBaseObject::Release(v94);
        goto LABEL_196;
      }
      if ( CTouchPressHoldVisual::IsHolding(*(CTouchPressHoldVisual **)(v16 + 64)) )
      {
        v64 = *(_DWORD *)v16;
        v63 = v55 + 280;
        v65 = *(unsigned int *)(v55 + 304);
        v66 = v102;
        *((_QWORD *)&v111 + 1) = v62;
        LODWORD(v111) = v64;
        v67 = v65 + 1;
        if ( (int)v65 + 1 >= (unsigned int)v65 )
          v66 = v65 + 1;
        v68 = v67 < (unsigned int)v65 ? 0x80070216 : 0;
        if ( v67 >= (unsigned int)v65 )
        {
          if ( v66 > *(_DWORD *)(v55 + 300) )
          {
            v69 = DynArrayImpl<0>::AddMultipleAndSet(v63, 0x10u, 1, &v111);
            v68 = v69;
            if ( v69 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v69, 0xC0u);
          }
          else
          {
            *(_OWORD *)(*(_QWORD *)v63 + 16 * v65) = v111;
            *(_DWORD *)(v55 + 304) = v66;
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v68, 0xB5u);
        }
        v70 = v68 >= 0;
LABEL_148:
        if ( v70 )
          goto LABEL_149;
LABEL_150:
        CContactManager::StopAndRemoveFromRootNode((CContactManager *)v63, *(struct CTouchVisual **)(v16 + 64));
LABEL_151:
        v75 = *(CBaseObject **)(v16 + 64);
        if ( v75 )
          CBaseObject::Release(v75);
        goto LABEL_153;
      }
      if ( *(_DWORD *)(v62 + 296) == 1 || CTouchPressHoldVisual::IsOKToCleanup((CTouchPressHoldVisual *)v63) )
        goto LABEL_150;
      v71 = v102;
      v63 = *(unsigned int *)(v55 + 176);
      v108 = v62;
      v72 = v63 + 1;
      if ( (int)v63 + 1 >= (unsigned int)v63 )
        v71 = v63 + 1;
      v73 = v72 < (unsigned int)v63 ? 0x80070216 : 0;
      if ( v72 >= (unsigned int)v63 )
      {
        if ( v71 > *(_DWORD *)(v55 + 172) )
        {
          v74 = DynArrayImpl<0>::AddMultipleAndSet(v55 + 152, 8u, 1, &v108);
          v73 = v74;
          if ( v74 >= 0 )
            goto LABEL_149;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v74, 0xC0u);
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)(v55 + 152) + 8 * v63) = v108;
          *(_DWORD *)(v55 + 176) = v71;
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v73, 0xB5u);
      }
      if ( v73 < 0 )
      {
        v70 = 0;
        goto LABEL_148;
      }
LABEL_149:
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v16 + 64) + 8LL));
      goto LABEL_151;
    }
    v55 = v103;
    if ( !*(_QWORD *)(v16 + 56) )
      goto LABEL_123;
    v56 = v102;
    v57 = (CContactManager *)*(unsigned int *)(v103 + 176);
    v107 = *(_QWORD *)(v16 + 56);
    v58 = (_DWORD)v57 + 1;
    if ( (int)v57 + 1 >= (unsigned int)v57 )
      v56 = (_DWORD)v57 + 1;
    v59 = v58 < (unsigned int)v57 ? 0x80070216 : 0;
    if ( v58 >= (unsigned int)v57 )
    {
      if ( v56 > *(_DWORD *)(v103 + 172) )
      {
        v60 = DynArrayImpl<0>::AddMultipleAndSet(v103 + 152, 8u, 1, &v107);
        v59 = v60;
        if ( v60 >= 0 )
          goto LABEL_118;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v60, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v103 + 152) + 8LL * (_QWORD)v57) = v107;
        *(_DWORD *)(v55 + 176) = v56;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v59, 0xB5u);
    }
    if ( v59 < 0 )
    {
      CContactManager::StopAndRemoveFromRootNode(v57, *(struct CTouchVisual **)(v16 + 56));
      goto LABEL_119;
    }
LABEL_118:
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v16 + 56) + 8LL));
    CIndirectTouchVisual::StartIdle(*(_QWORD *)(v16 + 56), &v104, *(unsigned int *)(v16 + 40));
LABEL_119:
    v47 = *(CContactManager **)(v16 + 56);
    if ( v47 )
      CBaseObject::Release(v47);
    goto LABEL_123;
  }
  if ( *(_BYTE *)(v16 + 105) )
  {
    if ( *(_BYTE *)(v16 + 104) )
    {
      v32 = *(struct CTouchVisual **)(v16 + 88);
      CContactManager::StopAndRemoveFromRootNode((CContactManager *)a1, v32);
      if ( v32 )
        CBaseObject::Release(v32);
      *(_QWORD *)(v16 + 88) = 0LL;
      *(_BYTE *)(v16 + 104) = 0;
    }
    if ( !*(_BYTE *)(v13 + 324)
      && !*(_QWORD *)(v16 + 72)
      && !*(_QWORD *)(v16 + 80)
      && !*(_QWORD *)(v16 + 96)
      && !*(_QWORD *)(v16 + 64) )
    {
      if ( *(_DWORD *)(v16 + 40) )
      {
        v33 = *(CDirectTouchVisual **)(v16 + 48);
        if ( !v33 || !CDirectTouchVisual::IsInInitialDelay(v33) )
        {
          v34 = (struct CVisual ***)(v16 + 88);
          if ( !*(_QWORD *)(v16 + 88) )
          {
            v35 = CDesktopManager::s_pDesktopManagerInstance;
            v36 = (unsigned int)((v11.x - *(_DWORD *)(v16 + 16)) * (v11.x - *(_DWORD *)(v16 + 16))
                               + (v104.y - *(_DWORD *)(v16 + 20)) * (v104.y - *(_DWORD *)(v16 + 20)));
            if ( (int)v36 > (int)(*((double *)CDesktopManager::s_pDesktopManagerInstance + 55) * 225.0) )
            {
              if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
              {
                McTemplateU0d(v36, &UdwmTouchDragVisual_Start, a2);
                v35 = CDesktopManager::s_pDesktopManagerInstance;
              }
              Touch = CreateTouchVisual<CTouchDragVisual>(
                        *((struct IDwmChannel **)v35 + 4),
                        a7,
                        (CTouchDragVisual **)(v16 + 88));
              v10 = Touch;
              if ( Touch < 0 )
              {
                v101 = 1274;
LABEL_63:
                v40 = Touch;
LABEL_64:
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, v101);
                return v10;
              }
              CTouchDragVisual::UpdateShowContact(*v34, *(unsigned int *)(v16 + 40), v38, v39);
              Touch = CContactManager::AddToTouchNode(v41, a7, *v34);
              v10 = Touch;
              if ( Touch < 0 )
              {
                v101 = 1276;
                goto LABEL_63;
              }
              (*v34)[56] = (struct CVisual *)v13;
              v42 = *(CDirectTouchVisual **)(v16 + 48);
              *(_BYTE *)(v16 + 104) = 0;
              if ( v42 )
                CDirectTouchVisual::FadeOut(v42);
            }
          }
          if ( *v34 )
          {
            CTouchDragVisual::NotifyTouchDrag((CTouchDragVisual *)*v34, &v104);
            v11 = v104;
          }
        }
      }
    }
  }
  v43 = *(float **)(v16 + 48);
  *(struct tagPOINT *)(v16 + 8) = v11;
  *(struct tagRECT *)(v16 + 24) = *a4;
  if ( v43 )
    CDirectTouchVisual::UpdateLocationWithScalar((CDirectTouchVisual *)v43, &v104, a4, v43[87]);
  v44 = *(CIndirectTouchVisual **)(v16 + 56);
  if ( v44 )
  {
    if ( *(_DWORD *)(v16 + 4) == 1 )
    {
      CIndirectTouchVisual::UpdateLocation(v44, &v104);
    }
    else
    {
      CIndirectTouchVisual::StartEngage(v44, &v104, *(unsigned int *)(v16 + 40));
      *(_DWORD *)(v16 + 4) = 1;
    }
  }
  v45 = *(CTetherVisual **)(v16 + 72);
  if ( v45 )
    CTetherVisual::UpdatePosition(v45, 0LL, &v104);
  v46 = *(CTextTetherVisual **)(v16 + 80);
  if ( v46 )
    CTextTetherVisual::SetContactPosition(v46, &v104, (const struct tagRECT *)(v16 + 24));
  return 0;
}
