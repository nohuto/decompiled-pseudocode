/*
 * XREFs of VidSchiReportHwHang @ 0x1C002AF80
 * Callers:
 *     VidSchWaitForCompletionEvent @ 0x1C004FB1C (VidSchWaitForCompletionEvent.c)
 *     VidSchiCheckHwProgress @ 0x1C006B650 (VidSchiCheckHwProgress.c)
 * Callees:
 *     VidSchiClearFlipDevice @ 0x1C00022EC (VidSchiClearFlipDevice.c)
 *     VidSchiCheckFlipQueueTimeout @ 0x1C00096E0 (VidSchiCheckFlipQueueTimeout.c)
 *     VidSchiIncrementContextReference @ 0x1C00100A0 (VidSchiIncrementContextReference.c)
 *     VidSchiDecrementContextReference @ 0x1C0010100 (VidSchiDecrementContextReference.c)
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     VidSchiUnwaitAllContexts @ 0x1C0028350 (VidSchiUnwaitAllContexts.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C002AAF8 (VidSchiCompleteAllPendingCommand.c)
 *     VidSchiCheckGPUTimeout @ 0x1C00AA760 (VidSchiCheckGPUTimeout.c)
 *     VidSchiBlockDriverCallback @ 0x1C00AD7C0 (VidSchiBlockDriverCallback.c)
 *     VidSchiMarkTdrFaultingDevice @ 0x1C00AD8B8 (VidSchiMarkTdrFaultingDevice.c)
 */

