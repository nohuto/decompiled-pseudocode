/*
 * XREFs of PopFxProcessWork @ 0x1400FD9F8
 * Callers:
 *     PopFxPluginWork @ 0x1400FD120 (PopFxPluginWork.c)
 *     PopFxActivateComponentWorker @ 0x1400FD7C0 (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorkerTail @ 0x1400FE1D8 (PopFxIdleWorkerTail.c)
 *     PoFxCompleteIdleState @ 0x140131ED0 (PoFxCompleteIdleState.c)
 * Callees:
 *     PopPluginDevicePower @ 0x14001AE88 (PopPluginDevicePower.c)
 *     PopPepProcessEvent @ 0x14001B108 (PopPepProcessEvent.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer @ 0x1400E2110 (KeCancelTimer.c)
 *     IoAcquireRemoveLockEx @ 0x1400FD8A0 (IoAcquireRemoveLockEx.c)
 *     PopFxCompleteDevicePowerRequired @ 0x1400FD900 (PopFxCompleteDevicePowerRequired.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x1400FDDE8 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopFxAddLogEntry @ 0x1400FDE88 (PopFxAddLogEntry.c)
 *     PopFxScheduleDeviceIdleTimer @ 0x1400FDF74 (PopFxScheduleDeviceIdleTimer.c)
 *     PopFxCompleteComponentActivation @ 0x1400FE048 (PopFxCompleteComponentActivation.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x1400FE378 (PopDiagTraceFxComponentLogicalCondition.c)
 *     IoReleaseRemoveLockEx @ 0x14011AF40 (IoReleaseRemoveLockEx.c)
 *     PopPluginComponentIdleState @ 0x140130F68 (PopPluginComponentIdleState.c)
 *     PopFxDeliverDevicePowerRequired @ 0x140131A64 (PopFxDeliverDevicePowerRequired.c)
 *     PopDiagTraceFxComponentIdleState @ 0x140131F40 (PopDiagTraceFxComponentIdleState.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x1401550A4 (PopFxUpdateDeviceIdleTimer.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     PopFxBugCheck @ 0x14023D978 (PopFxBugCheck.c)
 *     PopFxCompleteComponentPerfState @ 0x14023D99C (PopFxCompleteComponentPerfState.c)
 *     PopPepCompleteComponentIdleState @ 0x140242498 (PopPepCompleteComponentIdleState.c)
 *     PopDiagTraceFxPerfRequestProgress @ 0x1402461F8 (PopDiagTraceFxPerfRequestProgress.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x14024D00C (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x14024D0A0 (PopFxAcpiForwardPepWorkRequest.c)
 */

