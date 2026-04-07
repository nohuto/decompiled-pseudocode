/*
 * XREFs of ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x1800816A4
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002B020 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020CC0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18002C388 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18003669C (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCDirectTouchVisual@@@Z @ 0x18003964C (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180039C00 (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180039C50 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     ?RemoveAt@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x180070DA0 (-RemoveAt@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 *     ??$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCIndirectTouchVisual@@@Z @ 0x18007FABC (--$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCIndirectTouchVisual@.c)
 *     ??$CreateTouchVisual@VCPenPressHoldVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCPenPressHoldVisual@@@Z @ 0x18007FCE4 (--$CreateTouchVisual@VCPenPressHoldVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCPenPressHoldVisual@@@.c)
 *     ??$CreateTouchVisual@VCPressTapVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCPressTapVisual@@@Z @ 0x18007FE04 (--$CreateTouchVisual@VCPressTapVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCPressTapVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTouchPressHoldVisual@@@Z @ 0x180080188 (--$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTouchPressHoldVisua.c)
 *     ?CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x180080774 (-CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationary.c)
 *     ?CancelStationaryAnimationsInRadius@CContactManager@@AEAAXW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@M@Z @ 0x1800807D4 (-CancelStationaryAnimationsInRadius@CContactManager@@AEAAXW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 *     ?CleanupFinishedAnimations@CContactManager@@AEAAXXZ @ 0x1800808B8 (-CleanupFinishedAnimations@CContactManager@@AEAAXXZ.c)
 *     ?EnsureTouchPressHoldForContact@CContactManager@@AEAAJH_K@Z @ 0x180080A70 (-EnsureTouchPressHoldForContact@CContactManager@@AEAAJH_K@Z.c)
 *     ?FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x180080BD4 (-FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVi.c)
 *     ?IsCurrentSessionRemotable@CDesktopManager@@SA_NXZ @ 0x180081118 (-IsCurrentSessionRemotable@CDesktopManager@@SA_NXZ.c)
 *     ?StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z @ 0x180083F2C (-StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z.c)
 *     ?StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K_N@Z @ 0x180083FDC (-StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 *     ?_RemoveRemotePressHold@CContactManager@@AEAAXI@Z @ 0x1800840EC (-_RemoveRemotePressHold@CContactManager@@AEAAXI@Z.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x18008427C (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x180089470 (-Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x180089990 (-Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z.c)
 *     ?StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x180091C54 (-StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x180091DDC (-StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009D1C8 (-StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009D368 (-StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009D4EC (-StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 */