__int64 __fastcall VidSchiReportHwHang(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v8; // r12d
  __int64 v9; // rdx
  __int64 v10; // rcx
  PVOID *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  signed __int64 v16; // rsi
  __int64 *v17; // r14
  __int64 v18; // r14
  signed __int64 v19; // rbx
  signed __int64 v20; // r13
  __int64 v21; // rdx
  __int64 v22; // r8
  signed __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 TimeIncrement; // r12
  __int64 v28; // r14
  LARGE_INTEGER v29; // r13
  union _LARGE_INTEGER v30; // rdi
  struct _TDR_RECOVERY_CONTEXT *RecoveryContext; // rax
  __int64 v32; // r15
  __int64 v33; // rdx
  __int64 v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  union _LARGE_INTEGER *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // rbx
  int v42; // eax
  __int64 v43; // rax
  struct _VIDSCH_CONTEXT *v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  int v52; // eax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rsi
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  unsigned int v64; // ebx
  __int64 v65; // rdx
  __int64 v66; // rdx
  __int64 v67; // rax
  unsigned int v68; // ebx
  __int64 v69; // rax
  signed __int32 v70[8]; // [rsp+0h] [rbp-99h] BYREF
  unsigned int v71; // [rsp+20h] [rbp-79h] BYREF
  signed __int64 v72; // [rsp+28h] [rbp-71h]
  int v73; // [rsp+30h] [rbp-69h]
  struct _VIDSCH_CONTEXT *v74; // [rsp+38h] [rbp-61h]
  int v75; // [rsp+40h] [rbp-59h]
  __int64 v76; // [rsp+48h] [rbp-51h]
  __int64 v77; // [rsp+50h] [rbp-49h]
  __int64 v78; // [rsp+58h] [rbp-41h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+60h] [rbp-39h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-31h] BYREF
  __int64 v81; // [rsp+80h] [rbp-19h] BYREF
  int v82; // [rsp+88h] [rbp-11h]
  PVOID BackTrace[5]; // [rsp+90h] [rbp-9h] BYREF

  v71 = -1;
  v75 = a3;
  v78 = a1;
  v74 = 0LL;
  v77 = 0LL;
  v72 = 0LL;
  v76 = 0LL;
  v73 = 0;
  v8 = 0;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(1u, 5u, BackTrace, 0LL);
  v11 = (PVOID *)WdLogNewEntry5_WdWarning(v10, v9);
  v11[3] = BackTrace[0];
  v11[4] = BackTrace[1];
  v11[5] = BackTrace[2];
  v11[6] = BackTrace[3];
  v11[7] = BackTrace[4];
  WdLogEvent5_WdWarning(v11);
  if ( *(_QWORD *)(a1 + 2824) )
  {
    v14 = WdLogNewEntry5_WdWarning(v13, v12);
    *(_QWORD *)(v14 + 24) = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(v14 + 32) = *(_QWORD *)(a1 + 2824);
    WdLogEvent5_WdWarning(v14);
    return 1LL;
  }
  if ( ((a3 - 1) & 0xFFFFFFF6) != 0 )
  {
    if ( a3 != 2 )
    {
      if ( a3 == 3 )
      {
        KeFlushQueuedDpcs();
        if ( !(unsigned int)VidSchiCheckFlipQueueTimeout(a1, 0LL, &v71) )
          return 0LL;
        if ( v71 < 0x10 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1880), &LockHandle);
          v25 = *(_QWORD *)(a1 + 8LL * v71 + 2992);
          if ( v25 )
            v73 = *(_DWORD *)(v25 + 46928);
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
      }
      v16 = v72;
      goto LABEL_32;
    }
  }
  else if ( a3 != 2 )
  {
    if ( a4 )
      *(_QWORD *)(a1 + 2832) = a4;
    else
      *(_QWORD *)(a1 + 2832) = *(_QWORD *)(a1 + 416);
    v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 2832) + 96LL), 0LL, 0LL);
    goto LABEL_23;
  }
  KeFlushQueuedDpcs();
  if ( !*(_DWORD *)(a1 + 952) )
    return 0LL;
  v17 = (__int64 *)(a1 + 2832);
  if ( a4 )
  {
    *v17 = a4;
  }
  else if ( !(unsigned int)VidSchiCheckGPUTimeout(a1, 0LL, a1 + 2832) )
  {
    return 0LL;
  }
  v18 = *v17;
  if ( !*(_DWORD *)(v18 + 2768) )
    return 0LL;
  v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 96), 0LL, 0LL);
  v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 120), 0LL, 0LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1880), &LockHandle);
  v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 96), 0LL, 0LL);
  v23 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 120), 0LL, 0LL);
  if ( v19 == v16 && v20 == v23 )
  {
    v76 = *(_QWORD *)(v18 + 40);
    v24 = *(_QWORD *)(v18 + 8LL * *(unsigned int *)(v18 + 1552) + 1560);
    v74 = (struct _VIDSCH_CONTEXT *)v24;
    if ( v24 )
    {
      VidSchiIncrementContextReference(v24, v21, v22);
      v77 = *(_QWORD *)(v24 + 104);
    }
    ++*(_DWORD *)(v18 + 484);
  }
  else
  {
    v16 = v72;
    v8 = 1;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_23:
  if ( v8 )
    return 0LL;
LABEL_32:
  ++*(_DWORD *)(a1 + 2840);
  LODWORD(v72) = 0;
  v26 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  v28 = v26 - a2;
  v29 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v30.QuadPart = MEMORY[0xFFFFF78000000014];
  RecoveryContext = TdrCreateRecoveryContext();
  v32 = v78;
  *(_QWORD *)(v78 + 2824) = RecoveryContext;
  v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v33);
  v35[3] = *(_QWORD *)(v32 + 16);
  v35[4] = v26;
  v35[5] = TimeIncrement;
  v35[6] = KeGetCurrentThread();
  v35[7] = *(_QWORD *)(v32 + 2824);
  WdLogEvent5_WdWarning(v35);
  v38 = (union _LARGE_INTEGER *)WdLogNewEntry5_WdWarning(v37, v36);
  v38[3] = *(union _LARGE_INTEGER *)(v32 + 16);
  v38[4] = v29;
  v38[5] = PerformanceFrequency;
  v38[6] = v30;
  WdLogEvent5_WdWarning(v38);
  v41 = *(_QWORD *)(v32 + 2824);
  if ( v41 )
  {
    v42 = v75;
    *(_QWORD *)(v41 + 8) = v32 + 2820;
    *(_DWORD *)(v41 + 16) = v42;
    if ( !*(_QWORD *)(v41 + 32) )
    {
      v43 = *(_QWORD *)(v32 + 16);
      *(_QWORD *)(v41 + 32) = v43;
      _InterlockedIncrement64((volatile signed __int64 *)(v43 + 24));
      *(_QWORD *)(v41 + 40) = -1LL;
    }
    v44 = v74;
    if ( !*(_QWORD *)(v41 + 48) && v74 )
    {
      VidSchiIncrementContextReference((__int64)v74, v39, v40);
      *(_QWORD *)(v41 + 48) = v44;
    }
    if ( v77 )
    {
      v45 = *(_QWORD *)(v77 + 40);
      if ( v45 )
      {
        if ( *(_QWORD *)(v45 + 8) )
        {
          *(_QWORD *)(v41 + 2808) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v44 + 13) + 40LL) + 8LL) + 56LL);
          v46 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v44 + 13) + 40LL) + 8LL) + 64LL);
          if ( v46 )
            v47 = *(_QWORD *)(v46 + 80);
          else
            v47 = 0LL;
          *(_QWORD *)(v41 + 96) = v47;
        }
      }
    }
    v48 = *(_QWORD *)(v41 + 32);
    *(_DWORD *)(v41 + 148) = 28682;
    *(_DWORD *)(v41 + 152) = DpiGetDriverVersion(*(_QWORD *)(v48 + 192));
    *(_QWORD *)(v41 + 24) = v28;
    v51 = *(_QWORD *)(v32 + 2832);
    if ( v51 )
      v52 = *(unsigned __int16 *)(v51 + 4);
    else
      v52 = 0;
    *(_DWORD *)(v41 + 56) = v52;
    *(_QWORD *)(v41 + 72) = v76;
    v53 = v71;
    *(_QWORD *)(v41 + 64) = v16;
    *(_DWORD *)(v41 + 80) = v53;
    if ( (_DWORD)v53 != -1 )
    {
      v50 = (unsigned int)v53;
      v54 = *(_QWORD *)(v32 + 8 * v53 + 2992);
      if ( v54 )
      {
        v55 = *(_QWORD *)(v54 + 16);
        if ( v55 )
        {
          v56 = *(_QWORD *)(v55 + 40);
          if ( v56 )
          {
            *(_QWORD *)(v41 + 2808) = *(_QWORD *)(v56 + 2632);
            v50 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v32 + 8 * v50 + 2992) + 16LL) + 40LL) + 2640LL);
            *(_QWORD *)(v41 + 96) = v50;
          }
        }
      }
    }
    v57 = v73;
    *(_DWORD *)(v41 + 84) = 0;
    *(_DWORD *)(v41 + 88) = v57;
    if ( (_DWORD)v57 )
    {
      v58 = WdLogNewEntry5_WdWarning(v50, v49);
      *(_QWORD *)(v58 + 24) = *(_QWORD *)(v32 + 16);
      *(_QWORD *)(v58 + 32) = v57;
      WdLogEvent5_WdWarning(v58);
    }
    v59 = *(_QWORD *)(v41 + 32);
    v60 = *(_QWORD *)(v59 + 456);
    if ( !v60 )
      v60 = *(_QWORD *)(v59 + 312);
    *(_QWORD *)(v41 + 104) = v60;
    if ( TdrIsRecoveryRequired((struct _TDR_RECOVERY_CONTEXT *)v41) )
    {
      v63 = WdLogNewEntry5_WdWarning(v62, v61);
      *(_QWORD *)(v63 + 24) = *(_QWORD *)(v32 + 16);
      *(_QWORD *)(v63 + 32) = *(_QWORD *)(v32 + 2824);
      WdLogEvent5_WdWarning(v63);
      *(_DWORD *)(v32 + 2820) = 1;
      VidSchiBlockDriverCallback(v32);
      *(_DWORD *)(v32 + 36) = 23;
      *(_QWORD *)(v32 + 408) = 0LL;
      if ( v44 )
        VidSchiMarkTdrFaultingDevice(*((_QWORD *)v44 + 13));
      if ( (unsigned int)DpiGetDriverVersion(*(_QWORD *)(*(_QWORD *)(v32 + 16) + 192LL)) >= 0x6002 )
      {
        v64 = 0;
        if ( *(_DWORD *)(v32 + 56) )
        {
          while ( 1 )
          {
            v65 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v32 + 232) + 8LL * v64) + 96LL);
            if ( *(_DWORD *)(v65 + 2768) )
            {
              v66 = *(unsigned __int16 *)(v65 + 4);
              v81 = 0LL;
              v82 = 0;
              HIDWORD(v81) = *(unsigned __int16 *)(*(_QWORD *)(v32 + 8 * v66 + 416) + 6LL);
              LODWORD(v81) = *(unsigned __int16 *)(*(_QWORD *)(v32 + 8 * v66 + 416) + 8LL);
              if ( ((int (__fastcall *)(_QWORD, __int64 *))DxgCoreInterface[31])(*(_QWORD *)(v32 + 8), &v81) < 0 )
                break;
            }
            if ( ++v64 >= *(_DWORD *)(v32 + 56) )
              goto LABEL_67;
          }
          *(_BYTE *)(v32 + 2844) |= 4u;
        }
      }
LABEL_67:
      v67 = *(_QWORD *)(v32 + 16);
      *(_BYTE *)(v67 + 2245) = 0;
      _InterlockedOr(v70, 0);
      *(_BYTE *)(v67 + 2244) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v32 + 8) + 440LL) + 6496LL) = 1;
      VidSchiCompleteAllPendingCommand(v32);
      VidSchiUnwaitAllContexts(v32);
      VidSchiClearFlipDevice((struct _VIDSCH_GLOBAL *)v32, 0LL, 9);
      v68 = 1;
      goto LABEL_70;
    }
    v69 = WdLogNewEntry5_WdWarning(v62, v61);
    *(_QWORD *)(v69 + 24) = *(_QWORD *)(v32 + 16);
    WdLogEvent5_WdWarning(v69);
    TdrCompleteRecoveryContext((struct _TDR_RECOVERY_CONTEXT *)v41, 0, 1);
    *(_QWORD *)(v32 + 2824) = 0LL;
  }
  v68 = v72;
LABEL_70:
  if ( v74 )
    VidSchiDecrementContextReference(v74, 0);
  return v68;
}
