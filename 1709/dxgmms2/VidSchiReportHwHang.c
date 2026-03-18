/*
 * XREFs of VidSchiReportHwHang @ 0x1C002CA7C
 * Callers:
 *     VidSchiCheckHwProgress @ 0x1C006F3D0 (VidSchiCheckHwProgress.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0071908 (VidSchWaitForCompletionEvent.c)
 * Callees:
 *     VidSchiCheckFlipQueueTimeout @ 0x1C000ABA0 (VidSchiCheckFlipQueueTimeout.c)
 *     VidSchiDecrementContextReference @ 0x1C000E770 (VidSchiDecrementContextReference.c)
 *     VidSchiClearFlipDevice @ 0x1C000EB1C (VidSchiClearFlipDevice.c)
 *     VidSchiIncrementContextReference @ 0x1C00110B0 (VidSchiIncrementContextReference.c)
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     VidSchiUnwaitAllContexts @ 0x1C002A4FC (VidSchiUnwaitAllContexts.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C002C5F8 (VidSchiCompleteAllPendingCommand.c)
 *     VidSchiCheckGPUTimeout @ 0x1C00B306C (VidSchiCheckGPUTimeout.c)
 *     VidSchiBlockDriverCallback @ 0x1C00B61D0 (VidSchiBlockDriverCallback.c)
 *     VidSchiMarkTdrFaultingDevice @ 0x1C00B62C8 (VidSchiMarkTdrFaultingDevice.c)
 */

__int64 __fastcall VidSchiReportHwHang(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v8; // r12d
  PVOID *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 *v13; // r14
  __int64 v14; // r14
  signed __int64 v15; // rbx
  signed __int64 v16; // r13
  __int64 v17; // rdx
  __int64 v18; // r8
  signed __int64 v19; // rsi
  signed __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 TimeIncrement; // r12
  __int64 v25; // r14
  LARGE_INTEGER v26; // r13
  union _LARGE_INTEGER v27; // rdi
  struct _TDR_RECOVERY_CONTEXT *RecoveryContext; // rax
  struct _VIDSCH_GLOBAL *v29; // r15
  _QWORD *v30; // rax
  union _LARGE_INTEGER *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rbx
  int v35; // eax
  __int64 v36; // rax
  struct _VIDSCH_CONTEXT *v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rax
  unsigned int v55; // ebx
  __int64 v56; // rdx
  __int64 v57; // rdx
  __int64 v58; // rax
  unsigned int v59; // ebx
  __int64 v60; // rax
  signed __int32 v61[8]; // [rsp+0h] [rbp-99h] BYREF
  unsigned int v62; // [rsp+20h] [rbp-79h] BYREF
  signed __int64 v63; // [rsp+28h] [rbp-71h]
  int v64; // [rsp+30h] [rbp-69h]
  struct _VIDSCH_CONTEXT *v65; // [rsp+38h] [rbp-61h]
  int v66; // [rsp+40h] [rbp-59h]
  __int64 v67; // [rsp+48h] [rbp-51h]
  __int64 v68; // [rsp+50h] [rbp-49h]
  struct _VIDSCH_GLOBAL *v69; // [rsp+58h] [rbp-41h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+60h] [rbp-39h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-31h] BYREF
  __int64 v72; // [rsp+80h] [rbp-19h] BYREF
  int v73; // [rsp+88h] [rbp-11h]
  PVOID BackTrace[5]; // [rsp+90h] [rbp-9h] BYREF

  v62 = -1;
  v66 = a3;
  v69 = (struct _VIDSCH_GLOBAL *)a1;
  v65 = 0LL;
  v68 = 0LL;
  v63 = 0LL;
  v67 = 0LL;
  v64 = 0;
  v8 = 0;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(1u, 5u, BackTrace, 0LL);
  v9 = (PVOID *)((__int64 (*)(void))WdLogNewEntry5_WdWarning)();
  v9[3] = BackTrace[0];
  v9[4] = BackTrace[1];
  v9[5] = BackTrace[2];
  v9[6] = BackTrace[3];
  v9[7] = BackTrace[4];
  WdLogEvent5_WdWarning(v9);
  if ( *(_QWORD *)(a1 + 2840) )
  {
    v11 = WdLogNewEntry5_WdWarning(v10);
    *(_QWORD *)(v11 + 24) = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(v11 + 32) = *(_QWORD *)(a1 + 2840);
    WdLogEvent5_WdWarning(v11);
    return 1LL;
  }
  if ( a3 == 1 || (unsigned int)(a3 - 9) <= 2 )
  {
    if ( a4 )
      *(_QWORD *)(a1 + 2848) = a4;
    else
      *(_QWORD *)(a1 + 2848) = *(_QWORD *)(a1 + 424);
    v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 2848) + 96LL), 0LL, 0LL);
