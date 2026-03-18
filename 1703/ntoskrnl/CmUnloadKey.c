/*
 * XREFs of CmUnloadKey @ 0x1404CB114
 * Callers:
 *     NtUnloadKeyEx @ 0x1404CA8FC (NtUnloadKeyEx.c)
 *     NtUnloadKey2 @ 0x140586694 (NtUnloadKey2.c)
 *     NtUnloadKey @ 0x14059B87C (NtUnloadKey.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14004B900 (ExAllocatePoolWithQuotaTag.c)
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14008D480 (ExIsResourceAcquiredSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmPostCallbackNotificationEx @ 0x1404346B0 (CmPostCallbackNotificationEx.c)
 *     ObReferenceObjectByNameEx @ 0x1404CAE14 (ObReferenceObjectByNameEx.c)
 *     CmpPerformUnloadKey @ 0x1404CB738 (CmpPerformUnloadKey.c)
 *     CmpCleanupParseContext @ 0x1404D5440 (CmpCleanupParseContext.c)
 *     CmConvertHandleToKernelHandle @ 0x1404D54E8 (CmConvertHandleToKernelHandle.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x140533C00 (CmpCallCallBacksEx.c)
 *     CmpRetryBackOff @ 0x14066BB18 (CmpRetryBackOff.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall CmUnloadKey(__int64 a1, unsigned int a2, char a3, void *a4)
{
  HANDLE v4; // r15
  KPROCESSOR_MODE PreviousMode; // r14
  char v8; // r12
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v10; // rax
  BOOLEAN v11; // r13
  unsigned __int16 Length; // si
  PVOID PoolWithQuotaTag; // rax
  wchar_t *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rax
  int v18; // r8d
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r8
  __int64 v21; // r8
  int v22; // eax
  int v23; // r9d
  int v24; // eax
  unsigned int v25; // edi
  __int64 v26; // rdx
  unsigned int v28; // [rsp+40h] [rbp-208h]
  PVOID v30; // [rsp+48h] [rbp-200h] BYREF
  PVOID v31; // [rsp+50h] [rbp-1F8h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-1E8h] BYREF
  unsigned int v33; // [rsp+70h] [rbp-1D8h]
  int v34; // [rsp+74h] [rbp-1D4h] BYREF
  PVOID P; // [rsp+78h] [rbp-1D0h]
  HANDLE v36; // [rsp+80h] [rbp-1C8h] BYREF
  _QWORD v37[2]; // [rsp+88h] [rbp-1C0h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-1B0h]
  PVOID Object; // [rsp+A0h] [rbp-1A8h] BYREF
  UNICODE_STRING v40; // [rsp+B0h] [rbp-198h]
  __int128 v41; // [rsp+C0h] [rbp-188h] BYREF
  __int128 v42; // [rsp+D0h] [rbp-178h]
  __int128 v43; // [rsp+E0h] [rbp-168h]
  _QWORD v44[6]; // [rsp+F0h] [rbp-158h] BYREF
  _DWORD v45[56]; // [rsp+120h] [rbp-128h] BYREF

  v4 = a4;
  Handle = a4;
  v33 = a2;
  RtlInitUnicodeString(&DestinationString, 0LL);
  memset(v45, 0, sizeof(v45));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v30 = 0LL;
  v31 = 0LL;
  P = 0LL;
  v36 = 0LL;
  memset(v44, 0, 0x28uLL);
  v8 = 0;
  v37[1] = v37;
  v37[0] = v37;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = KeGetCurrentThread();
  --v10->KernelApcDisable;
  v11 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v11 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_53:
    LODWORD(v21) = -1073741431;
LABEL_55:
    v28 = v21;
    goto LABEL_38;
  }
  if ( !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
  {
    LODWORD(v21) = -1073741727;
    goto LABEL_55;
  }
  if ( (a2 & 0xFFFFFFFE) != 0 )
  {
    LODWORD(v21) = -1073741811;
    goto LABEL_55;
  }
  if ( PreviousMode == 1 && (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v41 = *(_OWORD *)a1;
  v42 = *(_OWORD *)(a1 + 16);
  v43 = *(_OWORD *)(a1 + 32);
  if ( PreviousMode == 1 )
  {
    v17 = v42;
    if ( (unsigned __int64)v42 >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    v18 = *(_DWORD *)v17;
    *(_DWORD *)&v40.Length = v18;
    v19 = *(_QWORD *)(v17 + 8);
    v40.Buffer = (wchar_t *)v19;
    DestinationString = v40;
    if ( (_WORD)v18 )
    {
      if ( (v19 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v20 = v19 + (unsigned __int16)v18;
      if ( v20 > 0x7FFFFFFF0000LL || v20 < v19 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    DestinationString = *(UNICODE_STRING *)*(_QWORD *)(a1 + 16);
  }
  Length = DestinationString.Length;
  if ( DestinationString.Length )
  {
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, DestinationString.Length, 0x35374D43u);
    P = PoolWithQuotaTag;
    if ( !PoolWithQuotaTag )
    {
      LODWORD(v21) = -1073741670;
      v28 = -1073741670;
      goto LABEL_38;
    }
    v14 = (wchar_t *)PoolWithQuotaTag;
    memmove(PoolWithQuotaTag, DestinationString.Buffer, Length);
    DestinationString.Length = Length;
    DestinationString.MaximumLength = Length;
    DestinationString.Buffer = v14;
    v4 = Handle;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
  }
  *(_QWORD *)&v42 = &DestinationString;
  v43 = 0LL;
  if ( PreviousMode == 1 )
  {
    LOBYTE(v16) = 1;
    LODWORD(v21) = CmConvertHandleToKernelHandle(*((_QWORD *)&v41 + 1), v15, v16, 0LL, &v36);
    v28 = v21;
    if ( (int)v21 < 0 )
      goto LABEL_38;
    *((_QWORD *)&v41 + 1) = v36;
  }
  v45[6] = 0;
  v45[0] = 4;
  v22 = ObReferenceObjectByNameEx((__int64)&v41, v15, 0, (__int64)CmKeyObjectType, 0, (__int64)v45, &v30);
  if ( v22 == -1073741772 )
    v22 = -1073741811;
  v21 = (unsigned int)v22;
  v28 = v22;
  if ( v22 >= 0 )
  {
    if ( v4 )
    {
      LODWORD(v21) = ObReferenceObjectByHandle(v4, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
      v31 = Object;
      v28 = v21;
      if ( (int)v21 < 0 )
        goto LABEL_38;
      KeResetEvent((PRKEVENT)Object);
    }
    if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
      goto LABEL_35;
    v44[0] = v30;
    v44[1] = v31;
    LOBYTE(v23) = 1;
    v24 = CmpCallCallBacksEx(34, (unsigned int)v44, 0, v23, 35, (__int64)v30, (__int64)v37);
    v21 = (unsigned int)v24;
    v28 = v24;
    if ( v24 >= 0 )
    {
      v8 = 1;
LABEL_35:
      v34 = 0;
      v25 = v33;
      while ( (CmpShutdownRundown & 1) == 0 )
      {
        LOBYTE(v21) = a3;
        LODWORD(v21) = CmpPerformUnloadKey(v30, v25, v21, v31);
        v28 = v21;
        if ( (_DWORD)v21 != -1073741267 )
          goto LABEL_38;
        CmpRetryBackOff(&v34, v26, 3221226029LL);
      }
      goto LABEL_53;
    }
    if ( v24 == -1073740541 )
    {
      LODWORD(v21) = 0;
      v28 = 0;
    }
  }
LABEL_38:
  if ( v8 )
    v28 = CmPostCallbackNotificationEx(35, (__int64)v30, v21, (__int64)v44, 0LL, v37);
  if ( v31 )
    ObfDereferenceObject(v31);
  if ( v30 )
    ObfDereferenceObject(v30);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v36 )
    ZwClose(v36);
  CmpCleanupParseContext(v45, 0LL);
  if ( v11 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v28;
}
