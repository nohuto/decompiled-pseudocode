/*
 * XREFs of DpiMiracastStopMiracastSessionSync @ 0x1C003EF40
 * Callers:
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x1C0001320 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     DpiMiracastTargetDeviceChange @ 0x1C003F4D0 (DpiMiracastTargetDeviceChange.c)
 *     DxgkMiracastStopMiracastSession @ 0x1C004112C (DxgkMiracastStopMiracastSession.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C00A6600 (DxgkMiracastStopAllMiracastSessions.c)
 *     DpiFdoStopMiracastSession @ 0x1C0102E30 (DpiFdoStopMiracastSession.c)
 *     DpiMiracastStopMiracastSessionWork @ 0x1C01C85E0 (DpiMiracastStopMiracastSessionWork.c)
 *     DxgkHandleMiracastEscape @ 0x1C01C8674 (DxgkHandleMiracastEscape.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C00012A0 (DpiCheckForOutstandingD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00013AC (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C003ED50 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastTearDownAssociation @ 0x1C003F900 (DpiMiracastTearDownAssociation.c)
 *     Template_pxzqq @ 0x1C004125C (Template_pxzqq.c)
 *     Template_qqqz @ 0x1C0041340 (Template_qqqz.c)
 *     DxgkWriteDiagEntry @ 0x1C00F2CA0 (DxgkWriteDiagEntry.c)
 *     DpiMiracastBroadcastDeviceStateChange @ 0x1C01C6E98 (DpiMiracastBroadcastDeviceStateChange.c)
 *     DpiMiracastSendAsyncUserModeRequest @ 0x1C01C7F78 (DpiMiracastSendAsyncUserModeRequest.c)
 */

__int64 __fastcall DpiMiracastStopMiracastSessionSync(
        char *P,
        char a2,
        union _LARGE_INTEGER *a3,
        struct _KEVENT *a4,
        unsigned int a5,
        int a6)
{
  int v6; // r13d
  char v7; // r12
  __int64 v10; // rax
  int v11; // edi
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // r8
  IRP *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int v19; // r14d
  int v20; // eax
  __int64 v21; // rcx
  int v22; // edx
  struct _KEVENT *v23; // rcx
  struct _KEVENT *v24; // rcx
  struct _KEVENT *v25; // rcx
  __int64 v26; // rdx
  int v27; // edi
  __int64 v28; // rcx
  __int64 v29; // r12
  __int64 v30; // rax
  int v31; // ecx
  NTSTATUS v32; // eax
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-108h]
  char DeviceObject; // [rsp+60h] [rbp-C8h] BYREF
  char v40; // [rsp+61h] [rbp-C7h]
  char v41; // [rsp+62h] [rbp-C6h]
  int v42; // [rsp+64h] [rbp-C4h]
  union _LARGE_INTEGER Interval; // [rsp+68h] [rbp-C0h] BYREF
  __int64 v44; // [rsp+70h] [rbp-B8h]
  PLARGE_INTEGER v45; // [rsp+78h] [rbp-B0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-A8h] BYREF
  _QWORD v47[8]; // [rsp+A0h] [rbp-88h] BYREF

  v45 = a3;
  LOBYTE(v6) = 1;
  DeviceObject = 0;
  v7 = 0;
  v42 = v6;
  v41 = a2;
  _InterlockedIncrement((volatile signed __int32 *)P + 6);
  _InterlockedXor((volatile signed __int32 *)P + 7, (unsigned int)DpiMiracastStopSessionRequestCallback);
  if ( a2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)P + 6);
    _InterlockedXor((volatile signed __int32 *)P + 7, (unsigned int)DpiMiracastStopMiracastSessionSync);
  }
  AcquireMiniportListMutex();
  v10 = *((_QWORD *)P + 54);
  if ( !v10 )
  {
    v11 = -2147483642;
    v12 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v12 + 24) = P;
    WdLogEvent5_WdEvent(v12);