LABEL_30:
    if ( v8 )
      return 0LL;
    goto LABEL_31;
  }
  if ( a3 == 2 )
  {
    KeFlushQueuedDpcs();
    if ( !*(_DWORD *)(a1 + 952) )
      return 0LL;
    v13 = (__int64 *)(a1 + 2848);
    if ( a4 )
    {
      *v13 = a4;
    }
    else if ( !(unsigned int)VidSchiCheckGPUTimeout(a1, 0LL, a1 + 2848) )
    {
      return 0LL;
    }
    v14 = *v13;
    if ( !*(_DWORD *)(v14 + 2792) )
      return 0LL;
    v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 96), 0LL, 0LL);
    v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 120), 0LL, 0LL);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1888), &LockHandle);
    v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 96), 0LL, 0LL);
    v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 120), 0LL, 0LL);
    if ( v15 == v19 && v16 == v20 )
    {
      v67 = *(_QWORD *)(v14 + 40);
      v21 = *(_QWORD *)(v14 + 8LL * *(unsigned int *)(v14 + 1552) + 1560);
      v65 = (struct _VIDSCH_CONTEXT *)v21;
      if ( v21 )
      {
        VidSchiIncrementContextReference(v21, v17, v18);
        v68 = *(_QWORD *)(v21 + 104);
      }
      ++*(_DWORD *)(v14 + 484);
    }
    else
    {
      v19 = v63;
      v8 = 1;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    goto LABEL_30;
  }
  if ( a3 == 3 )
  {
    KeFlushQueuedDpcs();
    if ( !(unsigned int)VidSchiCheckFlipQueueTimeout(a1, 0LL, &v62) )
      return 0LL;
    if ( v62 < 0x10 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1888), &LockHandle);
      v22 = *(_QWORD *)(a1 + 8LL * v62 + 3008);
      if ( v22 )
        v64 = *(_DWORD *)(v22 + 56800);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
  }
  v19 = v63;
