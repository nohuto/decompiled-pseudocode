/*
 * XREFs of EtwSetPerformanceTraceInformation @ 0x14070CEA0
 * Callers:
 *     NtSetSystemInformation @ 0x140562590 (NtSetSystemInformation.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14000D920 (PsGetCurrentServerSiloGlobals.c)
 *     KeReleaseMutex @ 0x1400DDCF0 (KeReleaseMutex.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1400F0FA0 (PsIsCurrentThreadInServerSilo.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     EtwpUpdateGroupMasks @ 0x140434C0C (EtwpUpdateGroupMasks.c)
 *     EtwpUpdateTagFilter @ 0x14045E9A8 (EtwpUpdateTagFilter.c)
 *     EtwpCheckLoggerControlAccess @ 0x1404F1C84 (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x1404F2B5C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404F2C44 (EtwpAcquireLoggerContextByLoggerId.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     EtwpCheckGuidAccess @ 0x140554B20 (EtwpCheckGuidAccess.c)
 *     NtSetIntervalProfile @ 0x14056DF2C (NtSetIntervalProfile.c)
 *     EtwpCheckSystemTraceAccess @ 0x1405D8D94 (EtwpCheckSystemTraceAccess.c)
 *     EtwpSetPmcProfileSource @ 0x14070C004 (EtwpSetPmcProfileSource.c)
 *     EtwpUpdatePmcCounters @ 0x14070E0A4 (EtwpUpdatePmcCounters.c)
 *     EtwpUpdatePmcEvents @ 0x14070E1C8 (EtwpUpdatePmcEvents.c)
 *     EtwpUpdateStackTracing @ 0x1407123B8 (EtwpUpdateStackTracing.c)
 *     EtwpEnableStackCaching @ 0x1407135D8 (EtwpEnableStackCaching.c)
 *     EtwpSetSoftRestartInformation @ 0x140714364 (EtwpSetSoftRestartInformation.c)
 */

