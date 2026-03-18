/*
 * XREFs of PopFxProcessWork @ 0x140069444
 * Callers:
 *     PopFxPluginWork @ 0x1400685A0 (PopFxPluginWork.c)
 *     PopFxActivateComponentWorker @ 0x140068FE0 (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorkerTail @ 0x140069A78 (PopFxIdleWorkerTail.c)
 *     PoFxCompleteIdleState @ 0x14014AF30 (PoFxCompleteIdleState.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     IoReleaseRemoveLockEx @ 0x140022800 (IoReleaseRemoveLockEx.c)
 *     KeCancelTimer @ 0x14004D010 (KeCancelTimer.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxCompleteDevicePowerRequired @ 0x140068D70 (PopFxCompleteDevicePowerRequired.c)
 *     IoAcquireRemoveLockEx @ 0x1400692E0 (IoAcquireRemoveLockEx.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x1400697F8 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopFxAddLogEntry @ 0x140069898 (PopFxAddLogEntry.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x140069C1C (PopDiagTraceFxComponentLogicalCondition.c)
 *     PopFxCompleteComponentActivation @ 0x140069C9C (PopFxCompleteComponentActivation.c)
 *     PopPluginDevicePower @ 0x14006A308 (PopPluginDevicePower.c)
 *     PopPepProcessEvent @ 0x14006A588 (PopPepProcessEvent.c)
 *     PopFxScheduleDeviceIdleTimer @ 0x14006B054 (PopFxScheduleDeviceIdleTimer.c)
 *     PopPluginComponentIdleState @ 0x14014A39C (PopPluginComponentIdleState.c)
 *     PopFxDeliverDevicePowerRequired @ 0x14014AA04 (PopFxDeliverDevicePowerRequired.c)
 *     PopDiagTraceFxComponentIdleState @ 0x14014B18C (PopDiagTraceFxComponentIdleState.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x140164134 (PopFxUpdateDeviceIdleTimer.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     PopFxBugCheck @ 0x14022A7A4 (PopFxBugCheck.c)
 *     PopFxCompleteComponentPerfState @ 0x14022A7C8 (PopFxCompleteComponentPerfState.c)
 *     PopPepCompleteComponentIdleState @ 0x14022E2E8 (PopPepCompleteComponentIdleState.c)
 *     PopDiagTraceFxPerfRequestProgress @ 0x140231960 (PopDiagTraceFxPerfRequestProgress.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x140237F5C (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x140237FF0 (PopFxAcpiForwardPepWorkRequest.c)
 */

