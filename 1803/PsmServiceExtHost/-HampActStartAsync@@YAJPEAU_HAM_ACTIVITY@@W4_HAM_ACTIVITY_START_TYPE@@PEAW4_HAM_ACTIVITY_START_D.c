/*
 * XREFs of ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@@Z @ 0x18001B320
 * Callers:
 *     ?HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180024630 (-HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_AC.c)
 *     ?HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x18002B6F0 (-HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z.c)
 * Callees:
 *     ?HampActCanBeStartedInHostState@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z @ 0x1800062A0 (-HampActCanBeStartedInHostState@@YA-AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostQueueTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@@Z @ 0x180006920 (-HampHostQueueTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000FD20 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180010D50 (-HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z @ 0x1800114F0 (-HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180014210 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800165D0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180019090 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800219F0 (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180021A70 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@@Z @ 0x180023170 (-HampRmContextAcquireResourceSet@@YAJPEAVHAM_ACTIVITY_RM_CONTEXT@@@Z.c)
 *     ?RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180023B80 (-RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180029E5C (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x180029F94 (-HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampActSnapSystemStateForStart@@YAXPEAU_HAM_ACTIVITY@@PEAU_HAM_ACT_START_SYSTEM_STATE@@@Z @ 0x18002C5D0 (-HampActSnapSystemStateForStart@@YAXPEAU_HAM_ACTIVITY@@PEAU_HAM_ACT_START_SYSTEM_STATE@@@Z.c)
 *     ?HampActCanBeStartedInSystemState@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@PEAU_HAM_ACT_START_SYSTEM_STATE@@@Z @ 0x180031374 (-HampActCanBeStartedInSystemState@@YA-AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@PEA.c)
 *     ?HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x180033278 (-HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

__int64 __fastcall HampActStartAsync(__int64 a1, int a2, int *a3)
{
  PVOID Heap; // rax
  void *v6; // rbp
  int v7; // edi
  struct _RM_HAM_ACTIVITY_HOST *v8; // rcx
  __int64 v9; // rdi
  _QWORD *Value; // rax
  bool v11; // zf
  int CanBeStartedInSystemState; // eax
  DWORD v13; // esi
  int CanBeStartedInHostState; // r14d
  __int64 v15; // r15
  _QWORD *v16; // rdi
  unsigned __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned int v19; // edx
  __int64 v20; // rdi
  int v21; // r12d
  _QWORD *v22; // rax
  DWORD v23; // esi
  __int64 v24; // rbp
  _QWORD *v25; // rdi
  struct _RM_HAM_ACTIVITY_HOST *v26; // rcx
  char v27; // al
  __int64 v28; // rcx
  struct _HAM_DEPENDENCY_GROUP *v29; // rsi
  int v30; // edi
  struct _HAM_HOST_DEPENDENCY *v31; // r15
  __int64 v32; // rbp
  _QWORD *v33; // rax
  DWORD v34; // ebp
  __int64 v35; // rdi
  _QWORD *v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rcx
  int v39; // eax
  DWORD v40; // esi
  _QWORD *v41; // rbx
  _QWORD *v42; // rax
  _QWORD *v43; // rax
  __int64 v46; // [rsp+38h] [rbp-60h] BYREF
  unsigned int v47; // [rsp+40h] [rbp-58h]
  __int64 v48; // [rsp+48h] [rbp-50h] BYREF
  unsigned int v49; // [rsp+50h] [rbp-48h]

  if ( a2 == 1 && (*(_DWORD *)(a1 + 112) & 0x200) != 0 )
  {
    v7 = -1073741776;
    CanBeStartedInHostState = 15;
    goto LABEL_80;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x28uLL);
  v6 = Heap;
  if ( !Heap )
  {
    v7 = -1073741801;
    CanBeStartedInHostState = 15;
    goto LABEL_80;
  }
  memset_0(Heap, 0, 0x28uLL);
  RtlQueryPerformanceCounter(v6);
  v7 = HampActBeginStateChange(a1, 2u);
  if ( v7 < 0 )
  {
    CanBeStartedInHostState = 15;
    goto LABEL_95;
  }
  v8 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80);
  *(_BYTE *)(a1 + 541) = 0;
  HampHostUpdateActivityState(v8);
  if ( *(_QWORD *)(a1 + 504) && a2 == 1 )
  {
    v7 = -1073741776;
    CanBeStartedInHostState = 15;
LABEL_92:
    HampHostReleaseLockExclusiveEx(*(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80));
LABEL_94:
    HampActEndStateChange((struct _HAM_ACTIVITY *)a1, 1u);
LABEL_95:
    if ( v6 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
    goto LABEL_80;
  }
  HampActSnapSystemStateForStart((struct _HAM_ACTIVITY *)a1, (struct _HAM_ACT_START_SYSTEM_STATE *)&v46);
  while ( 1 )
  {
    v9 = *(_QWORD *)(a1 + 80);
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_BYTE *)Value & 2) == 0 )
        __int2c();
      v11 = Value[2]-- == 1LL;
      if ( v11 )
        *Value &= ~2uLL;
    }
    *(_DWORD *)(v9 + 8) = 0;
    RtlReleaseSRWLockExclusive(v9);
    CanBeStartedInSystemState = HampActCanBeStartedInSystemState(a1, &v46);
    v13 = HampLockTrackerId;
    CanBeStartedInHostState = CanBeStartedInSystemState;
    v15 = *(_QWORD *)(a1 + 80);
    if ( HampLockTrackerId != -1 )
    {
      v16 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v13) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        __int2c();
      *v16 |= 2uLL;
      ++v16[2];
    }
    RtlAcquireSRWLockExclusive(v15);
    *(_DWORD *)(v15 + 8) = GetCurrentThreadId();
    HampActSnapSystemStateForStart((struct _HAM_ACTIVITY *)a1, (struct _HAM_ACT_START_SYSTEM_STATE *)&v48);
    v17 = v46 - v48;
    if ( v46 == v48 )
      v17 = v47 - (unsigned __int64)v49;
    if ( !v17 )
      break;
    v46 = v48;
    v47 = v49;
  }
  if ( !CanBeStartedInHostState )
    CanBeStartedInHostState = HampActCanBeStartedInHostState(a1);
  if ( CanBeStartedInHostState == 14 )
  {
    v7 = -1058275327;
    goto LABEL_92;
  }
  if ( (unsigned int)(CanBeStartedInHostState - 1) <= 6 )
  {
    v7 = -1058275328;
    goto LABEL_92;
  }
  if ( (unsigned int)(CanBeStartedInHostState - 8) <= 5 )
  {
    v7 = -1058275324;
    goto LABEL_92;
  }
  v18 = *(_QWORD *)(a1 + 80);
  v19 = *(_DWORD *)(a1 + 536) | 4;
  *(_QWORD *)(a1 + 512) = v6;
  v20 = v18;
  v6 = 0LL;
  *(_DWORD *)(a1 + 536) = v19;
  if ( (*(_DWORD *)(a1 + 112) & 0x200) != 0 )
    *(_QWORD *)(a1 + 504) = *(_QWORD *)(v18 + 768);
  v21 = 1;
  if ( a2 == 1 )
  {
    HampHostQueueTerminate(v18, 1u, 0x1500u, *(_QWORD *)(a1 + 64), (((v19 >> 1) & 1) == 0) | 2);
    v20 = *(_QWORD *)(a1 + 80);
  }
  if ( HampLockTrackerId != -1 )
  {
    v22 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v22 & 2) == 0 )
      __int2c();
    v11 = v22[2]-- == 1LL;
    if ( v11 )
      *v22 &= ~2uLL;
  }
  *(_DWORD *)(v20 + 8) = 0;
  RtlReleaseSRWLockExclusive(v20);
  v7 = HampRmContextAcquireResourceSet(*(struct HAM_ACTIVITY_RM_CONTEXT **)(a1 + 88));
  if ( v7 < 0 )
  {
    CanBeStartedInHostState = 15;
    goto LABEL_94;
  }
  v23 = HampLockTrackerId;
  v24 = *(_QWORD *)(a1 + 80);
  if ( HampLockTrackerId != -1 )
  {
    v25 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v23) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v25 |= 2uLL;
    ++v25[2];
  }
  RtlAcquireSRWLockExclusive(v24);
  *(_DWORD *)(v24 + 8) = GetCurrentThreadId();
  v26 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80);
  *(_DWORD *)(a1 + 536) &= ~1u;
  HampHostUpdateActivityState(v26);
  v27 = *(_BYTE *)(a1 + 540);
  if ( v27 != 1 && v27 != 4 )
    v21 = 0;
  v28 = *(_QWORD *)(a1 + 80);
  v29 = *(struct _HAM_DEPENDENCY_GROUP **)(v28 + 664);
  if ( v29 )
  {
    HampActCheckEnterDependencyWorker((struct _HAM_ACTIVITY *)a1);
    v30 = (*(_DWORD *)(a1 + 536) >> 1) & 1;
    *(_DWORD *)(a1 + 536) &= ~2u;
  }
  else
  {
    v30 = 0;
    HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)v28, 0);
  }
  if ( !v30 )
    v29 = 0LL;
  if ( *(_BYTE *)(a1 + 540) == 4 )
  {
    v31 = *(struct _HAM_HOST_DEPENDENCY **)(a1 + 72);
    *(_QWORD *)(a1 + 72) = 0LL;
  }
  else
  {
    v31 = 0LL;
  }
  v32 = *(_QWORD *)(a1 + 80);
  if ( HampLockTrackerId != -1 )
  {
    v33 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v33 & 2) == 0 )
      __int2c();
    v11 = v33[2]-- == 1LL;
    if ( v11 )
      *v33 &= ~2uLL;
  }
  *(_DWORD *)(v32 + 8) = 0;
  RtlReleaseSRWLockExclusive(v32);
  if ( v31 )
    HampHostDepDestroy(v31);
  if ( v21 )
    HampPdcSignalWorker((struct _HAM_PDC_CONTEXT *)((*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL) + 136), 0);
  if ( v30 )
    HampDepGroupRunStateChangeWorker(v29);
  v34 = HampLockTrackerId;
  v35 = *(_QWORD *)(a1 + 80);
  if ( HampLockTrackerId != -1 )
  {
    v36 = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v34) )
      __int2c();
    *v36 |= 1uLL;
    ++v36[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_1800937F8 = GetCurrentThreadId();
  RmpActivityHostUpdateDigests((struct _RM_ACTIVITY_HOST *)(v35 - 64), 2u);
  RmpActivityHostUpdateImportance((struct _RM_ACTIVITY_HOST *)(v35 - 64), 2u);
  QueryUnbiasedInterruptTime((PULONGLONG)(v35 + 1392));
  if ( RmpActivityHostIsRevocable((struct _RM_ACTIVITY_HOST *)(v35 - 64)) )
    SetEvent(*(HANDLE *)(*(_QWORD *)(v35 - 8) + 88LL));
  v37 = *(_QWORD *)(v35 - 16);
  *(_QWORD *)(v35 + 1048) = 0LL;
  v38 = *(_QWORD *)(v37 + 2232);
  v39 = *(_DWORD *)(v38 + 184);
  if ( (v39 & 3) == 0 )
  {
    *(_DWORD *)(v38 + 184) = v39 | 1;
    TpPostWork(*(_QWORD *)(v38 + 168));
  }
  v40 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v41 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v40) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v41 |= 2uLL;
    ++v41[2];
  }
  RtlAcquireSRWLockExclusive(v35);
  *(_DWORD *)(v35 + 8) = GetCurrentThreadId();
  HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)v35, 0);
  if ( HampLockTrackerId != -1 )
  {
    v42 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v42 & 2) == 0 )
      __int2c();
    v11 = v42[2]-- == 1LL;
    if ( v11 )
      *v42 &= ~2uLL;
  }
  *(_DWORD *)(v35 + 8) = 0;
  RtlReleaseSRWLockExclusive(v35);
  dword_1800937F8 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v43 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v43 & 1) == 0 )
      __int2c();
    v11 = v43[1]-- == 1LL;
    if ( v11 )
      *v43 &= ~1uLL;
  }
  v7 = 0;
LABEL_80:
  *a3 = CanBeStartedInHostState;
  return (unsigned int)v7;
}
