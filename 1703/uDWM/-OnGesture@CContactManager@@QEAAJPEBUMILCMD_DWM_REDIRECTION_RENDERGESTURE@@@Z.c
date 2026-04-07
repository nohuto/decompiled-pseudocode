/*
 * XREFs of ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x180089C38
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x180032100 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x18000DA90 (-CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationary.c)
 *     ?FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x18000DAC4 (-FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVi.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x180013844 (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCDirectTouchVisual@@@Z @ 0x180040C6C (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x18004141C (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x18004146C (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x18006F080 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x18006F3EC (-StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x18006F56C (-StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z @ 0x180070414 (-StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z.c)
 *     ?StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K_N@Z @ 0x1800704C4 (-StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 *     ?CleanupFinishedAnimations@CContactManager@@AEAAXXZ @ 0x180070700 (-CleanupFinishedAnimations@CContactManager@@AEAAXXZ.c)
 *     ?RemoveAt@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x18007AB2C (-RemoveAt@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 *     ??$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCIndirectTouchVisual@@@Z @ 0x180088610 (--$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCIndirectTouchVisual@.c)
 *     ??$CreateTouchVisual@VCPenPressHoldVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCPenPressHoldVisual@@@Z @ 0x180088838 (--$CreateTouchVisual@VCPenPressHoldVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCPenPressHoldVisual@@@.c)
 *     ??$CreateTouchVisual@VCPressTapVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCPressTapVisual@@@Z @ 0x180088958 (--$CreateTouchVisual@VCPressTapVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCPressTapVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTouchPressHoldVisual@@@Z @ 0x180088CDC (--$CreateTouchVisual@VCTouchPressHoldVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTouchPressHoldVisua.c)
 *     ?CancelStationaryAnimationsInRadius@CContactManager@@AEAAXW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@M@Z @ 0x180089228 (-CancelStationaryAnimationsInRadius@CContactManager@@AEAAXW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 *     ?EnsureTouchPressHoldForContact@CContactManager@@AEAAJH_K@Z @ 0x1800892EC (-EnsureTouchPressHoldForContact@CContactManager@@AEAAJH_K@Z.c)
 *     ?IsCurrentSessionRemotable@CDesktopManager@@SA_NXZ @ 0x18008994C (-IsCurrentSessionRemotable@CDesktopManager@@SA_NXZ.c)
 *     ?_RemoveRemotePressHold@CContactManager@@AEAAXI@Z @ 0x18008B220 (-_RemoveRemotePressHold@CContactManager@@AEAAXI@Z.c)
 *     ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18008E4F0 (-Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x18008EA10 (-Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z.c)
 *     ?StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009F108 (-StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009F2A8 (-StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009F42C (-StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
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
  int v31; // edx
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
  __int64 v63; // rcx
  CContactManager *v64; // rcx
  int v65; // r9d
  __int64 v66; // rax
  CContactManager *v67; // rcx
  __int64 v68; // rcx
  bool v69; // zf
  __int64 v70; // rcx
  struct CVisual *v71; // rsi
  signed int v72; // edi
  _QWORD *v73; // r13
  __int64 v74; // r14
  CContactManager *v75; // rcx
  CContactManager *v76; // rcx
  CContactManager *v77; // rcx
  CContactManager *v78; // rcx
  unsigned int v79; // r8d
  __int64 v80; // rdx
  unsigned int v81; // eax
  int v82; // eax
  __int64 v83; // rsi
  CContactManager *v84; // rcx
  CBaseObject *v85; // rcx
  CContactManager *v86; // rcx
  __int64 v87; // rsi
  __int64 v88; // rax
  CBaseObject *v89; // rdi
  __int64 v90; // rcx
  CContactManager *v91; // rcx
  int v92; // r9d
  __int64 v93; // rax
  CContactManager *v94; // rcx
  __int64 v95; // rcx
  __int64 v96; // rcx
  struct CVisual *v97; // rsi
  signed int v98; // edi
  _QWORD *v99; // r13
  __int64 v100; // r14
  CContactManager *v101; // rcx
  CContactManager *v102; // rcx
  unsigned int v104; // [rsp+20h] [rbp-59h]
  unsigned __int64 v105; // [rsp+40h] [rbp-39h] BYREF
  struct CVisual *v106[2]; // [rsp+48h] [rbp-31h] BYREF
  struct CTouchVisual *v107; // [rsp+58h] [rbp-21h] BYREF
  struct CVisual *v108; // [rsp+60h] [rbp-19h] BYREF
  struct CVisual *v109; // [rsp+68h] [rbp-11h] BYREF
  volatile signed __int32 *v110; // [rsp+70h] [rbp-9h] BYREF
  struct _RTL_CRITICAL_SECTION *v111; // [rsp+78h] [rbp-1h] BYREF
  struct tagRECT v112; // [rsp+80h] [rbp+7h] BYREF

  v111 = &CDesktopManager::s_csDwmInstance;
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
  v112.top = v9 - 25;
  v10 = v9 + 25;
  v11 = *((_DWORD *)a2 + 3);
  v112.bottom = v10;
  v112.left = v11 - 25;
  v112.right = v11 + 25;
  GetDesktopID(1LL, &v105);
  v12 = *((_DWORD *)a2 + 1);
  if ( v12 > 5 )
  {
    v33 = v12 - 6;
    if ( !v33 )
    {
      CContactManager::CancelStationaryAnimationsInRadius((__int64)this, 2, (_DWORD *)a2 + 3, 75.0);
      CContactManager::CancelStationaryAnimationsInRadius((__int64)this, 1, (_DWORD *)a2 + 3, 75.0);
      CContactManager::StartStationaryAnimationWithDelay(
        (__int64)this,
        *((_DWORD *)a2 + 2),
        3u,
        (__int64 *)((char *)a2 + 12),
        (__int64)&v112,
        v105,
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
                    v105,
                    &v107);
          started = Touch;
          if ( Touch < 0 )
          {
            v104 = 755;
            goto LABEL_41;
          }
          v49 = (volatile signed __int32 *)v107;
          CContactManager::AddToTouchNode(v48, v105, v107);
          if ( v6 < 0 )
            v50 = &v112;
          else
            v50 = (struct tagRECT *)(112LL * (unsigned int)v6 + *((_QWORD *)this + 7) + 24LL);
          started = CPressTapVisual::Start(
                      (CPressTapVisual *)v49,
                      (const struct tagPOINT *)((char *)a2 + 12),
                      v50,
                      (const struct tagPOINT *)a2 + 3);
          if ( started < 0 )
          {
            CContactManager::RemoveFromTouchNode(v51, v105, (struct CVisual *)v49);
            if ( v49 )
              CBaseObject::Release((CBaseObject *)v49);
            v104 = 771;
            goto LABEL_35;
          }
          if ( v6 >= 0 )
          {
            v52 = 112LL * (unsigned int)v6;
            *(_QWORD *)(v52 + *((_QWORD *)this + 7) + 96) = v49;
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v52 + *((_QWORD *)this + 7) + 96) + 8LL));
LABEL_90:
            v49 = (volatile signed __int32 *)v107;
            goto LABEL_91;
          }
          v53 = v105;
          v54 = (CContactManager *)*((unsigned int *)this + 44);
          v110 = v49;
          v55 = (_DWORD)v54 + 1;
          if ( (int)v54 + 1 >= (unsigned int)v54 )
            v53 = (_DWORD)v54 + 1;
          v56 = v55 < (unsigned int)v54 ? 0x80070216 : 0;
          if ( v55 >= (unsigned int)v54 )
          {
            if ( v53 > *((_DWORD *)this + 43) )
            {
              v57 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 152, 8u, 1, &v110);
              v56 = v57;
              if ( v57 >= 0 )
              {
LABEL_89:
                _InterlockedIncrement(v49 + 2);
                goto LABEL_90;
              }
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v57, 0xC0u);
            }
            else
            {
              *(_QWORD *)(*((_QWORD *)this + 19) + 8LL * (_QWORD)v54) = v110;
              *((_DWORD *)this + 44) = v53;
            }
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v56, 0xB5u);
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
                  if ( !*(_QWORD *)(v60 + v63 + 48) )
                  {
                    Touch = CreateTouchVisual<CDirectTouchVisual>(
                              *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                              v105,
                              (CDirectTouchVisual **)(v60 + v63 + 48));
                    started = Touch;
                    if ( Touch < 0 )
                    {
                      v104 = 674;
                      goto LABEL_41;
                    }
                    CContactManager::AddToTouchNode(v64, v105, *(struct CVisual **)(v60 + *((_QWORD *)this + 7) + 48));
                  }
                  if ( *((_BYTE *)this + 324) )
                    v65 = CContactManager::DWMSC_PRESENTATIONMODE;
                  else
                    v65 = *(_DWORD *)(v60 + *((_QWORD *)this + 7) + 40);
                  CDirectTouchVisual::StartDown(
                    *(_QWORD *)(v60 + *((_QWORD *)this + 7) + 48),
                    (const struct tagPOINT *)((char *)a2 + 12),
                    &v112,
                    v65);
                }
              }
              else
              {
                if ( !*(_QWORD *)(v60 + v63 + 56) )
                {
                  Touch = CreateTouchVisual<CIndirectTouchVisual>(
                            *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                            v105,
                            (CTouchVisual **)(v60 + v63 + 56));
                  started = Touch;
                  if ( Touch < 0 )
                  {
                    v104 = 684;
                    goto LABEL_41;
                  }
                  v66 = *((_QWORD *)this + 7);
                  v67 = *(CContactManager **)(v60 + v66 + 56);
                  *((_DWORD *)v67 + 104) = *(_DWORD *)(v60 + v66);
                  CContactManager::AddToTouchNode(v67, v105, *(struct CVisual **)(v60 + *((_QWORD *)this + 7) + 56));
                }
                v68 = *((_QWORD *)this + 7);
                v69 = *(_DWORD *)(v60 + v68 + 4) == 0;
                v70 = *(_QWORD *)(v60 + v68 + 56);
                if ( v69 )
                  CIndirectTouchVisual::StartHover(v70);
                else
                  CIndirectTouchVisual::StartEngage(v70);
              }
            }
          }
        }
        v71 = 0LL;
        v72 = *((_DWORD *)this + 76) - 1;
        v108 = 0LL;
        if ( v72 < 0 )
          goto LABEL_123;
        v73 = (_QWORD *)((char *)this + 280);
        v74 = 16LL * v72;
        do
        {
          if ( *(_DWORD *)(*v73 + v74) == *((_DWORD *)a2 + 2) )
          {
            v71 = *(struct CVisual **)(*v73 + v74 + 8);
            DynArray<CIconicBitmapPending,0>::RemoveAt((__int64 *)this + 35, v72);
          }
          v74 -= 16LL;
          --v72;
        }
        while ( v72 >= 0 );
        v108 = v71;
        if ( !v71 )
        {
LABEL_123:
          Touch = CreateTouchVisual<CTouchPressHoldVisual>(
                    *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                    v105,
                    &v108);
          started = Touch;
          if ( Touch < 0 )
          {
            v104 = 714;
            goto LABEL_41;
          }
          v71 = v108;
          CContactManager::AddToTouchNode(v75, v105, v108);
        }
        started = CTouchPressHoldVisual::StartAbort(v71, (const struct tagPOINT *)((char *)a2 + 12));
        if ( started >= 0 )
          goto LABEL_191;
        CContactManager::RemoveFromTouchNode(v76, v105, v71);
        if ( v71 )
          CBaseObject::Release(v71);
        v104 = 722;
      }
      else
      {
        if ( CDesktopManager::IsCurrentSessionRemotable() )
        {
          CContactManager::_RemoveRemotePressHold(this, *((_DWORD *)a2 + 2));
          LODWORD(v106[0]) = *((_DWORD *)a2 + 2);
          v106[1] = 0LL;
          Touch = CreateTouchVisual<CTouchPressHoldVisual>(
                    *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                    v105,
                    &v106[1]);
          started = Touch;
          if ( Touch < 0 )
          {
            v104 = 616;
            goto LABEL_41;
          }
          CContactManager::AddToTouchNode(v77, v105, v106[1]);
          started = CTouchPressHoldVisual::StartHold(v106[1], (const struct tagPOINT *)((char *)a2 + 12));
          if ( started >= 0 )
          {
            v79 = v105;
            v78 = (CContactManager *)((char *)this + 248);
            v80 = *((unsigned int *)this + 68);
            v81 = v80 + 1;
            if ( (int)v80 + 1 >= (unsigned int)v80 )
              v79 = v80 + 1;
            started = v81 < (unsigned int)v80 ? 0x80070216 : 0;
            if ( v81 >= (unsigned int)v80 )
            {
              if ( v79 > *((_DWORD *)this + 67) )
              {
                v82 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v78, 0x10u, 1, v106);
                started = v82;
                if ( v82 < 0 )
                  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v82, 0xC0u);
              }
              else
              {
                *(_OWORD *)(*(_QWORD *)v78 + 16 * v80) = *(_OWORD *)v106;
                *((_DWORD *)this + 68) = v79;
              }
            }
            else
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, started, 0xB5u);
            }
            if ( started >= 0 )
              goto LABEL_191;
          }
          CContactManager::RemoveFromTouchNode(v78, v105, v106[1]);
          v58 = v106[1];
          if ( !v106[1] )
            goto LABEL_191;
LABEL_93:
          CBaseObject::Release(v58);
          goto LABEL_191;
        }
        if ( v6 < 0 )
          goto LABEL_55;
        v83 = 112LL * (unsigned int)v6;
        if ( *(_DWORD *)(v83 + *((_QWORD *)this + 7) + 4) != 1 )
          goto LABEL_55;
        Touch = CContactManager::EnsureTouchPressHoldForContact(this, v6, v105);
        started = Touch;
        if ( Touch < 0 )
        {
          v104 = 640;
          goto LABEL_41;
        }
        started = CTouchPressHoldVisual::StartHold(
                    *(CTouchPressHoldVisual **)(*((_QWORD *)this + 7) + v83 + 64),
                    (const struct tagPOINT *)((char *)a2 + 12));
        if ( started >= 0 )
          goto LABEL_191;
        CContactManager::RemoveFromTouchNode(v84, v105, *(struct CVisual **)(v83 + *((_QWORD *)this + 7) + 64));
        v85 = *(CBaseObject **)(v83 + *((_QWORD *)this + 7) + 64);
        if ( v85 )
        {
          CBaseObject::Release(v85);
          *(_QWORD *)(v83 + *((_QWORD *)this + 7) + 64) = 0LL;
        }
        v104 = 646;
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
        v87 = 112LL * (unsigned int)v6;
        v88 = *((_QWORD *)this + 7);
        v89 = *(CBaseObject **)(v87 + v88 + 64);
        if ( v89 )
        {
          CContactManager::StopAndRemoveFromRootNode(v86, *(struct CTouchVisual **)(v87 + v88 + 64));
          CBaseObject::Release(v89);
          *(_QWORD *)(v87 + *((_QWORD *)this + 7) + 64) = 0LL;
          v90 = *((_QWORD *)this + 7);
          if ( !*(_QWORD *)(v87 + v90 + 96) )
          {
            if ( *(_BYTE *)(v87 + v90 + 105) )
            {
              if ( *((_BYTE *)this + 324) || *(_DWORD *)(v87 + v90 + 40) )
              {
                if ( !*(_QWORD *)(v87 + v90 + 48) )
                {
                  Touch = CreateTouchVisual<CDirectTouchVisual>(
                            *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                            v105,
                            (CDirectTouchVisual **)(v87 + v90 + 48));
                  started = Touch;
                  if ( Touch < 0 )
                  {
                    v104 = 551;
                    goto LABEL_41;
                  }
                  CContactManager::AddToTouchNode(v91, v105, *(struct CVisual **)(v87 + *((_QWORD *)this + 7) + 48));
                }
                if ( *((_BYTE *)this + 324) )
                  v92 = CContactManager::DWMSC_PRESENTATIONMODE;
                else
                  v92 = *(_DWORD *)(v87 + *((_QWORD *)this + 7) + 40);
                CDirectTouchVisual::StartDown(
                  *(_QWORD *)(v87 + *((_QWORD *)this + 7) + 48),
                  (const struct tagPOINT *)((char *)a2 + 12),
                  &v112,
                  v92);
              }
            }
            else
            {
              if ( !*(_QWORD *)(v87 + v90 + 56) )
              {
                Touch = CreateTouchVisual<CIndirectTouchVisual>(
                          *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                          v105,
                          (CTouchVisual **)(v87 + v90 + 56));
                started = Touch;
                if ( Touch < 0 )
                {
                  v104 = 561;
                  goto LABEL_41;
                }
                v93 = *((_QWORD *)this + 7);
                v94 = *(CContactManager **)(v87 + v93 + 56);
                *((_DWORD *)v94 + 104) = *(_DWORD *)(v87 + v93);
                CContactManager::AddToTouchNode(v94, v105, *(struct CVisual **)(v87 + *((_QWORD *)this + 7) + 56));
              }
              v95 = *((_QWORD *)this + 7);
              v69 = *(_DWORD *)(v87 + v95 + 4) == 0;
              v96 = *(_QWORD *)(v87 + v95 + 56);
              if ( v69 )
                CIndirectTouchVisual::StartHover(v96);
              else
                CIndirectTouchVisual::StartEngage(v96);
            }
          }
        }
      }
      v97 = 0LL;
      v98 = *((_DWORD *)this + 76) - 1;
      v109 = 0LL;
      if ( v98 < 0 )
        goto LABEL_182;
      v99 = (_QWORD *)((char *)this + 280);
      v100 = 16LL * v98;
      do
      {
        if ( *(_DWORD *)(*v99 + v100) == *((_DWORD *)a2 + 2) )
        {
          v97 = *(struct CVisual **)(*v99 + v100 + 8);
          DynArray<CIconicBitmapPending,0>::RemoveAt((__int64 *)this + 35, v98);
        }
        v100 -= 16LL;
        --v98;
      }
      while ( v98 >= 0 );
      v109 = v97;
      if ( !v97 )
      {
LABEL_182:
        Touch = CreateTouchVisual<CTouchPressHoldVisual>(
                  *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                  v105,
                  &v109);
        started = Touch;
        if ( Touch < 0 )
        {
          v104 = 591;
          goto LABEL_41;
        }
        v97 = v109;
        CContactManager::AddToTouchNode(v101, v105, v109);
      }
      started = CTouchPressHoldVisual::StartRightTap(v97, (const struct tagPOINT *)((char *)a2 + 12));
      if ( started >= 0 )
        goto LABEL_191;
      CContactManager::RemoveFromTouchNode(v102, v105, v97);
      if ( v97 )
        CBaseObject::Release(v97);
      v104 = 599;
    }
LABEL_35:
    v27 = started;
LABEL_42:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v27, v104);
    goto LABEL_191;
  }
  if ( v12 == 5 )
  {
    if ( (v6 < 0 || *(_BYTE *)(112LL * (unsigned int)v6 + *((_QWORD *)this + 7) + 105))
      && (int)CContactManager::FindStationaryAnimation((__int64)this, *((_DWORD *)a2 + 2), 1) < 0 )
    {
      CContactManager::StartStationaryAnimationWithDelay(
        v32,
        v31,
        2u,
        (__int64 *)((char *)a2 + 12),
        (__int64)&v112,
        v105,
        0);
    }
    goto LABEL_191;
  }
  if ( !v12 )
  {
    CContactManager::StartStationaryAnimationWithDelay(
      (__int64)this,
      *((_DWORD *)a2 + 2),
      4u,
      (__int64 *)((char *)a2 + 12),
      0LL,
      v105,
      0);
    goto LABEL_191;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    CContactManager::StartStationaryAnimationWithDelay(
      (__int64)this,
      *((_DWORD *)a2 + 2),
      5u,
      (__int64 *)((char *)a2 + 12),
      0LL,
      v105,
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
    Touch = CContactManager::StartPenBarrelVisual(v30, (struct CPenContact *)(*((_QWORD *)this + 11) + 8 * v28), v105);
    started = Touch;
    if ( Touch >= 0 )
    {
LABEL_43:
      CContactManager::StartStationaryAnimationWithDelay(
        (__int64)this,
        *((_DWORD *)a2 + 2),
        6u,
        (__int64 *)((char *)a2 + 12),
        0LL,
        v105,
        0);
      goto LABEL_191;
    }
    v104 = 461;
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
                  v105);
        started = Touch;
        if ( Touch < 0 )
        {
          v104 = 504;
LABEL_41:
          v27 = Touch;
          goto LABEL_42;
        }
      }
      CContactManager::StartStationaryAnimationWithDelay(
        (__int64)this,
        *((_DWORD *)a2 + 2),
        7u,
        (__int64 *)((char *)a2 + 12),
        0LL,
        v105,
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
              v105,
              (CTouchVisual **)(*((_QWORD *)this + 11) + 16LL + 8 * v20));
    started = Touch;
    if ( Touch < 0 )
    {
      v104 = 484;
      goto LABEL_41;
    }
    CContactManager::AddToTouchNode(v24, v105, *(struct CVisual **)(*((_QWORD *)this + 11) + 8 * v20 + 16));
    started = CPenPressHoldVisual::Start(
                *(CPenPressHoldVisual **)(*((_QWORD *)this + 11) + 8 * v20 + 16),
                (const struct tagPOINT *)((char *)a2 + 12));
    if ( started < 0 )
    {
      CContactManager::RemoveFromTouchNode(v25, v105, *(struct CVisual **)(*((_QWORD *)this + 11) + 8 * v20 + 16));
      v26 = *(CBaseObject **)(*((_QWORD *)this + 11) + 8 * v20 + 16);
      if ( v26 )
      {
        CBaseObject::Release(v26);
        *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v20 + 16) = 0LL;
      }
      v104 = 491;
      goto LABEL_35;
    }
  }
LABEL_191:
  CContactManager::CleanupFinishedAnimations(this);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v111);
  return (unsigned int)started;
}
