/*
 * XREFs of ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180019090
 * Callers:
 *     ?HampActSetPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x180005400 (-HampActSetPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@KPEAK@Z @ 0x180007F28 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@KPEAK@Z.c)
 *     ?HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18000A560 (-HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180012AF0 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@@Z @ 0x18001B320 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x18001B8A0 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActNotifyResourcesAcquired@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x180023100 (-HampActNotifyResourcesAcquired@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x180023FF0 (-HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z.c)
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180029E5C (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180067E10 (-HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampActExpirationTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180068080 (-HampActExpirationTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     ?HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x180004214 (-HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?HampActIsIgnored@@YAKPEAU_HAM_ACTIVITY@@@Z @ 0x180004E20 (-HampActIsIgnored@@YAKPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostIsTerminateQueued@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180006460 (-HampHostIsTerminateQueued@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z @ 0x180006CD0 (-HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x1800087C8 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampPkgSnapshotDebugState@@YAEPEAU_HAM_PACKAGE@@@Z @ 0x18000BF04 (-HampPkgSnapshotDebugState@@YAEPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180019AC0 (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 *     RmpActivityImportanceMergeVectors @ 0x18001A160 (RmpActivityImportanceMergeVectors.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001A390 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?HampHostCheckQueueInterruptiveUIChangeWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800403DC (-HampHostCheckQueueInterruptiveUIChangeWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@W4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180040EFC (-HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_ST.c)
 *     memcmp_0 @ 0x180041D10 (memcmp_0.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180041DDC (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     ?RmHamEnforcementEmptySignalAbort@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18005C07C (-RmHamEnforcementEmptySignalAbort@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupAddRemoveResourceWaiter@@YAXPEAU_HAM_DEPENDENCY_GROUP@@J@Z @ 0x180066B8C (-HampDepGroupAddRemoveResourceWaiter@@YAXPEAU_HAM_DEPENDENCY_GROUP@@J@Z.c)
 */