__int64 __fastcall CContactManager::OnGesture(
        CContactManager *this,
        const struct MILCMD_DWM_REDIRECTION_RENDERGESTURE *a2)
{
  int v4; // esi
  signed int started; // edi
  signed int v6; // r14d
  unsigned int v7; // edx
  unsigned int v8; // edx
  int v9; // ecx
  LONG v10; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  CContactManager *v14; // rcx
  CContactManager *v15; // rcx
  __int64 v16; // rsi
  struct CTouchVisual *v17; // rdi
  CContactManager *v18; // rcx
  int Touch; // eax
  __int64 v20; // rsi
  struct CTouchVisual *v21; // rdi
  CContactManager *v22; // rcx
  struct CTouchVisual *v23; // rdi
  CContactManager *v24; // rcx
  CContactManager *v25; // rcx
  CBaseObject *v26; // rcx
  int v27; // r9d
  __int64 v28; // rsi
  struct CTouchVisual *v29; // rdi
  CContactManager *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  CContactManager *v37; // rcx
  __int64 v38; // rdi
  struct CTouchVisual *v39; // rsi
  CContactManager *v40; // rcx
  struct CTouchVisual *v41; // rsi
  CContactManager *v42; // rcx
  struct CTouchVisual *v43; // rsi
  CContactManager *v44; // rcx
  struct CTouchVisual *v45; // rsi
  CContactManager *v46; // rcx
  struct CTouchVisual *v47; // rsi
  CContactManager *v48; // rcx
  volatile signed __int32 *v49; // rsi
  struct tagRECT *v50; // r8
  CContactManager *v51; // rcx
  __int64 v52; // rcx
  unsigned int v53; // edx
  CContactManager *v54; // rcx
  unsigned int v55; // eax
  int v56; // r14d
  int v57; // eax
  CBaseObject *v58; // rcx
  CContactManager *v59; // rcx
  __int64 v60; // rsi
  __int64 v61; // rax
  CBaseObject *v62; // rdi
  __int64 v63; // rax
  CDirectTouchVisual **v64; // r8
  CContactManager *v65; // rcx
  __int64 v66; // r9
  CTouchVisual **v67; // r8
  __int64 v68; // rax
  CContactManager *v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // rdx
  bool v73; // zf
  __int64 v74; // rcx
  struct CVisual *v75; // rsi
  signed int v76; // edi
  _QWORD *v77; // r13
  __int64 v78; // r14
  CContactManager *v79; // rcx
  CContactManager *v80; // rcx
  CContactManager *v81; // rcx
  CContactManager *v82; // rcx
  unsigned int v83; // r8d
  __int64 v84; // rdx
  unsigned int v85; // eax
  int v86; // eax
  __int64 v87; // rsi
  CContactManager *v88; // rcx
  CBaseObject *v89; // rcx
  CContactManager *v90; // rcx
  __int64 v91; // rsi
  __int64 v92; // rax
  CBaseObject *v93; // rdi
  __int64 v94; // rax
  CDirectTouchVisual **v95; // r8
  CContactManager *v96; // rcx
  __int64 v97; // r9
  CTouchVisual **v98; // r8
  __int64 v99; // rax
  CContactManager *v100; // rcx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // rdx
  __int64 v104; // rcx
  struct CVisual *v105; // rsi
  signed int v106; // edi
  _QWORD *v107; // r13
  __int64 v108; // r14
  CContactManager *v109; // rcx
  CContactManager *v110; // rcx
  unsigned int v112; // [rsp+20h] [rbp-59h]
  unsigned __int64 v113; // [rsp+40h] [rbp-39h] BYREF
  struct CVisual *v114[2]; // [rsp+48h] [rbp-31h] BYREF
  CBaseObject *v115; // [rsp+58h] [rbp-21h] BYREF
  struct CVisual *v116; // [rsp+60h] [rbp-19h] BYREF
  struct CVisual *v117; // [rsp+68h] [rbp-11h] BYREF
  volatile signed __int32 *v118; // [rsp+70h] [rbp-9h] BYREF
  struct _RTL_CRITICAL_SECTION *v119; // [rsp+78h] [rbp-1h] BYREF
  struct tagRECT v120; // [rsp+80h] [rbp+7h] BYREF

  v119 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = -1;
  started = 0;
  v6 = -1;
  v7 = 0;
  if ( *((_DWORD *)this + 20) )
  {
    while ( *(_DWORD *)(112LL * v7 + *((_QWORD *)this + 7)) != *((_DWORD *)a2 + 2) )
    {
      if ( ++v7 >= *((_DWORD *)this + 20) )
        goto LABEL_6;
    }
    v6 = v7;
  }
LABEL_6:
  v8 = 0;
  if ( *((_DWORD *)this + 28) )
  {
    while ( *(_DWORD *)(*((_QWORD *)this + 11) + 40LL * v8) != *((_DWORD *)a2 + 2) )
    {
      if ( ++v8 >= *((_DWORD *)this + 28) )
        goto LABEL_11;
    }
    v4 = v8;
  }
LABEL_11:
  v9 = *((_DWORD *)a2 + 4);
  v120.top = v9 - 25;
  v10 = v9 + 25;
  v11 = *((_DWORD *)a2 + 3);
  v120.bottom = v10;
  v120.left = v11 - 25;
  v120.right = v11 + 25;
  GetDesktopID(1LL, &v113);
  v12 = *((_DWORD *)a2 + 1);
  if ( v12 > 5 )
  {
    v33 = v12 - 6;
    if ( !v33 )
    {
      CContactManager::CancelStationaryAnimationsInRadius((__int64)this, 2, (_DWORD *)a2 + 3, 75.0);
      CContactManager::CancelStationaryAnimationsInRadius((__int64)this, 1, (_DWORD *)a2 + 3, 75.0);
      CContactManager::StartStationaryAnimationWithDelay(
        this,
        *((unsigned int *)a2 + 2),
        3LL,
        (char *)a2 + 12,
        &v120,
        v113,
        0);
      goto LABEL_191;
    }
    v34 = v33 - 1;
    if ( v34 )
    {
      v35 = v34 - 1;
      if ( v35 )
      {
        v36 = v35 - 1;
        if ( v36 )
        {
          if ( v36 != 1 )
            goto LABEL_55;
          CContactManager::CancelStationaryAnimation((__int64)this, *((unsigned int *)a2 + 2));
          CContactManager::CancelStationaryAnimation((__int64)this, *((unsigned int *)a2 + 5));
          if ( v6 >= 0 )
          {
            v38 = 112LL * (unsigned int)v6;
            v39 = *(struct CTouchVisual **)(v38 + *((_QWORD *)this + 7) + 48);
            CContactManager::StopAndRemoveFromRootNode(v37, v39);
            if ( v39 )
              CBaseObject::Release(v39);
            v41 = *(struct CTouchVisual **)(v38 + *((_QWORD *)this + 7) + 56);
            CContactManager::StopAndRemoveFromRootNode(v40, v41);
            if ( v41 )
              CBaseObject::Release(v41);
            v43 = *(struct CTouchVisual **)(v38 + *((_QWORD *)this + 7) + 88);
            CContactManager::StopAndRemoveFromRootNode(v42, v43);
            if ( v43 )
              CBaseObject::Release(v43);
            v45 = *(struct CTouchVisual **)(v38 + *((_QWORD *)this + 7) + 96);
            CContactManager::StopAndRemoveFromRootNode(v44, v45);
            if ( v45 )
              CBaseObject::Release(v45);
            v47 = *(struct CTouchVisual **)(v38 + *((_QWORD *)this + 7) + 64);
            CContactManager::StopAndRemoveFromRootNode(v46, v47);
            if ( v47 )
              CBaseObject::Release(v47);
            *(_QWORD *)(v38 + *((_QWORD *)this + 7) + 48) = 0LL;
            *(_QWORD *)(v38 + *((_QWORD *)this + 7) + 56) = 0LL;
            *(_QWORD *)(v38 + *((_QWORD *)this + 7) + 88) = 0LL;
            *(_QWORD *)(v38 + *((_QWORD *)this + 7) + 96) = 0LL;
            *(_QWORD *)(v38 + *((_QWORD *)this + 7) + 64) = 0LL;
            *(_BYTE *)(v38 + *((_QWORD *)this + 7) + 104) = 0;
          }
          Touch = CreateTouchVisual<CPressTapVisual>(
                    *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                    v113,
                    &v115);
          started = Touch;
          if ( Touch < 0 )
          {
            v112 = 755;
            goto LABEL_41;
          }
          v49 = (volatile signed __int32 *)v115;
          CContactManager::AddToTouchNode(v48, v113, (struct CVisual **)v115);
          if ( v6 < 0 )
            v50 = &v120;
          else
            v50 = (struct tagRECT *)(112LL * (unsigned int)v6 + *((_QWORD *)this + 7) + 24LL);
          started = CPressTapVisual::Start(
                      (CPressTapVisual *)v49,
                      (const struct tagPOINT *)((char *)a2 + 12),
                      v50,
                      (const struct tagPOINT *)a2 + 3);
          if ( started < 0 )
          {
            CContactManager::RemoveFromTouchNode(v51, v113, (struct CVisual *)v49);
            if ( v49 )
              CBaseObject::Release((CBaseObject *)v49);
            v112 = 771;
            goto LABEL_35;
          }
          if ( v6 >= 0 )
          {
            v52 = 112LL * (unsigned int)v6;
            *(_QWORD *)(v52 + *((_QWORD *)this + 7) + 96) = v49;
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v52 + *((_QWORD *)this + 7) + 96) + 8LL));
LABEL_90:
            v49 = (volatile signed __int32 *)v115;
            goto LABEL_91;
          }
          v53 = v113;
          v54 = (CContactManager *)*((unsigned int *)this + 44);
          v118 = v49;
          v55 = (_DWORD)v54 + 1;
          if ( (int)v54 + 1 >= (unsigned int)v54 )
            v53 = (_DWORD)v54 + 1;
          v56 = v55 < (unsigned int)v54 ? 0x80070216 : 0;
          if ( v55 >= (unsigned int)v54 )
          {
            if ( v53 > *((_DWORD *)this + 43) )
            {
              v57 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 152, 8u, 1, &v118);
              v56 = v57;
              if ( v57 >= 0 )
              {
LABEL_89:
                _InterlockedIncrement(v49 + 2);
                goto LABEL_90;
              }
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v57, 0xC0u);
            }
            else
            {
              *(_QWORD *)(*((_QWORD *)this + 19) + 8LL * (_QWORD)v54) = v118;
              *((_DWORD *)this + 44) = v53;
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v56, 0xB5u);
          }
          if ( v56 < 0 )
          {
            CContactManager::StopAndRemoveFromRootNode(v54, (struct CTouchVisual *)v49);
LABEL_91:
            if ( !v49 )
              goto LABEL_191;
            v58 = (CBaseObject *)v49;
            goto LABEL_93;
          }
          goto LABEL_89;
        }
        if ( CDesktopManager::IsCurrentSessionRemotable() )
        {
          CContactManager::_RemoveRemotePressHold(this, *((_DWORD *)a2 + 2));
        }
        else if ( v6 >= 0 )
        {
          v60 = 112LL * (unsigned int)v6;
          v61 = *((_QWORD *)this + 7);
          v62 = *(CBaseObject **)(v60 + v61 + 64);
          if ( v62 )
          {
            CContactManager::StopAndRemoveFromRootNode(v59, *(struct CTouchVisual **)(v60 + v61 + 64));
            CBaseObject::Release(v62);
            *(_QWORD *)(v60 + *((_QWORD *)this + 7) + 64) = 0LL;
            v63 = *((_QWORD *)this + 7);
            if ( !*(_QWORD *)(v60 + v63 + 96) )
            {
              if ( *(_BYTE *)(v60 + v63 + 105) )
              {
                if ( *((_BYTE *)this + 324) || *(_DWORD *)(v60 + v63 + 40) )
                {
                  v64 = (CDirectTouchVisual **)(v60 + v63 + 48);
                  if ( !*v64 )
                  {
                    Touch = CreateTouchVisual<CDirectTouchVisual>(
                              *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                              v113,
                              v64);
                    started = Touch;
                    if ( Touch < 0 )
                    {
                      v112 = 674;
                      goto LABEL_41;
                    }
                    CContactManager::AddToTouchNode(v65, v113, *(struct CVisual ***)(v60 + *((_QWORD *)this + 7) + 48));
                  }
                  if ( *((_BYTE *)this + 324) )
                    v66 = (unsigned int)CContactManager::DWMSC_PRESENTATIONMODE;
                  else
                    v66 = *(unsigned int *)(v60 + *((_QWORD *)this + 7) + 40);
                  CDirectTouchVisual::StartDown(
                    *(_QWORD *)(v60 + *((_QWORD *)this + 7) + 48),
                    (char *)a2 + 12,
                    &v120,
                    v66);
                }
              }
              else
              {
                v67 = (CTouchVisual **)(v60 + v63 + 56);
                if ( !*v67 )
                {
                  Touch = CreateTouchVisual<CIndirectTouchVisual>(
                            *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                            v113,
                            v67);
                  started = Touch;
                  if ( Touch < 0 )
                  {
                    v112 = 684;
                    goto LABEL_41;
                  }
                  v68 = *((_QWORD *)this + 7);
                  v69 = *(CContactManager **)(v60 + v68 + 56);
                  *((_DWORD *)v69 + 104) = *(_DWORD *)(v60 + v68);
                  CContactManager::AddToTouchNode(v69, v113, *(struct CVisual ***)(v60 + *((_QWORD *)this + 7) + 56));
                }
                v70 = *((_QWORD *)this + 7);
                v71 = *(unsigned int *)(v60 + v70 + 40);
                v72 = v60 + v70 + 8;
                v73 = *(_DWORD *)(v60 + v70 + 4) == 0;
                v74 = *(_QWORD *)(v60 + v70 + 56);
                if ( v73 )
                  CIndirectTouchVisual::StartHover(v74, v72, v71);
                else
                  CIndirectTouchVisual::StartEngage(v74, v72, v71);
              }
            }
          }
        }
        v75 = 0LL;
        v76 = *((_DWORD *)this + 76) - 1;
        v116 = 0LL;
        if ( v76 < 0 )
          goto LABEL_123;
        v77 = (_QWORD *)((char *)this + 280);
        v78 = 16LL * v76;
        do
        {
          if ( *(_DWORD *)(v78 + *v77) == *((_DWORD *)a2 + 2) )
          {
            v75 = *(struct CVisual **)(v78 + *v77 + 8);
            DynArray<CIconicBitmapPending,0>::RemoveAt((__int64 *)this + 35, v76);
          }
          v78 -= 16LL;
          --v76;
        }
        while ( v76 >= 0 );
        v116 = v75;
        if ( !v75 )
        {
LABEL_123:
          Touch = CreateTouchVisual<CTouchPressHoldVisual>(
                    *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                    v113,
                    &v116);
          started = Touch;
          if ( Touch < 0 )
          {
            v112 = 714;
            goto LABEL_41;
          }
          v75 = v116;
          CContactManager::AddToTouchNode(v79, v113, (struct CVisual **)v116);
        }
        started = CTouchPressHoldVisual::StartAbort(v75, (const struct tagPOINT *)((char *)a2 + 12));
        if ( started >= 0 )
          goto LABEL_191;
        CContactManager::RemoveFromTouchNode(v80, v113, v75);
        if ( v75 )
          CBaseObject::Release(v75);
        v112 = 722;
      }
      else
      {
        if ( CDesktopManager::IsCurrentSessionRemotable() )
        {
          CContactManager::_RemoveRemotePressHold(this, *((_DWORD *)a2 + 2));
          LODWORD(v114[0]) = *((_DWORD *)a2 + 2);
          v114[1] = 0LL;
          Touch = CreateTouchVisual<CTouchPressHoldVisual>(
                    *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                    v113,
                    &v114[1]);
          started = Touch;
          if ( Touch < 0 )
          {
            v112 = 616;
            goto LABEL_41;
          }
          CContactManager::AddToTouchNode(v81, v113, (struct CVisual **)v114[1]);
          started = CTouchPressHoldVisual::StartHold(v114[1], (const struct tagPOINT *)((char *)a2 + 12));
          if ( started >= 0 )
          {
            v83 = v113;
            v82 = (CContactManager *)((char *)this + 248);
            v84 = *((unsigned int *)this + 68);
            v85 = v84 + 1;
            if ( (int)v84 + 1 >= (unsigned int)v84 )
              v83 = v84 + 1;
            started = v85 < (unsigned int)v84 ? 0x80070216 : 0;
            if ( v85 >= (unsigned int)v84 )
            {
              if ( v83 > *((_DWORD *)this + 67) )
              {
                v86 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v82, 0x10u, 1, v114);
                started = v86;
                if ( v86 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v86, 0xC0u);
              }
              else
              {
                *(_OWORD *)(*(_QWORD *)v82 + 16 * v84) = *(_OWORD *)v114;
                *((_DWORD *)this + 68) = v83;
              }
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0xB5u);
            }
            if ( started >= 0 )
              goto LABEL_191;
          }
          CContactManager::RemoveFromTouchNode(v82, v113, v114[1]);
          v58 = v114[1];
          if ( !v114[1] )
            goto LABEL_191;
