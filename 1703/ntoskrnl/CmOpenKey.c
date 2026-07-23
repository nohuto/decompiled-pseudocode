/*
 * XREFs of CmOpenKey @ 0x14052CA30
 * Callers:
 *     NtOpenKeyTransactedEx @ 0x14042D618 (NtOpenKeyTransactedEx.c)
 *     NtOpenKey @ 0x14043BFF0 (NtOpenKey.c)
 *     NtOpenKeyEx @ 0x14043C30C (NtOpenKeyEx.c)
 *     ExpWatchProductTypeWork @ 0x140455830 (ExpWatchProductTypeWork.c)
 *     CmpSaveBootControlSet @ 0x14058D508 (CmpSaveBootControlSet.c)
 *     CmpCreatePerfKeys @ 0x1405A4700 (CmpCreatePerfKeys.c)
 *     AdtpObjsInitialize @ 0x1405A6FD4 (AdtpObjsInitialize.c)
 *     ExpWatchLicenseInfoWork @ 0x1407166B0 (ExpWatchLicenseInfoWork.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140010CC0 (EtwGetKernelTraceTimestamp.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     PsGetCurrentSilo @ 0x1400EDEE0 (PsGetCurrentSilo.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmpDereferenceKeyControlBlock @ 0x140490D70 (CmpDereferenceKeyControlBlock.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     ObOpenObjectByNameEx @ 0x14052E3C0 (ObOpenObjectByNameEx.c)
 *     NtClose @ 0x14052EB10 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall CmOpenKey(HANDLE *a1, int a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v8; // r13d
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 v10; // r14
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  int v13; // eax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  int v16; // ebx
  unsigned __int64 CurrentSilo; // rax
  int v18; // esi
  struct _KTHREAD *v19; // rax
  __int16 v20; // cx
  $69CD3F157F9F39B6F7113F2231989901 *v21; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  HANDLE Handle; // [rsp+68h] [rbp-190h] BYREF
  __int128 v27; // [rsp+70h] [rbp-188h] BYREF
  __int64 v28; // [rsp+80h] [rbp-178h]
  HANDLE *v29; // [rsp+88h] [rbp-170h]
  __int64 v30; // [rsp+90h] [rbp-168h]
  PVOID Object; // [rsp+98h] [rbp-160h] BYREF
  __int128 v32; // [rsp+A0h] [rbp-158h]
  LARGE_INTEGER v33[4]; // [rsp+B0h] [rbp-148h] BYREF
  _QWORD v34[28]; // [rsp+D0h] [rbp-128h] BYREF

  v29 = a1;
  v30 = a3;
  Handle = 0LL;
  v27 = 0uLL;
  memset(v33, 0, 24);
  v28 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v33, 0x20000u);
  memset(v34, 0, sizeof(v34));
  HIDWORD(v34[3]) = a2 & 0x300;
  v8 = a2 & 0xFFFFFCFF;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    if ( (a4 & 0x1C) == a4 )
    {
      v10 = KeGetCurrentThread()->gap0[10];
      if ( v10 == 1 )
      {
        v11 = (__int64)a1;
        if ( (unsigned __int64)a1 >= 0x7FFFFFFF0000LL )
          v11 = 0x7FFFFFFF0000LL;
        *(_QWORD *)v11 = 0LL;
        if ( (a3 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v12 = *(_QWORD *)(a3 + 16);
        if ( v12 >= 0x7FFFFFFF0000LL )
          v12 = 0x7FFFFFFF0000LL;
        v13 = *(_DWORD *)v12;
        LODWORD(v32) = v13;
        v14 = *(_QWORD *)(v12 + 8);
        *((_QWORD *)&v32 + 1) = v14;
        v27 = v32;
        if ( (_WORD)v13 )
        {
          if ( (v14 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v15 = v14 + (unsigned __int16)v13;
          if ( v15 > 0x7FFFFFFF0000LL || v15 < v14 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      else
      {
        v27 = *(_OWORD *)*(_QWORD *)(a3 + 16);
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
        v28 = *((_QWORD *)Object + 1);
        ObfDereferenceObject(Object);
      }
      v34[9] = a5;
      LODWORD(v34[3]) = a4;
      v16 = (int)CmKeyObjectType;
      CurrentSilo = PsGetCurrentSilo();
      v18 = ObOpenObjectByNameEx(a3, v16, v10, 0, v8, (__int64)v34, CurrentSilo, (__int64)&Handle);
      if ( v18 >= 0 )
        *a1 = Handle;
      if ( CmpTraceRoutine )
      {
        v24 = v28;
        LOBYTE(v24) = 11;
        CmpTraceRoutine(v24, v33, (unsigned int)v18, 0LL, v28, &v27);
      }
      if ( v34[11] )
      {
        CmpLockRegistry();
        CmpDereferenceKeyControlBlock(v34[11]);
        CmpUnlockRegistry();
      }
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      v19 = KeGetCurrentThread();
      v20 = v19->KernelApcDisable + 1;
      v19->KernelApcDisable = v20;
      if ( !v20 )
      {
        v21 = &v19->152;
        if ( ($69CD3F157F9F39B6F7113F2231989901 *)v21->ApcState.ApcListHead[0].Flink != v21 && !v19->SpecialApcDisable )
          KiCheckForKernelApcDelivery((__int64)v21);
      }
      return (unsigned int)v18;
    }
    else
    {
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      return 3221225714LL;
    }
  }
  else
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( CmpTraceRoutine )
    {
      LOBYTE(v23) = 11;
      CmpTraceRoutine(v23, v33, 3221225865LL, 0LL, 0LL, 0LL);
    }
    return 3221225865LL;
  }
}