__int64 __fastcall PopFxProcessWork(ULONG_PTR BugCheckParameter2, int *a2, __int64 a3)
{
  __int64 result; // rax
  int *v4; // rdi
  __int64 v6; // r9
  ULONG_PTR v7; // rbx
  __int64 v8; // rcx
  char v9; // bp
  KSPIN_LOCK *v10; // r14
  KIRQL v11; // r15
  char v12; // bl
  ULONG_PTR v13; // r14
  __int64 v14; // rbp
  __int64 v15; // rbx
  KIRQL v16; // r12
  __int64 v17; // r8
  void (__fastcall *v18)(_QWORD, _QWORD); // rax
  signed __int32 v19; // eax
  signed __int32 v20; // ett
  BOOLEAN v21; // al
  char v22; // al
  __int64 v23; // rbp
  __int64 v24; // r14
  __int64 v25; // rbx
  int v26; // ecx
  signed __int32 v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rbp
  __int64 v31; // rdx
  __int64 v32; // r14
  __int64 v33; // rsi
  signed __int32 v34; // ebx
  __int64 v35; // r9
  __int64 v36; // rbp
  unsigned int v37; // ebx
  __int64 v38; // rbx
  KIRQL v39; // bp
  __int64 v40; // rbx
  NTSTATUS v41; // esi
  __int64 v42; // rax
  __int64 v43; // rcx
  int RemlockSize; // [rsp+20h] [rbp-88h]
  _QWORD v45[4]; // [rsp+40h] [rbp-68h] BYREF
  NTSTATUS v46; // [rsp+60h] [rbp-48h]
  __int64 v47; // [rsp+C0h] [rbp+18h] BYREF

  result = *a2;
  v4 = a2;
  if ( (unsigned int)result > 8 )
    PopFxBugCheck(0x603uLL, BugCheckParameter2, *a2, 0LL);
  while ( 1 )
  {
    v6 = 1LL;
    if ( !*v4 )
    {
      v13 = *((_QWORD *)v4 + 1);
      if ( BugCheckParameter2 )
        PopFxBugCheck(0x603uLL, BugCheckParameter2, *v4, 0LL);
      v14 = (unsigned int)v4[4];
      if ( (unsigned int)v14 >= *(_DWORD *)(v13 + 628) )
        PopFxBugCheck(0x611uLL, 0LL, *((_QWORD *)v4 + 1), (unsigned int)v4[4]);
      _mm_lfence();
      v15 = *(_QWORD *)(*(_QWORD *)(v13 + 632) + 8 * v14);
      if ( *(_DWORD *)(v15 + 152) )
        PopFxBugCheck(0x615uLL, 0LL, (unsigned int)v4[4], 0LL);
      if ( *(int *)(v15 + 88) < 0 )
        PopFxBugCheck(0x615uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v13 + 632) + 8 * v14), 1uLL);
      if ( (*(_DWORD *)(v15 + 88) & 0x3FFFFFFF) == 0 )
        PopFxBugCheck(0x615uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v13 + 632) + 8 * v14), 2uLL);
      if ( *(_DWORD *)(v15 + 140) )
        PopFxBugCheck(0x615uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v13 + 632) + 8 * v14), 3uLL);
      v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v15 + 200));
      if ( *(int *)(v15 + 216) >= 1 )
      {
        *(_QWORD *)(v15 + 224) = MEMORY[0xFFFFF78000000008];
        *(_BYTE *)(v15 + 208) = 1;
      }
      KxReleaseSpinLock((PKSPIN_LOCK)(v15 + 200));
      __writecr8(v16);
      LOBYTE(v17) = 1;
      PopDiagTraceFxComponentLogicalCondition(*(_QWORD *)(v13 + 48), (unsigned int)v14, v17);
      v18 = *(void (__fastcall **)(_QWORD, _QWORD))(v13 + 112);
      if ( v18 )
        v18(*(_QWORD *)(v13 + 176), (unsigned int)v14);
      PopPepProcessEvent(*(_QWORD *)(v13 + 56), 200 * v14 + *(_QWORD *)(v13 + 56) + 176, 2, 3, RemlockSize, 0LL);
      result = PopFxCompleteComponentActivation(v13);
      v12 = 0;
      goto LABEL_17;
    }
    if ( *v4 == 1 )
    {
      v23 = *((_QWORD *)v4 + 1);
      if ( BugCheckParameter2 )
        PopFxBugCheck(0x603uLL, BugCheckParameter2, *v4, 0LL);
      v24 = (unsigned int)v4[4];
      if ( (unsigned int)v24 >= *(_DWORD *)(v23 + 628) )
        PopFxBugCheck(0x611uLL, 0LL, *((_QWORD *)v4 + 1), (unsigned int)v4[4]);
      _mm_lfence();
      v25 = *(_QWORD *)(*(_QWORD *)(v23 + 632) + 8 * v24);
      if ( (unsigned int)v4[5] >= *(_DWORD *)(v25 + 156) )
        PopFxBugCheck(0x616uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v23 + 632) + 8 * v24), 0LL);
      v26 = v4[5];
      if ( v26 == *(_DWORD *)(v25 + 152) )
        PopFxBugCheck(0x616uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v23 + 632) + 8 * v24), 1uLL);
      if ( v26 && *(_DWORD *)(v25 + 152) )
        PopFxBugCheck(0x616uLL, 0LL, *(_QWORD *)(*(_QWORD *)(v23 + 632) + 8 * v24), 2uLL);
      *(_DWORD *)(v25 + 152) = v4[5];
      *(_DWORD *)(v25 + 140) = 2;
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v23 + 128))(
        *(_QWORD *)(v23 + 176),
        (unsigned int)v24,
        (unsigned int)v4[5],
        1LL);
      v27 = _InterlockedExchangeAdd((volatile signed __int32 *)(v25 + 140), 0xFFFFFFFF);
      v28 = *(_QWORD *)(v23 + 48);
      if ( v27 == 1 )
      {
        PopDiagTraceFxComponentIdleState(v28, (unsigned int)v24, (unsigned int)v4[5]);
        result = PopPluginComponentIdleState(v23, (unsigned int)v24, v29, v4);
        v12 = result;
      }
      else
      {
        result = PopFxAddLogEntry(v28, (unsigned int)v24, 14LL);
        v12 = 0;
      }
      goto LABEL_17;
    }
    if ( *v4 != 2 )
      break;
    v7 = *((_QWORD *)v4 + 1);
    if ( BugCheckParameter2 )
      PopFxBugCheck(0x603uLL, BugCheckParameter2, *v4, 0LL);
    v8 = *(_QWORD *)(v7 + 48);
    v9 = *((_BYTE *)v4 + 16);
    if ( v8 )
    {
      LOBYTE(a3) = *((_BYTE *)v4 + 16);
      LOBYTE(a2) = 1;
      PopDiagTraceFxDevicePowerRequirement(v8, a2, a3);
    }
    v10 = (KSPIN_LOCK *)(v7 + 336);
    v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 336));
    if ( v9 )
    {
      *(_DWORD *)(v7 + 36) = 2;
      _m_prefetchw((const void *)(v7 + 32));
      v19 = *(_DWORD *)(v7 + 32);
      do
      {
        v20 = v19;
        v19 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 32), v19 & 0xFFFFFF7F, v19);
      }
      while ( v20 != v19 );
      if ( (v19 & 0x80u) == 0 )
        PopFxBugCheck(0x609uLL, 0LL, v7, 0LL);
      _m_prefetchw((const void *)(v7 + 32));
      if ( (_InterlockedOr((volatile signed __int32 *)(v7 + 32), 0) & 4) != 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)(v7 + 32), 0xFFFFFFFB);
        *(_DWORD *)(v7 + 40) = 0;
        v21 = KeCancelTimer((PKTIMER)(v7 + 344));
        _InterlockedDecrement((volatile signed __int32 *)(v7 + 36));
        if ( v21 )
        {
          v22 = PopFxCompleteDevicePowerRequired(v7, (__int64)v4);
LABEL_36:
          v12 = v22;
          goto LABEL_16;
        }
      }
      else if ( !*(_DWORD *)(v7 + 40) )
      {
        v22 = PopFxDeliverDevicePowerRequired(v7);
        goto LABEL_36;
      }
    }
    else
    {
      _m_prefetchw((const void *)(v7 + 32));
      if ( (_InterlockedOr((volatile signed __int32 *)(v7 + 32), 0) & 0x80u) != 0 )
        PopFxBugCheck(0x609uLL, 0LL, v7, 1uLL);
      PopPluginDevicePower(v7, 0LL, 0LL);
      _InterlockedOr((volatile signed __int32 *)(v7 + 32), 0x80u);
      if ( *(_QWORD *)(v7 + 144) )
      {
        if ( *(_DWORD *)(v7 + 36) || *(_DWORD *)(v7 + 40) || (*(_DWORD *)(v7 + 32) & 4) != 0 )
          PopFxBugCheck(0x610uLL, 0LL, v7, 0LL);
        *(_DWORD *)(v7 + 40) = 2;
        if ( !(unsigned __int8)PopFxScheduleDeviceIdleTimer(v7) )
        {
          PopDiagTraceFxDevicePowerRequirement(*(_QWORD *)(v7 + 48), 0LL, 0LL);
          (*(void (__fastcall **)(_QWORD))(v7 + 144))(*(_QWORD *)(v7 + 176));
          _InterlockedOr((volatile signed __int32 *)(v7 + 32), 0x40u);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 40), 0xFFFFFFFF) != 1 )
            PopFxAddLogEntry(*(_QWORD *)(v7 + 48), 0LL, 17LL);
        }
      }
      else
      {
        PopDiagTraceFxDevicePowerRequirement(*(_QWORD *)(v7 + 48), 0LL, 0LL);
        _InterlockedOr((volatile signed __int32 *)(v7 + 32), 0x40u);
      }
    }
    v12 = 0;