__int64 __fastcall PopFxProcessWork(ULONG_PTR BugCheckParameter2, int *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rdi
  ULONG_PTR v6; // rbx
  __int64 v7; // rcx
  char v8; // bp
  KSPIN_LOCK *v9; // r14
  KIRQL v10; // r15
  char v11; // bl
  ULONG_PTR v12; // r14
  __int64 v13; // rbp
  __int64 v14; // rbx
  KIRQL v15; // r12
  __int64 v16; // r8
  void (__fastcall *v17)(_QWORD, _QWORD); // rax
  signed __int32 v18; // eax
  signed __int32 v19; // ett
  BOOLEAN v20; // al
  char v21; // al
  __int64 v22; // rbp
  __int64 v23; // r14
  __int64 v24; // rbx
  int v25; // ecx
  signed __int32 v26; // eax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rbp
  __int64 v30; // rdx
  __int64 v31; // r14
  __int64 v32; // rsi
  signed __int32 v33; // ebx
  __int64 v34; // r9
  __int64 v35; // rbp
  unsigned int v36; // ebx
  __int64 v37; // rbx
  KIRQL v38; // bp
  __int64 v39; // rbx
  NTSTATUS v40; // esi
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 RemlockSize; // [rsp+20h] [rbp-88h]
  _QWORD v44[4]; // [rsp+40h] [rbp-68h] BYREF
  NTSTATUS v45; // [rsp+60h] [rbp-48h]
  __int64 v46; // [rsp+C0h] [rbp+18h] BYREF

  result = *a2;
  v4 = (__int64)a2;
  if ( (unsigned int)result > 8 )
    PopFxBugCheck(0x603uLL, BugCheckParameter2, *a2, 0LL);
  while ( 1 )
  {
    if ( !*(_DWORD *)v4 )
    {
      v12 = *(_QWORD *)(v4 + 8);
      if ( BugCheckParameter2 )
        PopFxBugCheck(0x603uLL, BugCheckParameter2, 0LL, 0LL);
      v13 = *(unsigned int *)(v4 + 16);
      if ( (unsigned int)v13 >= *(_DWORD *)(v12 + 628) )
        PopFxBugCheck(0x611uLL, 0LL, *(_QWORD *)(v4 + 8), *(unsigned int *)(v4 + 16));
      _mm_lfence();
      v14 = *(_QWORD *)(*(_QWORD *)(v12 + 632) + 8 * v13);
      if ( *(_DWORD *)(v14 + 152) )
        PopFxBugCheck(0x615uLL, 0LL, *(unsigned int *)(v4 + 16), 0LL);
      if ( *(int *)(v14 + 88) < 0 )
        PopFxBugCheck(0x615uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v12 + 632) + 8 * v13), 1uLL);
      if ( (*(_DWORD *)(v14 + 88) & 0x3FFFFFFF) == 0 )
        PopFxBugCheck(0x615uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v12 + 632) + 8 * v13), 2uLL);
      if ( *(_DWORD *)(v14 + 140) )
        PopFxBugCheck(0x615uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v12 + 632) + 8 * v13), 3uLL);
      v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v14 + 200));
      if ( *(int *)(v14 + 216) >= 1 )
      {
        *(_QWORD *)(v14 + 224) = MEMORY[0xFFFFF78000000008];
        *(_BYTE *)(v14 + 208) = 1;
      }
      KxReleaseSpinLock((PKSPIN_LOCK)(v14 + 200));
      __writecr8(v15);
      LOBYTE(v16) = 1;
      PopDiagTraceFxComponentLogicalCondition(*(_QWORD *)(v12 + 48), (unsigned int)v13, v16);
      v17 = *(void (__fastcall **)(_QWORD, _QWORD))(v12 + 112);
      if ( v17 )
        v17(*(_QWORD *)(v12 + 176), (unsigned int)v13);
      PopPepProcessEvent(
        *(_QWORD *)(v12 + 56),
        200LL * (unsigned int)v13 + *(_QWORD *)(v12 + 56) + 184LL,
        2u,
        3u,
        RemlockSize,
        0LL);
      result = PopFxCompleteComponentActivation(v12);
      v11 = 0;
      goto LABEL_17;
    }
    if ( *(_DWORD *)v4 == 1 )
    {
      v22 = *(_QWORD *)(v4 + 8);
      if ( BugCheckParameter2 )
        PopFxBugCheck(0x603uLL, BugCheckParameter2, 1uLL, 0LL);
      v23 = *(unsigned int *)(v4 + 16);
      if ( (unsigned int)v23 >= *(_DWORD *)(v22 + 628) )
        PopFxBugCheck(0x611uLL, 0LL, *(_QWORD *)(v4 + 8), *(unsigned int *)(v4 + 16));
      _mm_lfence();
      v24 = *(_QWORD *)(*(_QWORD *)(v22 + 632) + 8 * v23);
      if ( *(_DWORD *)(v4 + 20) >= *(_DWORD *)(v24 + 156) )
        PopFxBugCheck(0x616uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v22 + 632) + 8 * v23), 0LL);
      v25 = *(_DWORD *)(v4 + 20);
      if ( v25 == *(_DWORD *)(v24 + 152) )
        PopFxBugCheck(0x616uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v22 + 632) + 8 * v23), 1uLL);
      if ( v25 && *(_DWORD *)(v24 + 152) )
        PopFxBugCheck(0x616uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v22 + 632) + 8 * v23), 2uLL);
      *(_DWORD *)(v24 + 152) = *(_DWORD *)(v4 + 20);
      *(_DWORD *)(v24 + 140) = 2;
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(v22 + 128))(
        *(_QWORD *)(v22 + 176),
        (unsigned int)v23,
        *(unsigned int *)(v4 + 20));
      v26 = _InterlockedExchangeAdd((volatile signed __int32 *)(v24 + 140), 0xFFFFFFFF);
      v27 = *(_QWORD *)(v22 + 48);
      if ( v26 == 1 )
      {
        PopDiagTraceFxComponentIdleState(v27, (unsigned int)v23, *(unsigned int *)(v4 + 20));
        result = PopPluginComponentIdleState(v22, (unsigned int)v23, v28, v4);
        v11 = result;
      }
      else
      {
        result = PopFxAddLogEntry(v27, (unsigned int)v23, 14LL, 0LL);
        v11 = 0;
      }
      goto LABEL_17;
    }
    if ( *(_DWORD *)v4 != 2 )
      break;
    v6 = *(_QWORD *)(v4 + 8);
    if ( BugCheckParameter2 )
      PopFxBugCheck(0x603uLL, BugCheckParameter2, 2uLL, 0LL);
    v7 = *(_QWORD *)(v6 + 48);
    v8 = *(_BYTE *)(v4 + 16);
    if ( v7 )
    {
      LOBYTE(a3) = *(_BYTE *)(v4 + 16);
      LOBYTE(a2) = 1;
      PopDiagTraceFxDevicePowerRequirement(v7, a2, a3);
    }
    v9 = (KSPIN_LOCK *)(v6 + 336);
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 336));
    if ( v8 )
    {
      *(_DWORD *)(v6 + 36) = 2;
      _m_prefetchw((const void *)(v6 + 32));
      v18 = *(_DWORD *)(v6 + 32);
      do
      {
        v19 = v18;
        v18 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 32), v18 & 0xFFFFFF7F, v18);
      }
      while ( v19 != v18 );
      if ( (v18 & 0x80u) == 0 )
        PopFxBugCheck(0x609uLL, 0LL, v6, 0LL);
      _m_prefetchw((const void *)(v6 + 32));
      if ( (_InterlockedOr((volatile signed __int32 *)(v6 + 32), 0) & 4) != 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)(v6 + 32), 0xFFFFFFFB);
        *(_DWORD *)(v6 + 40) = 0;
        v20 = KeCancelTimer((PKTIMER)(v6 + 344));
        _InterlockedDecrement((volatile signed __int32 *)(v6 + 36));
        if ( v20 )
        {
          v21 = PopFxCompleteDevicePowerRequired(v6, v4);
LABEL_36:
          v11 = v21;
          goto LABEL_16;
        }
      }
      else if ( !*(_DWORD *)(v6 + 40) )
      {
        v21 = PopFxDeliverDevicePowerRequired(v6);
        goto LABEL_36;
      }
    }
    else
    {
      _m_prefetchw((const void *)(v6 + 32));
      if ( (_InterlockedOr((volatile signed __int32 *)(v6 + 32), 0) & 0x80u) != 0 )
        PopFxBugCheck(0x609uLL, 0LL, v6, 1uLL);
      PopPluginDevicePower(v6, 0, 0LL);
      _InterlockedOr((volatile signed __int32 *)(v6 + 32), 0x80u);
      if ( *(_QWORD *)(v6 + 144) )
      {
        if ( *(_DWORD *)(v6 + 36) || *(_DWORD *)(v6 + 40) || (*(_DWORD *)(v6 + 32) & 4) != 0 )
          PopFxBugCheck(0x610uLL, 0LL, v6, 0LL);
        *(_DWORD *)(v6 + 40) = 2;
        if ( !(unsigned __int8)PopFxScheduleDeviceIdleTimer(v6) )
        {
          PopDiagTraceFxDevicePowerRequirement(*(_QWORD *)(v6 + 48), 0LL, 0LL);
          (*(void (__fastcall **)(_QWORD))(v6 + 144))(*(_QWORD *)(v6 + 176));
          _InterlockedOr((volatile signed __int32 *)(v6 + 32), 0x40u);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 40), 0xFFFFFFFF) != 1 )
            PopFxAddLogEntry(*(_QWORD *)(v6 + 48), 0LL, 17LL, 0LL);
        }
      }
      else
      {
        PopDiagTraceFxDevicePowerRequirement(*(_QWORD *)(v6 + 48), 0LL, 0LL);
        _InterlockedOr((volatile signed __int32 *)(v6 + 32), 0x40u);
      }
    }
    v11 = 0;
