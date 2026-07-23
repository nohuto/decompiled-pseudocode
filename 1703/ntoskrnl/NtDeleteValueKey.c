/*
 * XREFs of NtDeleteValueKey @ 0x1404CE698
 * Callers:
 *     ExpWatchProductTypeWork @ 0x140455830 (ExpWatchProductTypeWork.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140010CC0 (EtwGetKernelTraceTimestamp.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14004B900 (ExAllocatePoolWithQuotaTag.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14008D480 (ExIsResourceAcquiredSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmPostCallbackNotificationEx @ 0x1404346B0 (CmPostCallbackNotificationEx.c)
 *     CmObReferenceObjectByHandle @ 0x14048F490 (CmObReferenceObjectByHandle.c)
 *     CmDeleteValueKey @ 0x1404CEB38 (CmDeleteValueKey.c)
 *     CmpIsSystemEntity @ 0x1404D4280 (CmpIsSystemEntity.c)
 *     CmpCallCallBacksEx @ 0x140533C00 (CmpCallCallBacksEx.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x14056C82C (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x140666A94 (CmKeyBodyRemapToVirtual.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  char v4; // r12
  KPROCESSOR_MODE PreviousMode; // r15
  struct _KTHREAD *CurrentThread; // rax
  void *v7; // r8
  NTSTATUS v8; // edi
  int v9; // eax
  wchar_t *Buffer; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int16 v12; // dx
  char *PoolWithQuotaTag; // rax
  char *v14; // rsi
  HANDLE v15; // r14
  char *i; // rcx
  struct _KTHREAD *v17; // rax
  int v18; // r9d
  __int64 v19; // rdx
  void *v21; // r8
  __int64 v22; // rcx
  int v23; // eax
  PVOID v24; // rsi
  __int64 v25; // rcx
  char v26; // [rsp+40h] [rbp-108h]
  NTSTATUS v27; // [rsp+44h] [rbp-104h]
  PVOID Object[2]; // [rsp+50h] [rbp-F8h] BYREF
  void *Src[2]; // [rsp+60h] [rbp-E8h] BYREF
  int v30; // [rsp+70h] [rbp-D8h] BYREF
  PVOID P; // [rsp+78h] [rbp-D0h]
  struct _OBJECT_HANDLE_INFORMATION v32; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+88h] [rbp-C0h]
  _QWORD v34[2]; // [rsp+90h] [rbp-B8h] BYREF
  HANDLE v35; // [rsp+A0h] [rbp-A8h]
  HANDLE v36; // [rsp+A8h] [rbp-A0h]
  __int128 v37; // [rsp+B0h] [rbp-98h]
  __int128 v38; // [rsp+C0h] [rbp-88h] BYREF
  _QWORD v39[5]; // [rsp+D0h] [rbp-78h] BYREF
  LARGE_INTEGER v40[3]; // [rsp+F8h] [rbp-50h] BYREF

  v35 = KeyHandle;
  v36 = KeyHandle;
  memset(v39, 0, sizeof(v39));
  Src[0] = 0LL;
  Src[1] = 0LL;
  P = 0LL;
  v4 = 0;
  v30 = 0;
  memset(v40, 0, sizeof(v40));
  v33 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v40, 0x20000u);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( CmpTraceRoutine )
    {
      LOBYTE(v22) = 15;
      CmpTraceRoutine(v22, v40, 3221225865LL, 0LL, 0LL, 0LL);
    }
    return -1073741431;
  }
  v26 = 1;
  v8 = CmObReferenceObjectByHandle(KeyHandle, 2u, v7, PreviousMode, Object, &v32);
  v27 = v8;
  if ( v8 == -1073741790 && CmpVEEnabled && !(unsigned __int8)CmpIsSystemEntity(&v30) )
  {
    v23 = CmObReferenceObjectByHandle(KeyHandle, 0x20019u, v21, PreviousMode, Object, &v32);
    v8 = v23;
    v27 = v23;
    if ( v23 >= 0 )
    {
      v24 = Object[0];
      if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object[0]) )
      {
        ObfDereferenceObject(v24);
        v8 = -1073741790;
        v27 = -1073741790;
      }
    }
    v4 = 1;
  }
  if ( v8 >= 0 )
  {
    if ( CmpTraceRoutine && Object[0] )
      v33 = *((_QWORD *)Object[0] + 1);
    if ( PreviousMode == 1 )
    {
      if ( (unsigned __int64)ValueName >= 0x7FFFFFFF0000LL )
        ValueName = (PUNICODE_STRING)0x7FFFFFFF0000LL;
      v9 = *(_DWORD *)&ValueName->Length;
      LODWORD(v37) = v9;
      Buffer = ValueName->Buffer;
      *((_QWORD *)&v37 + 1) = Buffer;
      *(_OWORD *)Src = v37;
      if ( (_WORD)v9 )
      {
        if ( ((unsigned __int8)Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v11 = (unsigned __int64)Buffer + (unsigned __int16)v9;
        if ( v11 > 0x7FFFFFFF0000LL || v11 < (unsigned __int64)Buffer )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v12 = (unsigned __int16)Src[0];
      if ( LOWORD(Src[0]) )
      {
        PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, LOWORD(Src[0]), 0x62764D43u);
        P = PoolWithQuotaTag;
        if ( !PoolWithQuotaTag )
        {
          v8 = -1073741670;
          v27 = -1073741670;
          goto LABEL_39;
        }
        v14 = PoolWithQuotaTag;
        memmove(PoolWithQuotaTag, Src[1], LOWORD(Src[0]));
        Src[1] = v14;
        v12 = (unsigned __int16)Src[0];
      }
      else
      {
        v14 = 0LL;
        Src[1] = 0LL;
      }
      WORD1(Src[0]) = v12;
    }
    else
    {
      *(UNICODE_STRING *)Src = *ValueName;
      v14 = (char *)Src[1];
      v12 = (unsigned __int16)Src[0];
    }
    v8 = v27;
    v15 = v35;
    if ( v27 >= 0 )
    {
      if ( ((__int64)Src[0] & 1) != 0 )
      {
        LOWORD(Src[0]) = 0;
        v8 = -1073741811;
      }
      else
      {
        if ( (*(_DWORD *)(*((_QWORD *)Object[0] + 1) + 4LL) & 0x80u) == 0 )
        {
          for ( i = &v14[2 * ((unsigned __int64)v12 >> 1) - 2]; v12 && !*(_WORD *)i; i -= 2 )
          {
            v12 -= 2;
            LOWORD(Src[0]) = v12;
          }
          v34[1] = v34;
          v34[0] = v34;
          v17 = KeGetCurrentThread();
          --v17->KernelApcDisable;
          if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
          {
            v19 = (unsigned int)v27;
          }
          else
          {
            v39[0] = Object[0];
            v39[1] = Src;
            LOBYTE(v18) = 1;
            v19 = (unsigned int)CmpCallCallBacksEx(2, (unsigned int)v39, 0, v18, 17, (__int64)Object[0], (__int64)v34);
          }
          if ( (int)v19 < 0 )
          {
            if ( (_DWORD)v19 == -1073740541 )
              LODWORD(v19) = 0;
            v27 = v19;
          }
          else
          {
            if ( v4 )
            {
              LOBYTE(v19) = PreviousMode;
              LODWORD(v19) = CmKeyBodyRemapToVirtual(Object, v19, 2LL);
              if ( (int)v19 >= 0
                && (!CmpVEEnabled || (*(_DWORD *)(*((_QWORD *)Object[0] + 1) + 176LL) & 0x1000000) == 0) )
              {
                LODWORD(v19) = -1073741790;
              }
            }
            if ( (int)v19 >= 0 )
            {
              ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
              v26 = 0;
              v38 = *(_OWORD *)Src;
              LODWORD(v19) = CmDeleteValueKey(Object[0], &v38, v15, (LOBYTE(v32.HandleAttributes) >> 2) & 1);
            }
            v27 = CmPostCallbackNotificationEx(17, (__int64)Object[0], v19, (__int64)v39, 0LL, v34);
          }
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          v8 = v27;
          goto LABEL_39;
        }
        v8 = -1073741790;
      }
      v27 = v8;
    }
LABEL_39:
    ObfDereferenceObject(Object[0]);
  }
  if ( CmpTraceRoutine )
  {
    v25 = v33;
    LOBYTE(v25) = 15;
    CmpTraceRoutine(v25, v40, (unsigned int)v8, 0LL, v33, Src);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v26 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return v27;
  }
  return v8;
}
