/*
 * XREFs of ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01AF180
 * Callers:
 *     xxxDoTouchpadProcessing @ 0x1C01B13B8 (xxxDoTouchpadProcessing.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     PtInRect @ 0x1C0062B38 (PtInRect.c)
 *     HandlePTPTelemetry @ 0x1C013B880 (HandlePTPTelemetry.c)
 *     ?CacheGestureState@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAX@Z @ 0x1C01AA438 (-CacheGestureState@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@.c)
 *     ?CacheInertiaInfo@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUINERTIA_INFO_INTERNAL@@PEAX@Z @ 0x1C01AA5B4 (-CacheInertiaInfo@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUINERTIA_INFO_INTERNAL@.c)
 *     ?CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01AA710 (-CleanupGestureCache@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     ?CreateShellGestureFrame@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAX@Z @ 0x1C01AA7D8 (-CreateShellGestureFrame@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE.c)
 *     ?FindGestureAndMarkGesturingContactsAsNonResting@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@@Z @ 0x1C01AAF90 (-FindGestureAndMarkGesturingContactsAsNonResting@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@@.c)
 *     ?HasActiveContacts@@YAHPEBUtagTPSTATE@@@Z @ 0x1C01AB6D4 (-HasActiveContacts@@YAHPEBUtagTPSTATE@@@Z.c)
 *     ?MarkRecentlyDownedContactsAsNonResting@@YAXPEAUtagTPSTATE@@@Z @ 0x1C01AB8E4 (-MarkRecentlyDownedContactsAsNonResting@@YAXPEAUtagTPSTATE@@@Z.c)
 *     ?PointInsideCurtainRegion@@YAHUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01ABABC (-PointInsideCurtainRegion@@YAHUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?SuppressContactForMultiFingerTap@@YAHPEBUtagTPCONTACTSTATE@@@Z @ 0x1C01ABF70 (-SuppressContactForMultiFingerTap@@YAHPEBUtagTPCONTACTSTATE@@@Z.c)
 *     ?UpdatePTPRightClickZone@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z @ 0x1C01AC5CC (-UpdatePTPRightClickZone@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@H@Z.c)
 *     ?UpdateTPContactState@@YAXIPEAUtagTPSTATE@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C01AC750 (-UpdateTPContactState@@YAXIPEAUtagTPSTATE@@PEAUtagPOINTERINFONODE@@@Z.c)
 *     ?UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAH@Z @ 0x1C01AC820 (-UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagH.c)
 *     ?xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HKPEAH@Z @ 0x1C01ACC8C (-xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE.c)
 *     ?xxxDoTPDiscreteButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAH2@Z @ 0x1C01AD9CC (-xxxDoTPDiscreteButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAH2@Z.c)
 *     ?xxxDoTPGestureProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAXHKPEAH@Z @ 0x1C01AE190 (-xxxDoTPGestureProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 *     ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01AE4BC (-xxxDoTPMouseProcessing@@YA-AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@.c)
 *     ?xxxDoTPShellProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAXKPEAH@Z @ 0x1C01AEDF0 (-xxxDoTPShellProcessing@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_.c)
 *     ?xxxProcess2FingerTap@@YAHPEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@HK@Z @ 0x1C01B0108 (-xxxProcess2FingerTap@@YAHPEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@HK@Z.c)
 *     ?xxxProcessTapsFor3orMoreContacts@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@K_K2@Z @ 0x1C01B02FC (-xxxProcessTapsFor3orMoreContacts@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@K_K2@Z.c)
 *     ?zzzCancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01B095C (-zzzCancelInertiaState@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     GetPTPShellListener @ 0x1C01B0B78 (GetPTPShellListener.c)
 *     IsFirstActionAfterKey @ 0x1C01B0CF4 (IsFirstActionAfterKey.c)
 *     TPAAPGetLevel @ 0x1C01B0FA0 (TPAAPGetLevel.c)
 *     TPAAPSetCurtainState @ 0x1C01B0FC8 (TPAAPSetCurtainState.c)
 *     TPAAPShouldAllowNow @ 0x1C01B116C (TPAAPShouldAllowNow.c)
 *     xxxCancelMouseUpTimer @ 0x1C01B1358 (xxxCancelMouseUpTimer.c)
 *     xxxSendMouseUpIfPending @ 0x1C01B19D8 (xxxSendMouseUpIfPending.c)
 *     QueryInertiaInfo @ 0x1C020A788 (QueryInertiaInfo.c)
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
  unsigned int v9; // edi
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
  unsigned int v28; // r10d
  unsigned int v29; // r15d
  __int64 v30; // r14
  __int64 v31; // rdi
  int v32; // eax
  struct tagHID_POINTER_DEVICE_INFO *v33; // r9
  int v34; // edx
  int v35; // eax
  BOOL v36; // eax
  unsigned int v37; // ecx
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  struct tagTPTELEMTIMINGS *v41; // rcx
  struct tagTPTELEMTIMINGS *v42; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  int ActionAfterKey; // eax
  __int64 v45; // rcx
  __int64 v46; // rsi
  unsigned int v47; // r9d
  __int64 v48; // r8
  __int64 v49; // rdx
  unsigned int v50; // ecx
  int GestureAndMarkGesturingContactsAsNonResting; // eax
  unsigned int v52; // esi
  int v53; // r9d
  int v54; // eax
  char v55; // dl
  int *v56; // rcx
  int v57; // eax
  unsigned __int64 v58; // r15
  __int64 v59; // rsi
  unsigned __int64 v60; // r14
  char v61; // r13
  unsigned int v62; // r12d
  __int64 v63; // r9
  unsigned int v64; // r10d
  unsigned int v65; // edx
  int v66; // r8d
  __int64 v67; // rdi
  int v68; // eax
  int v69; // ecx
  int v70; // eax
  unsigned int v71; // eax
  BOOL v72; // eax
  unsigned __int64 v73; // rax
  unsigned int v74; // r12d
  unsigned __int64 v75; // r9
  int v76; // esi
  unsigned int v77; // r11d
  __int64 v78; // rdi
  unsigned int v79; // r10d
  __int64 v80; // r14
  __int64 v81; // r9
  __int64 v82; // rsi
  __int64 v83; // r8
  __int64 v84; // rax
  unsigned __int64 v85; // r8
  int v86; // eax
  int v87; // eax
  unsigned int v88; // r14d
  int v90; // eax
  __int64 v91; // rdx
  int v92; // r10d
  __int64 v93; // rcx
  int v94; // r9d
  __int64 v95; // r8
  int v96; // esi
  __int64 v97; // r11
  unsigned __int16 v98; // ax
  int v99; // eax
  struct tagTPSTATE *v100; // rcx
  int v101; // r11d
  int v102; // ecx
  unsigned int v103; // eax
  unsigned int v104; // eax
  unsigned int v105; // eax
  int v106; // edi
  __int64 v107; // rcx
  LARGE_INTEGER v108; // rax
  struct tagTPTELEMTIMINGS *v109; // rdx
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rbx
  unsigned int v113; // [rsp+48h] [rbp-41h]
  int v114; // [rsp+4Ch] [rbp-3Dh]
  int v115; // [rsp+58h] [rbp-31h]
  __int64 v116; // [rsp+58h] [rbp-31h]
  unsigned int v117; // [rsp+60h] [rbp-29h]
  int v118; // [rsp+64h] [rbp-25h]
  int v119; // [rsp+68h] [rbp-21h]
  unsigned int v120; // [rsp+6Ch] [rbp-1Dh]
  int v121; // [rsp+70h] [rbp-19h] BYREF
  int v122; // [rsp+74h] [rbp-15h] BYREF
  int v123; // [rsp+78h] [rbp-11h] BYREF
  int v124; // [rsp+7Ch] [rbp-Dh] BYREF
  int v125; // [rsp+80h] [rbp-9h] BYREF
  int v126; // [rsp+84h] [rbp-5h]
  unsigned int v127; // [rsp+88h] [rbp-1h]
  int v128; // [rsp+8Ch] [rbp+3h]
  int v129; // [rsp+90h] [rbp+7h]
  int v130; // [rsp+94h] [rbp+Bh]
  int v132; // [rsp+F0h] [rbp+67h]

  v5 = *(_DWORD *)(a2 + 1920);
  v6 = a4;
  v127 = 0;
  v7 = a3;
  v120 = 0;
  v113 = 0;
  v123 = 0;
  v9 = 0;
  v124 = 0;
  v10 = 0;
  v125 = 0;
  v11 = 0;
  v132 = 0;
  v12 = 0;
  v122 = 0;
  v121 = 0;
  v115 = 0;
  v117 = 0;
  v126 = 0;
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
  v118 = v24;
  v25 = v23 & 0x20;
  v129 = v24 != 0;
  v26 = v23 & 0x40;
  v119 = v25;
  v114 = v26;
  v27 = (unsigned __int16)(v21 & 0x4000) >> 14;
  v21 &= ~0x4000u;
  *(_DWORD *)(a2 + 1920) = v21;
  v130 = v27;
  v128 = *(_DWORD *)(a2 + 1664);
  if ( (unsigned __int16)(v21 & 0x8000) >> 15 != *(_DWORD *)(gpsi + 1972LL) )
  {
    UpdatePTPRightClickZone((struct tagTPSTATE *)a2, v7, 0);
    v26 = v114;
    v24 = v118;
    v25 = v119;
  }
  if ( a1 )
  {
    v74 = 0;
    v76 = 1;
    goto LABEL_197;
  }
  if ( v24 )
  {
    v28 = 0;
LABEL_30:
    *(_DWORD *)(a2 + 1920) |= 0x40000000u;
    goto LABEL_31;
  }
  v28 = 0;
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
        v32 = TPAAPShouldAllowNow(64LL, 0LL, 0LL);
        v33 = a3;
        v28 = 0;
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
      if ( *(_DWORD *)(v22 + 68) != v28 )
      {
        UpdateTPStateIndicator(
          (struct tagTPCONTACTSTATE *)(a2 + 272 * v30),
          (struct tagTPSTATE *)a2,
          (struct tagPOINTER_INFO *)(v22 + 56),
          v33,
          &v122);
        if ( (*(_DWORD *)(v31 + 264) & 2) != 0 )
        {
          v117 = v30;
          ++v115;
          v11 = 1;
          *(_DWORD *)(v31 + 128) = *(_DWORD *)(a4 + 32);
          v41 = (struct tagTPTELEMTIMINGS *)gAapState[13];
          v42 = gTPTelemTimings;
          if ( *((_QWORD *)&gTPTelemTimings + 1) < (__int64)v41 )
          {
            PerformanceCounter = KeQueryPerformanceCounter(0LL);
            v41 = gTPTelemTimings;
            *(&gTPTelemTimings + 1) = (struct tagTPTELEMTIMINGS *const)PerformanceCounter.QuadPart;
            v42 = gTPTelemTimings;
          }
          v28 = 0;
          if ( *(__int64 *)v42 > 0 && *((int *)v42 + 20) <= 0 )
          {
            *((_DWORD *)v42 + 20) = v30;
            ActionAfterKey = IsFirstActionAfterKey(v41, v38, v39, v40);
            v45 = *(_QWORD *)v31;
            if ( ActionAfterKey )
              *((_QWORD *)&gTPTelemTimings + 6) = v45;
            else
              *((_QWORD *)&gTPTelemTimings + 8) = v45;
          }
        }
        else
        {
          v28 = 0;
        }
        if ( (*(_DWORD *)(v22 + 68) & 0x40000) != 0 )
          v12 = 1;
        else
          ++v113;
      }
      ++v29;
      v22 += 216LL;
    }
    while ( v29 < *(_DWORD *)(a4 + 40) );
    v9 = v122;
    v10 = v115;
  }
  v46 = a4;
  v47 = v28;
  *(_DWORD *)(a2 + 1656) = v28;
  if ( *(_DWORD *)(a4 + 40) > v28 )
  {
    v48 = *(_QWORD *)(a4 + 88) + 68LL;
    do
    {
      v49 = a2 + 272LL * ((unsigned int)*(unsigned __int16 *)(v48 - 20) % *(_DWORD *)(a2 + 1644));
      if ( (*(_DWORD *)v48 & 0x40000) == 0 && (*(_DWORD *)(v49 + 264) & 0x80u) != 0 )
        ++*(_DWORD *)(a2 + 1656);
      if ( v11 || v12 )
        *(_QWORD *)(v49 + 48) = *(_QWORD *)(v48 + 28);
      v48 += 216LL;
      ++v47;
    }
    while ( v47 < *(_DWORD *)(a4 + 40) );
  }
  v50 = v113;
  *(_DWORD *)(a2 + 1660) = v113 - *(_DWORD *)(a2 + 1656);
  if ( v113 >= 2 && *(_DWORD *)(a2 + 1664) != 3 )
  {
    GestureAndMarkGesturingContactsAsNonResting = FindGestureAndMarkGesturingContactsAsNonResting(
                                                    (const struct tagPOINTERINPUTFRAME *)a4,
                                                    (struct tagTPSTATE *)a2);
    v50 = v113;
    v126 = GestureAndMarkGesturingContactsAsNonResting;
  }
  if ( v9 && v50 == 1 )
    zzzCancelInertiaState((struct tagTPSTATE *)a2, 0);
  v9 = 0;
  if ( gidTapTimer && v10 )
  {
    if ( v10 == 1 && (gTouchPadParameters[5] & 4) != 0 )
    {
      v52 = v117;
      v53 = HIDWORD(*(_QWORD *)(a2 + 1720)) - HIDWORD(*(_QWORD *)(272LL * v117 + a2));
      v9 = (int)(v53 * v53
               + (*(_QWORD *)(a2 + 1720) - *(_QWORD *)(272LL * v117 + a2))
               * (*(_QWORD *)(a2 + 1720) - *(_QWORD *)(272LL * v117 + a2))) <= (unsigned __int64)(unsigned int)(gTPThresholds[21] * gTPThresholds[21]);
    }
    else
    {
      v52 = v117;
    }
    if ( guMouseUpPending && !v9 )
      *(_DWORD *)(a2 + 1920) &= ~0x10u;
    xxxCancelMouseUpTimer(v9 ^ 1);
    gbTapTimerFired = 0;
    if ( v9 )
    {
      v9 = 0;
      *(_DWORD *)(a2 + 1640) = guMouseUpPending;
      guMouseUpPending = 0;
      *(_DWORD *)(272LL * v52 + a2 + 264) |= 0x4000u;
    }
    else
    {
      v9 = 0;
    }
    v46 = a4;
  }
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
  if ( gidTapTimer )
  {
    v55 = 0;
    v56 = (int *)(a2 + 264);
    do
    {
      v57 = *v56;
      if ( (*v56 & 1) != 0 && (v57 & 0x80u) != 0 && (v57 & 4) != 0 )
        v55 = 1;
      v56 += 68;
    }
    while ( v56 - 66 != (int *)(a2 + 1632) );
    if ( *(_DWORD *)(a2 + 1660) || v55 )
    {
      if ( guMouseUpPending )
        *(_DWORD *)(a2 + 1920) &= ~0x10u;
      xxxCancelMouseUpTimer(1LL);
      gbTapTimerFired = 0;
    }
  }
  if ( *(_DWORD *)(a2 + 1660) > 2u )
    *(_DWORD *)(a2 + 1920) |= 0x20000u;
  v58 = 0LL;
  v59 = *(_QWORD *)(v46 + 88);
  v60 = 0LL;
  v61 = 0;
  v62 = 0;
  if ( *(_DWORD *)(a4 + 40) )
  {
    v63 = v128;
    v64 = 1;
    v116 = v128;
    while ( 1 )
    {
      v65 = (unsigned int)*(unsigned __int16 *)(v59 + 48) % *(_DWORD *)(a2 + 1644);
      v66 = *(_DWORD *)(v59 + 68);
      v67 = a2 + 272LL * v65;
      if ( v66 )
        break;
LABEL_164:
      ++v62;
      v59 += 216LL;
      if ( v62 >= *(_DWORD *)(a4 + 40) )
      {
        v9 = 0;
        goto LABEL_166;
      }
    }
    if ( !v61 && !SuppressContactForMultiFingerTap((const struct tagTPCONTACTSTATE *)(a2 + 272LL * v65)) )
    {
      v60 = *(_QWORD *)(v67 + 56);
      v61 = v64;
      v58 = v60;
    }
    v68 = *(_DWORD *)(v67 + 264);
    if ( (v68 & 4) != 0 && (*(_DWORD *)(a2 + 1664) != 2 || v65 != *(_DWORD *)(a2 + 1632)) )
      v127 = v64;
    if ( (v68 & 0x40000) == 0 || *(_DWORD *)(a2 + 1664) == 2 && v65 == *(_DWORD *)(a2 + 1632) )
      v120 = 0;
    else
      v120 = v64;
    if ( *(_DWORD *)(a2 + 1664) == 2
      && v65 == *(_DWORD *)(a2 + 1632)
      && ((v66 & 0x40000) != 0 || (v68 & 0x80u) != 0 && v113 > v64) )
    {
      *(_DWORD *)(a2 + 1920) &= ~0x2000000u;
      *(_DWORD *)(a2 + 1664) = v64;
    }
    v69 = *(_DWORD *)(a2 + 1640);
    if ( v69 )
    {
      if ( *(_DWORD *)(a2 + 1664) == 5 && (*(_DWORD *)(v59 + 68) & 0x40000) == 0 && v113 == v64 )
      {
        v70 = *(_DWORD *)(v67 + 264);
        if ( (v70 & 0x80u) != 0 && (v70 & 4) == 0 && (v70 & 0x2000) == 0 && (v70 & 0x4000) == 0 )
        {
          *(_DWORD *)(a2 + 1664) = v64;
          if ( v69 == 4 )
          {
            *(_DWORD *)(a2 + 1920) &= ~0x10u;
          }
          else if ( v69 == 16 )
          {
            *(_DWORD *)(a2 + 1920) &= ~0x20u;
          }
          xxxSendMouseUpIfPending(
            a2 + 1640,
            (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
          v63 = v116;
        }
      }
    }
    if ( (*(_DWORD *)(v67 + 264) & 0x40) != 0 && v63 != 3 && (*(_DWORD *)(v59 + 68) & 0x40000) != 0 )
      goto LABEL_151;
    if ( *(_DWORD *)(a2 + 1664) != 2 )
    {
LABEL_154:
      v71 = *(_DWORD *)(a2 + 1648);
      if ( v71 < 3 || v113 >= v71 || (*(_DWORD *)(a2 + 1920) & 0x800000) != 0 )
      {
        v63 = v116;
        v64 = 1;
      }
      else
      {
        v72 = SuppressContactForMultiFingerTap((const struct tagTPCONTACTSTATE *)v67);
        v63 = v116;
        v64 = 1;
        if ( !v72 )
        {
          v73 = *(_QWORD *)(v67 + 56);
          if ( v73 > v60 )
            v60 = *(_QWORD *)(v67 + 56);
          if ( v73 < v58 )
            v58 = *(_QWORD *)(v67 + 56);
        }
      }
      goto LABEL_164;
    }
    if ( *(_QWORD *)(a2 + 1912) )
LABEL_151:
      CleanupGestureCache((struct tagTPSTATE *)a2);
    if ( *(_DWORD *)(a2 + 1664) == 2 )
      *(_DWORD *)(a2 + 1920) |= 0x2000000u;
    goto LABEL_154;
  }
LABEL_166:
  v74 = v113;
  v75 = v58;
  v6 = a4;
  if ( xxxProcessTapsFor3orMoreContacts(
         (const struct tagPOINTERINPUTFRAME *)a4,
         (struct tagTPSTATE *)a2,
         v113,
         v75,
         v60) )
  {
    goto LABEL_195;
  }
  v76 = 1;
  if ( v113 > 1 && (*(_DWORD *)(a2 + 1920) & 0x40000) == 0 )
  {
    v77 = *(_DWORD *)(a2 + 1644);
    if ( v77 )
    {
      v78 = a2 + 56;
      v79 = 1;
      v80 = v77;
      do
      {
        if ( (*(_DWORD *)(v78 + 208) & 1) != 0 && v79 < v77 )
        {
          v81 = 272LL * v79 + a2 + 56;
          v82 = v77 - v79;
          do
          {
            if ( (*(_DWORD *)(v81 + 208) & 1) != 0 )
            {
              v83 = *(_QWORD *)v81;
              v84 = *(_QWORD *)v78;
              v85 = *(_QWORD *)v81 <= *(_QWORD *)v78 ? v84 - v83 : v83 - v84;
              if ( v85 <= gliQpcFreq * (unsigned int)gTPThresholds[18] / 1000LL )
                *(_DWORD *)(a2 + 1920) |= 0x40000u;
            }
            v81 += 272LL;
            --v82;
          }
          while ( v82 );
          v76 = 1;
        }
        v78 += 272LL;
        ++v79;
        --v80;
      }
      while ( v80 );
      v6 = a4;
      v9 = 0;
    }
  }
  v86 = *(_DWORD *)(a2 + 1920);
  if ( (v86 & 0x40000) != 0 && v113 == 1 )
    *(_DWORD *)(a2 + 1920) = v86 & 0xFFF3FFFF;
  v87 = *(_DWORD *)(a2 + 1664);
  if ( v87 != 3 && v87 != 6 && !*(_QWORD *)(a2 + 1912) && v113 >= 2 && (*(_DWORD *)(a2 + 1920) & 0x2000000) == 0 )
  {
    CacheGestureState((const struct tagPOINTERINPUTFRAME *)v6, (struct tagTPSTATE *)a2, a3, (unsigned __int64)a5);
    v132 = 1;
  }
  if ( (*(_DWORD *)(a2 + 1920) & 0x800) != 0
    && xxxProcess2FingerTap(
         *(struct tagPOINTERINFONODE **)(v6 + 88),
         (struct tagTPSTATE *)a2,
         v129,
         *(_DWORD *)(v6 + 40)) )
  {
    goto LABEL_195;
  }
LABEL_197:
  if ( xxxDoTPDiscreteButtonProcessing((const struct tagPOINTERINPUTFRAME *)v6, (LARGE_INTEGER *)a2, &v124, &v125) )
  {
    if ( !(unsigned int)xxxDoTPButtonProcessing(
                          (const struct tagPOINTERINPUTFRAME *)v6,
                          (tagPOINT *)a2,
                          a3,
                          a1,
                          v74,
                          &v123) )
    {
      v88 = 1;
      goto LABEL_260;
    }
    if ( a1 )
      return 1LL;
    v9 = 0;
    if ( !v123 && !v124 && !v125 || (v90 = *(_DWORD *)(a2 + 1664), v90 == 3) || v90 == 6 )
    {
      if ( !HMValidateHandleNoSecure((unsigned __int64)a5, 19) )
        return 1LL;
      if ( !*(_DWORD *)(a2 + 1640) || *(_DWORD *)(a2 + 1664) == 1 )
        v76 = 0;
      if ( v118 || v119 || v114 || v76 || !v120 )
      {
        v93 = 0LL;
        v92 = 1;
      }
      else
      {
        v92 = 1;
        v93 = 1LL;
      }
      v94 = *(_DWORD *)(a2 + 1660);
      if ( v94 != 2
        || *(_DWORD *)(a2 + 1664) == 3
        || (*(_DWORD *)(a2 + 1920) & 0x2000000) != 0
        || !(_DWORD)v93
        || (v95 = 1LL, !v126) )
      {
        v95 = 0LL;
      }
      LOBYTE(v91) = 0;
      if ( v94 == 2 && ((_DWORD)v93 || (*(_DWORD *)(a2 + 1920) & 0x200000) != 0) )
        LOBYTE(v91) = 1;
      if ( *(_DWORD *)(a2 + 1664) == 3 )
        goto LABEL_233;
      if ( (_DWORD)v95 || (_BYTE)v91 )
      {
        MarkRecentlyDownedContactsAsNonResting((struct tagTPSTATE *)a2);
        v92 = 1;
        LOBYTE(v9) = *(_DWORD *)(a2 + 1660) == 2;
      }
      if ( *(_DWORD *)(a2 + 1664) == 3 || (_BYTE)v9 )
      {
LABEL_233:
        if ( (*(_DWORD *)(a2 + 1920) & 0x2000000) != 0 )
        {
          CacheGestureState((const struct tagPOINTERINPUTFRAME *)v6, (struct tagTPSTATE *)a2, a3, (unsigned __int64)a5);
          *(_DWORD *)(a2 + 1920) &= ~0x2000000u;
          v92 = 1;
          v132 = 1;
        }
        v88 = 3;
      }
      else
      {
        v88 = 1;
      }
      if ( (unsigned int)(*(_DWORD *)(a2 + 1660) - 3) <= 1
        && v88 != 3
        && !v118
        && !v119
        && !v114
        && GetPTPShellListener(v93, v91, v95)
        && v127
        || *(_DWORD *)(a2 + 1664) == 6 )
      {
        MarkRecentlyDownedContactsAsNonResting((struct tagTPSTATE *)a2);
        v92 = 1;
        if ( *(_DWORD *)(a2 + 1664) == 1 )
        {
          CreateShellGestureFrame(
            (const struct tagPOINTERINPUTFRAME *)v6,
            (struct tagTPSTATE *)a2,
            a3,
            (unsigned __int64)a5);
          v92 = 1;
        }
        v88 = 6;
      }
      if ( v88 == 3 )
      {
        v96 = v132;
        xxxDoTPGestureProcessing(
          (const struct tagPOINTERINPUTFRAME *)v6,
          (struct tagTPSTATE *)a2,
          a3,
          a5,
          v132,
          v74,
          &v121);
        v9 = 0;
        goto LABEL_262;
      }
      if ( v88 == 6 )
      {
        xxxDoTPShellProcessing((const struct tagPOINTERINPUTFRAME *)v6, (LARGE_INTEGER *)a2, a3, a5, v74, &v121);
      }
      else if ( *(_DWORD *)(a2 + 1660) < 2u )
      {
        if ( !v118 && !v119 && !v114 )
        {
          v9 = 0;
          if ( !v76 )
            v88 = xxxDoTPMouseProcessing(v6, v74, a2);
          goto LABEL_261;
        }
      }
      else
      {
        *(_DWORD *)(a2 + 1664) = v92;
      }
LABEL_260:
      v9 = 0;
      goto LABEL_261;
    }
  }
LABEL_195:
  v88 = 1;
LABEL_261:
  v96 = v132;
LABEL_262:
  if ( !HMValidateHandleNoSecure((unsigned __int64)a5, 19) )
    return 1LL;
  v97 = *(_QWORD *)(v6 + 88);
  if ( *(_DWORD *)(v6 + 40) )
  {
    do
    {
      v98 = *(_WORD *)(v97 + 48);
      if ( v98 )
        UpdateTPContactState(
          (unsigned int)v98 % *(_DWORD *)(a2 + 1644),
          (struct tagTPSTATE *)a2,
          (struct tagPOINTERINFONODE *)v97);
      v97 += 216LL;
      ++v9;
    }
    while ( v9 < *(_DWORD *)(v6 + 40) );
    v74 = v113;
  }
  v99 = *(_DWORD *)(a2 + 1920);
  if ( (v99 & 1) == 0
    && (v99 & 4) == 0
    && (v99 & 8) == 0
    && !(unsigned int)HasActiveContacts((const struct tagTPSTATE *)a2) )
  {
    zzzCancelInertiaState(v100, 0);
  }
  if ( __CFSHR__(*(_DWORD *)(a2 + 1920), 15) != v130 )
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
  if ( !(unsigned int)HasActiveContacts((const struct tagTPSTATE *)a2) )
  {
    v102 = *(_DWORD *)(a2 + 1640);
    v103 = v101 & *(_DWORD *)(a2 + 1920) & 0xFFFEFFFF;
    *(_DWORD *)(a2 + 1664) = 1;
    v104 = v103 & 0xB7F3FFFF;
    *(_DWORD *)(a2 + 1920) = v104;
    switch ( v102 )
    {
      case 0:
        goto LABEL_290;
      case 4:
        v105 = v104 & 0xFFFFFFEF;
        break;
      case 16:
        v105 = v104 & 0xFFFFFFDF;
        break;
      default:
LABEL_289:
        xxxSendMouseUpIfPending(
          a2 + 1640,
          (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
LABEL_290:
        v106 = v128;
        if ( v128 == 3 )
          CleanupGestureCache((struct tagTPSTATE *)a2);
        if ( v106 == 2 )
        {
          v107 = 272LL * *(unsigned int *)(a2 + 1632);
          if ( (*(_DWORD *)(v107 + a2 + 264) & 0x800) != 0
            && (__int64)((unsigned __int64)(1000LL * (*(_QWORD *)(v107 + a2 + 64) - *(_QWORD *)(v107 + a2 + 80)))
                       / gliQpcFreq) >= HIDWORD(gAapState[8]) )
          {
            *(_QWORD *)(a2 + 2088) = *(_QWORD *)(v107 + a2 + 64);
          }
        }
        if ( *((__int64 *)&gTPTelemTimings + 1) <= 0 )
          goto LABEL_304;
        if ( *((_QWORD *)&gTPTelemTimings + 2) )
        {
          *((LARGE_INTEGER *)&gTPTelemTimings + 4) = KeQueryPerformanceCounter(0LL);
          v109 = gTPTelemTimings;
          v111 = *((int *)&gTPTelemTimings + 20);
          if ( (int)v111 >= 0 )
          {
            *(&gTPTelemTimings + 9) = *(struct tagTPTELEMTIMINGS *const *)(272 * v111 + a2 + 8);
            goto LABEL_302;
          }
        }
        else
        {
          v108 = KeQueryPerformanceCounter(0LL);
          *(&gTPTelemTimings + 2) = (struct tagTPTELEMTIMINGS *const)v108.QuadPart;
          *(&gTPTelemTimings + 4) = (struct tagTPTELEMTIMINGS *const)v108.QuadPart;
          v109 = gTPTelemTimings;
          v110 = *((int *)&gTPTelemTimings + 20);
          if ( (int)v110 >= 0 )
          {
            *(&gTPTelemTimings + 7) = *(struct tagTPTELEMTIMINGS *const *)(272 * v110 + a2 + 8);
LABEL_302:
            v109 = gTPTelemTimings;
          }
        }
        *((_DWORD *)v109 + 20) = -1;
        goto LABEL_304;
    }
    *(_DWORD *)(a2 + 1920) = v105;
    goto LABEL_289;
  }
LABEL_304:
  if ( v121 )
  {
    zzzCancelInertiaState((struct tagTPSTATE *)a2, 0);
    *(_DWORD *)(a2 + 1664) = 1;
  }
  if ( v88 == 3 && v96 )
    v88 = 1;
  *(_DWORD *)(a2 + 1648) = v74;
  v112 = 1000LL * *(_QWORD *)&KeQueryPerformanceCounter(0LL) / gliQpcFreq;
  if ( (unsigned __int64)(v112 - gmsLastTelemetrySentTime) > 0xEA60 )
  {
    HandlePTPTelemetry();
    gmsLastTelemetrySentTime = v112;
  }
  return v88;
}
