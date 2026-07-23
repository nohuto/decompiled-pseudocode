/*
 * XREFs of EtwSetPerformanceTraceInformation @ 0x1407A9CB0
 * Callers:
 *     NtSetSystemInformation @ 0x14048D108 (NtSetSystemInformation.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x14006E2C0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400A5690 (PsGetCurrentServerSiloGlobals.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1400FD530 (KeReleaseMutex.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     wcsnlen @ 0x14018A790 (wcsnlen.c)
 *     wcsncpy_s @ 0x14018EDE0 (wcsncpy_s.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     EtwpCheckGuidAccess @ 0x14058DC64 (EtwpCheckGuidAccess.c)
 *     EtwpCheckLoggerControlAccess @ 0x14058F1B4 (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x140590D4C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140590D94 (EtwpAcquireLoggerContextByLoggerId.c)
 *     NtSetIntervalProfile @ 0x1405C4338 (NtSetIntervalProfile.c)
 *     EtwpCheckSystemTraceAccess @ 0x140628A28 (EtwpCheckSystemTraceAccess.c)
 *     EtwpUpdateTagFilter @ 0x140628AB8 (EtwpUpdateTagFilter.c)
 *     EtwpUpdateGroupMasks @ 0x140628B88 (EtwpUpdateGroupMasks.c)
 *     EtwpUpdateStackTracing @ 0x1407A7484 (EtwpUpdateStackTracing.c)
 *     EtwpSetPmcProfileSource @ 0x1407A8D78 (EtwpSetPmcProfileSource.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1407AAA00 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x1407AB754 (EtwpGetMicroarchitecturalPmcAffinity.c)
 *     EtwpRemoveMicroarchitecturalPmcFromRegistry @ 0x1407AC050 (EtwpRemoveMicroarchitecturalPmcFromRegistry.c)
 *     EtwpUpdatePmcCounters @ 0x1407AC11C (EtwpUpdatePmcCounters.c)
 *     EtwpUpdatePmcEvents @ 0x1407AC240 (EtwpUpdatePmcEvents.c)
 *     EtwpUserInAdminOrLogUsersGroup @ 0x1407AC2E8 (EtwpUserInAdminOrLogUsersGroup.c)
 *     EtwpEnableStackCaching @ 0x1407B3090 (EtwpEnableStackCaching.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1407B8BD4 (EtwpSetCoverageSamplerInformation.c)
 *     EtwpUpdateLastBranchTracingConfiguration @ 0x1407B93B0 (EtwpUpdateLastBranchTracingConfiguration.c)
 *     EtwpUpdateLastBranchTracingEvents @ 0x1407B9470 (EtwpUpdateLastBranchTracingEvents.c)
 *     EtwpUpdateProcessorTraceConfiguration @ 0x1407B95B4 (EtwpUpdateProcessorTraceConfiguration.c)
 *     EtwpUpdateProcessorTraceEvents @ 0x1407B965C (EtwpUpdateProcessorTraceEvents.c)
 *     EtwpSetSoftRestartInformation @ 0x1407BA2B0 (EtwpSetSoftRestartInformation.c)
 */