LABEL_93:
          CBaseObject::Release(v58);
          goto LABEL_191;
        }
        if ( v6 < 0 )
          goto LABEL_55;
        v87 = 112LL * (unsigned int)v6;
        if ( *(_DWORD *)(v87 + *((_QWORD *)this + 7) + 4) != 1 )
          goto LABEL_55;
        Touch = CContactManager::EnsureTouchPressHoldForContact(this, v6, v113);
        started = Touch;
        if ( Touch < 0 )
        {
          v112 = 640;
          goto LABEL_41;
        }
        started = CTouchPressHoldVisual::StartHold(
                    *(CTouchPressHoldVisual **)(*((_QWORD *)this + 7) + v87 + 64),
                    (const struct tagPOINT *)((char *)a2 + 12));
        if ( started >= 0 )
          goto LABEL_191;
        CContactManager::RemoveFromTouchNode(v88, v113, *(struct CVisual **)(v87 + *((_QWORD *)this + 7) + 64));
        v89 = *(CBaseObject **)(v87 + *((_QWORD *)this + 7) + 64);
        if ( v89 )
        {
          CBaseObject::Release(v89);
          *(_QWORD *)(v87 + *((_QWORD *)this + 7) + 64) = 0LL;
        }
        v112 = 646;
      }
    }
    else
    {
      if ( CDesktopManager::IsCurrentSessionRemotable() )
      {
        CContactManager::_RemoveRemotePressHold(this, *((_DWORD *)a2 + 2));
      }
      else if ( v6 >= 0 )
      {
        v91 = 112LL * (unsigned int)v6;
        v92 = *((_QWORD *)this + 7);
        v93 = *(CBaseObject **)(v91 + v92 + 64);
        if ( v93 )
        {
          CContactManager::StopAndRemoveFromRootNode(v90, *(struct CTouchVisual **)(v91 + v92 + 64));
          CBaseObject::Release(v93);
          *(_QWORD *)(v91 + *((_QWORD *)this + 7) + 64) = 0LL;
          v94 = *((_QWORD *)this + 7);
          if ( !*(_QWORD *)(v91 + v94 + 96) )
          {
            if ( *(_BYTE *)(v91 + v94 + 105) )
            {
              if ( *((_BYTE *)this + 324) || *(_DWORD *)(v91 + v94 + 40) )
              {
                v95 = (CDirectTouchVisual **)(v91 + v94 + 48);
                if ( !*v95 )
                {
                  Touch = CreateTouchVisual<CDirectTouchVisual>(
                            *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                            v113,
                            v95);
                  started = Touch;
                  if ( Touch < 0 )
                  {
                    v112 = 551;
                    goto LABEL_41;
                  }
                  CContactManager::AddToTouchNode(v96, v113, *(struct CVisual ***)(v91 + *((_QWORD *)this + 7) + 48));
                }
                if ( *((_BYTE *)this + 324) )
                  v97 = (unsigned int)CContactManager::DWMSC_PRESENTATIONMODE;
                else
                  v97 = *(unsigned int *)(v91 + *((_QWORD *)this + 7) + 40);
                CDirectTouchVisual::StartDown(
                  *(_QWORD *)(v91 + *((_QWORD *)this + 7) + 48),
                  (char *)a2 + 12,
                  &v120,
                  v97);
              }
            }
            else
            {
              v98 = (CTouchVisual **)(v91 + v94 + 56);
              if ( !*v98 )
              {
                Touch = CreateTouchVisual<CIndirectTouchVisual>(
                          *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                          v113,
                          v98);
                started = Touch;
                if ( Touch < 0 )
                {
                  v112 = 561;
                  goto LABEL_41;
                }
                v99 = *((_QWORD *)this + 7);
                v100 = *(CContactManager **)(v91 + v99 + 56);
                *((_DWORD *)v100 + 104) = *(_DWORD *)(v91 + v99);
                CContactManager::AddToTouchNode(v100, v113, *(struct CVisual ***)(v91 + *((_QWORD *)this + 7) + 56));
              }
              v101 = *((_QWORD *)this + 7);
              v102 = *(unsigned int *)(v91 + v101 + 40);
              v103 = v91 + v101 + 8;
              v73 = *(_DWORD *)(v91 + v101 + 4) == 0;
              v104 = *(_QWORD *)(v91 + v101 + 56);
              if ( v73 )
                CIndirectTouchVisual::StartHover(v104, v103, v102);
              else
                CIndirectTouchVisual::StartEngage(v104, v103, v102);
            }
          }
        }
      }
      v105 = 0LL;
      v106 = *((_DWORD *)this + 76) - 1;
      v117 = 0LL;
      if ( v106 < 0 )
        goto LABEL_182;
      v107 = (_QWORD *)((char *)this + 280);
      v108 = 16LL * v106;
      do
      {
        if ( *(_DWORD *)(v108 + *v107) == *((_DWORD *)a2 + 2) )
        {
          v105 = *(struct CVisual **)(v108 + *v107 + 8);
          DynArray<CIconicBitmapPending,0>::RemoveAt((__int64 *)this + 35, v106);
        }
        v108 -= 16LL;
        --v106;
      }
      while ( v106 >= 0 );
      v117 = v105;
      if ( !v105 )
      {
LABEL_182:
        Touch = CreateTouchVisual<CTouchPressHoldVisual>(
                  *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                  v113,
                  &v117);
        started = Touch;
        if ( Touch < 0 )
        {
          v112 = 591;
          goto LABEL_41;
        }
        v105 = v117;
        CContactManager::AddToTouchNode(v109, v113, (struct CVisual **)v117);
      }
      started = CTouchPressHoldVisual::StartRightTap(v105, (const struct tagPOINT *)((char *)a2 + 12));
      if ( started >= 0 )
        goto LABEL_191;
      CContactManager::RemoveFromTouchNode(v110, v113, v105);
      if ( v105 )
        CBaseObject::Release(v105);
      v112 = 599;
    }
