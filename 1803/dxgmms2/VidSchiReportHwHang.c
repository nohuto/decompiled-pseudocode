/*
 * XREFs of VidSchiReportHwHang @ 0x1C0034304
 * Callers:
 *     VidSchWaitForCompletionEvent @ 0x1C0074A5C (VidSchWaitForCompletionEvent.c)
 *     VidSchiCheckHwProgress @ 0x1C0077190 (VidSchiCheckHwProgress.c)
 * Callees:
 *     VidSchiCheckFlipQueueTimeout @ 0x1C000B270 (VidSchiCheckFlipQueueTimeout.c)
 *     VidSchiIncrementContextReference @ 0x1C0012330 (VidSchiIncrementContextReference.c)
 *     VidSchiDecrementContextReference @ 0x1C0012890 (VidSchiDecrementContextReference.c)
 *     VidSchiClearFlipDevice @ 0x1C0012C3C (VidSchiClearFlipDevice.c)
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     VidSchiUnwaitAllContexts @ 0x1C002D4E4 (VidSchiUnwaitAllContexts.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C0033E60 (VidSchiCompleteAllPendingCommand.c)
 *     VidSchiCheckGPUTimeout @ 0x1C00BBA48 (VidSchiCheckGPUTimeout.c)
 *     VidSchiBlockDriverCallback @ 0x1C00BFB00 (VidSchiBlockDriverCallback.c)
 *     VidSchiMarkTdrFaultingDevice @ 0x1C00BFB90 (VidSchiMarkTdrFaultingDevice.c)
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
  _QWORD *v16; // r8
  __int64 v17; // r14
  signed __int64 v18; // rbx
  signed __int64 v19; // r13
  __int64 v20; // rdx
  __int64 v21; // r8
  signed __int64 v22; // rsi
  signed __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 TimeIncrement; // r12
  __int64 v28; // r14
  LARGE_INTEGER v29; // r13
  union _LARGE_INTEGER v30; // rdi
  struct _TDR_RECOVERY_CONTEXT *RecoveryContext; // rax
  struct _VIDSCH_GLOBAL *v32; // r15
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
  struct _VIDSCH_GLOBAL *v78; // [rsp+58h] [rbp-41h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+60h] [rbp-39h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-31h] BYREF
  __int64 v81; // [rsp+80h] [rbp-19h] BYREF
  int v82; // [rsp+88h] [rbp-11h]
  PVOID BackTrace[5]; // [rsp+90h] [rbp-9h] BYREF

  v71 = -1;
  v75 = a3;
  v78 = (struct _VIDSCH_GLOBAL *)a1;
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
  if ( *(_QWORD *)(a1 + 2864) )
  {
    v14 = WdLogNewEntry5_WdWarning(v13, v12);
    *(_QWORD *)(v14 + 24) = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(v14 + 32) = *(_QWORD *)(a1 + 2864);
    WdLogEvent5_WdWarning(v14);
    return 1LL;
  }
  if ( a3 == 1 || (unsigned int)(a3 - 9) <= 2 )
  {
    if ( !a4 )
      a4 = *(_QWORD *)(a1 + 440);
    *(_QWORD *)(a1 + 2872) = a4;
    v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(a4 + 96), 0LL, 0LL);
LABEL_29:
    if ( v8 )
      return 0LL;
    goto LABEL_30;
  }
  if ( a3 == 2 )
  {
    KeFlushQueuedDpcs();
    if ( !*(_DWORD *)(a1 + 968) )
      return 0LL;
    v16 = (_QWORD *)(a1 + 2872);
    if ( a4 )
    {
      *v16 = a4;
    }
    else if ( !(unsigned int)VidSchiCheckGPUTimeout(a1, 0LL, v16) )
    {
      return 0LL;
    }
    v17 = *(_QWORD *)(a1 + 2872);
    if ( !*(_DWORD *)(v17 + 2824) )
      return 0LL;
    v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 96), 0LL, 0LL);
    v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 120), 0LL, 0LL);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1904), &LockHandle);
    v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 96), 0LL, 0LL);
    v23 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 120), 0LL, 0LL);
    if ( v18 == v22 && v19 == v23 )
    {
      v76 = *(_QWORD *)(v17 + 40);
      v24 = *(_QWORD *)(v17 + 8LL * *(unsigned int *)(v17 + 1552) + 1560);
      v74 = (struct _VIDSCH_CONTEXT *)v24;
      if ( v24 )
      {
        VidSchiIncrementContextReference(v24, v20, v21);
        v77 = *(_QWORD *)(v24 + 104);
      }
      ++*(_DWORD *)(v17 + 484);
    }
    else
    {
      v22 = v72;
      v8 = 1;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    goto LABEL_29;
  }
  if ( a3 == 3 )
  {
    KeFlushQueuedDpcs();
    if ( !(unsigned int)VidSchiCheckFlipQueueTimeout(a1, 0LL, &v71) )
      return 0LL;
    if ( v71 < 0x10 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1904), &LockHandle);
      v25 = *(_QWORD *)(a1 + 8LL * v71 + 3032);
      if ( v25 )
        v73 = *(_DWORD *)(v25 + 61280);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
  }
  v22 = v72;
LABEL_30:
  ++*(_DWORD *)(a1 + 2880);
  LODWORD(v72) = 0;
  v26 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  v28 = v26 - a2;
  v29 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v30.QuadPart = MEMORY[0xFFFFF78000000014];
  RecoveryContext = TdrCreateRecoveryContext();
  v32 = v78;
  *((_QWORD *)v78 + 358) = RecoveryContext;
  v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v33);
  v35[3] = *((_QWORD *)v32 + 2);
  v35[4] = v26;
  v35[5] = TimeIncrement;
  v35[6] = KeGetCurrentThread();
  v35[7] = *((_QWORD *)v32 + 358);
  WdLogEvent5_WdWarning(v35);
  v38 = (union _LARGE_INTEGER *)WdLogNewEntry5_WdWarning(v37, v36);
  v38[3] = *(union _LARGE_INTEGER *)((char *)v32 + 16);
  v38[4] = v29;
  v38[5] = PerformanceFrequency;
  v38[6] = v30;
  WdLogEvent5_WdWarning(v38);
  v41 = *((_QWORD *)v32 + 358);
  if ( v41 )
  {
    v42 = v75;
    *(_QWORD *)(v41 + 8) = (char *)v32 + 2860;
    *(_DWORD *)(v41 + 16) = v42;
    if ( !*(_QWORD *)(v41 + 32) )
    {
      v43 = *((_QWORD *)v32 + 2);
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
          *(_QWORD *)(v41 + 2808) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v44 + 13) + 40LL) + 8LL) + 64LL);
          v46 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v44 + 13) + 40LL) + 8LL) + 72LL);
          if ( v46 )
            v47 = *(_QWORD *)(v46 + 80);
          else
            v47 = 0LL;
          *(_QWORD *)(v41 + 96) = v47;
        }
      }
    }
    v48 = *(_QWORD *)(v41 + 32);
    *(_DWORD *)(v41 + 148) = 36870;
    *(_DWORD *)(v41 + 152) = DpiGetDriverVersion(*(_QWORD *)(v48 + 192));
    *(_QWORD *)(v41 + 24) = v28;
    v51 = *((_QWORD *)v32 + 359);
    if ( v51 )
      v52 = *(unsigned __int16 *)(v51 + 4);
    else
      v52 = 0;
    *(_DWORD *)(v41 + 56) = v52;
    *(_QWORD *)(v41 + 72) = v76;
    v53 = v71;
    *(_QWORD *)(v41 + 64) = v22;
    *(_DWORD *)(v41 + 80) = v53;
    if ( (_DWORD)v53 != -1 )
    {
      v50 = (unsigned int)v53;
      v54 = *((_QWORD *)v32 + v53 + 379);
      if ( v54 )
      {
        v55 = *(_QWORD *)(v54 + 16);
        if ( v55 )
        {
          v56 = *(_QWORD *)(v55 + 40);
          if ( v56 )
          {
            *(_QWORD *)(v41 + 2808) = *(_QWORD *)(v56 + 2632);
            v50 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v32 + v50 + 379) + 16LL) + 40LL) + 2640LL);
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
      *(_QWORD *)(v58 + 24) = *((_QWORD *)v32 + 2);
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
      *(_QWORD *)(v63 + 24) = *((_QWORD *)v32 + 2);
      *(_QWORD *)(v63 + 32) = *((_QWORD *)v32 + 358);
      WdLogEvent5_WdWarning(v63);
      *((_DWORD *)v32 + 715) = 1;
      VidSchiBlockDriverCallback(v32);
      *((_DWORD *)v32 + 9) = 23;
      *((_QWORD *)v32 + 54) = 0LL;
      if ( v44 )
        VidSchiMarkTdrFaultingDevice(*((_QWORD *)v44 + 13));
      if ( (unsigned int)DpiGetDriverVersion(*(_QWORD *)(*((_QWORD *)v32 + 2) + 192LL)) >= 0x6002 )
      {
        v64 = 0;
        if ( *((_DWORD *)v32 + 15) )
        {
          while ( 1 )
          {
            v65 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v32 + 30) + 8LL * v64) + 96LL);
            if ( *(_DWORD *)(v65 + 2824) )
            {
              v66 = *(unsigned __int16 *)(v65 + 4);
              v81 = 0LL;
              v82 = 0;
              HIDWORD(v81) = *(unsigned __int16 *)(*((_QWORD *)v32 + v66 + 55) + 6LL);
              LODWORD(v81) = *(unsigned __int16 *)(*((_QWORD *)v32 + v66 + 55) + 8LL);
              if ( ((int (__fastcall *)(_QWORD, __int64 *))DxgCoreInterface[36])(*((_QWORD *)v32 + 1), &v81) < 0 )
                break;
            }
            if ( ++v64 >= *((_DWORD *)v32 + 15) )
              goto LABEL_65;
          }
          *((_BYTE *)v32 + 2884) |= 4u;
        }
      }
LABEL_65:
      v67 = *((_QWORD *)v32 + 2);
      *(_BYTE *)(v67 + 2415) = 0;
      _InterlockedOr(v70, 0);
      *(_BYTE *)(v67 + 2414) = 1;
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v32 + 1) + 552LL) + 7072LL) = 1;
      VidSchiCompleteAllPendingCommand((__int64)v32);
      VidSchiUnwaitAllContexts((__int64)v32);
      VidSchiClearFlipDevice(v32, 0LL, 9u);
      v68 = 1;
      goto LABEL_68;
    }
    v69 = WdLogNewEntry5_WdWarning(v62, v61);
    *(_QWORD *)(v69 + 24) = *((_QWORD *)v32 + 2);
    WdLogEvent5_WdWarning(v69);
    TdrCompleteRecoveryContext((struct _TDR_RECOVERY_CONTEXT *)v41, 0, 1);
    *((_QWORD *)v32 + 358) = 0LL;
  }
  v68 = v72;
LABEL_68:
  if ( v74 )
    VidSchiDecrementContextReference(v74, 0);
  return v68;
}