LABEL_49:
    DpiMiracastReleaseMiracastDeviceContext((int *)P, (__int64)DpiMiracastStopSessionRequestCallback);
    goto LABEL_50;
  }
  v44 = *(_QWORD *)(v10 + 64);
  v13 = v44;
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v44 + 483) )
    DpiCheckForOutstandingD3Requests(v44);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v44 + 168), 1u);
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(P + 32);
  v16 = (IRP *)*((unsigned int *)P + 102);
  *((_QWORD *)P + 11) = KeGetCurrentThread();
  if ( (unsigned int)((_DWORD)v16 - 1) <= 1 )
  {
    if ( (_DWORD)v16 == 1 )
    {
      v16 = (IRP *)*((_QWORD *)P + 53);
      if ( v16 )
        IoCancelIrp(v16);
    }
    v19 = 8;
    v20 = Microsoft_Windows_DxgKrnlEnableBits;
    if ( !P[591] )
      v19 = a5;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
    {
      Template_pxzqq(
        v16,
        &EventMiracastStopMiracastSession,
        v15,
        *(_QWORD *)(v13 + 48),
        *((_QWORD *)P + 12),
        *((_QWORD *)P + 19),
        v19,
        a6);
      v20 = Microsoft_Windows_DxgKrnlEnableBits;
    }
    if ( v19 <= 8 && (v21 = 374LL, _bittest((const int *)&v21, v19))
      || (v21 = v19 - 133, (unsigned int)v21 <= 0xB) && (v22 = 2065, _bittest(&v22, v21)) )
    {
      if ( (v20 & 0x800000) != 0 )
        Template_qqqz(
          v21,
          &EventMiracastStopMiracastSessionAbnormal,
          v15,
          v19,
          a6,
          *((_DWORD *)P + 50),
          *((_QWORD *)P + 44));
    }
    *((_DWORD *)P + 103) = *((_DWORD *)P + 102);
    *((_DWORD *)P + 102) = 3;
    *((_DWORD *)P + 164) = v19;
    *((_DWORD *)P + 166) = a6;
    v40 = 1;
    *((_DWORD *)P + 104) = 2;
    DpiMiracastBroadcastDeviceStateChange(P);
    v23 = (struct _KEVENT *)*((_QWORD *)P + 59);
    if ( v23 )
    {
      KeSetEvent(v23, 0, 0);
      ObfDereferenceObject(*((PVOID *)P + 59));
      *((_QWORD *)P + 59) = 0LL;
    }
    v24 = (struct _KEVENT *)*((_QWORD *)P + 58);
    *((_QWORD *)P + 59) = a4;
    KeClearEvent(v24);
    if ( a4 )
      KeClearEvent(a4);
    a4 = 0LL;
    KeAcquireInStackQueuedSpinLock(&qword_1C006FD58, &LockHandle);
    v25 = (struct _KEVENT *)*((_QWORD *)P + 62);
    if ( v25 )
    {
      KeSetEvent(v25, 0, 0);
      *((_QWORD *)P + 62) = 0LL;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v27 = 3;
    do
    {
      if ( v27 != 3 )
      {
        Interval.QuadPart = -10000LL;
        KeDelayExecutionThread(0, 0, &Interval);
      }
      LODWORD(Timeout) = 0;
      v29 = (int)DpiMiracastSendAsyncUserModeRequest(
                   (int)P,
                   v26,
                   2295816,
                   0,
                   (size_t)Timeout,
                   0LL,
                   0,
                   (__int64)DpiMiracastStopSessionRequestCallback,
                   (__int64)P,
                   (PDEVICE_OBJECT)&DeviceObject,
                   0LL);
      if ( DeviceObject )
        break;
      --v27;
    }
    while ( v27 );
    v13 = v44;
    if ( (int)v29 >= 0 )
    {
      v31 = (unsigned __int8)v42;
      if ( DeviceObject )
        v31 = 0;
      v42 = v31;
      v11 = 2;
      memset(v47, 0, sizeof(v47));
      v47[0] = 0x4000000006LL;
      memset(&v47[1], 0, 36);
      LODWORD(v47[6]) = 71;
      HIDWORD(v47[6]) = v19;
      LODWORD(v47[7]) = 2;
      HIDWORD(v47[7]) = a6;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v47);
    }
    else
    {
      v11 = -2147483647;
      v30 = WdLogNewEntry5_WdError(v28, v26);
      *(_QWORD *)(v30 + 24) = v29;
      WdLogEvent5_WdError(v30);
    }
    LOBYTE(v6) = v42;
    v7 = v40;
  }
  else if ( (_DWORD)v16 == 3 )
  {
    v11 = 2;
    v17 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v17 + 24) = P;
    WdLogEvent5_WdEvent(v17);
    if ( a4 && !*((_QWORD *)P + 59) )
    {
      KeClearEvent(a4);
      *((_QWORD *)P + 59) = a4;
      a4 = 0LL;
    }
  }
  else
  {
    v11 = -2147483641;
    v18 = WdLogNewEntry5_WdError(v16, v14);
    *(_QWORD *)(v18 + 24) = P;
    *(_QWORD *)(v18 + 32) = -2147483641LL;
    WdLogEvent5_WdError(v18);
  }
  if ( v11 < 0 && v7 )
    DpiMiracastTearDownAssociation(P, 1);
  *((_QWORD *)P + 11) = 0LL;
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(P + 32);
  if ( *(_BYTE *)(v13 + 483) )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v13 + 24) + 64LL) + 3888LL));
  ExReleaseResourceLite(*(PERESOURCE *)(v13 + 168));
  KeLeaveCriticalRegion();
  if ( (_BYTE)v6 )
    goto LABEL_49;
LABEL_50:
  _InterlockedExchange64(&qword_1C006FA08, 0LL);
  KeReleaseMutex(Mutex, 0);
  if ( v41 )
  {
    if ( v11 == 2 )
    {
      v32 = KeWaitForSingleObject(*((PVOID *)P + 58), Executive, 0, 0, v45);
      v33 = v32;
      if ( v32 )
      {
        DpiMiracastTearDownAssociation(P, 0);
        v36 = WdLogNewEntry5_WdError(v35, v34);
        *(_QWORD *)(v36 + 24) = v33;
        WdLogEvent5_WdError(v36);
      }
      v11 = *((_DWORD *)P + 104);
    }
    DpiMiracastReleaseMiracastDeviceContext((int *)P, (__int64)DpiMiracastStopMiracastSessionSync);
  }
  if ( a4 )
  {
    KeSetEvent(a4, 0, 0);
    ObfDereferenceObject(a4);
  }
  return (unsigned int)v11;
}