LABEL_35:
    v27 = started;
LABEL_42:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, v112);
    goto LABEL_191;
  }
  if ( v12 == 5 )
  {
    if ( (v6 < 0 || *(_BYTE *)(112LL * (unsigned int)v6 + *((_QWORD *)this + 7) + 105))
      && (int)CContactManager::FindStationaryAnimation((__int64)this, *((_DWORD *)a2 + 2), 1) < 0 )
    {
      CContactManager::StartStationaryAnimationWithDelay(v32, v31, 2LL, (char *)a2 + 12, &v120, v113, 0);
    }
    goto LABEL_191;
  }
  if ( !v12 )
  {
    CContactManager::StartStationaryAnimationWithDelay(
      this,
      *((unsigned int *)a2 + 2),
      4LL,
      (char *)a2 + 12,
      0LL,
      v113,
      0);
    goto LABEL_191;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    CContactManager::StartStationaryAnimationWithDelay(
      this,
      *((unsigned int *)a2 + 2),
      5LL,
      (char *)a2 + 12,
      0LL,
      v113,
      0);
    goto LABEL_191;
  }
  v14 = (CContactManager *)(unsigned int)(v13 - 1);
  if ( !(_DWORD)v14 )
  {
    if ( v4 < 0 )
      goto LABEL_43;
    v28 = 5LL * (unsigned int)v4;
    v29 = *(struct CTouchVisual **)(*((_QWORD *)this + 11) + 8 * v28 + 16);
    CContactManager::StopAndRemoveFromRootNode(v14, v29);
    if ( v29 )
      CBaseObject::Release(v29);
    *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v28 + 16) = 0LL;
    Touch = CContactManager::StartPenBarrelVisual(v30, (struct CPenContact *)(*((_QWORD *)this + 11) + 8 * v28), v113);
    started = Touch;
    if ( Touch >= 0 )
    {
LABEL_43:
      CContactManager::StartStationaryAnimationWithDelay(
        this,
        *((unsigned int *)a2 + 2),
        6LL,
        (char *)a2 + 12,
        0LL,
        v113,
        0);
      goto LABEL_191;
    }
    v112 = 461;
    goto LABEL_41;
  }
  v15 = (CContactManager *)(unsigned int)((_DWORD)v14 - 1);
  if ( (_DWORD)v15 )
  {
    if ( (_DWORD)v15 == 1 )
    {
      if ( v4 >= 0 )
      {
        v16 = 5LL * (unsigned int)v4;
        v17 = *(struct CTouchVisual **)(*((_QWORD *)this + 11) + 8 * v16 + 16);
        CContactManager::StopAndRemoveFromRootNode(v15, v17);
        if ( v17 )
          CBaseObject::Release(v17);
        *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v16 + 16) = 0LL;
        Touch = CContactManager::StartPenBarrelVisual(
                  v18,
                  (struct CPenContact *)(*((_QWORD *)this + 11) + 8 * v16),
                  v113);
        started = Touch;
        if ( Touch < 0 )
        {
          v112 = 504;
LABEL_41:
          v27 = Touch;
          goto LABEL_42;
        }
      }
      CContactManager::StartStationaryAnimationWithDelay(
        this,
        *((unsigned int *)a2 + 2),
        7LL,
        (char *)a2 + 12,
        0LL,
        v113,
        0);
      goto LABEL_191;
    }