LABEL_16:
    KxReleaseSpinLock(v10);
    result = v11;
    __writecr8(v11);
LABEL_17:
    if ( !v12 )
      return result;
  }
  switch ( *v4 )
  {
    case 3:
      v40 = *((_QWORD *)v4 + 1);
      v41 = -1073741822;
      v47 = 0LL;
      if ( *(_QWORD *)(v40 + 152) )
      {
        v41 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v40 + 216), 0LL, File, 1u, 0x20u);
        if ( v41 >= 0 )
        {
          v41 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, __int64 *))(v40 + 152))(
                  *(_QWORD *)(v40 + 176),
                  *((_QWORD *)v4 + 2),
                  *((_QWORD *)v4 + 4),
                  *((_QWORD *)v4 + 5),
                  *((_QWORD *)v4 + 6),
                  *((_QWORD *)v4 + 7),
                  &v47);
          IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v40 + 216), 0LL, 0x20u);
        }
      }
      v42 = *(_QWORD *)(v40 + 56);
      v46 = v41;
      v43 = *(_QWORD *)(v42 + 32);
      v45[0] = *(_QWORD *)(v43 + 72);
      v45[1] = *((_QWORD *)v4 + 2);
      v45[2] = *((_QWORD *)v4 + 3);
      v45[3] = v47;
      return (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)(v43 + 64) + 96LL))(
               15LL,
               v45,
               a3,
               v6);
    case 4:
      v38 = *((_QWORD *)v4 + 1);
      v39 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v38 + 336));
      if ( *((_BYTE *)v4 + 16) )
        _InterlockedOr((volatile signed __int32 *)(v38 + 32), 8u);
      else
        _InterlockedAnd((volatile signed __int32 *)(v38 + 32), 0xFFFFFFF7);
      PopFxUpdateDeviceIdleTimer(v38);
      KxReleaseSpinLock((PKSPIN_LOCK)(v38 + 336));
      result = v39;
      __writecr8(v39);
      break;
    case 5:
      v36 = *((_QWORD *)v4 + 1);
      if ( !BugCheckParameter2 )
        PopFxBugCheck(0x603uLL, 0LL, *v4, 0LL);
      v37 = v4[4];
      if ( v37 >= *(_DWORD *)(v36 + 628) )
        PopFxBugCheck(0x611uLL, BugCheckParameter2, *((_QWORD *)v4 + 1), (unsigned int)v4[4]);
      PopFxAddLogEntry(*(_QWORD *)(v36 + 48), v37, 18LL);
      return PopPepCompleteComponentIdleState(*(_QWORD *)(v36 + 56), v37);
    case 6:
      v30 = *((_QWORD *)v4 + 1);
      if ( !BugCheckParameter2 )
        PopFxBugCheck(0x603uLL, 0LL, *v4, 0LL);
      v31 = (unsigned int)v4[4];
      if ( (unsigned int)v31 >= *(_DWORD *)(v30 + 628) )
        PopFxBugCheck(0x611uLL, BugCheckParameter2, *((_QWORD *)v4 + 1), (unsigned int)v4[4]);
      _mm_lfence();
      v32 = *(_QWORD *)(*(_QWORD *)(v30 + 632) + 8 * v31);
      v33 = *(_QWORD *)(v32 + 248);
      v34 = _InterlockedDecrement((volatile signed __int32 *)(v33 + 40));
      _InterlockedOr((volatile signed __int32 *)(v33 + 40), 0x20000000u);
      if ( (v34 & 0x8000000) == 0 )
        PopFxAddLogEntry(*(_QWORD *)(v30 + 48), v31, 20LL);
      PopDiagTraceFxPerfRequestProgress(v33, v34 & 7, a3, v6);
      LOBYTE(v35) = *((_BYTE *)v4 + 20);
      return PopFxCompleteComponentPerfState(v30, *(unsigned int *)(v32 + 16), *(_QWORD *)(v32 + 248), v35);
    case 7:
      return PopFxAcpiForwardPepAcpiNotifyRequest(*((_QWORD *)v4 + 1));
    case 8:
      return PopFxAcpiForwardPepWorkRequest(*((_QWORD *)v4 + 1));
  }
  return result;
}