void __fastcall HampHostUpdateActivityState(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  int v1; // r12d
  _QWORD *v2; // rdi
  _QWORD *v4; // r8
  _QWORD *v5; // rcx
  unsigned __int8 v6; // r10
  int v7; // r11d
  unsigned int v8; // r9d
  char v9; // al
  unsigned __int8 v10; // dl
  unsigned __int8 v11; // cl
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct _HAM_DEPENDENCY_GROUP *v14; // r8
  unsigned __int8 v15; // dl
  unsigned __int64 v16; // rcx
  int v17; // edx
  __int64 v18; // r8
  char v19; // al
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct _HAM_ACTIVITY *i; // rbx
  unsigned __int64 v23; // r15
  __int64 v24; // rbx
  unsigned __int64 v25; // rdx
  _QWORD *v26; // rcx
  struct _HAM_ACTIVITY *v27; // r15
  bool v28; // zf
  __int64 v29; // r8
  _QWORD *v30; // rax
  __int64 v31; // rcx
  char v32; // di
  char v33; // r8
  unsigned int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // r15
  DWORD v38; // edi
  _QWORD *Value; // rbx
  __int64 v40; // rcx
  BOOL v41; // ebx
  BOOL v42; // edi
  int v43; // r14d
  bool v44; // al
  int v45; // edx
  int v46; // r8d
  unsigned __int64 v47; // rax
  __int64 v48; // rcx
  int v49; // r15d
  _QWORD *v50; // rax
  char v51; // di
  char v52; // bl
  char v53; // cl
  unsigned __int64 v54; // r8
  char v55; // dl
  __int128 v56; // xmm1
  int v57; // r12d
  unsigned __int64 v58; // rcx
  __int128 v59; // xmm1
  __int64 v60; // rax
  struct _HAM_ACTIVITY *FirstActivity; // rcx
  __int64 v62; // rcx
  __int64 v63; // rax
  int v64; // [rsp+34h] [rbp-CCh] BYREF
  int v65; // [rsp+38h] [rbp-C8h] BYREF
  int v66; // [rsp+3Ch] [rbp-C4h] BYREF
  int v67; // [rsp+40h] [rbp-C0h] BYREF
  struct _HAM_ACTIVITY *v68; // [rsp+48h] [rbp-B8h] BYREF
  int v69; // [rsp+50h] [rbp-B0h] BYREF
  char v70[4]; // [rsp+54h] [rbp-ACh] BYREF
  struct _HAM_ACTIVITY *v71; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD v72[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v73; // [rsp+80h] [rbp-80h]
  _OWORD v74[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v75; // [rsp+A8h] [rbp-58h]
  char v76[16]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v77; // [rsp+C0h] [rbp-40h]
  __int64 v78; // [rsp+C8h] [rbp-38h]
  char v79[16]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v80; // [rsp+E0h] [rbp-20h]
  __int64 v81; // [rsp+E8h] [rbp-18h]
  _OWORD Buf2[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v83; // [rsp+110h] [rbp+10h]
  _OWORD Buf1[2]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v85; // [rsp+138h] [rbp+38h]
  _OWORD v86[2]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v87; // [rsp+160h] [rbp+60h]
  _OWORD v88[2]; // [rsp+168h] [rbp+68h] BYREF
  __int64 v89; // [rsp+188h] [rbp+88h]
  _BYTE v90[32]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v91[32]; // [rsp+1B0h] [rbp+B0h] BYREF

  v1 = 0;
  v2 = (_QWORD *)((char *)a1 + 584);
  v4 = 0LL;
  v5 = (_QWORD *)*((_QWORD *)a1 + 73);
  v6 = 5;
  v7 = 0;
  v8 = 0;
  if ( v5 != v2 )
    v4 = v5 - 12;
  if ( v4 )
  {
    while ( 1 )
    {
      v9 = *((_BYTE *)v4 + 540);
      if ( v9 == 3 )
        break;
      if ( v9 == 2 )
        goto LABEL_7;
LABEL_9:
      v10 = *((_BYTE *)v4 + 541);
      if ( v10 != 5 )
      {
        v11 = v6;
        if ( v6 <= v10 )
          v11 = *((_BYTE *)v4 + 541);
        v6 = v11;
      }
      v12 = v4[12];
      v13 = v4[10];
      v4 = 0LL;
      if ( v12 != v13 + 584 )
        v4 = (_QWORD *)(v12 - 96);
      if ( !v4 )
        goto LABEL_16;
    }
    v7 = 1;
LABEL_7:
    if ( v4[8] )
      v8 = 1;
    goto LABEL_9;
  }
LABEL_16:
  v14 = (struct _HAM_DEPENDENCY_GROUP *)*((_QWORD *)a1 + 83);
  v15 = v6;
  v16 = *((_QWORD *)a1 + 79) ^ (*((_QWORD *)a1 + 79) ^ ((unsigned __int64)v8 << 34)) & 0x400000000LL;
  if ( v7 )
    v15 = 5;
  *((_QWORD *)a1 + 79) = v16 ^ ((unsigned int)v16 ^ (v15 << 26)) & 0x1C000000;
  if ( v14 && (v15 == 0) != (((v16 >> 26) & 7) == 0) )
  {
    if ( v15 )
      v17 = -1;
    else
      v17 = 1;
    HampDepGroupAddRemoveResourceWaiter(v14, v17);
  }
  if ( (*((_QWORD *)a1 + 79) & 0x1000000000LL) == 0 )
  {
    v18 = 0LL;
    if ( (_QWORD *)*v2 != v2 )
      v18 = *v2 - 96LL;
    if ( v18 )
    {
      while ( 1 )
      {
        if ( (*(_BYTE *)(v18 + 536) & 0x28) == 0 )
        {
          v19 = *(_BYTE *)(v18 + 540);
          if ( (v19 == 3 || v19 == 2 && *(_BYTE *)(v18 + 541) >= 2u) && (*(_BYTE *)(v18 + 112) & 2) != 0 )
            break;
        }
        v20 = *(_QWORD *)(v18 + 96);
        v21 = *(_QWORD *)(v18 + 80);
        v18 = 0LL;
        if ( v20 != v21 + 584 )
          v18 = v20 - 96;
        if ( !v18 )
          goto LABEL_43;
      }
      for ( i = HampHostGetFirstActivity(a1); i; i = HampHostGetNextActivity(i) )
      {
        if ( (unsigned __int8)(*((_BYTE *)i + 540) - 2) <= 1u
          && (*((_DWORD *)i + 30) & 0x100) != 0
          && (*((_DWORD *)i + 134) & 0xC0u) < 0x80 )
        {
          HampActRequestStop(i, 2LL, 2LL, 6400LL, 128, 0LL);
        }
      }
    }
  }
LABEL_43:
  v23 = *((_QWORD *)a1 + 79);
  v24 = 0LL;
  v25 = v23 & 0xFFFFFE07FFFFFFFFuLL;
  *((_QWORD *)a1 + 79) = v23 & 0xFFFFFE07FFFFFFFFuLL;
  v26 = (_QWORD *)*v2;
  v27 = (struct _HAM_ACTIVITY *)((v23 >> 35) & 1);
  v28 = *v2 == (_QWORD)v2;
  v29 = 1LL;
  v68 = v27;
  v30 = v26 - 12;
  v31 = 1LL;
  if ( !v28 )
    v24 = (__int64)v30;
  if ( v24 )
  {
    do
    {
      if ( (*(_BYTE *)(v24 + 536) & 0x28) == 0 )
      {
        v32 = *(_BYTE *)(v24 + 540);
        if ( v32 == 3 || v32 == 2 && *(_BYTE *)(v24 + 541) )
        {
          v31 = (unsigned int)RmpActivityImportanceMergeVectors(v31, *(unsigned int *)(v24 + 424), v29);
          v33 = v32;
          v34 = *(_DWORD *)(v24 + 112);
          if ( (v34 & 0x10) != 0 )
          {
            *((_QWORD *)a1 + 79) |= 0x10000000000uLL;
            v33 = *(_BYTE *)(v24 + 540);
          }
          v35 = *((_QWORD *)a1 + 79);
          if ( v33 == 3 || v33 == 2 && *(_BYTE *)(v24 + 541) >= 2u )
          {
            if ( ((v34 >> 1) & 1) != 0 )
            {
              v35 |= 0x1000000000uLL;
              *((_QWORD *)a1 + 79) = v35;
              v33 = *(_BYTE *)(v24 + 540);
            }
            if ( v33 == 3 || v33 == 2 && *(_BYTE *)(v24 + 541) >= 4u )
            {
              if ( ((v34 >> 1) & 1) != 0 )
              {
                v35 |= 0x2000000000uLL;
                *((_QWORD *)a1 + 79) = v35;
              }
              if ( v32 == 3 )
              {
                if ( (v34 & 4) != 0 )
                {
                  v35 |= 0x4000000000uLL;
                  *((_QWORD *)a1 + 79) = v35;
                }
                if ( (v34 & 8) != 0 )
                {
                  v35 |= 0x8000000000uLL;
                  *((_QWORD *)a1 + 79) = v35;
                }
                *((_QWORD *)a1 + 79) = v35 | 0x800000000LL;
              }
            }
          }
        }
      }
      v29 = *(_QWORD *)(v24 + 96);
      v36 = *(_QWORD *)(v24 + 80);
      v24 = 0LL;
      if ( v29 != v36 + 584 )
        v24 = v29 - 96;
    }
    while ( v24 );
    v25 = *((_QWORD *)a1 + 79);
    LODWORD(v27) = (_DWORD)v68;
    LOWORD(v29) = v31;
  }
  *((_DWORD *)a1 + 160) = v31;
  if ( (v29 & 0x400) == 0 )
  {
    v25 &= ~0x400000000000uLL;
    *((_QWORD *)a1 + 79) = v25;
  }
  if ( ((v25 >> 35) & 1) != (unsigned int)v27 )
    RtlWakeAllConditionVariable((char *)a1 + 16);
  RtlWakeAllConditionVariable((char *)a1 + 656);
  if ( (*((_BYTE *)a1 + 740) & 1) != 0 )
  {
    v37 = *((_QWORD *)a1 + 83);
    if ( v37 )
    {
      v38 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        Value = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v38) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
          __int2c();
        *Value |= 8uLL;
        ++Value[4];
      }
      RtlAcquireSRWLockExclusive(v37 + 8);
      *(_DWORD *)(v37 + 16) = GetCurrentThreadId();
      v40 = *((_QWORD *)a1 + 83);
      v1 = 1;
      v41 = *(_QWORD *)(v40 + 104) < *((_QWORD *)a1 + 75);
      v42 = *(_DWORD *)(v40 + 92) != 0;
    }
    else
    {
      v41 = 0;
      v42 = 0;
    }
    v43 = 0;
    if ( (*((_BYTE *)a1 + 740) & 1) != 0 )
    {
      RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v69, (union _RM_OPTIMIZATION_STATE *)v70);
      v44 = HampPkgSnapshotDebugState(*(struct _HAM_PACKAGE **)(*((_QWORD *)a1 + 93) + 88LL));
      v45 = v69;
      if ( !v44 || (*((_BYTE *)a1 + 638) & 1) != 0 || HampHostIsTerminateQueued(a1) || !v46 )
      {
        if ( v41 )
        {
          v43 = v45 & 0x188;
        }
        else
        {
          v47 = *((_QWORD *)a1 + 79);
          if ( (v47 & 0x2000000000LL) != 0 )
          {
            if ( v42 )
              v43 = v45;
          }
          else
          {
            v43 = ~(unsigned __int8)(v47 >> 37) & 8 | 0x180;
          }
        }
      }
    }
    if ( v1 )
    {
      v48 = v37 + 8;
      v49 = 0;
      *(_DWORD *)(v48 + 8) = 0;
      RtlReleaseSRWLockExclusive(v48);
      if ( HampLockTrackerId != -1 )
      {
        v50 = TlsGetValue(HampLockTrackerId);
        if ( (*(_BYTE *)v50 & 8) == 0 )
          __int2c();
        v28 = v50[4]-- == 1LL;
        if ( v28 )
          *v50 &= ~8uLL;
      }
    }
    else
    {
      v49 = 0;
    }
    RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v66, (union _RM_OPTIMIZATION_STATE *)&v67);
    v51 = v66 & 0x80;
    v52 = v67 & 0x80;
    if ( v43 != v66 )
      goto LABEL_115;
    RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v64, (union _RM_OPTIMIZATION_STATE *)&v65);
    v53 = v64 & 0x80;
    v54 = *((_QWORD *)a1 + 79);
    v55 = v65 & 0x80;
    v64 &= 0x180u;
    v65 &= 0x180u;
    if ( ((v54 >> 16) & 3) != 0 )
    {
      switch ( (v54 >> 16) & 3 )
      {
        case 1uLL:
          if ( v53 < 0 && v55 >= 0 && (v54 & 0x8000000000LL) == 0 )
          {
            FirstActivity = HampHostGetFirstActivity(a1);
            if ( !FirstActivity )
              goto LABEL_115;
            while ( HampActIsIgnored(FirstActivity)
                 || !HampActIsStartedOrReachedPendState(v62, 4u)
                 || (*(_BYTE *)(v62 + 112) & 0x10) == 0 )
            {
              FirstActivity = HampHostGetNextActivity((struct _HAM_ACTIVITY *)v62);
              if ( !FirstActivity )
                goto LABEL_115;
            }
          }
          break;
        case 2uLL:
          if ( (v54 & 0x800000000000LL) == 0 )
            goto LABEL_115;
          break;
        case 3uLL:
          goto LABEL_115;
      }
    }
    if ( (v54 & 0x800000000000LL) == 0 && (v54 & 0x4000000000000LL) == 0 && (v54 & 0x2000000000000LL) == 0 )
    {
      HampHostComputeStaticEnforcementSettings(
        a1,
        (struct _RM_ENFORCEMENT_SETTINGS *)v72,
        (struct _RM_COMMIT_THRESHOLDS *)v90,
        (struct _RM_COMMIT_THRESHOLDS *)v76,
        &v68);
      if ( *((struct _HAM_ACTIVITY **)a1 + 116) == v68 )
      {
        v56 = *(_OWORD *)((char *)a1 + 1016);
        Buf1[0] = *((unsigned __int64 *)a1 + 125);
        v85 = *((_QWORD *)a1 + 129);
        *(_QWORD *)&Buf1[0] = 0LL;
        Buf1[1] = v56;
        v83 = v73;
        Buf2[1] = v72[1];
        Buf2[0] = 0uLL;
        if ( !memcmp_0(Buf1, Buf2, 0x28uLL) && v78 == *((_QWORD *)a1 + 101) && v77 == *((_QWORD *)a1 + 102) )
        {
          v57 = 0;
          if ( !memcmp_0(v90, (char *)a1 + 824, 0x20uLL) )
          {
LABEL_116:
            v58 = *((_QWORD *)a1 + 79);
            if ( (v58 & 0x800000000000LL) != 0 && ((v58 >> 29) & 7) != 0 && (unsigned int)v58 >> 29 != 5LL )
              v49 = 1;
            if ( (v58 & 0x4000000000000LL) != 0 )
              goto LABEL_149;
            if ( (v58 & 0x2000000000000LL) != 0 )
              goto LABEL_149;
            HampHostComputeStaticEnforcementSettings(
              a1,
              (struct _RM_ENFORCEMENT_SETTINGS *)v74,
              (struct _RM_COMMIT_THRESHOLDS *)v91,
              (struct _RM_COMMIT_THRESHOLDS *)v79,
              &v71);
            if ( *((struct _HAM_ACTIVITY **)a1 + 116) != v71 )
              goto LABEL_149;
            v59 = *(_OWORD *)((char *)a1 + 1016);
            v88[0] = *((unsigned __int64 *)a1 + 125);
            v89 = *((_QWORD *)a1 + 129);
            *(_QWORD *)&v88[0] = 0LL;
            v88[1] = v59;
            v86[0] = 0uLL;
            v87 = v75;
            v86[1] = v74[1];
            if ( memcmp_0(v88, v86, 0x28uLL) )
              goto LABEL_149;
            if ( v81 == *((_QWORD *)a1 + 101)
              && v80 == *((_QWORD *)a1 + 102)
              && !memcmp_0(v91, (char *)a1 + 824, 0x20uLL) )
            {
              if ( (v43 & 0x80u) != 0 || ((v51 | v52) & 0x80u) == 0 )
              {
                if ( (v43 & 8) == 0 && ((v66 & 8) != 0 || (v67 & 8) != 0) )
                  LODWORD(v60) = 1;
                else
                  v60 = (*((_QWORD *)a1 + 79) >> 47) & 1LL;
              }
              else
              {
                LODWORD(v60) = 1;
              }
              if ( !v49 && !(_DWORD)v60 )
              {
LABEL_155:
                if ( v57 )
                {
                  v63 = *((_QWORD *)a1 + 79);
                  if ( (v63 & 0x100000000LL) == 0 )
                  {
                    *((_QWORD *)a1 + 79) = v63 | 0x100000000LL;
                    if ( _InterlockedIncrement64((volatile signed __int64 *)a1 - 6) <= 1 )
                      __fastfail(0xEu);
                    TpPostWork(*((_QWORD *)a1 + 77));
                  }
                }
                goto LABEL_160;
              }
            }
            else
            {
LABEL_149:
              v49 = 1;
            }
            if ( !v57 )
              goto LABEL_160;
            if ( (*((_BYTE *)a1 + 1096) & 0x27) != 0 )
              RmHamEnforcementEmptySignalAbort(a1);
            if ( v49 )
              RtlWakeAllConditionVariable((char *)a1 + 656);
            goto LABEL_155;
          }
        }
      }
    }
LABEL_115:
    v57 = 1;
    goto LABEL_116;
  }
LABEL_160:
  HampHostCheckQueueTerminateWorker(a1, 0);
  HampHostCheckQueueInterruptiveUIChangeWorker(a1);
}
