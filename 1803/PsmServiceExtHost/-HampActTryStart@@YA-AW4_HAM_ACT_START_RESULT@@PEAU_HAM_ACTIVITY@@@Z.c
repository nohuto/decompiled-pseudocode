/*
 * XREFs of ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x18001B8A0
 * Callers:
 *     ?HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180007310 (-HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001A400 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampActNotifyResourcesAcquired@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x180023100 (-HampActNotifyResourcesAcquired@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@@Z @ 0x180006180 (-HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18000A560 (-HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180019090 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180019AC0 (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 *     ?RmpImportanceToRequiredExecutionSpeed@@YA?AW4_RM_EXECUTION_SPEED@@T_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x18002588C (-RmpImportanceToRequiredExecutionSpeed@@YA-AW4_RM_EXECUTION_SPEED@@T_RM_ACTIVITY_IMPORTANCE@@@Z.c)
 *     ?RmpPowerBoostStartTimedBoost@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800289E8 (-RmpPowerBoostStartTimedBoost@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?HampSystemActivationClientActivate@@YAJPEAXPEBU_PDC_ACTIVATION_PARAMETERS@@0W4PDC_ACTIVITY_TYPE@@PEBGKPEAPEAXPEAW4_PDC_ACTIVATOR_ERROR_DETAIL@@@Z @ 0x18003562C (-HampSystemActivationClientActivate@@YAJPEAXPEBU_PDC_ACTIVATION_PARAMETERS@@0W4PDC_ACTIVITY_TYPE.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180041D10 (memcmp_0.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180041DDC (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18006C948 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall HampActTryStart(__int64 a1)
{
  __int64 v1; // rdi
  DWORD v3; // r14d
  __int64 v4; // r15
  _QWORD *Value; // rsi
  __int64 v6; // r14
  DWORD CurrentThreadId; // eax
  DWORD v8; // ecx
  bool v9; // si
  _QWORD *v10; // rax
  bool v11; // zf
  unsigned int v12; // r15d
  DWORD v13; // r14d
  __int64 v14; // r13
  _QWORD *v15; // rsi
  char v16; // si
  char *v17; // rax
  struct _RM_HAM_ACTIVITY_HOST *v18; // rcx
  int v19; // eax
  struct _RM_SERVICE_GLOBALS *v20; // rcx
  int v21; // ecx
  struct _RM_HAM_ACTIVITY_HOST *v22; // rcx
  struct _RM_HAM_ACTIVITY_HOST *v23; // rcx
  __int64 v24; // rax
  __int128 v25; // xmm1
  unsigned int v26; // edi
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rcx
  struct _HAM_ACTIVITY **v31; // [rsp+20h] [rbp-E0h]
  char v32[4]; // [rsp+40h] [rbp-C0h] BYREF
  char v33[4]; // [rsp+44h] [rbp-BCh] BYREF
  struct _HAM_ACTIVITY *v34[2]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v35[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+80h] [rbp-80h]
  __m128i v37; // [rsp+88h] [rbp-78h] BYREF
  __int64 v38; // [rsp+98h] [rbp-68h]
  __int64 v39; // [rsp+A0h] [rbp-60h]
  __int128 Buf1; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v41; // [rsp+B8h] [rbp-48h]
  __int64 v42; // [rsp+C8h] [rbp-38h]
  _OWORD Buf2[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v44; // [rsp+F0h] [rbp-10h]
  __m128i v45[2]; // [rsp+F8h] [rbp-8h] BYREF

  v1 = *(_QWORD *)(a1 + 80);
  if ( (*(_BYTE *)(v1 + 638) & 1) != 0 && (*(_BYTE *)(a1 + 112) & 2) != 0 )
    return 13;
  v3 = HampLockTrackerId;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 744) + 88LL) + 88LL) + 160LL);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v3) & 0xFFFFFFFFFFFFFF00uLL) != 0 )
      __int2c();
    *Value |= 0x100uLL;
    ++Value[9];
  }
  v6 = v4 + 96;
  RtlAcquireSRWLockExclusive(v4 + 96);
  CurrentThreadId = GetCurrentThreadId();
  v8 = HampLockTrackerId;
  *(_DWORD *)(v4 + 104) = CurrentThreadId;
  v9 = (*(_DWORD *)(v4 + 132) & 2) != 0;
  if ( v8 != -1 )
  {
    v10 = TlsGetValue(v8);
    if ( (*(_DWORD *)v10 & 0x100LL) == 0 )
      __int2c();
    v11 = v10[9]-- == 1LL;
    if ( v11 )
      *v10 &= ~0x100uLL;
  }
  v12 = 0;
  *(_DWORD *)(v6 + 8) = 0;
  RtlReleaseSRWLockExclusive(v6);
  if ( v9 )
    return 7;
  v13 = HampLockTrackerId;
  v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 744) + 88LL) + 88LL);
  if ( HampLockTrackerId != -1 )
  {
    v15 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v13) & 0xFFFFFFFFFFFFFF80uLL) != 0 )
      __int2c();
    *v15 |= 0x80uLL;
    ++v15[8];
  }
  RtlAcquireSRWLockShared(v14 + 168);
  v16 = *(_BYTE *)(v14 + 184) & 1;
  if ( HampLockTrackerId != -1 )
  {
    v17 = (char *)TlsGetValue(HampLockTrackerId);
    if ( *v17 >= 0 )
      __int2c();
    v11 = (*((_QWORD *)v17 + 8))-- == 1LL;
    if ( v11 )
      *(_QWORD *)v17 &= ~0x80uLL;
  }
  RtlReleaseSRWLockShared(v14 + 168);
  if ( v16 )
    return 7;
  if ( (*(_DWORD *)(a1 + 536) & 8) != 0 )
    return 6;
  if ( (*(_DWORD *)(a1 + 536) & 0xC0u) >= 0x40 )
    return 5;
  RmHamHostGetCurrentState(
    (struct _RM_HAM_ACTIVITY_HOST *)v1,
    (union _RM_OPTIMIZATION_STATE *)v32,
    (union _RM_OPTIMIZATION_STATE *)v33);
  if ( ((v32[0] & 8) != 0 || (v33[0] & 8) != 0) && (*(_QWORD *)(v1 + 632) & 0x10000000000LL) != 0 )
    return 8;
  if ( *(_BYTE *)(a1 + 541) < 2u )
  {
    RtlQueryPerformanceCounter(*(_QWORD *)(a1 + 512) + 16LL);
    v18 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80);
    *(_BYTE *)(a1 + 541) = 2;
    HampHostUpdateActivityState(v18);
  }
  v19 = RmpImportanceToRequiredExecutionSpeed(*(unsigned int *)(a1 + 424));
  v20 = (struct _RM_SERVICE_GLOBALS *)(*(_DWORD *)(a1 + 476) & 3);
  if ( (int)v20 > v19 )
    v19 = *(_DWORD *)(a1 + 476) & 3;
  if ( v19 >= 2 && *(char *)(a1 + 424) < 0 )
  {
    v28 = *(_DWORD *)(a1 + 536);
    if ( (v28 & 0x10) == 0 )
    {
      *(_DWORD *)(a1 + 536) = v28 | 0x10;
      if ( (int)RmpPowerBoostStartTimedBoost(v20) < 0 )
        MicrosoftTelemetryAssertTriggeredNoArgs();
    }
  }
  v21 = *(_DWORD *)(a1 + 112);
  if ( (v21 & 2) != 0 && v33[0] < 0 && v32[0] >= 0 )
    return 10;
  if ( *(_BYTE *)(a1 + 541) < 3u )
  {
    RtlQueryPerformanceCounter(*(_QWORD *)(a1 + 512) + 24LL);
    v22 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80);
    *(_BYTE *)(a1 + 541) = 3;
    HampHostUpdateActivityState(v22);
    v21 = *(_DWORD *)(a1 + 112);
  }
  if ( (v21 & 0xC) == 0 && (*(_DWORD *)(v1 + 632) & 0x30000) != 0 )
    return 9;
  if ( *(_BYTE *)(a1 + 541) < 4u )
  {
    RtlQueryPerformanceCounter(*(_QWORD *)(a1 + 512) + 32LL);
    v23 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80);
    *(_BYTE *)(a1 + 541) = 4;
    HampHostUpdateActivityState(v23);
    v21 = *(_DWORD *)(a1 + 112);
  }
  if ( (v21 & 2) != 0 )
  {
    if ( v32[0] < 0 )
      return 11;
  }
  else if ( (v21 & 4) != 0
         && (unsigned __int64)((unsigned __int8)HIBYTE(*(_DWORD *)(*(_QWORD *)(a1 + 80) + 632LL)) >> 5) - 4 <= 1 )
  {
    HampActInvalidateAndNotify(a1, 6400);
    return 3;
  }
  v24 = *(_QWORD *)(v1 + 632);
  if ( (v24 & 0x4000000000000LL) != 0 )
    return 12;
  if ( (v24 & 0x2000000000000LL) != 0 )
    return 12;
  HampHostComputeStaticEnforcementSettings(
    (struct _RM_HAM_ACTIVITY_HOST *)v1,
    (struct _RM_ENFORCEMENT_SETTINGS *)v35,
    v45,
    &v37,
    v34);
  if ( *(struct _HAM_ACTIVITY **)(v1 + 928) != v34[0] )
    return 12;
  v25 = *(_OWORD *)(v1 + 1016);
  Buf1 = *(unsigned __int64 *)(v1 + 1000);
  v42 = *(_QWORD *)(v1 + 1032);
  *(_QWORD *)&Buf1 = 0LL;
  v41 = v25;
  v44 = v36;
  Buf2[1] = v35[1];
  Buf2[0] = 0uLL;
  if ( memcmp_0(&Buf1, Buf2, 0x28uLL) )
    return 12;
  if ( v39 == *(_QWORD *)(v1 + 808) && v38 == *(_QWORD *)(v1 + 816) && !memcmp_0(v45, (const void *)(v1 + 824), 0x20uLL) )
  {
    v26 = *(_DWORD *)(a1 + 380);
    if ( v26 != 5 )
    {
      memset_0(&Buf1, 0, 0x28uLL);
      v29 = *(_QWORD *)(a1 + 32);
      DWORD1(Buf1) = *(_DWORD *)(a1 + 384);
      *(_QWORD *)&v41 = a1 + 124;
      v30 = *(_QWORD *)((v29 & 0xFFFFFFFFFFFFFFFCuLL) + 152);
      v31 = (struct _HAM_ACTIVITY **)(*(_QWORD *)(a1 + 80) + 24LL);
      LODWORD(Buf1) = 1;
      if ( (int)HampSystemActivationClientActivate(v30, &Buf1, a1, v26, v31) < 0 )
      {
        HampActInvalidateAndNotify(a1, 6400);
        return 2;
      }
      *(struct _HAM_ACTIVITY **)(a1 + 496) = v34[1];
    }
    HampActStart((struct _HAM_ACTIVITY *)a1);
  }
  else
  {
    return 12;
  }
  return v12;
}