LABEL_55:
    started = -2147024809;
    goto LABEL_191;
  }
  started = (v4 >> 31) & 0x80070057;
  if ( v4 >> 31 != -1 )
  {
    v20 = 5LL * (unsigned int)v4;
    v21 = *(struct CTouchVisual **)(*((_QWORD *)this + 11) + 8 * v20 + 8);
    CContactManager::StopAndRemoveFromRootNode(v15, v21);
    if ( v21 )
      CBaseObject::Release(v21);
    *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v20 + 8) = 0LL;
    v23 = *(struct CTouchVisual **)(*((_QWORD *)this + 11) + 8 * v20 + 16);
    CContactManager::StopAndRemoveFromRootNode(v22, v23);
    if ( v23 )
      CBaseObject::Release(v23);
    *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v20 + 16) = 0LL;
    Touch = CreateTouchVisual<CPenPressHoldVisual>(
              *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
              v113,
              (CTouchVisual **)(*((_QWORD *)this + 11) + 16LL + 8 * v20));
    started = Touch;
    if ( Touch < 0 )
    {
      v112 = 484;
      goto LABEL_41;
    }
    CContactManager::AddToTouchNode(v24, v113, *(struct CVisual ***)(*((_QWORD *)this + 11) + 8 * v20 + 16));
    started = CPenPressHoldVisual::Start(
                *(CPenPressHoldVisual **)(*((_QWORD *)this + 11) + 8 * v20 + 16),
                (const struct tagPOINT *)((char *)a2 + 12));
    if ( started < 0 )
    {
      CContactManager::RemoveFromTouchNode(v25, v113, *(struct CVisual **)(*((_QWORD *)this + 11) + 8 * v20 + 16));
      v26 = *(CBaseObject **)(*((_QWORD *)this + 11) + 8 * v20 + 16);
      if ( v26 )
      {
        CBaseObject::Release(v26);
        *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v20 + 16) = 0LL;
      }
      v112 = 491;
      goto LABEL_35;
    }
  }
LABEL_191:
  CContactManager::CleanupFinishedAnimations(this);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v119);
  return (unsigned int)started;
}
