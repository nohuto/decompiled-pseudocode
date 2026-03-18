/*
 * XREFs of NtDeleteValueKey @ 0x140474B2C
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1405925B0 (ExpWatchProductTypeWork.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140003C40 (EtwGetKernelTraceTimestamp.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140060B70 (ExAllocatePoolWithQuotaTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140081010 (ExIsResourceAcquiredSharedLite.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     CmDeleteValueKey @ 0x140474FC8 (CmDeleteValueKey.c)
 *     CmObReferenceObjectByHandle @ 0x14047AF90 (CmObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x1404B3FE0 (CmpCallCallBacksEx.c)
 *     CmPostCallbackNotificationEx @ 0x1404E32E0 (CmPostCallbackNotificationEx.c)
 *     CmpIsSystemEntity @ 0x140569D5C (CmpIsSystemEntity.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1406903A4 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x14069045C (CmKeyBodyRemapToVirtual.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  int v3; // esi
  char v4; // r12
  char PreviousMode; // r15
  struct _KTHREAD *CurrentThread; // rax
  int v7; // r8d
  int v8; // r9d
  NTSTATUS v9; // edi
  int v10; // eax
  wchar_t *Buffer; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int16 v13; // dx
  char *PoolWithQuotaTag; // rax
  char *v15; // rsi
  HANDLE v16; // r14
  char *i; // rcx
  struct _KTHREAD *v18; // rax
  int v19; // r9d
  __int64 v20; // rdx
  __int64 v21; // r9
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rcx
  int v26; // eax
  PVOID v27; // rsi
  __int64 v28; // rcx
  char v29; // [rsp+40h] [rbp-108h]
  NTSTATUS v30; // [rsp+44h] [rbp-104h]
  PVOID Object[2]; // [rsp+50h] [rbp-F8h] BYREF
  void *Src[2]; // [rsp+60h] [rbp-E8h] BYREF
  int v33; // [rsp+70h] [rbp-D8h] BYREF
  PVOID P; // [rsp+78h] [rbp-D0h]
  __int64 v35; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v36; // [rsp+88h] [rbp-C0h]
  _QWORD v37[2]; // [rsp+90h] [rbp-B8h] BYREF
  HANDLE v38; // [rsp+A0h] [rbp-A8h]
  HANDLE v39; // [rsp+A8h] [rbp-A0h]
  __int128 v40; // [rsp+B0h] [rbp-98h]
  __int128 v41; // [rsp+C0h] [rbp-88h] BYREF
  _QWORD v42[5]; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v43[3]; // [rsp+F8h] [rbp-50h] BYREF

  v3 = (int)KeyHandle;
  v38 = KeyHandle;
  v39 = KeyHandle;
  memset(v42, 0, sizeof(v42));
  Src[0] = 0LL;
  Src[1] = 0LL;
  P = 0LL;
  v4 = 0;
  v33 = 0;
  memset(v43, 0, sizeof(v43));
  v36 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v43, 0x20000u);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( CmpTraceRoutine )
    {
      LOBYTE(v25) = 15;
      CmpTraceRoutine(v25, v43, 3221225865LL, 0LL, 0LL, 0LL);
    }
    return -1073741431;
  }
  v29 = 1;
  LOBYTE(v8) = PreviousMode;
  v9 = CmObReferenceObjectByHandle(v3, 2, v7, v8, (__int64)Object, (__int64)&v35);
  v30 = v9;
  if ( v9 == -1073741790 && CmpVEEnabled && !(unsigned __int8)CmpIsSystemEntity(&v33) )
  {
    LOBYTE(v24) = PreviousMode;
    v26 = CmObReferenceObjectByHandle(v3, 131097, v23, v24, (__int64)Object, (__int64)&v35);
    v9 = v26;
    v30 = v26;
    if ( v26 >= 0 )
    {
      v27 = Object[0];
      if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object[0]) )
      {
        ObfDereferenceObject(v27);
        v9 = -1073741790;
        v30 = -1073741790;
      }
    }
    v4 = 1;
  }
  if ( v9 >= 0 )
  {
    if ( CmpTraceRoutine && Object[0] )
      v36 = *((_QWORD *)Object[0] + 1);
    if ( PreviousMode == 1 )
    {
      if ( (unsigned __int64)ValueName >= 0x7FFFFFFF0000LL )
        ValueName = (PUNICODE_STRING)0x7FFFFFFF0000LL;
      v10 = *(_DWORD *)&ValueName->Length;
      LODWORD(v40) = v10;
      Buffer = ValueName->Buffer;
      *((_QWORD *)&v40 + 1) = Buffer;
      *(_OWORD *)Src = v40;
      if ( (_WORD)v10 )
      {
        if ( ((unsigned __int8)Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v12 = (unsigned __int64)Buffer + (unsigned __int16)v10;
        if ( v12 > 0x7FFFFFFF0000LL || v12 < (unsigned __int64)Buffer )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v13 = (unsigned __int16)Src[0];
      if ( LOWORD(Src[0]) )
      {
        PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, LOWORD(Src[0]), 0x62764D43u);
        P = PoolWithQuotaTag;
        if ( !PoolWithQuotaTag )
        {
          v9 = -1073741670;
          v30 = -1073741670;
          goto LABEL_39;
        }
        v15 = PoolWithQuotaTag;
        memmove(PoolWithQuotaTag, Src[1], LOWORD(Src[0]));
        Src[1] = v15;
        v13 = (unsigned __int16)Src[0];
      }
      else
      {
        v15 = 0LL;
        Src[1] = 0LL;
      }
      WORD1(Src[0]) = v13;
    }
    else
    {
      *(UNICODE_STRING *)Src = *ValueName;
      v15 = (char *)Src[1];
      v13 = (unsigned __int16)Src[0];
    }
    v9 = v30;
    v16 = v38;
    if ( v30 >= 0 )
    {
      if ( ((__int64)Src[0] & 1) != 0 )
      {
        LOWORD(Src[0]) = 0;
        v9 = -1073741811;
      }
      else
      {
        if ( (*(_DWORD *)(*((_QWORD *)Object[0] + 1) + 4LL) & 0x80u) == 0 )
        {
          for ( i = &v15[2 * ((unsigned __int64)v13 >> 1) - 2]; v13 && !*(_WORD *)i; i -= 2 )
          {
            v13 -= 2;
            LOWORD(Src[0]) = v13;
          }
          v37[1] = v37;
          v37[0] = v37;
          v18 = KeGetCurrentThread();
          --v18->KernelApcDisable;
          if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
          {
            v20 = (unsigned int)v30;
          }
          else
          {
            v42[0] = Object[0];
            v42[1] = Src;
            LOBYTE(v19) = 1;
            v20 = (unsigned int)CmpCallCallBacksEx(2, (unsigned int)v42, 0, v19, 17, (__int64)Object[0], (__int64)v37);
          }
          if ( (int)v20 < 0 )
          {
            if ( (_DWORD)v20 == -1073740541 )
              LODWORD(v20) = 0;
            v30 = v20;
          }
          else
          {
            if ( v4 )
            {
              LOBYTE(v20) = PreviousMode;
              LODWORD(v20) = CmKeyBodyRemapToVirtual(Object, v20, 2LL);
              if ( (int)v20 >= 0
                && (!CmpVEEnabled || (*(_DWORD *)(*((_QWORD *)Object[0] + 1) + 176LL) & 0x1000000) == 0) )
              {
                LODWORD(v20) = -1073741790;
              }
            }
            if ( (int)v20 >= 0 )
            {
              ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
              v29 = 0;
              v41 = *(_OWORD *)Src;
              v21 = (unsigned int)v35 >> 2;
              LOBYTE(v21) = (v35 & 4) != 0;
              LODWORD(v20) = CmDeleteValueKey(Object[0], &v41, v16, v21);
            }
            v30 = CmPostCallbackNotificationEx(17, Object[0], v20, (unsigned int)v42, 0LL, (__int64)v37);
          }
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          v9 = v30;
          goto LABEL_39;
        }
        v9 = -1073741790;
      }
      v30 = v9;
    }
LABEL_39:
    ObfDereferenceObject(Object[0]);
  }
  if ( CmpTraceRoutine )
  {
    v28 = v36;
    LOBYTE(v28) = 15;
    CmpTraceRoutine(v28, v43, (unsigned int)v9, 0LL, v36, Src);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v29 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v30;
  }
  return v9;
}
