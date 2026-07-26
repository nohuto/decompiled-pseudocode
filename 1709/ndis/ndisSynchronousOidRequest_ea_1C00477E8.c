/*
 * XREFs of ndisSynchronousOidRequest @ 0x1C00477E8
 * Callers:
 *     NdisFSynchronousOidRequest @ 0x1C0042680 (NdisFSynchronousOidRequest.c)
 *     NdisSynchronousOidRequest @ 0x1C0042980 (NdisSynchronousOidRequest.c)
 *     ?ndisEmulateRSSv1Dpc@@YAXPEAU_KDPC@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_RSS_DPC_WORKER_CONTEXT@@@Z @ 0x1C007A190 (-ndisEmulateRSSv1Dpc@@YAXPEAU_KDPC@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_R.c)
 *     ?ndisExecuteRSSv2DirectOid@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_RSS_DPC_WORKER_CONTEXT@@U_PROCESSOR_NUMBER@@@Z @ 0x1C007A270 (-ndisExecuteRSSv2DirectOid@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_RSS_DP.c)
 * Callees:
 *     ndisDereferenceRef @ 0x1C0004F50 (ndisDereferenceRef.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     ?Pop@?$KStackStorage@UNDIS_SYNCHRONOUS_OID_CALLFRAME@@$06@@QEAAPEAUNDIS_SYNCHRONOUS_OID_CALLFRAME@@XZ @ 0x1C00420A0 (-Pop@-$KStackStorage@UNDIS_SYNCHRONOUS_OID_CALLFRAME@@$06@@QEAAPEAUNDIS_SYNCHRONOUS_OID_CALLFRAM.c)
 *     ?ndisVerifySynchronousOidAfterCompletion@@YAXPEAU_NDIS_OID_REQUEST@@HPEAU_NDIS_OBJECT_HEADER@@@Z @ 0x1C004232C (-ndisVerifySynchronousOidAfterCompletion@@YAXPEAU_NDIS_OID_REQUEST@@HPEAU_NDIS_OBJECT_HEADER@@@Z.c)
 *     ndisBugCheckEx @ 0x1C004F1C8 (ndisBugCheckEx.c)
 *     ndisFInvokeSynchronousOidRequestComplete @ 0x1C00596D0 (ndisFInvokeSynchronousOidRequestComplete.c)
 *     ndisMInvokeSynchronousOidRequest @ 0x1C005FE98 (ndisMInvokeSynchronousOidRequest.c)
 *     ?ndisRssV2UpdateIndirectionTable@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C007B0DC (-ndisRssV2UpdateIndirectionTable@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

__int64 __fastcall ndisSynchronousOidRequest(
        ULONG_PTR BugCheckParameter2,
        struct _NDIS_MINIPORT_BLOCK *a2,
        __int64 a3,
        ULONG_PTR a4)
{
  bool v4; // zf
  int v7; // eax
  KIRQL v8; // al
  _LIST_ENTRY *Flink; // rdx
  KIRQL v10; // al
  KIRQL v11; // bl
  ULONG_PTR *v12; // rax
  ULONG_PTR v13; // rbx
  KIRQL v14; // al
  struct _KTHREAD *v15; // rcx
  KIRQL v16; // bl
  struct _KEVENT *AllDirectRequestsCompletedEvent; // rcx
  _LIST_ENTRY *v18; // rax
  _LIST_ENTRY *v19; // rdx
  PVOID v20; // rcx
  unsigned int v22; // [rsp+20h] [rbp-A9h]
  _LIST_ENTRY *v23; // [rsp+28h] [rbp-A1h] BYREF
  _LIST_ENTRY *p_SynchronousOidCalls; // [rsp+30h] [rbp-99h]
  ULONG_PTR v25; // [rsp+38h] [rbp-91h]
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-89h]
  LARGE_INTEGER PerformanceCounter; // [rsp+48h] [rbp-81h]
  _QWORD v28[15]; // [rsp+60h] [rbp-69h] BYREF
  PVOID P; // [rsp+D8h] [rbp+Fh]
  __int64 v30; // [rsp+E0h] [rbp+17h]

  v4 = *(_BYTE *)a4 == 0x96;
  v28[0] = 0LL;
  P = v28;
  v30 = 0LL;
  if ( !v4
    || *(_BYTE *)(a4 + 1) < 2u
    || *(_WORD *)(a4 + 2) < 0xF8u
    || *(_DWORD *)(a4 + 12)
    || *(_QWORD *)(a4 + 16)
    || (v7 = *(_DWORD *)(a4 + 4), v7 < 0)
    || v7 > 1 && v7 != 12 )
  {
    ndisBugCheckEx(0x21uLL, BugCheckParameter2, a4, 0LL);
  }
  v25 = a4;
  CurrentThread = KeGetCurrentThread();
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v8 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
  a2->MiniportThread = KeGetCurrentThread();
  a2->LockDbg = 2296272;
  Flink = a2->SynchronousOidCalls.Flink;
  if ( Flink->Blink != &a2->SynchronousOidCalls )
    __fastfail(3u);
  v23 = a2->SynchronousOidCalls.Flink;
  p_SynchronousOidCalls = &a2->SynchronousOidCalls;
  Flink->Blink = (_LIST_ENTRY *)&v23;
  a2->SynchronousOidCalls.Flink = (_LIST_ENTRY *)&v23;
  ++a2->DirectOidRequestCount;
  a2->MiniportThread = 0LL;
  a2->LockDbg = 0;
  KeReleaseSpinLock(&a2->Lock, v8);
  if ( a2->DriverHandle->MiniportDriverCharacteristics.SynchronousOidRequestHandler )
  {
    v22 = ndisMInvokeSynchronousOidRequest((ULONG_PTR)a2, a4);
    ndisVerifySynchronousOidAfterCompletion(a4, v22, &a2->Header);
    if ( *(_DWORD *)(a4 + 4) == 12 && *(_DWORD *)(a4 + 32) == 66240 && (*(_DWORD *)(a4 + 88) & 0x1000000) == 0 && !v22 )
    {
      v10 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
      a2->MiniportThread = KeGetCurrentThread();
      v11 = v10;
      a2->LockDbg = 2296353;
      ndisRssV2UpdateIndirectionTable(a2, (struct _NDIS_OID_REQUEST *)a4);
      a2->MiniportThread = 0LL;
      a2->LockDbg = 0;
      KeReleaseSpinLock(&a2->Lock, v11);
    }
  }
  else
  {
    v22 = -1073741637;
  }
  while ( 1 )
  {
    v12 = (ULONG_PTR *)KStackStorage<NDIS_SYNCHRONOUS_OID_CALLFRAME,7>::Pop((__int64)v28);
    if ( !v12 )
      break;
    v13 = *v12;
    if ( *(_QWORD *)(*(_QWORD *)(*v12 + 16) + 328LL) )
    {
      ndisFInvokeSynchronousOidRequestComplete(*v12, a4);
      ndisVerifySynchronousOidAfterCompletion(a4, v22, (struct _NDIS_OBJECT_HEADER *)v13);
    }
    ndisDereferenceRef((PKSPIN_LOCK)(v13 + 320));
  }
  v14 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
  v15 = KeGetCurrentThread();
  v16 = v14;
  v4 = a2->DirectOidRequestCount-- == 1;
  a2->MiniportThread = v15;
  a2->LockDbg = 2296374;
  if ( v4 )
  {
    AllDirectRequestsCompletedEvent = a2->AllDirectRequestsCompletedEvent;
    if ( AllDirectRequestsCompletedEvent )
    {
      KeSetEvent(AllDirectRequestsCompletedEvent, 0, 0);
      a2->AllDirectRequestsCompletedEvent = 0LL;
    }
  }
  v18 = v23;
  v19 = p_SynchronousOidCalls;
  if ( (_LIST_ENTRY **)v23->Blink != &v23 || (_LIST_ENTRY **)p_SynchronousOidCalls->Flink != &v23 )
    __fastfail(3u);
  p_SynchronousOidCalls->Flink = v23;
  v18->Blink = v19;
  a2->MiniportThread = 0LL;
  a2->LockDbg = 0;
  KeReleaseSpinLock(&a2->Lock, v16);
  while ( 1 )
  {
    v20 = P;
    if ( !*(_QWORD *)P )
      break;
    P = *(PVOID *)P;
    ExFreePoolWithTag(v20, 0x4253444Eu);
  }
  return v22;
}