__int64 __fastcall EtwSetPerformanceTraceInformation(__int64 a1, unsigned int a2, KPROCESSOR_MODE a3)
{
  __int64 result; // rax
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ebx
  int v14; // esi
  int v15; // r14d
  int v16; // r15d
  unsigned int v17; // r12d
  int v18; // r13d
  int v19; // r14d
  ULONG v20; // edi
  __int64 v21; // rax
  unsigned int v22; // ebx
  __int64 v23; // rcx
  struct _KTHREAD *v24; // rax
  unsigned int *v25; // rax
  unsigned int *v26; // rdi
  unsigned int *v27; // rcx
  int updated; // eax
  unsigned int v29; // esi
  __int64 v30; // rbx
  unsigned int v31; // edx
  struct _KTHREAD *v32; // rax
  unsigned int *v33; // rax
  unsigned int v35; // esi
  __int64 v36; // rbx
  __int64 v37; // rcx
  struct _KTHREAD *v38; // rax
  unsigned int *v39; // rax
  __int16 *v40; // r8
  __int64 v41; // rcx
  unsigned int v42; // ebx
  __int64 v43; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v45; // rax
  unsigned int v46; // esi
  __int64 v47; // r14
  unsigned int v48; // ebx
  __int64 v49; // rcx
  struct _KTHREAD *v50; // rax
  unsigned int *v51; // rax
  unsigned int v52; // esi
  char v53; // [rsp+30h] [rbp-D8h]
  int v54; // [rsp+34h] [rbp-D4h]
  unsigned int v55; // [rsp+3Ch] [rbp-CCh]
  unsigned int v56; // [rsp+40h] [rbp-C8h]
  int v57; // [rsp+4Ch] [rbp-BCh]
  _OWORD v58[2]; // [rsp+88h] [rbp-80h] BYREF
  _DWORD v59[4]; // [rsp+A8h] [rbp-60h] BYREF
  _DWORD v60[8]; // [rsp+B8h] [rbp-50h] BYREF

  if ( a2 < 4 )
    return 3221225485LL;
  v7 = *(_DWORD *)a1;
  v54 = v7;
  if ( v7 > 11 )
  {
    if ( v7 == 12 )
    {
      if ( a2 < 0x10 )
        return 3221225476LL;
      result = EtwpCheckGuidAccess(&SystemTraceControlGuid.Data1, 0x80u, 0LL);
      if ( (int)result < 0 )
        return result;
      if ( !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, a3) )
        return 3221225569LL;
      if ( PsIsCurrentThreadInServerSilo() )
        return 3221225506LL;
      v52 = (a2 - 16) >> 2;
      if ( v52 > 8 )
        return 3221225485LL;
      memmove(v60, (const void *)(a1 + 16), 4LL * v52);
      return (unsigned int)EtwpSetPmcProfileSource(v60, v52);
    }
    else
    {
      if ( v7 <= 13 )
        return (unsigned int)-1073741822;
      if ( v7 <= 15 )
        goto LABEL_88;
      if ( v7 == 16 )
      {
        if ( a2 != 32 )
          return 3221225476LL;
        v41 = *(_QWORD *)(a1 + 8);
        v56 = *(_DWORD *)(a1 + 20);
        v55 = *(_DWORD *)(a1 + 24);
        if ( *(_BYTE *)(a1 + 16) )
        {
          v42 = (unsigned __int16)v41;
          if ( (unsigned __int16)v41 == 0xFFFF )
            v42 = (unsigned __int8)EtwpSystemLogger[0];
          v43 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          v45 = EtwpAcquireLoggerContextByLoggerId(v43, v42, 1);
          v26 = v45;
          if ( !v45 )
            goto LABEL_36;
          v13 = EtwpCheckLoggerControlAccess(0x80u, (__int64)v45);
          if ( v13 < 0 )
            goto LABEL_100;
          updated = EtwpEnableStackCaching(v26, v56, v55);
          goto LABEL_99;
        }
        return 3221225659LL;
      }
      if ( v7 == 17 )
        goto LABEL_69;
      if ( v7 != 18 )
        return (unsigned int)-1073741822;
      return (unsigned int)EtwpSetSoftRestartInformation(a1, a2);
    }
  }
  if ( v7 != 11 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 2;
      if ( !v9 )
      {
        if ( a2 != 8 )
          return 3221225476LL;
        v20 = *(_DWORD *)(a1 + 4);
        KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
        v13 = NtSetIntervalProfile(v20, ProfileTime);
        if ( v13 >= 0 )
          EtwpProfileInterval = v20;
        goto LABEL_30;
      }
      v10 = v9 - 2;
      if ( !v10 )
      {
        if ( ((a2 - 16) & 0xFFFFFFFB) != 0 )
          return 3221225476LL;
        result = EtwpCheckGuidAccess(&SystemTraceControlGuid.Data1, 0x80u, 0LL);
        v13 = result;
        if ( (int)result < 0 )
          return result;
        v16 = *(_DWORD *)(a1 + 4);
        if ( !v16 )
          return 3221225485LL;
        v17 = *(_DWORD *)(a1 + 8);
        if ( v17 < 0x3E8 )
          return 3221225485LL;
        v18 = *(_DWORD *)(a1 + 12);
        if ( !v18 )
          return 3221225485LL;
        v19 = EtwpSpinLockHoldThreshold;
        if ( a2 == 20 )
        {
          v19 = *(_DWORD *)(a1 + 16);
          if ( (unsigned int)(v19 - 1) <= 0xF423E )
            return 3221225485LL;
        }
        KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
        EtwpSpinLockHoldThreshold = v19;
        EtwpSpinLockSpinThreshold = v16;
        EtwpSpinLockAcquireSampleRate = v17;
        EtwpSpinLockContentionSampleRate = v18;
        goto LABEL_30;
      }
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( v12 == 3 )
          {
LABEL_69:
            if ( a2 >= 0x10 )
            {
              if ( (((_BYTE)a2 - 16) & 3) == 0 )
              {
                v35 = (a2 - 16) >> 2;
                if ( (unsigned __int16)v35 <= 4u )
                {
                  v36 = *(_QWORD *)(a1 + 8);
                  memmove(v59, (const void *)(a1 + 16), 4LL * (unsigned __int16)v35);
                  LODWORD(v36) = (unsigned __int16)v36;
                  if ( (unsigned __int16)v36 == 0xFFFF )
                    LODWORD(v36) = (unsigned __int8)EtwpSystemLogger[0];
                  v37 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
                  v38 = KeGetCurrentThread();
                  --v38->KernelApcDisable;
                  v39 = EtwpAcquireLoggerContextByLoggerId(v37, v36, 1);
                  v26 = v39;
                  if ( v39 )
                  {
                    v27 = v39;
                    if ( (v39[3] & 0x2000000) != 0 )
                    {
                      v13 = EtwpCheckSystemTraceAccess((__int64)v39, 0x80u);
                      if ( v13 >= 0 )
                      {
                        v40 = EtwpPoolTagFilter;
                        if ( v54 != 10 )
                          v40 = EtwpObjectTypeFilter;
                        EtwpUpdateTagFilter(v59, v35, (__int64)&v40[10 * *((unsigned __int8 *)v26 + 818)]);
                      }
                      goto LABEL_100;
                    }
                    goto LABEL_38;
                  }
LABEL_36:
                  v13 = -1073741162;
LABEL_39:
                  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
                  return (unsigned int)v13;
                }
              }
              return 3221225485LL;
            }
            return 3221225476LL;
          }
          return (unsigned int)-1073741822;
        }
        if ( a2 != 16 )
          return 3221225476LL;
        result = EtwpCheckGuidAccess(&SystemTraceControlGuid.Data1, 0x80u, 0LL);
        v13 = result;
        if ( (int)result < 0 )
          return result;
        v14 = *(_DWORD *)(a1 + 4);
        v15 = *(_DWORD *)(a1 + 8);
        v57 = *(_DWORD *)(a1 + 12);
        KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
        EtwpExecutiveResourceReleaseSampleRate = v14;
        EtwpExecutiveResourceContentionSampleRate = v15;
        EtwpExecutiveResourceTimeout = v57;
