/*
 * XREFs of CmOpenKey @ 0x1405AD380
 * Callers:
 *     NtOpenKeyTransactedEx @ 0x14054C768 (NtOpenKeyTransactedEx.c)
 *     NtOpenKey @ 0x14055EA60 (NtOpenKey.c)
 *     ExpWatchProductTypeWork @ 0x140579DB0 (ExpWatchProductTypeWork.c)
 *     NtOpenKeyEx @ 0x1405AE6F0 (NtOpenKeyEx.c)
 *     AdtpObjsInitialize @ 0x140632254 (AdtpObjsInitialize.c)
 *     ExpWatchLicenseInfoWork @ 0x1407BC8A0 (ExpWatchLicenseInfoWork.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400AAAD0 (EtwGetKernelTraceTimestamp.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     PsGetCurrentSilo @ 0x140105440 (PsGetCurrentSilo.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmpLockRegistry @ 0x1404A71E0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpDereferenceKeyControlBlock @ 0x1404A86C0 (CmpDereferenceKeyControlBlock.c)
 *     NtClose @ 0x1405A2660 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByNameEx @ 0x1405AC6B0 (ObOpenObjectByNameEx.c)
 *     CmpFreeExtraParameter @ 0x1406EEEF8 (CmpFreeExtraParameter.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall CmOpenKey(HANDLE *a1, int a2, __int64 a3, int a4, __int64 a5)
{
  ACCESS_MASK v9; // r13d
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // si
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  int v14; // eax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  POBJECT_TYPE *v17; // rbx
  unsigned __int64 CurrentSilo; // rax
  int v19; // ebx
  _QWORD *v20; // rax
  __int64 v21; // rcx
  struct _KTHREAD *v22; // rcx
  bool v23; // zf
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  HANDLE Handle[2]; // [rsp+60h] [rbp-1E8h] BYREF
  __int128 v29; // [rsp+70h] [rbp-1D8h] BYREF
  __int64 v30; // [rsp+80h] [rbp-1C8h]
  HANDLE *v31; // [rsp+88h] [rbp-1C0h]
  __int64 v32; // [rsp+90h] [rbp-1B8h]
  PVOID Object; // [rsp+98h] [rbp-1B0h] BYREF
  __int128 v34; // [rsp+A0h] [rbp-1A8h]
  LARGE_INTEGER v35[4]; // [rsp+B0h] [rbp-198h] BYREF
  _QWORD v36[38]; // [rsp+D0h] [rbp-178h] BYREF

  v31 = a1;
  v32 = a3;
  Handle[0] = 0LL;
  v29 = 0uLL;
  memset(v35, 0, sizeof(v35));
  v30 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v35, 0x20000u);
  memset(v36, 0, 0x128uLL);
  v36[19] = &v36[18];
  v36[18] = &v36[18];
  memset(&v36[27], 0, 0x50uLL);
  HIDWORD(v36[3]) = a2 & 0x300;
  v9 = a2 & 0xFFFFFCFF;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    if ( (a4 & 0x1C) == a4 )
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( PreviousMode == 1 )
      {
        v12 = (__int64)a1;
        if ( (unsigned __int64)a1 >= 0x7FFFFFFF0000LL )
          v12 = 0x7FFFFFFF0000LL;
        *(_QWORD *)v12 = 0LL;
        if ( (a3 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v13 = *(_QWORD *)(a3 + 16);
        if ( v13 >= 0x7FFFFFFF0000LL )
          v13 = 0x7FFFFFFF0000LL;
        v14 = *(_DWORD *)v13;
        LODWORD(v34) = v14;
        v15 = *(_QWORD *)(v13 + 8);
        *((_QWORD *)&v34 + 1) = v15;
        v29 = v34;
        if ( (_WORD)v14 )
        {
          if ( (v15 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v16 = v15 + (unsigned __int16)v14;
          if ( v16 > 0x7FFFFFFF0000LL || v16 < v15 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      else
      {
        v29 = *(_OWORD *)*(_QWORD *)(a3 + 16);
      }
      if ( CmpTraceRoutine
        && *(_QWORD *)(a3 + 8)
        && ObReferenceObjectByHandle(
             *(HANDLE *)(a3 + 8),
             0,
             (POBJECT_TYPE)CmKeyObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL) >= 0 )
      {
        v30 = *((_QWORD *)Object + 1);
        ObfDereferenceObject(Object);
      }
      v36[9] = a5;
      LODWORD(v36[3]) = a4;
      v17 = CmKeyObjectType;
      CurrentSilo = PsGetCurrentSilo();
      v19 = ObOpenObjectByNameEx(a3, (__int64)v17, PreviousMode, 0LL, v9, (__int64)v36, CurrentSilo, Handle);
      if ( v19 >= 0 )
        *a1 = Handle[0];
      if ( CmpTraceRoutine )
      {
        v26 = v30;
        LOBYTE(v26) = 11;
        CmpTraceRoutine(v26, v35, (unsigned int)v19, 0LL, v30, &v29);
      }
      if ( v36[11] )
      {
        CmpLockRegistry();
        CmpDereferenceKeyControlBlock(v36[11]);
        CmpUnlockRegistry();
      }
      v20 = (_QWORD *)v36[18];
      v21 = *(_QWORD *)v36[18];
      if ( *(_QWORD **)(v36[18] + 8LL) != &v36[18] || *(_QWORD *)(v21 + 8) != v36[18] )
        __fastfail(3u);
      v36[18] = *(_QWORD *)v36[18];
      for ( *(_QWORD *)(v21 + 8) = &v36[18]; v20 != &v36[18]; *(_QWORD *)(v27 + 8) = &v36[18] )
      {
        CmpFreeExtraParameter(v20);
        v20 = (_QWORD *)v36[18];
        v27 = *(_QWORD *)v36[18];
        if ( *(_QWORD **)(v36[18] + 8LL) != &v36[18] || *(_QWORD *)(v27 + 8) != v36[18] )
          __fastfail(3u);
        v36[18] = *(_QWORD *)v36[18];
      }
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      v22 = KeGetCurrentThread();
      v23 = v22->KernelApcDisable++ == -1;
      if ( v23
        && ($005F0E83B22994B61E86C72E0CE43C71 *)v22->ApcState.ApcListHead[0].Flink != &v22->152
        && !v22->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      return (unsigned int)v19;
    }
    else
    {
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return 3221225714LL;
    }
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( CmpTraceRoutine )
    {
      LOBYTE(v25) = 11;
      CmpTraceRoutine(v25, v35, 3221225865LL, 0LL, 0LL, 0LL);
    }
    return 3221225865LL;
  }
}
