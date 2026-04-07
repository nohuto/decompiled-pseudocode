/*
 * XREFs of ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18004B998
 * Callers:
 *     ?OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z @ 0x180013ABC (-OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z.c)
 *     ?OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z @ 0x180089A7C (-OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z.c)
 * Callees:
 *     ?FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x18000DAC4 (-FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVi.c)
 *     ?CheckShowContact@CContactManager@@AEAA_NW4DWM_SHOWCONTACT@@0@Z @ 0x18000DAEC (-CheckShowContact@CContactManager@@AEAA_NW4DWM_SHOWCONTACT@@0@Z.c)
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x180013844 (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?IsInInitialDelay@CDirectTouchVisual@@QEBA_NXZ @ 0x180017504 (-IsInInitialDelay@CDirectTouchVisual@@QEBA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCDirectTouchVisual@@@Z @ 0x180040C6C (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCDirectTouchVisual@@@Z.c)
 *     ?UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z @ 0x180040DDC (-UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x18004146C (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18004B4EC (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004DE90 (memset_0.c)
 *     ?RemoveAt@?$DynArray@UCTouchContact@@$0A@@@QEAAJI@Z @ 0x18006E698 (-RemoveAt@-$DynArray@UCTouchContact@@$0A@@@QEAAJI@Z.c)
 *     ?StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z @ 0x18006F080 (-StartDown@CDirectTouchVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?FadeOut@CDirectTouchVisual@@QEAAJXZ @ 0x18006F244 (-FadeOut@CDirectTouchVisual@@QEAAJXZ.c)
 *     ?UpdateShowContact@CTouchDragVisual@@QEAAXW4DWM_SHOWCONTACT@@@Z @ 0x18006F3A4 (-UpdateShowContact@CTouchDragVisual@@QEAAXW4DWM_SHOWCONTACT@@@Z.c)
 *     ?IsOKToCleanup@CPressTapVisual@@UEAA_NXZ @ 0x18006F3D0 (-IsOKToCleanup@CPressTapVisual@@UEAA_NXZ.c)
 *     ?StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x18006F3EC (-StartHover@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x18006F56C (-StartEngage@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18006F6F4 (-UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z @ 0x18006F75C (-StartIdle@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@W4DWM_SHOWCONTACT@@@Z.c)
 *     ?IsHolding@CTouchPressHoldVisual@@QEAA_NXZ @ 0x18006F958 (-IsHolding@CTouchPressHoldVisual@@QEAA_NXZ.c)
 *     ?UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z @ 0x18006F97C (-UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z.c)
 *     ?SnapToAnchor@CTetherVisual@@QEAAJXZ @ 0x18006F9D8 (-SnapToAnchor@CTetherVisual@@QEAAJXZ.c)
 *     ?SetContactPosition@CTextTetherVisual@@QEAAJAEBUtagPOINT@@AEBUtagRECT@@@Z @ 0x18006FABC (-SetContactPosition@CTextTetherVisual@@QEAAJAEBUtagPOINT@@AEBUtagRECT@@@Z.c)
 *     ?SnapToAnchor@CTextTetherVisual@@QEAAJXZ @ 0x18006FAE8 (-SnapToAnchor@CTextTetherVisual@@QEAAJXZ.c)
 *     ?StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K_N@Z @ 0x1800704C4 (-StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 *     ?CleanupFinishedAnimations@CContactManager@@AEAAXXZ @ 0x180070700 (-CleanupFinishedAnimations@CContactManager@@AEAAXXZ.c)
 *     Template_q @ 0x18007FA50 (Template_q.c)
 *     ??$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCIndirectTouchVisual@@@Z @ 0x180088610 (--$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCIndirectTouchVisual@.c)
 *     ??$CreateTouchVisual@VCTouchDragVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTouchDragVisual@@@Z @ 0x180088C08 (--$CreateTouchVisual@VCTouchDragVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTouchDragVisual@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UCTouchContact@@$0A@@@QEAAJPEFBUCTouchContact@@I@Z @ 0x180088FCC (-AddMultipleAndSet@-$DynArray@UCTouchContact@@$0A@@@QEAAJPEFBUCTouchContact@@I@Z.c)
 *     ?IsOKToCleanup@CTouchPressHoldVisual@@UEAA_NXZ @ 0x18009F080 (-IsOKToCleanup@CTouchPressHoldVisual@@UEAA_NXZ.c)
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
  bool v14; // r12
  CContactManager *v15; // rcx
  int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // r8
  char v19; // al
  __int64 v20; // r15
  struct CTouchVisual *v21; // rsi
  __int64 v22; // rsi
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // r8
  unsigned int v26; // edx
  unsigned int v27; // eax
  int v28; // esi
  bool v29; // si
  CBaseObject *v30; // rcx
  unsigned int v31; // edx
  CContactManager *v32; // rcx
  unsigned int v33; // eax
  int v34; // esi
  CBaseObject *v35; // rcx
  unsigned int v36; // edx
  CContactManager *v37; // rcx
  unsigned int v38; // eax
  int v39; // esi
  CBaseObject *v40; // rcx
  const struct tagRECT *v41; // rsi
  CContactManager *v42; // rcx
  unsigned int v43; // edx
  unsigned int v44; // eax
  int v45; // esi
  CBaseObject *v46; // rcx
  CTetherVisual *v47; // rcx
  CTextTetherVisual *v48; // rcx
  int started; // eax
  CDirectTouchVisual *v51; // rcx
  struct CVisual **v52; // rsi
  CDesktopManager *v53; // r9
  __int64 v54; // rcx
  int Touch; // eax
  __int64 v56; // r8
  __int64 v57; // r9
  CContactManager *v58; // rcx
  CDirectTouchVisual *v59; // rcx
  float *v60; // rcx
  CIndirectTouchVisual *v61; // rcx
  __int64 v62; // rdi
  CIndirectTouchVisual *v63; // rcx
  __int64 v64; // rax
  __int64 v65; // r15
  unsigned int v66; // edx
  CContactManager *v67; // rcx
  unsigned int v68; // eax
  int v69; // esi
  CBaseObject *v70; // rcx
  unsigned int v71; // edx
  CContactManager *v72; // rcx
  unsigned int v73; // eax
  int v74; // esi
  CBaseObject *v75; // rcx
  struct CTouchVisual *v76; // rsi
  unsigned int v77; // edx
  CContactManager *v78; // rcx
  unsigned int v79; // eax
  int v80; // esi
  unsigned int v81; // edx
  unsigned int v82; // eax
  int v83; // esi
  void *v84; // rdx
  CContactManager *v85; // rcx
  struct CTouchVisual *v86; // rsi
  CContactManager *v87; // rcx
  __int64 v88; // r8
  int v89; // esi
  int v90; // eax
  int v91; // eax
  int v92; // r9d
  int v93; // eax
  int v94; // eax
  int v95; // eax
  int v96; // eax
  int v97; // eax
  int v98; // eax
  struct tagRECT v99; // xmm0
  unsigned int v100; // [rsp+20h] [rbp-E0h]
  unsigned int v101; // [rsp+40h] [rbp-C0h]
  __int64 v102; // [rsp+48h] [rbp-B8h] BYREF
  struct tagPOINT v103; // [rsp+50h] [rbp-B0h] BYREF
  const struct tagRECT *v104; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v105; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v106; // [rsp+68h] [rbp-98h] BYREF
  __int64 v107; // [rsp+70h] [rbp-90h] BYREF
  __int64 v108; // [rsp+78h] [rbp-88h] BYREF
  __int64 v109; // [rsp+80h] [rbp-80h] BYREF
  __int128 v110; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v111[2]; // [rsp+A0h] [rbp-60h] BYREF
  struct tagPOINT v112; // [rsp+A8h] [rbp-58h]
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
  v104 = a4;
  v10 = 0;
  v102 = a1;
  v11 = a3;
  v13 = a1;
  v103 = a3;
  v101 = -1;
  if ( *(_DWORD *)(a1 + 80) )
  {
    v88 = *(_QWORD *)(a1 + 56);
    while ( 1 )
    {
      a1 = 112LL * v9;
      if ( *(_DWORD *)(a1 + v88) == a2 )
        break;
      if ( ++v9 >= *(_DWORD *)(v13 + 80) )
      {
        v8 = 0xFFFFFFFFLL;
        goto LABEL_174;
      }
    }
    v8 = v9;
    v101 = v9;
  }
LABEL_174:
  v89 = a5;
  if ( (a6 & 0x80) == 0 && a5 == 1 )
    v89 = 3;
  if ( (int)v8 >= 0 )
  {
    v62 = *(_QWORD *)(v13 + 56) + 112 * v8;
    if ( v89 == 1 )
    {
      v63 = *(CIndirectTouchVisual **)(v62 + 56);
      if ( !v63 )
        return v10;
      if ( !*(_DWORD *)(v62 + 4) )
      {
        CIndirectTouchVisual::UpdateLocation(v63, &v103);
        return v10;
      }
      CIndirectTouchVisual::StartHover(v63, &v103, *(unsigned int *)(v62 + 40));
      v64 = *(_QWORD *)(v62 + 72);
      *(_DWORD *)(v62 + 4) = 0;
      v65 = v102;
      if ( !v64 )
      {
LABEL_106:
        if ( !*(_QWORD *)(v62 + 80) )
          return v10;
        v71 = v101;
        v72 = (CContactManager *)*(unsigned int *)(v65 + 176);
        v102 = *(_QWORD *)(v62 + 80);
        v73 = (_DWORD)v72 + 1;
        if ( (int)v72 + 1 >= (unsigned int)v72 )
          v71 = (_DWORD)v72 + 1;
        v74 = v73 < (unsigned int)v72 ? 0x80070216 : 0;
        if ( v73 >= (unsigned int)v72 )
        {
          if ( v71 > *(_DWORD *)(v65 + 172) )
          {
            v91 = DynArrayImpl<0>::AddMultipleAndSet(v65 + 152, 8u, 1, &v102);
            v74 = v91;
            if ( v91 >= 0 )
              goto LABEL_116;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v91, 0xC0u);
          }
          else
          {
            *(_QWORD *)(*(_QWORD *)(v65 + 152) + 8LL * (_QWORD)v72) = v102;
            *(_DWORD *)(v65 + 176) = v71;
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v74, 0xB5u);
        }
        if ( v74 < 0 )
        {
          CContactManager::StopAndRemoveFromRootNode(v72, *(struct CTouchVisual **)(v62 + 80));
          goto LABEL_113;
        }
LABEL_116:
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v62 + 80) + 8LL));
        CTextTetherVisual::SnapToAnchor(*(CTextTetherVisual **)(v62 + 80));
LABEL_113:
        v75 = *(CBaseObject **)(v62 + 80);
        if ( v75 )
        {
          CBaseObject::Release(v75);
          *(_QWORD *)(v62 + 80) = 0LL;
        }
        return v10;
      }
      v66 = v101;
      v67 = (CContactManager *)*(unsigned int *)(v102 + 176);
      v105 = v64;
      v68 = (_DWORD)v67 + 1;
      if ( (int)v67 + 1 >= (unsigned int)v67 )
        v66 = (_DWORD)v67 + 1;
      v69 = v68 < (unsigned int)v67 ? 0x80070216 : 0;
      if ( v68 >= (unsigned int)v67 )
      {
        if ( v66 > *(_DWORD *)(v102 + 172) )
        {
          v90 = DynArrayImpl<0>::AddMultipleAndSet(v102 + 152, 8u, 1, &v105);
          v69 = v90;
          if ( v90 >= 0 )
            goto LABEL_115;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v90, 0xC0u);
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)(v102 + 152) + 8LL * (_QWORD)v67) = v105;
          *(_DWORD *)(v65 + 176) = v66;
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v69, 0xB5u);
      }
      if ( v69 < 0 )
      {
        CContactManager::StopAndRemoveFromRootNode(v67, *(struct CTouchVisual **)(v62 + 72));
        goto LABEL_104;
      }
LABEL_115:
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v62 + 72) + 8LL));
      CTetherVisual::SnapToAnchor(*(CTetherVisual **)(v62 + 72));
LABEL_104:
      v70 = *(CBaseObject **)(v62 + 72);
      if ( v70 )
      {
        CBaseObject::Release(v70);
        *(_QWORD *)(v62 + 72) = 0LL;
      }
      goto LABEL_106;
    }
    if ( v89 != 2 )
    {
      if ( v89 != 3 )
      {
        v10 = -2147024809;
        v100 = 1468;
        v92 = -2147024809;
        goto LABEL_191;
      }
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        Template_q(a1, &UdwmTouchUpReceived_Info, a2);
      CContactManager::CleanupFinishedAnimations((CContactManager *)v13);
      if ( *(_BYTE *)(v62 + 105) )
      {
        v76 = *(struct CTouchVisual **)(v62 + 48);
        v14 = v76 && CDirectTouchVisual::IsInInitialDelay(*(CDirectTouchVisual **)(v62 + 48));
        CContactManager::StopAndRemoveFromRootNode(v15, v76);
        if ( v76 )
          CBaseObject::Release(v76);
        if ( !CContactManager::CheckShowContact(v102, *(_DWORD *)(v62 + 40), 2)
          || !*(_DWORD *)(v62 + 4)
          || *(_QWORD *)(v62 + 88) && CContactManager::CheckShowContact((__int64)v15, *(_DWORD *)(v62 + 40), 4)
          || *(_QWORD *)(v62 + 64)
          || *(_QWORD *)(v62 + 96)
          || (int)CContactManager::FindStationaryAnimation((__int64)v15, a2, 2) >= 0
          || (int)CContactManager::FindStationaryAnimation((__int64)v15, v16, 3) >= 0 )
        {
          v20 = (__int64)v15;
        }
        else
        {
          if ( CContactManager::CheckShowContact((__int64)v15, *(_DWORD *)(v62 + 40), 1) && !v14 )
            v19 = 0;
          else
            v19 = v18;
          started = CContactManager::StartStationaryAnimationWithDelay(v17, a2, v18, &v103, v104, a7, v19);
          v10 = started;
          if ( started < 0 )
          {
            v100 = 1359;
            v92 = started;
            goto LABEL_191;
          }
          v20 = v102;
        }
LABEL_18:
        v21 = *(struct CTouchVisual **)(v62 + 88);
        CContactManager::StopAndRemoveFromRootNode(v15, v21);
        if ( v21 )
          CBaseObject::Release(v21);
        v22 = *(_QWORD *)(v62 + 64);
        if ( !v22 )
        {
LABEL_33:
          if ( !*(_QWORD *)(v62 + 72) )
            goto LABEL_42;
          v31 = v101;
          v32 = (CContactManager *)*(unsigned int *)(v20 + 176);
          v108 = *(_QWORD *)(v62 + 72);
          v33 = (_DWORD)v32 + 1;
          if ( (int)v32 + 1 >= (unsigned int)v32 )
            v31 = (_DWORD)v32 + 1;
          v34 = v33 < (unsigned int)v32 ? 0x80070216 : 0;
          if ( v33 >= (unsigned int)v32 )
          {
            if ( v31 > *(_DWORD *)(v20 + 172) )
            {
              v96 = DynArrayImpl<0>::AddMultipleAndSet(v20 + 152, 8u, 1, &v108);
              v34 = v96;
              if ( v96 >= 0 )
                goto LABEL_72;
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v96, 0xC0u);
            }
            else
            {
              *(_QWORD *)(*(_QWORD *)(v20 + 152) + 8LL * (_QWORD)v32) = v108;
              *(_DWORD *)(v20 + 176) = v31;
            }
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0xB5u);
          }
          if ( v34 < 0 )
          {
            CContactManager::StopAndRemoveFromRootNode(v32, *(struct CTouchVisual **)(v62 + 72));
            goto LABEL_40;
          }
LABEL_72:
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v62 + 72) + 8LL));
          CTetherVisual::SnapToAnchor(*(CTetherVisual **)(v62 + 72));
LABEL_40:
          v35 = *(CBaseObject **)(v62 + 72);
          if ( v35 )
            CBaseObject::Release(v35);
LABEL_42:
          if ( !*(_QWORD *)(v62 + 80) )
            goto LABEL_51;
          v36 = v101;
          v37 = (CContactManager *)*(unsigned int *)(v20 + 176);
          v109 = *(_QWORD *)(v62 + 80);
          v38 = (_DWORD)v37 + 1;
          if ( (int)v37 + 1 >= (unsigned int)v37 )
            v36 = (_DWORD)v37 + 1;
          v39 = v38 < (unsigned int)v37 ? 0x80070216 : 0;
          if ( v38 >= (unsigned int)v37 )
          {
            if ( v36 > *(_DWORD *)(v20 + 172) )
            {
              v97 = DynArrayImpl<0>::AddMultipleAndSet(v20 + 152, 8u, 1, &v109);
              v39 = v97;
              if ( v97 >= 0 )
                goto LABEL_73;
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v97, 0xC0u);
            }
            else
            {
              *(_QWORD *)(*(_QWORD *)(v20 + 152) + 8LL * (_QWORD)v37) = v109;
              *(_DWORD *)(v20 + 176) = v36;
            }
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v39, 0xB5u);
          }
          if ( v39 < 0 )
          {
            CContactManager::StopAndRemoveFromRootNode(v37, *(struct CTouchVisual **)(v62 + 80));
            goto LABEL_49;
          }
LABEL_73:
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v62 + 80) + 8LL));
          CTextTetherVisual::SnapToAnchor(*(CTextTetherVisual **)(v62 + 80));
LABEL_49:
          v40 = *(CBaseObject **)(v62 + 80);
          if ( v40 )
            CBaseObject::Release(v40);
LABEL_51:
          v41 = *(const struct tagRECT **)(v62 + 96);
          if ( !v41 )
          {
LABEL_61:
            DynArray<CTouchContact,0>::RemoveAt(v20 + 56, v101);
            return v10;
          }
          if ( !CPressTapVisual::IsOKToCleanup(*(CPressTapVisual **)(v62 + 96)) )
          {
            v43 = v101;
            v42 = (CContactManager *)*(unsigned int *)(v20 + 176);
            v104 = v41;
            v44 = (_DWORD)v42 + 1;
            if ( (int)v42 + 1 >= (unsigned int)v42 )
              v43 = (_DWORD)v42 + 1;
            v45 = v44 < (unsigned int)v42 ? 0x80070216 : 0;
            if ( v44 >= (unsigned int)v42 )
            {
              if ( v43 > *(_DWORD *)(v20 + 172) )
              {
                v98 = DynArrayImpl<0>::AddMultipleAndSet(v20 + 152, 8u, 1, &v104);
                v45 = v98;
                if ( v98 >= 0 )
                  goto LABEL_58;
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v98, 0xC0u);
              }
              else
              {
                *(_QWORD *)(*(_QWORD *)(v20 + 152) + 8LL * (_QWORD)v42) = v104;
                *(_DWORD *)(v20 + 176) = v43;
              }
            }
            else
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v45, 0xB5u);
            }
            if ( v45 >= 0 )
            {
LABEL_58:
              _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v62 + 96) + 8LL));
              goto LABEL_59;
            }
          }
          CContactManager::StopAndRemoveFromRootNode(v42, *(struct CTouchVisual **)(v62 + 96));
LABEL_59:
          v46 = *(CBaseObject **)(v62 + 96);
          if ( v46 )
            CBaseObject::Release(v46);
          goto LABEL_61;
        }
        if ( CTouchPressHoldVisual::IsHolding(*(CTouchPressHoldVisual **)(v62 + 64)) )
        {
          v24 = *(_DWORD *)v62;
          v23 = v20 + 280;
          v25 = *(unsigned int *)(v20 + 304);
          v26 = v101;
          *((_QWORD *)&v110 + 1) = v22;
          LODWORD(v110) = v24;
          v27 = v25 + 1;
          if ( (int)v25 + 1 >= (unsigned int)v25 )
            v26 = v25 + 1;
          v28 = v27 < (unsigned int)v25 ? 0x80070216 : 0;
          if ( v27 >= (unsigned int)v25 )
          {
            if ( v26 > *(_DWORD *)(v20 + 300) )
            {
              v94 = DynArrayImpl<0>::AddMultipleAndSet(v23, 0x10u, 1, &v110);
              v28 = v94;
              if ( v94 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v94, 0xC0u);
            }
            else
            {
              *(_OWORD *)(*(_QWORD *)v23 + 16 * v25) = v110;
              *(_DWORD *)(v20 + 304) = v26;
            }
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0xB5u);
          }
          v29 = v28 >= 0;
        }
        else
        {
          if ( *(_DWORD *)(v22 + 296) == 1 || CTouchPressHoldVisual::IsOKToCleanup((CTouchPressHoldVisual *)v23) )
            goto LABEL_23;
          v81 = v101;
          v23 = *(unsigned int *)(v20 + 176);
          v107 = v22;
          v82 = v23 + 1;
          if ( (int)v23 + 1 >= (unsigned int)v23 )
            v81 = v23 + 1;
          v83 = v82 < (unsigned int)v23 ? 0x80070216 : 0;
          if ( v82 >= (unsigned int)v23 )
          {
            if ( v81 > *(_DWORD *)(v20 + 172) )
            {
              v95 = DynArrayImpl<0>::AddMultipleAndSet(v20 + 152, 8u, 1, &v107);
              v83 = v95;
              if ( v95 >= 0 )
                goto LABEL_30;
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v95, 0xC0u);
            }
            else
            {
              *(_QWORD *)(*(_QWORD *)(v20 + 152) + 8 * v23) = v107;
              *(_DWORD *)(v20 + 176) = v81;
            }
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v83, 0xB5u);
          }
          if ( v83 >= 0 )
          {
LABEL_30:
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v62 + 64) + 8LL));
LABEL_31:
            v30 = *(CBaseObject **)(v62 + 64);
            if ( v30 )
              CBaseObject::Release(v30);
            goto LABEL_33;
          }
          v29 = 0;
        }
        if ( v29 )
          goto LABEL_30;
LABEL_23:
        CContactManager::StopAndRemoveFromRootNode((CContactManager *)v23, *(struct CTouchVisual **)(v62 + 64));
        goto LABEL_31;
      }
      v20 = v102;
      if ( !*(_QWORD *)(v62 + 56) )
        goto LABEL_18;
      v77 = v101;
      v78 = (CContactManager *)*(unsigned int *)(v102 + 176);
      v106 = *(_QWORD *)(v62 + 56);
      v79 = (_DWORD)v78 + 1;
      if ( (int)v78 + 1 >= (unsigned int)v78 )
        v77 = (_DWORD)v78 + 1;
      v80 = v79 < (unsigned int)v78 ? 0x80070216 : 0;
      if ( v79 >= (unsigned int)v78 )
      {
        if ( v77 > *(_DWORD *)(v102 + 172) )
        {
          v93 = DynArrayImpl<0>::AddMultipleAndSet(v102 + 152, 8u, 1, &v106);
          v80 = v93;
          if ( v93 >= 0 )
            goto LABEL_145;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v93, 0xC0u);
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)(v102 + 152) + 8LL * (_QWORD)v78) = v106;
          *(_DWORD *)(v20 + 176) = v77;
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v80, 0xB5u);
      }
      if ( v80 < 0 )
      {
        CContactManager::StopAndRemoveFromRootNode(v78, *(struct CTouchVisual **)(v62 + 56));
        goto LABEL_143;
      }
LABEL_145:
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v62 + 56) + 8LL));
      CIndirectTouchVisual::StartIdle(*(_QWORD *)(v62 + 56), &v103, *(unsigned int *)(v62 + 40));
LABEL_143:
      v15 = *(CContactManager **)(v62 + 56);
      if ( v15 )
        CBaseObject::Release(v15);
      goto LABEL_18;
    }
    if ( !*(_BYTE *)(v62 + 105) )
      goto LABEL_87;
    if ( *(_BYTE *)(v62 + 104) )
    {
      v86 = *(struct CTouchVisual **)(v62 + 88);
      CContactManager::StopAndRemoveFromRootNode((CContactManager *)a1, v86);
      if ( v86 )
        CBaseObject::Release(v86);
      *(_QWORD *)(v62 + 88) = 0LL;
      *(_BYTE *)(v62 + 104) = 0;
    }
    if ( *(_BYTE *)(v13 + 324)
      || *(_QWORD *)(v62 + 72)
      || *(_QWORD *)(v62 + 80)
      || *(_QWORD *)(v62 + 96)
      || *(_QWORD *)(v62 + 64)
      || !*(_DWORD *)(v62 + 40)
      || (v51 = *(CDirectTouchVisual **)(v62 + 48)) != 0LL && CDirectTouchVisual::IsInInitialDelay(v51) )
    {
LABEL_87:
      v60 = *(float **)(v62 + 48);
      *(struct tagPOINT *)(v62 + 8) = v11;
      *(struct tagRECT *)(v62 + 24) = *a4;
      if ( v60 )
        CDirectTouchVisual::UpdateLocationWithScalar((CDirectTouchVisual *)v60, &v103, a4, v60[87]);
      v61 = *(CIndirectTouchVisual **)(v62 + 56);
      if ( v61 )
      {
        if ( *(_DWORD *)(v62 + 4) == 1 )
        {
          CIndirectTouchVisual::UpdateLocation(v61, &v103);
        }
        else
        {
          CIndirectTouchVisual::StartEngage(v61, &v103, *(unsigned int *)(v62 + 40));
          *(_DWORD *)(v62 + 4) = 1;
        }
      }
      v47 = *(CTetherVisual **)(v62 + 72);
      if ( v47 )
        CTetherVisual::UpdatePosition(v47, 0LL, &v103);
      v48 = *(CTextTetherVisual **)(v62 + 80);
      if ( v48 )
        CTextTetherVisual::SetContactPosition(v48, &v103, (const struct tagRECT *)(v62 + 24));
      return 0;
    }
    v52 = (struct CVisual **)(v62 + 88);
    if ( !*(_QWORD *)(v62 + 88) )
    {
      v53 = CDesktopManager::s_pDesktopManagerInstance;
      v54 = (unsigned int)((v11.x - *(_DWORD *)(v62 + 16)) * (v11.x - *(_DWORD *)(v62 + 16))
                         + (v103.y - *(_DWORD *)(v62 + 20)) * (v103.y - *(_DWORD *)(v62 + 20)));
      if ( (int)v54 > (int)(*((double *)CDesktopManager::s_pDesktopManagerInstance + 49) * 225.0) )
      {
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        {
          Template_q(v54, &UdwmTouchDragVisual_Start, a2);
          v53 = CDesktopManager::s_pDesktopManagerInstance;
        }
        Touch = CreateTouchVisual<CTouchDragVisual>(*((struct IDwmChannel **)v53 + 4), a7);
        v10 = Touch;
        if ( Touch < 0 )
        {
          v100 = 1274;
        }
        else
        {
          CTouchDragVisual::UpdateShowContact(*v52, *(unsigned int *)(v62 + 40), v56, v57);
          Touch = CContactManager::AddToTouchNode(v58, a7, *v52);
          v10 = Touch;
          if ( Touch >= 0 )
          {
            *((_QWORD *)*v52 + 56) = v13;
            v59 = *(CDirectTouchVisual **)(v62 + 48);
            *(_BYTE *)(v62 + 104) = 0;
            if ( v59 )
              CDirectTouchVisual::FadeOut(v59);
            goto LABEL_85;
          }
          v100 = 1276;
        }
LABEL_188:
        v92 = Touch;
LABEL_191:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v92, v100);
        return v10;
      }
    }
LABEL_85:
    if ( *v52 )
    {
      CTouchDragVisual::NotifyTouchDrag(*v52, &v103);
      v11 = v103;
    }
    goto LABEL_87;
  }
  if ( v89 == 2 || v89 == 1 && a6 < 0 )
  {
    if ( a6 < 0 )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
        goto LABEL_222;
      v84 = &UdwmIndirectTouchVisual_Received_Info;
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
        goto LABEL_222;
      v84 = &UdwmDirectTouchDownAnimation_Start;
    }
    Template_q(a1, v84, a2);
LABEL_222:
    memset_0(v111, 0, 0x70uLL);
    v99 = *a4;
    v112 = v11;
    v113 = v11;
    v111[0] = a2;
    v115 = -1;
    v111[1] = v89 == 2;
    *(_OWORD *)v116 = 0LL;
    v118 = 0LL;
    v117 = 0LL;
    v120 = 0LL;
    v121 = 0;
    v114 = v99;
    v119 = 0LL;
    if ( a6 < 0 )
    {
      v122 = 0;
      Touch = CreateTouchVisual<CIndirectTouchVisual>(
                *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                a7);
      v10 = Touch;
      if ( Touch >= 0 )
      {
        *((_DWORD *)v116[1] + 104) = a2;
        CContactManager::AddToTouchNode(v85, a7, v116[1]);
        if ( v89 == 1 )
          CIndirectTouchVisual::StartHover(v116[1], &v103, v115);
        else
          CIndirectTouchVisual::StartEngage(v116[1], &v103, v115);
        goto LABEL_119;
      }
      v100 = 1510;
    }
    else
    {
      v122 = 1;
      Touch = CreateTouchVisual<CDirectTouchVisual>(
                *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                a7,
                v116);
      v10 = Touch;
      if ( Touch >= 0 )
      {
        CContactManager::AddToTouchNode(v87, a7, v116[0]);
        CDirectTouchVisual::StartDown(v116[0], &v103, a4, v115);
LABEL_119:
        DynArray<CTouchContact,0>::AddMultipleAndSet(v13 + 56, v111);
        return v10;
      }
      v100 = 1504;
    }
    goto LABEL_188;
  }
  return v10;
}