__int64 __fastcall EtwSetPerformanceTraceInformation(char *Address, SIZE_T Length, KPROCESSOR_MODE AccessMode)
{
  unsigned int v4; // esi
  __int64 result; // rax
  int v7; // ebx
  __int64 v8; // r14
  int v9; // ebx
  int v10; // r15d
  unsigned int v11; // r12d
  int v12; // r13d
  int v13; // r14d
  ULONG v14; // edi
  unsigned int v15; // edx
  struct _KTHREAD *v16; // rax
  unsigned int *v17; // rax
  __int64 v18; // rdi
  unsigned int *v19; // rcx
  int updated; // eax
  unsigned int v21; // esi
  unsigned int v23; // esi
  unsigned int v24; // esi
  __int64 v25; // rbx
  unsigned int v26; // edx
  struct _KTHREAD *v27; // rax
  unsigned int *v28; // rax
  __int64 v29; // rcx
  unsigned int v30; // edx
  struct _KTHREAD *v31; // rax
  unsigned int *v32; // rax
  unsigned int v33; // edx
  struct _KTHREAD *v34; // rax
  unsigned int *v35; // rax
  unsigned int v36; // esi
  wchar_t *v37; // rax
  wchar_t *v38; // rdi
  wchar_t *v39; // rcx
  unsigned int v40; // r15d
  unsigned int v41; // ebx
  wchar_t *PoolWithTag; // rax
  wchar_t *v43; // rsi
  unsigned int v44; // esi
  unsigned int v45; // esi
  char *v46; // r15
  unsigned int v47; // edx
  struct _KTHREAD *v48; // rax
  unsigned int *v49; // rax
  unsigned int v50; // edx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v52; // rax
  unsigned int v53; // esi
  unsigned int v54; // esi
  unsigned int v55; // edx
  struct _KTHREAD *v56; // rax
  unsigned int *v57; // rax
  unsigned __int16 *v58; // rax
  char v59; // [rsp+30h] [rbp-208h]
  char v60; // [rsp+32h] [rbp-206h]
  int v61; // [rsp+34h] [rbp-204h]
  unsigned int v62; // [rsp+3Ch] [rbp-1FCh]
  unsigned int v63; // [rsp+40h] [rbp-1F8h]
  PVOID P; // [rsp+48h] [rbp-1F0h] BYREF
  int v65; // [rsp+50h] [rbp-1E8h]
  unsigned int v66; // [rsp+54h] [rbp-1E4h]
  int v67; // [rsp+58h] [rbp-1E0h]
  ULONG v68; // [rsp+5Ch] [rbp-1DCh]
  int v69; // [rsp+60h] [rbp-1D8h]
  int v70; // [rsp+64h] [rbp-1D4h]
  int v71; // [rsp+68h] [rbp-1D0h]
  int v72[4]; // [rsp+70h] [rbp-1C8h] BYREF
  wchar_t *Src; // [rsp+80h] [rbp-1B8h]
  __int128 v74; // [rsp+88h] [rbp-1B0h] BYREF
  __int64 v75; // [rsp+98h] [rbp-1A0h]
  __int128 v76; // [rsp+A0h] [rbp-198h] BYREF
  __int64 v77; // [rsp+B0h] [rbp-188h]
  __int64 v78; // [rsp+B8h] [rbp-180h]
  __int64 v79; // [rsp+C0h] [rbp-178h]
  __int64 v80; // [rsp+C8h] [rbp-170h]
  __int64 v81; // [rsp+D0h] [rbp-168h]
  __int64 v82; // [rsp+D8h] [rbp-160h]
  _OWORD v83[2]; // [rsp+E0h] [rbp-158h] BYREF
  int v84; // [rsp+100h] [rbp-138h] BYREF
  char v85[168]; // [rsp+108h] [rbp-130h] BYREF
  __int64 v86; // [rsp+1B0h] [rbp-88h] BYREF
  int v87; // [rsp+1B8h] [rbp-80h]
  __int64 v88; // [rsp+1C0h] [rbp-78h] BYREF
  int v89; // [rsp+1C8h] [rbp-70h]
  _DWORD v90[4]; // [rsp+1D0h] [rbp-68h] BYREF
  _DWORD v91[8]; // [rsp+1E0h] [rbp-58h] BYREF

  v4 = Length;
  if ( (unsigned int)Length < 4 )
    return 3221225485LL;
  v7 = *(_DWORD *)Address;
  v61 = *(_DWORD *)Address;
  v8 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  if ( v7 > 16 )
  {
    switch ( v7 )
    {
      case 17:
        goto LABEL_143;
      case 18:
        return (unsigned int)EtwpSetSoftRestartInformation(Address, v4);
      case 19:
        if ( v4 < 0x18 )
          return 3221225476LL;
        v76 = *(_OWORD *)Address;
        v77 = *((_QWORD *)Address + 2);
        v50 = WORD4(v76);
        if ( WORD4(v76) == 0xFFFF )
          v50 = *(unsigned __int8 *)(v8 + 4172);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v52 = EtwpAcquireLoggerContextByLoggerId(v8, v50, 1);
        v18 = (__int64)v52;
        if ( !v52 )
          goto LABEL_36;
        v9 = EtwpCheckLoggerControlAccess(0x80u, (__int64)v52);
        if ( v9 < 0 )
          goto LABEL_86;
        updated = EtwpUpdateLastBranchTracingConfiguration(v18, &v76);
LABEL_85:
        v9 = updated;
        goto LABEL_86;
      case 20:
        goto LABEL_119;
      case 21:
        if ( AccessMode && !(unsigned __int8)EtwpUserInAdminOrLogUsersGroup() )
          return 3221225506LL;
        if ( v4 - 28 > 0x1FC )
          return 3221225476LL;
        v40 = v4 - 26 + 178;
        v41 = (v4 - 26) >> 1;
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v40, 0x50777445u);
        v43 = PoolWithTag;
        P = PoolWithTag;
        if ( PoolWithTag )
        {
          wcsncpy_s(PoolWithTag + 89, v41, (const wchar_t *)Address + 13, v41);
          v88 = *((_QWORD *)Address + 1);
          v89 = *((_DWORD *)Address + 4);
          *(_DWORD *)v43 = *((_DWORD *)Address + 1);
          *((_DWORD *)v43 + 1) = *((_DWORD *)Address + 5);
          *((_BYTE *)v43 + 176) = Address[24];
          v60 = Address[25];
          EtwpGetMicroarchitecturalPmcAffinity(&v88, v43 + 4);
          v9 = ((__int64 (__fastcall *)(__int64, _QWORD, wchar_t *))off_140397DA0[0])(20LL, v40, v43);
          if ( v60 )
            v9 = EtwpAddMicroarchitecturalPmcToRegistry(v43, &v88);
          v39 = v43;
          goto LABEL_118;
        }
        break;
      case 22:
        if ( AccessMode && !(unsigned __int8)EtwpUserInAdminOrLogUsersGroup() )
          return 3221225506LL;
        if ( v4 != 20 )
          return 3221225476LL;
        v86 = *((_QWORD *)Address + 1);
        v87 = *((_DWORD *)Address + 4);
        v72[0] = *((_DWORD *)Address + 1);
        v9 = ((__int64 (__fastcall *)(__int64, __int64, int *, PVOID *))off_140397D98[0])(1LL, 24LL, v72, &P);
        if ( v9 < 0 )
          return (unsigned int)v9;
        v84 = v72[0];
        EtwpGetMicroarchitecturalPmcAffinity(&v86, v85);
        v36 = wcsnlen(Src, 0xFFuLL);
        v37 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * (v36 + 1), 0x50777445u);
        v38 = v37;
        if ( v37 )
        {
          wcsncpy_s(v37, v36 + 1, Src, v36);
          v9 = ((__int64 (__fastcall *)(__int64, __int64, int *))off_140397DA0[0])(21LL, 176LL, &v84);
          EtwpRemoveMicroarchitecturalPmcFromRegistry(v38, v36);
          v39 = v38;
LABEL_118:
          ExFreePoolWithTag(v39, 0x50777445u);
          return (unsigned int)v9;
        }
        break;
      case 23:
        if ( v4 < 0x18 )
          return 3221225476LL;
        v74 = *(_OWORD *)Address;
        v75 = *((_QWORD *)Address + 2);
        v33 = WORD4(v74);
        if ( WORD4(v74) == 0xFFFF )
          v33 = *(unsigned __int8 *)(v8 + 4172);
        v34 = KeGetCurrentThread();
        --v34->KernelApcDisable;
        v35 = EtwpAcquireLoggerContextByLoggerId(v8, v33, 1);
        v18 = (__int64)v35;
        if ( v35 )
        {
          v9 = EtwpCheckLoggerControlAccess(0x80u, (__int64)v35);
          if ( v9 < 0 )
            goto LABEL_86;
          updated = EtwpUpdateProcessorTraceConfiguration(v18, &v74);
          goto LABEL_85;
        }
        goto LABEL_36;
      case 24:
        goto LABEL_119;
      case 25:
        return (unsigned int)EtwpSetCoverageSamplerInformation(Address, v4, AccessMode);
      default:
        return (unsigned int)-1073741822;
    }
    return 3221225495LL;
  }
  if ( v7 != 16 )
  {
    if ( v7 <= 7 )
    {
      if ( v7 != 7 )
      {
        if ( v7 != 1 )
        {
          switch ( v7 )
          {
            case 3:
              if ( v4 != 8 )
                return 3221225476LL;
              if ( PsIsCurrentThreadInServerSilo() )
                return 3221225506LL;
              v14 = *((_DWORD *)Address + 1);
              v68 = v14;
              KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
              v9 = NtSetIntervalProfile(v14, ProfileTime);
              if ( v9 >= 0 )
                EtwpProfileInterval = v14;
              break;
            case 5:
              if ( ((v4 - 16) & 0xFFFFFFFB) != 0 )
                return 3221225476LL;
              result = EtwpCheckGuidAccess((__int64)&SystemTraceControlGuid, 0x80u, 0LL);
              v9 = result;
              if ( (int)result < 0 )
                return result;
              if ( PsIsCurrentThreadInServerSilo() )
                return 3221225506LL;
              v10 = *((_DWORD *)Address + 1);
              v65 = v10;
              if ( !v10 )
                return 3221225485LL;
              v11 = *((_DWORD *)Address + 2);
              v66 = v11;
              if ( v11 < 0x3E8 )
                return 3221225485LL;
              v12 = *((_DWORD *)Address + 3);
              v67 = v12;
              if ( !v12 )
                return 3221225485LL;
              v13 = EtwpSpinLockHoldThreshold;
              if ( v4 == 20 )
              {
                v13 = *((_DWORD *)Address + 4);
                if ( (unsigned int)(v13 - 1) <= 0xF423E )
                  return 3221225485LL;
              }
              KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
              EtwpSpinLockHoldThreshold = v13;
              EtwpSpinLockSpinThreshold = v10;
              EtwpSpinLockAcquireSampleRate = v11;
              EtwpSpinLockContentionSampleRate = v12;
              break;
            case 6:
LABEL_119:
              if ( v4 >= 0x10 )
              {
                v44 = v4 - 16;
                if ( (v44 & 3) == 0 )
                {
                  if ( !PsIsCurrentThreadInServerSilo() || (unsigned int)(v7 - 14) > 1 )
                  {
                    v45 = v44 >> 2;
                    v46 = Address + 16;
                    v81 = *((_QWORD *)Address + 1);
                    v47 = (unsigned __int16)v81;
                    if ( (unsigned __int16)v81 == 0xFFFF )
                      v47 = *(unsigned __int8 *)(v8 + 4172);
                    v48 = KeGetCurrentThread();
                    --v48->KernelApcDisable;
                    v49 = EtwpAcquireLoggerContextByLoggerId(v8, v47, 1);
                    v18 = (__int64)v49;
                    if ( v49 )
                    {
                      v9 = EtwpCheckLoggerControlAccess(0x80u, (__int64)v49);
                      if ( v9 < 0 )
                        goto LABEL_86;
                      switch ( v61 )
                      {
                        case 6:
                          updated = EtwpUpdateStackTracing((_RTL_BITMAP *)v18, (__int64)v46, v45);
                          break;
                        case 15:
                          updated = EtwpUpdatePmcCounters(v18, v46, v45);
                          break;
                        case 14:
                          updated = EtwpUpdatePmcEvents(v18, v46, v45);
                          break;
                        case 20:
                          EtwpUpdateLastBranchTracingEvents(v18, v46, v45);
                          goto LABEL_86;
                        default:
                          updated = EtwpUpdateProcessorTraceEvents(v18, v46, v45);
                          break;
                      }
                      goto LABEL_85;
                    }
                    goto LABEL_36;
                  }
                  return 3221225506LL;
                }
                return 3221225485LL;
              }
              return 3221225476LL;
            default:
              return (unsigned int)-1073741822;
          }
LABEL_30:
          KeReleaseMutex(&EtwpGroupMaskMutex, 0);
          return (unsigned int)v9;
        }
        if ( v4 != 48 )
          return 3221225476LL;
        v78 = *((_QWORD *)Address + 1);
        v83[0] = *((_OWORD *)Address + 1);
        v83[1] = *((_OWORD *)Address + 2);
        v15 = (unsigned __int16)v78;
        if ( (unsigned __int16)v78 == 0xFFFF )
          v15 = *(unsigned __int8 *)(v8 + 4172);
        v16 = KeGetCurrentThread();
        --v16->KernelApcDisable;
        v17 = EtwpAcquireLoggerContextByLoggerId(v8, v15, 1);
        v18 = (__int64)v17;
        if ( !v17 )
        {
LABEL_36:
          v9 = -1073741162;
LABEL_39:
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          return (unsigned int)v9;
        }
        v19 = v17;
        if ( (v17[3] & 0x2000000) == 0 )
        {
LABEL_38:
          EtwpReleaseLoggerContext(v19, 1);
          v9 = -1073741811;
          goto LABEL_39;
        }
        v9 = EtwpCheckSystemTraceAccess((__int64)v17, 0x80u);
        if ( v9 >= 0 )
        {
          updated = EtwpUpdateGroupMasks(v18, (__int64)v83);
          goto LABEL_85;
        }
LABEL_86:
        EtwpReleaseLoggerContext((unsigned int *)v18, 1);
        goto LABEL_39;
      }
      if ( v4 != 16 )
        return 3221225476LL;
      result = EtwpCheckGuidAccess((__int64)&SystemTraceControlGuid, 0x80u, 0LL);
      v9 = result;
      if ( (int)result >= 0 )
      {
        if ( PsIsCurrentThreadInServerSilo() )
          return 3221225506LL;
        v69 = *((_DWORD *)Address + 1);
        v70 = *((_DWORD *)Address + 2);
        v71 = *((_DWORD *)Address + 3);
        KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
        EtwpExecutiveResourceReleaseSampleRate = v69;
        EtwpExecutiveResourceContentionSampleRate = v70;
        EtwpExecutiveResourceTimeout = v71;
        goto LABEL_30;
      }
      return result;
    }
    if ( v7 != 10 )
    {
      if ( v7 == 11 )
      {
        v59 = 0;
        if ( v4 < 0x10 )
          return 3221225476LL;
        v23 = v4 - 16;
        if ( (v23 & 3) != 0 )
          return 3221225485LL;
        v24 = v23 >> 2;
        if ( v24 > 1 )
          return 3221225485LL;
        v25 = *((_QWORD *)Address + 1);
        v79 = v25;
        if ( v24 )
        {
          if ( *((_DWORD *)Address + 4) != 1316 )
            return 3221225485LL;
          v59 = 1;
        }
        if ( SeSinglePrivilegeCheck(SeSystemProfilePrivilege, AccessMode) )
        {
          if ( PsIsCurrentThreadInServerSilo() )
            return 3221225506LL;
          v26 = (unsigned __int16)v25;
          if ( (unsigned __int16)v25 == 0xFFFF )
            v26 = *(unsigned __int8 *)(v8 + 4172);
          v27 = KeGetCurrentThread();
          --v27->KernelApcDisable;
          v28 = EtwpAcquireLoggerContextByLoggerId(EtwpHostSiloState, v26, 1);
          v18 = (__int64)v28;
          if ( v28 )
          {
            v9 = EtwpCheckLoggerControlAccess(0x80u, (__int64)v28);
            if ( v9 >= 0 )
            {
              if ( v59 )
                _InterlockedOr((volatile signed __int32 *)(v18 + 832), 0x400u);
              else
                _InterlockedAnd((volatile signed __int32 *)(v18 + 832), 0xFFFFFBFF);
            }
            goto LABEL_86;
          }
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          return 3221226134LL;
        }
      }
      else
      {
        if ( v7 != 12 )
        {
          if ( v7 > 13 )
            goto LABEL_119;
          return (unsigned int)-1073741822;
        }
        if ( v4 < 0x10 )
          return 3221225476LL;
        result = EtwpCheckGuidAccess((__int64)&SystemTraceControlGuid, 0x80u, 0LL);
        if ( (int)result < 0 )
          return result;
        if ( SeSinglePrivilegeCheck(SeSystemProfilePrivilege, AccessMode) )
        {
          if ( PsIsCurrentThreadInServerSilo() )
            return 3221225506LL;
          v21 = (v4 - 16) >> 2;
          if ( v21 > 8 )
            return 3221225485LL;
          memmove(v91, Address + 16, 4LL * v21);
          return (unsigned int)EtwpSetPmcProfileSource(v91, v21);
        }
      }
      return 3221225569LL;
    }
LABEL_143:
    if ( v4 < 0x10 )
      return 3221225476LL;
    v53 = v4 - 16;
    if ( (v53 & 3) != 0 )
      return 3221225485LL;
    v54 = v53 >> 2;
    if ( (unsigned __int16)v54 > 4u )
      return 3221225485LL;
    if ( PsIsCurrentThreadInServerSilo() )
      return 3221225506LL;
    v82 = *((_QWORD *)Address + 1);
    memmove(v90, Address + 16, 4LL * (unsigned __int16)v54);
    v55 = (unsigned __int16)v82;
    if ( (unsigned __int16)v82 == 0xFFFF )
      v55 = *(unsigned __int8 *)(v8 + 4172);
    v56 = KeGetCurrentThread();
    --v56->KernelApcDisable;
    v57 = EtwpAcquireLoggerContextByLoggerId(v8, v55, 1);
    v18 = (__int64)v57;
    if ( !v57 )
      goto LABEL_36;
    v19 = v57;
    if ( (v57[3] & 0x2000000) != 0 )
    {
      v9 = EtwpCheckSystemTraceAccess((__int64)v57, 0x80u);
      if ( v9 >= 0 )
      {
        v58 = EtwpPoolTagFilter;
        if ( v61 != 10 )
          v58 = (unsigned __int16 *)&EtwpObjectTypeFilter;
        EtwpUpdateTagFilter(v90, v54, (__int64)&v58[10 * *(unsigned __int8 *)(v18 + 834)]);
      }
      goto LABEL_86;
    }
    goto LABEL_38;
  }
  if ( v4 != 32 )
    return 3221225476LL;
  v29 = *((_QWORD *)Address + 1);
  v80 = v29;
  v63 = *((_DWORD *)Address + 5);
  v62 = *((_DWORD *)Address + 6);
  if ( Address[16] )
  {
    v30 = (unsigned __int16)v29;
    if ( (unsigned __int16)v29 == 0xFFFF )
      v30 = *(unsigned __int8 *)(v8 + 4172);
    v31 = KeGetCurrentThread();
    --v31->KernelApcDisable;
    v32 = EtwpAcquireLoggerContextByLoggerId(v8, v30, 1);
    v18 = (__int64)v32;
    if ( !v32 )
      goto LABEL_36;
    v9 = EtwpCheckLoggerControlAccess(0x80u, (__int64)v32);
    if ( v9 >= 0 )
    {
      updated = EtwpEnableStackCaching(v18, v63, v62);
      goto LABEL_85;
    }
    goto LABEL_86;
  }
  return 3221225659LL;
}