LABEL_30:
        KeReleaseMutex(&EtwpGroupMaskMutex, 0);
        return (unsigned int)v13;
      }
LABEL_88:
      if ( a2 < 0x10 )
        return 3221225476LL;
      if ( (((_BYTE)a2 - 16) & 3) != 0 )
        return 3221225485LL;
      v46 = (a2 - 16) >> 2;
      v47 = a1 + 16;
      v48 = (unsigned __int16)*(_QWORD *)(a1 + 8);
      if ( v48 == 0xFFFF )
        v48 = (unsigned __int8)EtwpSystemLogger[0];
      v49 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
      v50 = KeGetCurrentThread();
      --v50->KernelApcDisable;
      v51 = EtwpAcquireLoggerContextByLoggerId(v49, v48, 1);
      v26 = v51;
      if ( !v51 )
        goto LABEL_36;
      v13 = EtwpCheckLoggerControlAccess(0x80u, (__int64)v51);
      if ( v13 >= 0 )
      {
        if ( v54 == 6 )
        {
          updated = EtwpUpdateStackTracing(v26, v47, v46);
        }
        else if ( v54 == 15 )
        {
          updated = EtwpUpdatePmcCounters(v26, v47, v46);
        }
        else
        {
          updated = EtwpUpdatePmcEvents(v26, v47, v46);
        }
        goto LABEL_99;
      }
LABEL_100:
      EtwpReleaseLoggerContext(v26, 1);
      goto LABEL_39;
    }
    if ( a2 != 48 )
      return 3221225476LL;
    v21 = *(_QWORD *)(a1 + 8);
    v58[0] = *(_OWORD *)(a1 + 16);
    v58[1] = *(_OWORD *)(a1 + 32);
    v22 = (unsigned __int16)v21;
    if ( (unsigned __int16)v21 == 0xFFFF )
      v22 = (unsigned __int8)EtwpSystemLogger[0];
    v23 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
    v24 = KeGetCurrentThread();
    --v24->KernelApcDisable;
    v25 = EtwpAcquireLoggerContextByLoggerId(v23, v22, 1);
    v26 = v25;
    if ( !v25 )
      goto LABEL_36;
    v27 = v25;
    if ( (v25[3] & 0x2000000) == 0 )
    {
LABEL_38:
      EtwpReleaseLoggerContext(v27, 1);
      v13 = -1073741811;
      goto LABEL_39;
    }
    v13 = EtwpCheckSystemTraceAccess((__int64)v25, 0x80u);
    if ( v13 < 0 )
      goto LABEL_100;
    updated = EtwpUpdateGroupMasks((volatile signed __int64 *)v26, (__int64)v58);
LABEL_99:
    v13 = updated;
    goto LABEL_100;
  }
  v53 = 0;
  if ( a2 < 0x10 )
    return 3221225476LL;
  if ( (((_BYTE)a2 - 16) & 3) != 0 )
    return 3221225485LL;
  v29 = (a2 - 16) >> 2;
  if ( v29 > 1 )
    return 3221225485LL;
  v30 = *(_QWORD *)(a1 + 8);
  if ( v29 )
  {
    if ( *(_DWORD *)(a1 + 16) != 1316 )
      return 3221225485LL;
    v53 = 1;
  }
  if ( !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, a3) )
    return 3221225569LL;
  if ( PsIsCurrentThreadInServerSilo() )
    return 3221225506LL;
  v31 = (unsigned __int16)v30;
  if ( (unsigned __int16)v30 == 0xFFFF )
    v31 = (unsigned __int8)EtwpSystemLogger[0];
  v32 = KeGetCurrentThread();
  --v32->KernelApcDisable;
  v33 = EtwpAcquireLoggerContextByLoggerId(EtwpHostSiloState, v31, 1);
  v26 = v33;
  if ( v33 )
  {
    v13 = EtwpCheckLoggerControlAccess(0x80u, (__int64)v33);
    if ( v13 >= 0 )
    {
      if ( v53 )
        _InterlockedOr((volatile signed __int32 *)v26 + 204, 0x400u);
      else
        _InterlockedAnd((volatile signed __int32 *)v26 + 204, 0xFFFFFBFF);
    }
    goto LABEL_100;
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return 3221226134LL;
}
