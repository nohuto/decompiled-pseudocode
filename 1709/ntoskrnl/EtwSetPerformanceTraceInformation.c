/*
 * XREFs of EtwSetPerformanceTraceInformation @ 0x140748538
 * Callers:
 *     NtSetSystemInformation @ 0x140469CA0 (NtSetSystemInformation.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1400760B0 (KeReleaseMutex.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140085190 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400D2E30 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     EtwpCheckLoggerControlAccess @ 0x14048E46C (EtwpCheckLoggerControlAccess.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404921A4 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14049227C (EtwpReleaseLoggerContext.c)
 *     EtwpCheckGuidAccess @ 0x1404EF040 (EtwpCheckGuidAccess.c)
 *     EtwpSetPmcProfileSource @ 0x14074764C (EtwpSetPmcProfileSource.c)
 *     EtwpUpdateGroupMasks @ 0x140749910 (EtwpUpdateGroupMasks.c)
 *     EtwpUpdatePmcCounters @ 0x140749C90 (EtwpUpdatePmcCounters.c)
 *     EtwpUpdatePmcEvents @ 0x140749DB4 (EtwpUpdatePmcEvents.c)
 *     EtwpUpdateTagFilter @ 0x140749E5C (EtwpUpdateTagFilter.c)
 *     EtwpUpdateStackTracing @ 0x14074FF18 (EtwpUpdateStackTracing.c)
 *     EtwpCheckSystemTraceAccess @ 0x140751BD8 (EtwpCheckSystemTraceAccess.c)
 *     EtwpUpdateLastBranchTracingConfiguration @ 0x1407525C8 (EtwpUpdateLastBranchTracingConfiguration.c)
 *     EtwpUpdateLastBranchTracingEvents @ 0x140752688 (EtwpUpdateLastBranchTracingEvents.c)
 *     EtwpEnableStackCaching @ 0x14075272C (EtwpEnableStackCaching.c)
 *     EtwpSetSoftRestartInformation @ 0x140753500 (EtwpSetSoftRestartInformation.c)
 *     NtSetIntervalProfile @ 0x140760A94 (NtSetIntervalProfile.c)
 */

