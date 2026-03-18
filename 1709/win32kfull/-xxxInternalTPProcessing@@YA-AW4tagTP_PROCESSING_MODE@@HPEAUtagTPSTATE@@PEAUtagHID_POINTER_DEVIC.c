/*
 * XREFs of ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01B2518
 * Callers:
 *     xxxDoTouchpadProcessing @ 0x1C01B47C0 (xxxDoTouchpadProcessing.c)
 * Callees:
 *     PtInRect @ 0x1C005E678 (PtInRect.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     HandlePTPTelemetry @ 0x1C0142630 (HandlePTPTelemetry.c)
 *     ?CacheGestureState@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAX@Z @ 0x1C01AD764 (-CacheGestureState@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@.c)
 *     ?CacheInertiaInfo@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUINERTIA_INFO_INTERNAL@@PEAX@Z @ 0x1C01AD8E0 (-CacheInertiaInfo@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUINERTIA_INFO_INTERNAL@.c)
 *     ?CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01ADA40 (-CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     ?CreateShellGestureFrame@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAX@Z @ 0x1C01ADB8C (-CreateShellGestureFrame@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE.c)
 *     ?FindGestureAndMarkGesturingContactsAsNonResting@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@@Z @ 0x1C01AE350 (-FindGestureAndMarkGesturingContactsAsNonResting@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@@.c)
 *     ?HasActiveContacts@@YAHPEBUtagTPSTATE@@@Z @ 0x1C01AEA94 (-HasActiveContacts@@YAHPEBUtagTPSTATE@@@Z.c)
 *     ?MarkRecentlyDownedContactsAsNonResting@@YAXPEAUtagTPSTATE@@@Z @ 0x1C01AECF4 (-MarkRecentlyDownedContactsAsNonResting@@YAXPEAUtagTPSTATE@@@Z.c)
 *     ?PointInsideCurtainRegion@@YAHUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01AEEBC (-PointInsideCurtainRegion@@YAHUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?SuppressContactForMultiFingerTap@@YAHPEBUtagTPCONTACTSTATE@@@Z @ 0x1C01AF394 (-SuppressContactForMultiFingerTap@@YAHPEBUtagTPCONTACTSTATE@@@Z.c)
 *     ?UpdatePTPRightClickZone@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01AF948 (-UpdatePTPRightClickZone@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z.c)
 *     ?UpdateTPContactState@@YAXIPEAUtagTPSTATE@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C01AFADC (-UpdateTPContactState@@YAXIPEAUtagTPSTATE@@PEAUtagPOINTERINFONODE@@@Z.c)
 *     ?UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAH@Z @ 0x1C01AFBAC (-UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagH.c)
 *     ?xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HKPEAH@Z @ 0x1C01B000C (-xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE.c)
 *     ?xxxDoTPDiscreteButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAH2@Z @ 0x1C01B0D34 (-xxxDoTPDiscreteButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAH2@Z.c)
 *     ?xxxDoTPGestureProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAXHKPEAH@Z @ 0x1C01B14D8 (-xxxDoTPGestureProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 *     ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01B1800 (-xxxDoTPMouseProcessing@@YA-AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@.c)
 *     ?xxxDoTPShellProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAXKPEAH@Z @ 0x1C01B217C (-xxxDoTPShellProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_.c)
 *     ?xxxProcess2FingerTap@@YAHPEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@HK@Z @ 0x1C01B34E4 (-xxxProcess2FingerTap@@YAHPEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@HK@Z.c)
 *     ?xxxProcessTapsFor3orMoreContacts@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@K_K2@Z @ 0x1C01B36D8 (-xxxProcessTapsFor3orMoreContacts@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@K_K2@Z.c)
 *     ?zzzCancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01B3D44 (-zzzCancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     GetPTPShellListener @ 0x1C01B3F70 (GetPTPShellListener.c)
 *     IsFirstActionAfterKey @ 0x1C01B40E4 (IsFirstActionAfterKey.c)
 *     TPAAPGetLevel @ 0x1C01B43A8 (TPAAPGetLevel.c)
 *     TPAAPSetCurtainState @ 0x1C01B43D0 (TPAAPSetCurtainState.c)
 *     TPAAPShouldAllowNow @ 0x1C01B4574 (TPAAPShouldAllowNow.c)
 *     xxxCancelMouseUpTimer @ 0x1C01B4760 (xxxCancelMouseUpTimer.c)
 *     xxxSendMouseUpIfPending @ 0x1C01B4C2C (xxxSendMouseUpIfPending.c)
 *     QueryInertiaInfo @ 0x1C020D930 (QueryInertiaInfo.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxInternalTPProcessing(
        int a1,
        __int64 a2,
        struct tagHID_POINTER_DEVICE_INFO *a3,
        __int64 a4,
        void *a5)
{
  int v5; // eax
  __int64 v6; // r15
  struct tagHID_POINTER_DEVICE_INFO *v7; // r9
  int v9; // edi
  int v10; // r14d
  int v11; // r13d
  int v12; // r12d
  int v13; // edx
  unsigned int v14; // r8d
  int v15; // eax
  const struct INERTIA_INFO_INTERNAL *InertiaInfo; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // edx
  __int64 v22; // rsi
  int v23; // r8d
  int v24; // r10d
  int v25; // r11d
  int v26; // r8d
  int v27; // eax
  __int64 v28; // r10
  unsigned int v29; // r15d
  __int64 v30; // r14
  __int64 v31; // rdi
  int v32; // eax
  struct tagHID_POINTER_DEVICE_INFO *v33; // r9
  int v34; // edx
  int v35; // eax
  BOOL v36; // eax
  int v37; // ecx
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  struct tagTPTELEMTIMINGS *v41; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  int ActionAfterKey; // eax
  __int64 v44; // rcx
  __int64 v45; // rsi
  unsigned int v46; // r9d
  __int64 v47; // r8
  __int64 v48; // rdx
  unsigned int v49; // ecx
  int GestureAndMarkGesturingContactsAsNonResting; // eax
  unsigned int v51; // esi
  int v52; // r9d
  int v53; // edi
  int v54; // eax
  __int64 v55; // r9
  char v56; // dl
  __int64 v57; // rax
  int v58; // ecx
  unsigned __int64 v59; // r15
  __int64 v60; // rsi
  unsigned __int64 v61; // r14
  char v62; // r13
  unsigned int v63; // r12d
  unsigned int v64; // r10d
  __int64 v65; // rdx
  int v66; // r8d
  __int64 v67; // rdi
  int v68; // eax
  __int64 v69; // r8
  int v70; // ecx
  int v71; // eax
  unsigned int v72; // eax
  BOOL v73; // eax
  unsigned __int64 v74; // rax
  unsigned int v75; // r12d
  unsigned __int64 v76; // r9
  __int64 v77; // rdx
  __int64 v78; // r8
  __int64 v79; // r9
  int v80; // esi
  unsigned int v81; // edi
  unsigned int v82; // r10d
  _DWORD *v83; // r11
  __int64 v84; // r14
  __int64 v85; // r9
  __int64 v86; // rsi
  __int64 v87; // r8
  unsigned __int64 v88; // rax
  unsigned __int64 v89; // r8
  int v90; // eax
  int v91; // eax
  unsigned int v92; // r14d
  int v93; // esi
  int v95; // eax
  int v96; // r10d
  char v97; // cl
  bool v98; // di
  int v99; // ecx
  unsigned int v100; // edi
  __int64 v101; // r11
  unsigned __int16 v102; // ax
  int v103; // eax
  struct tagTPSTATE *v104; // rcx
  __int64 v105; // rdx
  int v106; // r11d
  __int64 v107; // r8
  int v108; // ecx
  unsigned int v109; // eax
  unsigned int v110; // eax
  unsigned int v111; // eax
  int v112; // edi
  __int64 v113; // rcx
  LARGE_INTEGER v114; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rbx
  unsigned int v118; // [rsp+48h] [rbp-41h]
  int v119; // [rsp+4Ch] [rbp-3Dh]
  unsigned int v120; // [rsp+54h] [rbp-35h]
  int v121; // [rsp+58h] [rbp-31h]
  int v122; // [rsp+5Ch] [rbp-2Dh]
  int v123; // [rsp+60h] [rbp-29h]
  unsigned int v124; // [rsp+64h] [rbp-25h]
  int v125; // [rsp+68h] [rbp-21h] BYREF
  int v126; // [rsp+6Ch] [rbp-1Dh] BYREF
  int v127; // [rsp+70h] [rbp-19h] BYREF
  int v128; // [rsp+74h] [rbp-15h] BYREF
  int v129; // [rsp+78h] [rbp-11h] BYREF
  int v130; // [rsp+7Ch] [rbp-Dh]
  unsigned int v131; // [rsp+80h] [rbp-9h]
  int v132; // [rsp+84h] [rbp-5h]
  int v133; // [rsp+88h] [rbp-1h]
  int v134; // [rsp+8Ch] [rbp+3h]
  int v136; // [rsp+F0h] [rbp+67h]

  v5 = *(_DWORD *)(a2 + 1920);
  v6 = a4;
  v131 = 0;
  v7 = a3;
  v124 = 0;
  v118 = 0;
  v127 = 0;
  v9 = 0;
  v128 = 0;
  v10 = 0;
  v129 = 0;
  v11 = 0;
  v136 = 0;
  v12 = 0;
  v126 = 0;
  v125 = 0;
  v123 = 0;
  v120 = 0;
  v130 = 0;
  if ( (v5 & 1) == 0 && (v5 & 4) == 0 && (v5 & 8) == 0 )
  {
    v13 = 0;
    v14 = 0;
    do
    {
      if ( v14 >= 6 )
        break;
      v15 = *(_DWORD *)(272LL * v14 + a2 + 264);
      if ( (v15 & 1) != 0 && (v15 & 0x80u) == 0 )
        v13 = 1;
      ++v14;
    }
    while ( !v13 );
    if ( !v13 && *(_DWORD *)(v6 + 40) != *(_DWORD *)(a2 + 1656) )
    {
      InertiaInfo = (const struct INERTIA_INFO_INTERNAL *)QueryInertiaInfo(
                                                            &gInertiaInfo,
                                                            *(_QWORD *)gptCursorAsync,
                                                            0LL);
      if ( InertiaInfo )
        CacheInertiaInfo((struct tagTPSTATE *)a2, a3, InertiaInfo, a5);
      if ( (unsigned __int64)gAapState[12] > *(_QWORD *)(a2 + 1872) && (int)TPAAPGetLevel(a2, v17, v18) > 0 )
        TPAAPSetCurtainState(v19, 1LL);
      *(LARGE_INTEGER *)(a2 + 1872) = KeQueryPerformanceCounter(0LL);
      v20 = gAapState[13];
      if ( v20 > gAapState[12] )
      {
        if ( (__int64)gTPTelemTimings >= v20 )
        {
          *((LARGE_INTEGER *)&gTPTelemTimings + 3) = KeQueryPerformanceCounter(0LL);
          *((_DWORD *)&gTPTelemTimings + 11) = 0;
        }
        else
        {
          gTPTelemTimings = (struct tagTPTELEMTIMINGS *const)KeQueryPerformanceCounter(0LL).QuadPart;
        }
      }
      v7 = a3;
    }
  }
  v21 = *(_DWORD *)(a2 + 1920);
  v22 = *(_QWORD *)(v6 + 88);
  v23 = *(_DWORD *)(v22 + 68);
  v24 = v23 & 0x10;
  v121 = v24;
  v25 = v23 & 0x20;
  v133 = v24 != 0;
  v26 = v23 & 0x40;
  v122 = v25;
  v119 = v26;
  v27 = (unsigned __int16)(v21 & 0x4000) >> 14;
  v21 &= ~0x4000u;
  *(_DWORD *)(a2 + 1920) = v21;
  v134 = v27;
  v132 = *(_DWORD *)(a2 + 1664);
  if ( (unsigned __int16)(v21 & 0x8000) >> 15 != *(_DWORD *)(gpsi + 1972LL) )
  {
    UpdatePTPRightClickZone((struct tagTPSTATE *)a2, v7, 0);
    v26 = v119;
    v24 = v121;
    v25 = v122;
  }
  if ( a1 )
  {
    v75 = 0;
    v80 = 1;
    goto LABEL_200;
  }
  if ( v24 )
  {
    v28 = 0LL;
LABEL_30:
    *(_DWORD *)(a2 + 1920) |= 0x40000000u;
    goto LABEL_31;
  }
  v28 = 0LL;
  if ( v25 || v26 )
    goto LABEL_30;
LABEL_31:
  v29 = 0;
  if ( *(_DWORD *)(a4 + 40) )
  {
    do
    {
      v30 = (unsigned int)*(unsigned __int16 *)(v22 + 48) % *(_DWORD *)(a2 + 1644);
      v31 = a2 + 272 * v30;
      if ( (*(_DWORD *)(v31 + 264) & 1) != 0 )
      {
        v33 = a3;
      }
      else
      {
        v32 = TPAAPShouldAllowNow(64LL, 0LL, 0LL, 0LL);
        v33 = a3;
        v28 = 0LL;
        if ( !v32 && PointInsideCurtainRegion(*(struct tagPOINT *)(v22 + 96), a3) )
          *(_DWORD *)(v22 + 68) = v28;
      }
      if ( (*(_DWORD *)(v31 + 264) & 1) == 0 )
      {
        v34 = *(_DWORD *)(a2 + 1920);
        if ( (v34 & 0x10000000) != 0 && (gTPThresholds[28] & 2) != 0 )
        {
          if ( (v34 & 0x40000000) != 0 || (v35 = *(_DWORD *)(a2 + 1664), v35 == 6) || v35 == 3 )
          {
            v37 = v28;
          }
          else
          {
            v36 = PtInRect((_DWORD *)(a2 + 1896), *(_QWORD *)(v22 + 96));
            v37 = v28;
            LOBYTE(v37) = !v36;
          }
          if ( v37 )
            *(_DWORD *)(v22 + 68) = v28;
        }
      }
      if ( *(_DWORD *)(v22 + 68) != (_DWORD)v28 )
      {
        UpdateTPStateIndicator(
          (struct tagTPCONTACTSTATE *)(a2 + 272 * v30),
          (struct tagTPSTATE *)a2,
          (struct tagPOINTER_INFO *)(v22 + 56),
          v33,
          &v126);
        if ( (*(_DWORD *)(v31 + 264) & 2) != 0 )
        {
          v120 = v30;
          ++v123;
          v11 = 1;
          *(_DWORD *)(v31 + 128) = *(_DWORD *)(a4 + 32);
          v41 = (struct tagTPTELEMTIMINGS *)gAapState[13];
          if ( *((_QWORD *)&gTPTelemTimings + 1) < (__int64)v41 )
          {
            PerformanceCounter = KeQueryPerformanceCounter(0LL);
            v41 = gTPTelemTimings;
            *(&gTPTelemTimings + 1) = (struct tagTPTELEMTIMINGS *const)PerformanceCounter.QuadPart;
          }
          v28 = 0LL;
          if ( (__int64)gTPTelemTimings > 0 && *((int *)&gTPTelemTimings + 20) <= 0 )
          {
            *((_DWORD *)&gTPTelemTimings + 20) = v30;
            ActionAfterKey = IsFirstActionAfterKey(v41, v38, v39, v40);
            v44 = *(_QWORD *)v31;
            if ( ActionAfterKey )
              *((_QWORD *)&gTPTelemTimings + 6) = v44;
            else
              *((_QWORD *)&gTPTelemTimings + 8) = v44;
          }
        }
        else
        {
          v28 = 0LL;
        }
        if ( (*(_DWORD *)(v22 + 68) & 0x40000) != 0 )
          v12 = 1;
        else
          ++v118;
      }
      ++v29;
      v22 += 216LL;
    }
    while ( v29 < *(_DWORD *)(a4 + 40) );
    v9 = v126;
    v10 = v123;
  }
  v45 = a4;
  v46 = v28;
  *(_DWORD *)(a2 + 1656) = v28;
  if ( *(_DWORD *)(a4 + 40) > (unsigned int)v28 )
  {
    v47 = *(_QWORD *)(a4 + 88) + 68LL;
    do
    {
      v48 = a2 + 272LL * ((unsigned int)*(unsigned __int16 *)(v47 - 20) % *(_DWORD *)(a2 + 1644));
      if ( (*(_DWORD *)v47 & 0x40000) == 0 && (*(_DWORD *)(v48 + 264) & 0x80u) != 0 )
        ++*(_DWORD *)(a2 + 1656);
      if ( v11 || v12 )
        *(_QWORD *)(v48 + 48) = *(_QWORD *)(v47 + 28);
      v47 += 216LL;
      ++v46;
    }
    while ( v46 < *(_DWORD *)(a4 + 40) );
  }
  v49 = v118;
  *(_DWORD *)(a2 + 1660) = v118 - *(_DWORD *)(a2 + 1656);
  if ( v118 >= 2 && *(_DWORD *)(a2 + 1664) != 3 )
  {
    GestureAndMarkGesturingContactsAsNonResting = FindGestureAndMarkGesturingContactsAsNonResting(
                                                    (const struct tagPOINTERINPUTFRAME *)a4,
                                                    (struct tagTPSTATE *)a2);
    v49 = v118;
    v28 = 0LL;
    v130 = GestureAndMarkGesturingContactsAsNonResting;
  }
  if ( v9 && v49 == 1 )
  {
    zzzCancelInertiaState((struct tagTPSTATE *)a2, 0);
    v28 = 0LL;
  }
  if ( gidTapTimer == v28 || !v10 )
    goto LABEL_91;
  if ( v10 == 1 && (gTouchPadParameters[5] & 4) != 0 )
  {
    v51 = v120;
    v52 = HIDWORD(*(_QWORD *)(a2 + 1720)) - HIDWORD(*(_QWORD *)(272LL * v120 + a2));
    if ( (int)(v52 * v52
             + (*(_QWORD *)(a2 + 1720) - *(_QWORD *)(272LL * v120 + a2))
             * (*(_QWORD *)(a2 + 1720) - *(_QWORD *)(272LL * v120 + a2))) <= (unsigned __int64)(unsigned int)(gTPThresholds[21] * gTPThresholds[21]) )
    {
      v53 = 1;
      goto LABEL_85;
    }
  }
  else
  {
    v51 = v120;
  }
  v53 = v28;
LABEL_85:
  if ( guMouseUpPending != (_DWORD)v28 && !v53 )
    *(_DWORD *)(a2 + 1920) &= ~0x10u;
  xxxCancelMouseUpTimer(v53 ^ 1u);
  gbTapTimerFired = 0;
  if ( v53 )
  {
    *(_DWORD *)(a2 + 1640) = guMouseUpPending;
    guMouseUpPending = 0;
    *(_DWORD *)(272LL * v51 + a2 + 264) |= 0x4000u;
  }
  v45 = a4;
LABEL_91:
  if ( *(_DWORD *)(a2 + 1664) == 1 )
  {
    v54 = *(_DWORD *)(a2 + 1640);
    if ( v54 )
    {
      if ( *(_DWORD *)(a2 + 1660) > 1u )
      {
        if ( v54 == 4 )
        {
          *(_DWORD *)(a2 + 1920) &= ~0x10u;
        }
        else if ( v54 == 16 )
        {
          *(_DWORD *)(a2 + 1920) &= ~0x20u;
        }
        xxxSendMouseUpIfPending(a2 + 1640, *(_QWORD *)(a2 + 1768));
      }
    }
  }
  v55 = 0LL;
  if ( gidTapTimer )
  {
    v56 = 0;
    v57 = a2;
    do
    {
      v58 = *(_DWORD *)(v57 + 264);
      if ( (v58 & 1) != 0 && (v58 & 0x80u) != 0 && (v58 & 4) != 0 )
        v56 = 1;
      v57 += 272LL;
    }
    while ( v57 != a2 + 1632 );
    if ( *(_DWORD *)(a2 + 1660) || v56 )
    {
      if ( guMouseUpPending )
        *(_DWORD *)(a2 + 1920) &= ~0x10u;
      xxxCancelMouseUpTimer(1LL);
      v55 = 0LL;
      gbTapTimerFired = 0;
    }
  }
  if ( *(_DWORD *)(a2 + 1660) > 2u )
    *(_DWORD *)(a2 + 1920) |= 0x20000u;
  v59 = 0LL;
  v60 = *(_QWORD *)(v45 + 88);
  v61 = 0LL;
  v62 = 0;
  v63 = 0;
  if ( *(_DWORD *)(a4 + 40) )
  {
    v64 = 1;
    while ( 1 )
    {
      v65 = (unsigned int)*(unsigned __int16 *)(v60 + 48) % *(_DWORD *)(a2 + 1644);
      v66 = *(_DWORD *)(v60 + 68);
      v67 = a2 + 272LL * (unsigned int)v65;
      if ( v66 )
        break;
LABEL_165:
      ++v63;
      v60 += 216LL;
      if ( v63 >= *(_DWORD *)(a4 + 40) )
        goto LABEL_166;
    }
    if ( !v62 && !SuppressContactForMultiFingerTap((const struct tagTPCONTACTSTATE *)(a2 + 272LL * (unsigned int)v65)) )
    {
      v61 = *(_QWORD *)(v67 + 56);
      v62 = v64;
      v59 = v61;
    }
    v68 = *(_DWORD *)(v67 + 264);
    if ( (v68 & 4) != 0 && (*(_DWORD *)(a2 + 1664) != 2 || (_DWORD)v65 != *(_DWORD *)(a2 + 1632)) )
      v131 = v64;
    if ( (v68 & 0x40000) == 0 || *(_DWORD *)(a2 + 1664) == 2 && (_DWORD)v65 == *(_DWORD *)(a2 + 1632) )
      v124 = v55;
    else
      v124 = v64;
    if ( *(_DWORD *)(a2 + 1664) == 2
      && (_DWORD)v65 == *(_DWORD *)(a2 + 1632)
      && ((v66 & 0x40000) != 0 || (v68 & 0x80u) != 0 && v118 > v64) )
    {
      *(_DWORD *)(a2 + 1920) &= ~0x2000000u;
      *(_DWORD *)(a2 + 1664) = v64;
    }
    v69 = a2 + 1640;
    v70 = *(_DWORD *)(a2 + 1640);
    if ( v70 )
    {
      if ( *(_DWORD *)(a2 + 1664) == 5 && (*(_DWORD *)(v60 + 68) & 0x40000) == 0 && v118 == v64 )
      {
        v71 = *(_DWORD *)(v67 + 264);
        if ( (v71 & 0x80u) != 0 && (v71 & 4) == 0 && (v71 & 0x2000) == 0 && (v71 & 0x4000) == 0 )
        {
          *(_DWORD *)(a2 + 1664) = v64;
          if ( v70 == 4 )
          {
            *(_DWORD *)(a2 + 1920) &= ~0x10u;
          }
          else if ( v70 == 16 )
          {
            *(_DWORD *)(a2 + 1920) &= ~0x20u;
          }
          xxxSendMouseUpIfPending(
            a2 + 1640,
            (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
          v55 = 0LL;
        }
      }
    }
    if ( (*(_DWORD *)(v67 + 264) & 0x40) != 0 && v132 != 3 && (*(_DWORD *)(v60 + 68) & 0x40000) != 0 )
      goto LABEL_152;
    if ( *(_DWORD *)(a2 + 1664) != 2 )
    {
LABEL_155:
      v72 = *(_DWORD *)(a2 + 1648);
      if ( v72 < 3 || v118 >= v72 || (*(_DWORD *)(a2 + 1920) & 0x800000) != 0 )
      {
        v64 = 1;
      }
      else
      {
        v73 = SuppressContactForMultiFingerTap((const struct tagTPCONTACTSTATE *)v67);
        v64 = 1;
        if ( !v73 )
        {
          v74 = *(_QWORD *)(v67 + 56);
          if ( v74 > v61 )
            v61 = *(_QWORD *)(v67 + 56);
          if ( v74 < v59 )
            v59 = *(_QWORD *)(v67 + 56);
        }
      }
      goto LABEL_165;
    }
    if ( *(_QWORD *)(a2 + 1912) != v55 )
    {
LABEL_152:
      CleanupGestureCache((struct tagTPSTATE *)a2, v65, v69);
      v55 = 0LL;
    }
    if ( *(_DWORD *)(a2 + 1664) == 2 )
      *(_DWORD *)(a2 + 1920) |= 0x2000000u;
    goto LABEL_155;
  }
LABEL_166:
  v75 = v118;
  v76 = v59;
  v6 = a4;
  if ( xxxProcessTapsFor3orMoreContacts(
         (const struct tagPOINTERINPUTFRAME *)a4,
         (struct tagTPSTATE *)a2,
         v118,
         v76,
         v61) )
  {
    v92 = 1;
    v93 = 0;
    goto LABEL_197;
  }
  v80 = 1;
  if ( v118 > 1 && (*(_DWORD *)(a2 + 1920) & 0x40000) == 0 )
  {
    v81 = *(_DWORD *)(a2 + 1644);
    if ( v81 )
    {
      v82 = 1;
      v83 = (_DWORD *)(a2 + 264);
      v84 = v81;
      do
      {
        if ( (*v83 & 1) != 0 && v82 < v81 )
        {
          v85 = 272LL * v82 + a2 + 56;
          v86 = v81 - v82;
          do
          {
            if ( (*(_DWORD *)(v85 + 208) & 1) != 0 )
            {
              v87 = *(_QWORD *)v85;
              v88 = *((_QWORD *)v83 - 26);
              v89 = *(_QWORD *)v85 <= v88 ? v88 - v87 : v87 - v88;
              if ( v89 <= gliQpcFreq * (unsigned int)gTPThresholds[18] / 1000LL )
                *(_DWORD *)(a2 + 1920) |= 0x40000u;
            }
            v85 += 272LL;
            --v86;
          }
          while ( v86 );
          v80 = 1;
        }
        v83 += 68;
        ++v82;
        --v84;
      }
      while ( v84 );
      v6 = a4;
    }
  }
  v90 = *(_DWORD *)(a2 + 1920);
  if ( (v90 & 0x40000) != 0 && v118 == 1 )
    *(_DWORD *)(a2 + 1920) = v90 & 0xFFF3FFFF;
  v91 = *(_DWORD *)(a2 + 1664);
  if ( v91 != 3 && v91 != 6 && !*(_QWORD *)(a2 + 1912) && v118 >= 2 && (*(_DWORD *)(a2 + 1920) & 0x2000000) == 0 )
  {
    CacheGestureState((const struct tagPOINTERINPUTFRAME *)v6, (struct tagTPSTATE *)a2, a3, (unsigned __int64)a5);
    v136 = 1;
  }
  if ( (*(_DWORD *)(a2 + 1920) & 0x800) != 0
    && xxxProcess2FingerTap(
         *(struct tagPOINTERINFONODE **)(v6 + 88),
         (struct tagTPSTATE *)a2,
         v133,
         *(_DWORD *)(v6 + 40)) )
  {
    v92 = 1;
LABEL_196:
    v93 = v136;
    goto LABEL_197;
  }
LABEL_200:
  if ( !xxxDoTPDiscreteButtonProcessing((const struct tagPOINTERINPUTFRAME *)v6, (LARGE_INTEGER *)a2, &v128, &v129)
    || !(unsigned int)xxxDoTPButtonProcessing(
                        (const struct tagPOINTERINPUTFRAME *)v6,
                        (tagPOINT *)a2,
                        a3,
                        a1,
                        v75,
                        &v127) )
  {
    goto LABEL_262;
  }
  if ( a1 )
    return 1LL;
  if ( v127 || v128 || v129 )
  {
    v95 = *(_DWORD *)(a2 + 1664);
    if ( v95 != 3 && v95 != 6 )
    {
LABEL_262:
      v92 = 1;
      goto LABEL_196;
    }
  }
  LOBYTE(v77) = 19;
  if ( !HMValidateHandleNoSecure((unsigned __int64)a5, v77, v78, v79) )
    return 1LL;
  if ( !*(_DWORD *)(a2 + 1640) || *(_DWORD *)(a2 + 1664) == 1 )
    v80 = 0;
  if ( v121 || v122 || v119 || v80 || !v124 )
  {
    v77 = 0LL;
    v96 = 1;
  }
  else
  {
    v96 = 1;
    v77 = 1LL;
  }
  v79 = *(unsigned int *)(a2 + 1660);
  if ( (_DWORD)v79 == 2
    && *(_DWORD *)(a2 + 1664) != 3
    && (*(_DWORD *)(a2 + 1920) & 0x2000000) == 0
    && (_DWORD)v77
    && v130 )
  {
    v78 = 1LL;
LABEL_227:
    if ( (_DWORD)v77 || (v97 = 0, (*(_DWORD *)(a2 + 1920) & 0x200000) != 0) )
      v97 = 1;
    goto LABEL_230;
  }
  v78 = 0LL;
  v97 = 0;
  if ( (_DWORD)v79 == 2 )
    goto LABEL_227;
LABEL_230:
  v98 = 0;
  if ( *(_DWORD *)(a2 + 1664) == 3 )
    goto LABEL_236;
  if ( (_DWORD)v78 || v97 )
  {
    MarkRecentlyDownedContactsAsNonResting((struct tagTPSTATE *)a2);
    v96 = 1;
    v98 = *(_DWORD *)(a2 + 1660) == 2;
  }
  if ( *(_DWORD *)(a2 + 1664) == 3 || v98 )
  {
LABEL_236:
    if ( (*(_DWORD *)(a2 + 1920) & 0x2000000) != 0 )
    {
      CacheGestureState((const struct tagPOINTERINPUTFRAME *)v6, (struct tagTPSTATE *)a2, a3, (unsigned __int64)a5);
      *(_DWORD *)(a2 + 1920) &= ~0x2000000u;
      v96 = 1;
      v136 = 1;
    }
    v92 = 3;
  }
  else
  {
    v92 = 1;
  }
  if ( (unsigned int)(*(_DWORD *)(a2 + 1660) - 3) <= 1
    && v92 != 3
    && !v121
    && !v122
    && !v119
    && GetPTPShellListener(0LL, v77, v78)
    && v131 != v99
    || *(_DWORD *)(a2 + 1664) == 6 )
  {
    MarkRecentlyDownedContactsAsNonResting((struct tagTPSTATE *)a2);
    v96 = 1;
    if ( *(_DWORD *)(a2 + 1664) == 1 )
    {
      CreateShellGestureFrame(
        (const struct tagPOINTERINPUTFRAME *)v6,
        (struct tagTPSTATE *)a2,
        a3,
        (unsigned __int64)a5);
      v96 = 1;
    }
    v92 = 6;
  }
  if ( v92 != 3 )
  {
    if ( v92 == 6 )
    {
      xxxDoTPShellProcessing((const struct tagPOINTERINPUTFRAME *)v6, (LARGE_INTEGER *)a2, a3, a5, v75, &v125);
    }
    else if ( *(_DWORD *)(a2 + 1660) < 2u )
    {
      if ( !v121 && !v122 && !v119 && !v80 )
        v92 = xxxDoTPMouseProcessing(v6, v75, a2);
    }
    else
    {
      *(_DWORD *)(a2 + 1664) = v96;
    }
    goto LABEL_196;
  }
  v93 = v136;
  xxxDoTPGestureProcessing((const struct tagPOINTERINPUTFRAME *)v6, (struct tagTPSTATE *)a2, a3, a5, v136, v75, &v125);
LABEL_197:
  LOBYTE(v77) = 19;
  if ( !HMValidateHandleNoSecure((unsigned __int64)a5, v77, v78, v79) )
    return 1LL;
  v100 = 0;
  v101 = *(_QWORD *)(v6 + 88);
  if ( *(_DWORD *)(v6 + 40) )
  {
    do
    {
      v102 = *(_WORD *)(v101 + 48);
      if ( v102 )
        UpdateTPContactState(
          (unsigned int)v102 % *(_DWORD *)(a2 + 1644),
          (struct tagTPSTATE *)a2,
          (struct tagPOINTERINFONODE *)v101);
      v101 += 216LL;
      ++v100;
    }
    while ( v100 < *(_DWORD *)(v6 + 40) );
    v75 = v118;
  }
  v103 = *(_DWORD *)(a2 + 1920);
  if ( (v103 & 1) == 0
    && (v103 & 4) == 0
    && (v103 & 8) == 0
    && !(unsigned int)HasActiveContacts((const struct tagTPSTATE *)a2) )
  {
    zzzCancelInertiaState(v104, 0);
  }
  if ( __CFSHR__(*(_DWORD *)(a2 + 1920), 15) != v134 )
  {
    if ( __CFSHR__(*(_DWORD *)(a2 + 1920), 15) )
      EtwTracePTPElasticDragModeStart();
    else
      EtwTracePTPElasticDragModeStop();
  }
  if ( !*(_DWORD *)(a2 + 1660) )
    *(_DWORD *)(a2 + 1920) &= ~0x20000u;
  if ( *(_DWORD *)(a2 + 1664) != 2 )
    *(_DWORD *)(a2 + 1920) &= ~0x100000u;
  if ( (unsigned int)HasActiveContacts((const struct tagTPSTATE *)a2) )
    goto LABEL_303;
  v107 = a2 + 1640;
  v108 = *(_DWORD *)(a2 + 1640);
  v109 = v106 & *(_DWORD *)(a2 + 1920) & 0xFFFEFFFF;
  *(_DWORD *)(a2 + 1664) = 1;
  v110 = v109 & 0xB7F3FFFF;
  *(_DWORD *)(a2 + 1920) = v110;
  if ( v108 )
  {
    if ( v108 == 4 )
    {
      v111 = v110 & 0xFFFFFFEF;
    }
    else
    {
      if ( v108 != 16 )
      {
LABEL_289:
        xxxSendMouseUpIfPending(
          a2 + 1640,
          (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
        goto LABEL_290;
      }
      v111 = v110 & 0xFFFFFFDF;
    }
    *(_DWORD *)(a2 + 1920) = v111;
    goto LABEL_289;
  }
LABEL_290:
  v112 = v132;
  if ( v132 == 3 )
    CleanupGestureCache((struct tagTPSTATE *)a2, v105, v107);
  if ( v112 == 2 )
  {
    v113 = 272LL * *(unsigned int *)(a2 + 1632);
    if ( (*(_DWORD *)(v113 + a2 + 264) & 0x800) != 0
      && (__int64)((unsigned __int64)(1000LL * (*(_QWORD *)(v113 + a2 + 64) - *(_QWORD *)(v113 + a2 + 80))) / gliQpcFreq) >= HIDWORD(gAapState[8]) )
    {
      *(_QWORD *)(a2 + 2088) = *(_QWORD *)(v113 + a2 + 64);
    }
  }
  if ( *((__int64 *)&gTPTelemTimings + 1) > 0 )
  {
    if ( *((_QWORD *)&gTPTelemTimings + 2) )
    {
      *((LARGE_INTEGER *)&gTPTelemTimings + 4) = KeQueryPerformanceCounter(0LL);
      v116 = *((int *)&gTPTelemTimings + 20);
      if ( (int)v116 >= 0 )
        *(&gTPTelemTimings + 9) = *(struct tagTPTELEMTIMINGS *const *)(272 * v116 + a2 + 8);
    }
    else
    {
      v114 = KeQueryPerformanceCounter(0LL);
      *(&gTPTelemTimings + 2) = (struct tagTPTELEMTIMINGS *const)v114.QuadPart;
      *(&gTPTelemTimings + 4) = (struct tagTPTELEMTIMINGS *const)v114.QuadPart;
      v115 = *((int *)&gTPTelemTimings + 20);
      if ( (int)v115 >= 0 )
        *(&gTPTelemTimings + 7) = *(struct tagTPTELEMTIMINGS *const *)(272 * v115 + a2 + 8);
    }
    *((_DWORD *)&gTPTelemTimings + 20) = -1;
  }
LABEL_303:
  if ( v125 )
  {
    zzzCancelInertiaState((struct tagTPSTATE *)a2, 0);
    *(_DWORD *)(a2 + 1664) = 1;
  }
  if ( v92 == 3 && v93 )
    v92 = 1;
  *(_DWORD *)(a2 + 1648) = v75;
  v117 = 1000LL * *(_QWORD *)&KeQueryPerformanceCounter(0LL) / gliQpcFreq;
  if ( (unsigned __int64)(v117 - gmsLastTelemetrySentTime) > 0xEA60 )
  {
    HandlePTPTelemetry();
    gmsLastTelemetrySentTime = v117;
  }
  return v92;
}