LABEL_16:
    KxReleaseSpinLock(v9);
    result = v10;
    __writecr8(v10);
LABEL_17:
    if ( !v11 )
      return result;
  }
  switch ( *(_DWORD *)v4 )
  {
    case 3:
      v39 = *(_QWORD *)(v4 + 8);
      v40 = -1073741822;
      v46 = 0LL;
      if ( *(_QWORD *)(v39 + 152) )
      {
        v40 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v39 + 216), 0LL, &File, 1u, 0x20u);
        if ( v40 >= 0 )
        {
          v40 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, __int64 *))(v39 + 152))(
                  *(_QWORD *)(v39 + 176),
                  *(_QWORD *)(v4 + 16),
                  *(_QWORD *)(v4 + 32),
                  *(_QWORD *)(v4 + 40),
                  *(_QWORD *)(v4 + 48),
                  *(_QWORD *)(v4 + 56),
                  &v46);
          IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v39 + 216), 0LL, 0x20u);
        }
      }
      v41 = *(_QWORD *)(v39 + 56);
      v45 = v40;
      v42 = *(_QWORD *)(v41 + 32);
      v44[0] = *(_QWORD *)(v42 + 72);
      v44[1] = *(_QWORD *)(v4 + 16);
      v44[2] = *(_QWORD *)(v4 + 24);
      v44[3] = v46;
      return (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)(v42 + 64) + 96LL))(15LL, v44);
    case 4:
      v37 = *(_QWORD *)(v4 + 8);
      v38 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v37 + 336));
      if ( *(_BYTE *)(v4 + 16) )
        _InterlockedOr((volatile signed __int32 *)(v37 + 32), 8u);
      else
        _InterlockedAnd((volatile signed __int32 *)(v37 + 32), 0xFFFFFFF7);
      PopFxUpdateDeviceIdleTimer(v37);
      KxReleaseSpinLock((PKSPIN_LOCK)(v37 + 336));
      result = v38;
      __writecr8(v38);
      break;
    case 5:
      v35 = *(_QWORD *)(v4 + 8);
      if ( !BugCheckParameter2 )
        PopFxBugCheck(0x603uLL, 0LL, 5uLL, 0LL);
      v36 = *(_DWORD *)(v4 + 16);
      if ( v36 >= *(_DWORD *)(v35 + 628) )
        PopFxBugCheck(0x611uLL, BugCheckParameter2, *(_QWORD *)(v4 + 8), *(unsigned int *)(v4 + 16));
      PopFxAddLogEntry(*(_QWORD *)(v35 + 48), v36, 18LL, 1LL);
      return PopPepCompleteComponentIdleState(*(_QWORD *)(v35 + 56), v36);
    case 6:
      v29 = *(_QWORD *)(v4 + 8);
      if ( !BugCheckParameter2 )
        PopFxBugCheck(0x603uLL, 0LL, 6uLL, 0LL);
      v30 = *(unsigned int *)(v4 + 16);
      if ( (unsigned int)v30 >= *(_DWORD *)(v29 + 628) )
        PopFxBugCheck(0x611uLL, BugCheckParameter2, *(_QWORD *)(v4 + 8), *(unsigned int *)(v4 + 16));
      _mm_lfence();
      v31 = *(_QWORD *)(*(_QWORD *)(v29 + 632) + 8 * v30);
      v32 = *(_QWORD *)(v31 + 248);
      v33 = _InterlockedDecrement((volatile signed __int32 *)(v32 + 40));
      _InterlockedOr((volatile signed __int32 *)(v32 + 40), 0x20000000u);
      if ( (v33 & 0x8000000) == 0 )
        PopFxAddLogEntry(*(_QWORD *)(v29 + 48), v30, 20LL, 1LL);
      PopDiagTraceFxPerfRequestProgress(v32, v33 & 7);
      LOBYTE(v34) = *(_BYTE *)(v4 + 20);
      return PopFxCompleteComponentPerfState(v29, *(unsigned int *)(v31 + 16), *(_QWORD *)(v31 + 248), v34);
    case 7:
      return PopFxAcpiForwardPepAcpiNotifyRequest(*(_QWORD *)(v4 + 8));
    case 8:
      return PopFxAcpiForwardPepWorkRequest(*(_QWORD *)(v4 + 8));
  }
  return result;
}