__int64 __fastcall EtwSetPerformanceTraceInformation(__int128 *a1, unsigned int a2, KPROCESSOR_MODE a3)
{
  __int64 result; // rax
  int v7; // ebx
  __int64 v8; // r14
  unsigned int v9; // esi
  unsigned int v10; // esi
  __int64 v11; // rbx
  unsigned int v12; // edx
  struct _KTHREAD *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdi
  int v16; // ebx
  int v17; // esi
  int v18; // r14d
  int v19; // r15d
  unsigned int v20; // r12d
  int v21; // r13d
  int v22; // r14d
  ULONG v23; // edi
  unsigned int v24; // edx
  struct _KTHREAD *v25; // rax
  __int64 v26; // rax
  unsigned int *v27; // rcx
  int updated; // eax
  unsigned int v29; // esi
  unsigned int v31; // edx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v33; // rax
  unsigned int v34; // esi
  unsigned int v35; // esi
  unsigned int v36; // edx
  struct _KTHREAD *v37; // rax
  __int64 v38; // rax
  unsigned __int16 *v39; // r8
  __int64 v40; // rcx
  unsigned int v41; // edx
  struct _KTHREAD *v42; // rax
  __int64 v43; // rax
  unsigned int v44; // esi
  unsigned int v45; // esi
  __int128 *v46; // r15
  unsigned int v47; // edx
  struct _KTHREAD *v48; // rax
  __int64 v49; // rax
  char v50; // [rsp+30h] [rbp-F8h]
  int v51; // [rsp+34h] [rbp-F4h]
  unsigned int v52; // [rsp+3Ch] [rbp-ECh]
  unsigned int v53; // [rsp+40h] [rbp-E8h]
  int v54; // [rsp+4Ch] [rbp-DCh]
  __int128 v55; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v56; // [rsp+70h] [rbp-B8h]
  __int64 v57; // [rsp+78h] [rbp-B0h]
  __int64 v58; // [rsp+80h] [rbp-A8h]
  __int64 v59; // [rsp+88h] [rbp-A0h]
  __int64 v60; // [rsp+90h] [rbp-98h]
  __int64 v61; // [rsp+98h] [rbp-90h]
  _OWORD v62[2]; // [rsp+A0h] [rbp-88h] BYREF
  _BYTE v63[16]; // [rsp+C0h] [rbp-68h] BYREF
  _DWORD v64[8]; // [rsp+D0h] [rbp-58h] BYREF

  if ( a2 < 4 )
    return 3221225485LL;
  v7 = *(_DWORD *)a1;
  v51 = *(_DWORD *)a1;
  v8 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  if ( v7 > 12 )
  {
    if ( v7 < 14 )
      return (unsigned int)-1073741822;
    if ( v7 <= 15 )
      goto LABEL_107;
    if ( v7 != 16 )
    {
      if ( v7 == 17 )
        goto LABEL_87;
      if ( v7 != 18 )
      {
        if ( v7 != 19 )
        {
          if ( v7 != 20 )
            return (unsigned int)-1073741822;
          goto LABEL_107;
        }
        if ( a2 < 0x18 )
          return 3221225476LL;
        v55 = *a1;
        v56 = *((_QWORD *)a1 + 2);
        v31 = WORD4(v55);
        if ( WORD4(v55) == 0xFFFF )
          v31 = *(unsigned __int8 *)(v8 + 4156);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v33 = EtwpAcquireLoggerContextByLoggerId(v8, v31, 1);
        v15 = v33;
        if ( !v33 )
          goto LABEL_58;
        v16 = EtwpCheckLoggerControlAccess(0x80u, v33);
        if ( v16 < 0 )
          goto LABEL_123;
        updated = EtwpUpdateLastBranchTracingConfiguration(v15, &v55);
        goto LABEL_121;
      }
      return (unsigned int)EtwpSetSoftRestartInformation(a1, a2);
    }
    if ( a2 != 32 )
      return 3221225476LL;
    v40 = *((_QWORD *)a1 + 1);
    v60 = v40;
    v53 = *((_DWORD *)a1 + 5);
    v52 = *((_DWORD *)a1 + 6);
    if ( *((_BYTE *)a1 + 16) )
    {
      v41 = (unsigned __int16)v40;
      if ( (unsigned __int16)v40 == 0xFFFF )
        v41 = *(unsigned __int8 *)(v8 + 4156);
      v42 = KeGetCurrentThread();
      --v42->KernelApcDisable;
      v43 = EtwpAcquireLoggerContextByLoggerId(v8, v41, 1);
      v15 = v43;
      if ( !v43 )
        goto LABEL_58;
      v16 = EtwpCheckLoggerControlAccess(0x80u, v43);
      if ( v16 < 0 )
        goto LABEL_123;
      updated = EtwpEnableStackCaching(v15, v53, v52);
      goto LABEL_121;
    }
    return 3221225659LL;
  }
  else
  {
    if ( v7 != 12 )
    {
      if ( v7 != 1 )
      {
        if ( v7 == 3 )
        {
          if ( a2 != 8 )
            return 3221225476LL;
          if ( PsIsCurrentThreadInServerSilo() )
            return 3221225506LL;
          v23 = *((_DWORD *)a1 + 1);
          KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
          v16 = NtSetIntervalProfile(v23, ProfileTime);
          if ( v16 >= 0 )
            EtwpProfileInterval = v23;
          goto LABEL_52;
        }
        if ( v7 == 5 )
        {
          if ( ((a2 - 16) & 0xFFFFFFFB) != 0 )
            return 3221225476LL;
          result = EtwpCheckGuidAccess(&SystemTraceControlGuid.Data1, 0x80u, 0LL);
          v16 = result;
          if ( (int)result < 0 )
            return result;
          if ( PsIsCurrentThreadInServerSilo() )
            return 3221225506LL;
          v19 = *((_DWORD *)a1 + 1);
          if ( !v19 )
            return 3221225485LL;
          v20 = *((_DWORD *)a1 + 2);
          if ( v20 < 0x3E8 )
            return 3221225485LL;
          v21 = *((_DWORD *)a1 + 3);
          if ( !v21 )
            return 3221225485LL;
          v22 = EtwpSpinLockHoldThreshold;
          if ( a2 == 20 )
          {
            v22 = *((_DWORD *)a1 + 4);
            if ( (unsigned int)(v22 - 1) <= 0xF423E )
              return 3221225485LL;
          }
          KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
          EtwpSpinLockHoldThreshold = v22;
          EtwpSpinLockSpinThreshold = v19;
          EtwpSpinLockAcquireSampleRate = v20;
          EtwpSpinLockContentionSampleRate = v21;
          goto LABEL_52;
        }
        if ( v7 != 6 )
        {
          if ( v7 != 7 )
          {
            if ( v7 != 10 )
            {
              if ( v7 == 11 )
              {
                v50 = 0;
                if ( a2 >= 0x10 )
                {
                  v9 = a2 - 16;
                  if ( (v9 & 3) == 0 )
                  {
                    v10 = v9 >> 2;
                    if ( v10 <= 1 )
                    {
                      v11 = *((_QWORD *)a1 + 1);
                      v57 = v11;
                      if ( v10 )
                      {
                        if ( *((_DWORD *)a1 + 4) != 1316 )
                          return 3221225485LL;
                        v50 = 1;
                      }
                      if ( !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, a3) )
                        return 3221225569LL;
                      if ( !PsIsCurrentThreadInServerSilo() )
                      {
                        v12 = (unsigned __int16)v11;
                        if ( (unsigned __int16)v11 == 0xFFFF )
                          v12 = *(unsigned __int8 *)(v8 + 4156);
                        v13 = KeGetCurrentThread();
                        --v13->KernelApcDisable;
                        v14 = EtwpAcquireLoggerContextByLoggerId(EtwpHostSiloState, v12, 1);
                        v15 = v14;
                        if ( !v14 )
                        {
                          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                          return 3221226134LL;
                        }
                        v16 = EtwpCheckLoggerControlAccess(0x80u, v14);
                        if ( v16 >= 0 )
                        {
                          if ( v50 )
                            _InterlockedOr((volatile signed __int32 *)(v15 + 832), 0x400u);
                          else
                            _InterlockedAnd((volatile signed __int32 *)(v15 + 832), 0xFFFFFBFF);
                        }
                        goto LABEL_123;
                      }
                      return 3221225506LL;
                    }
                  }
                  return 3221225485LL;
                }
                return 3221225476LL;
              }
              return (unsigned int)-1073741822;
            }
LABEL_87:
            if ( a2 < 0x10 )
              return 3221225476LL;
            v34 = a2 - 16;
            if ( (v34 & 3) != 0 )
              return 3221225485LL;
            v35 = v34 >> 2;
            if ( (unsigned __int16)v35 > 4u )
              return 3221225485LL;
            if ( PsIsCurrentThreadInServerSilo() )
              return 3221225506LL;
            v59 = *((_QWORD *)a1 + 1);
            memmove(v63, a1 + 1, 4LL * (unsigned __int16)v35);
            v36 = (unsigned __int16)v59;
            if ( (unsigned __int16)v59 == 0xFFFF )
              v36 = *(unsigned __int8 *)(v8 + 4156);
            v37 = KeGetCurrentThread();
            --v37->KernelApcDisable;
            v38 = EtwpAcquireLoggerContextByLoggerId(v8, v36, 1);
            v15 = v38;
            if ( v38 )
            {
              v27 = (unsigned int *)v38;
              if ( (*(_DWORD *)(v38 + 12) & 0x2000000) != 0 )
              {
                v16 = EtwpCheckSystemTraceAccess(v38, 128LL);
                if ( v16 >= 0 )
                {
                  v39 = EtwpPoolTagFilter;
                  if ( v51 != 10 )
                    v39 = (unsigned __int16 *)&EtwpObjectTypeFilter;
                  EtwpUpdateTagFilter(v63, (unsigned __int16)v35, &v39[10 * *(unsigned __int8 *)(v15 + 834)]);
                }
                goto LABEL_123;
              }
              goto LABEL_60;
            }
LABEL_58:
            v16 = -1073741162;
LABEL_61:
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            return (unsigned int)v16;
          }
          if ( a2 != 16 )
            return 3221225476LL;
          result = EtwpCheckGuidAccess(&SystemTraceControlGuid.Data1, 0x80u, 0LL);
          v16 = result;
          if ( (int)result < 0 )
            return result;
          if ( PsIsCurrentThreadInServerSilo() )
            return 3221225506LL;
          v17 = *((_DWORD *)a1 + 1);
          v18 = *((_DWORD *)a1 + 2);
          v54 = *((_DWORD *)a1 + 3);
          KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
          EtwpExecutiveResourceReleaseSampleRate = v17;
          EtwpExecutiveResourceContentionSampleRate = v18;
          EtwpExecutiveResourceTimeout = v54;
LABEL_52:
          KeReleaseMutex(&EtwpGroupMaskMutex, 0);
          return (unsigned int)v16;
        }
LABEL_107:
        if ( a2 < 0x10 )
          return 3221225476LL;
        v44 = a2 - 16;
        if ( (v44 & 3) != 0 )
          return 3221225485LL;
        if ( PsIsCurrentThreadInServerSilo() && (unsigned int)(v7 - 14) <= 1 )
          return 3221225506LL;
        v45 = v44 >> 2;
        v46 = a1 + 1;
        v61 = *((_QWORD *)a1 + 1);
        v47 = (unsigned __int16)v61;
        if ( (unsigned __int16)v61 == 0xFFFF )
          v47 = *(unsigned __int8 *)(v8 + 4156);
        v48 = KeGetCurrentThread();
        --v48->KernelApcDisable;
        v49 = EtwpAcquireLoggerContextByLoggerId(v8, v47, 1);
        v15 = v49;
        if ( !v49 )
          goto LABEL_58;
        v16 = EtwpCheckLoggerControlAccess(0x80u, v49);
        if ( v16 >= 0 )
        {
          switch ( v51 )
          {
            case 6:
              updated = EtwpUpdateStackTracing(v15, v46, v45);
              break;
            case 15:
              updated = EtwpUpdatePmcCounters(v15, v46, v45);
              break;
            case 14:
              updated = EtwpUpdatePmcEvents(v15, v46, v45);
              break;
            default:
              EtwpUpdateLastBranchTracingEvents(v15, v46, v45);
              goto LABEL_123;
          }
          goto LABEL_121;
        }
LABEL_123:
        EtwpReleaseLoggerContext((unsigned int *)v15, 1);
        goto LABEL_61;
      }
      if ( a2 != 48 )
        return 3221225476LL;
      v58 = *((_QWORD *)a1 + 1);
      v62[0] = a1[1];
      v62[1] = a1[2];
      v24 = (unsigned __int16)v58;
      if ( (unsigned __int16)v58 == 0xFFFF )
        v24 = *(unsigned __int8 *)(v8 + 4156);
      v25 = KeGetCurrentThread();
      --v25->KernelApcDisable;
      v26 = EtwpAcquireLoggerContextByLoggerId(v8, v24, 1);
      v15 = v26;
      if ( !v26 )
        goto LABEL_58;
      v27 = (unsigned int *)v26;
      if ( (*(_DWORD *)(v26 + 12) & 0x2000000) == 0 )
      {
LABEL_60:
        EtwpReleaseLoggerContext(v27, 1);
        v16 = -1073741811;
        goto LABEL_61;
      }
      v16 = EtwpCheckSystemTraceAccess(v26, 128LL);
      if ( v16 < 0 )
        goto LABEL_123;
      updated = EtwpUpdateGroupMasks(v15, v62);
LABEL_121:
      v16 = updated;
      goto LABEL_123;
    }
    if ( a2 < 0x10 )
      return 3221225476LL;
    result = EtwpCheckGuidAccess(&SystemTraceControlGuid.Data1, 0x80u, 0LL);
    if ( (int)result >= 0 )
    {
      if ( !SeSinglePrivilegeCheck(SeSystemProfilePrivilege, a3) )
        return 3221225569LL;
      if ( PsIsCurrentThreadInServerSilo() )
        return 3221225506LL;
      v29 = (a2 - 16) >> 2;
      if ( v29 > 8 )
        return 3221225485LL;
      memmove(v64, a1 + 1, 4LL * v29);
      return (unsigned int)EtwpSetPmcProfileSource(v64, v29);
    }
  }
  return result;
}