LABEL_31:
  ++*(_DWORD *)(a1 + 2856);
  LODWORD(v63) = 0;
  v23 = MEMORY[0xFFFFF78000000320];
  TimeIncrement = KeQueryTimeIncrement();
  v25 = v23 - a2;
  v26 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v27.QuadPart = MEMORY[0xFFFFF78000000014];
  RecoveryContext = TdrCreateRecoveryContext();
  v29 = v69;
  *((_QWORD *)v69 + 355) = RecoveryContext;
  v30 = (_QWORD *)((__int64 (*)(void))WdLogNewEntry5_WdWarning)();
  v30[3] = *((_QWORD *)v29 + 2);
  v30[4] = v23;
  v30[5] = TimeIncrement;
  v30[6] = KeGetCurrentThread();
  v30[7] = *((_QWORD *)v29 + 355);
  WdLogEvent5_WdWarning(v30);
  v31 = (union _LARGE_INTEGER *)((__int64 (*)(void))WdLogNewEntry5_WdWarning)();
  v31[3] = *(union _LARGE_INTEGER *)((char *)v29 + 16);
  v31[4] = v26;
  v31[5] = PerformanceFrequency;
  v31[6] = v27;
  WdLogEvent5_WdWarning(v31);
  v34 = *((_QWORD *)v29 + 355);
  if ( v34 )
  {
    v35 = v66;
    *(_QWORD *)(v34 + 8) = (char *)v29 + 2836;
    *(_DWORD *)(v34 + 16) = v35;
    if ( !*(_QWORD *)(v34 + 32) )
    {
      v36 = *((_QWORD *)v29 + 2);
      *(_QWORD *)(v34 + 32) = v36;
      _InterlockedIncrement64((volatile signed __int64 *)(v36 + 24));
      *(_QWORD *)(v34 + 40) = -1LL;
    }
    v37 = v65;
    if ( !*(_QWORD *)(v34 + 48) && v65 )
    {
      VidSchiIncrementContextReference((__int64)v65, v32, v33);
      *(_QWORD *)(v34 + 48) = v37;
    }
    if ( v68 )
    {
      v38 = *(_QWORD *)(v68 + 40);
      if ( v38 )
      {
        if ( *(_QWORD *)(v38 + 8) )
        {
          *(_QWORD *)(v34 + 2808) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v37 + 13) + 40LL) + 8LL) + 56LL);
          v39 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v37 + 13) + 40LL) + 8LL) + 64LL);
          if ( v39 )
            v40 = *(_QWORD *)(v39 + 80);
          else
            v40 = 0LL;
          *(_QWORD *)(v34 + 96) = v40;
        }
      }
    }
    v41 = *(_QWORD *)(v34 + 32);
    *(_DWORD *)(v34 + 148) = 32769;
    *(_DWORD *)(v34 + 152) = DpiGetDriverVersion(*(_QWORD *)(v41 + 192));
    *(_QWORD *)(v34 + 24) = v25;
    v43 = *((_QWORD *)v29 + 356);
    if ( v43 )
      v44 = *(unsigned __int16 *)(v43 + 4);
    else
      v44 = 0;
    *(_DWORD *)(v34 + 56) = v44;
    *(_QWORD *)(v34 + 72) = v67;
    v45 = v62;
    *(_QWORD *)(v34 + 64) = v19;
    *(_DWORD *)(v34 + 80) = v45;
    if ( (_DWORD)v45 != -1 )
    {
      v42 = (unsigned int)v45;
      v46 = *((_QWORD *)v29 + v45 + 376);
      if ( v46 )
      {
        v47 = *(_QWORD *)(v46 + 16);
        if ( v47 )
        {
          v48 = *(_QWORD *)(v47 + 40);
          if ( v48 )
          {
            *(_QWORD *)(v34 + 2808) = *(_QWORD *)(v48 + 2632);
            v42 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v29 + v42 + 376) + 16LL) + 40LL) + 2640LL);
            *(_QWORD *)(v34 + 96) = v42;
          }
        }
      }
    }
    v49 = v64;
    *(_DWORD *)(v34 + 84) = 0;
    *(_DWORD *)(v34 + 88) = v49;
    if ( (_DWORD)v49 )
    {
      v50 = WdLogNewEntry5_WdWarning(v42);
      *(_QWORD *)(v50 + 24) = *((_QWORD *)v29 + 2);
      *(_QWORD *)(v50 + 32) = v49;
      WdLogEvent5_WdWarning(v50);
    }
    v51 = *(_QWORD *)(v34 + 32);
    v52 = *(_QWORD *)(v51 + 456);
    if ( !v52 )
      v52 = *(_QWORD *)(v51 + 312);
    *(_QWORD *)(v34 + 104) = v52;
    if ( TdrIsRecoveryRequired((struct _TDR_RECOVERY_CONTEXT *)v34) )
    {
      v54 = WdLogNewEntry5_WdWarning(v53);
      *(_QWORD *)(v54 + 24) = *((_QWORD *)v29 + 2);
      *(_QWORD *)(v54 + 32) = *((_QWORD *)v29 + 355);
      WdLogEvent5_WdWarning(v54);
      *((_DWORD *)v29 + 709) = 1;
      VidSchiBlockDriverCallback(v29);
      *((_DWORD *)v29 + 9) = 23;
      *((_QWORD *)v29 + 52) = 0LL;
      if ( v37 )
        VidSchiMarkTdrFaultingDevice(*((_QWORD *)v37 + 13));
      if ( (unsigned int)DpiGetDriverVersion(*(_QWORD *)(*((_QWORD *)v29 + 2) + 192LL)) >= 0x6002 )
      {
        v55 = 0;
        if ( *((_DWORD *)v29 + 14) )
        {
          while ( 1 )
          {
            v56 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v29 + 30) + 8LL * v55) + 96LL);
            if ( *(_DWORD *)(v56 + 2792) )
            {
              v57 = *(unsigned __int16 *)(v56 + 4);
              v72 = 0LL;
              v73 = 0;
              HIDWORD(v72) = *(unsigned __int16 *)(*((_QWORD *)v29 + v57 + 53) + 6LL);
              LODWORD(v72) = *(unsigned __int16 *)(*((_QWORD *)v29 + v57 + 53) + 8LL);
              if ( ((int (__fastcall *)(_QWORD, __int64 *))DxgCoreInterface[31])(*((_QWORD *)v29 + 1), &v72) < 0 )
                break;
            }
            if ( ++v55 >= *((_DWORD *)v29 + 14) )
              goto LABEL_66;
          }
          *((_BYTE *)v29 + 2860) |= 4u;
        }
      }
LABEL_66:
      v58 = *((_QWORD *)v29 + 2);
      *(_BYTE *)(v58 + 2270) = 0;
      _InterlockedOr(v61, 0);
      *(_BYTE *)(v58 + 2269) = 1;
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v29 + 1) + 536LL) + 6496LL) = 1;
      VidSchiCompleteAllPendingCommand((__int64)v29);
      VidSchiUnwaitAllContexts((__int64)v29);
      VidSchiClearFlipDevice(v29, 0LL, 9u);
      v59 = 1;
      goto LABEL_69;
    }
    v60 = WdLogNewEntry5_WdWarning(v53);
    *(_QWORD *)(v60 + 24) = *((_QWORD *)v29 + 2);
    WdLogEvent5_WdWarning(v60);
    TdrCompleteRecoveryContext((struct _TDR_RECOVERY_CONTEXT *)v34, 0, 1);
    *((_QWORD *)v29 + 355) = 0LL;
  }
  v59 = v63;
LABEL_69:
  if ( v65 )
    VidSchiDecrementContextReference(v65, 0);
  return v59;
}
