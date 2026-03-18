/*
 * XREFs of CmUnloadKey @ 0x14054CB34
 * Callers:
 *     NtUnloadKeyEx @ 0x14054C9FC (NtUnloadKeyEx.c)
 *     NtUnloadKey @ 0x1405E9FA4 (NtUnloadKey.c)
 *     NtUnloadKey2 @ 0x14061469C (NtUnloadKey2.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x1400078DC (CmpAllocateTransientPoolWithQuotaTag.c)
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400FDA10 (ExIsResourceAcquiredSharedLite.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmConvertHandleToKernelHandle @ 0x14049EB74 (CmConvertHandleToKernelHandle.c)
 *     CmPostCallbackNotificationEx @ 0x14049EC90 (CmPostCallbackNotificationEx.c)
 *     CmpCleanupParseContext @ 0x14049FF18 (CmpCleanupParseContext.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByNameEx @ 0x1404DE1F0 (ObReferenceObjectByNameEx.c)
 *     CmpPerformUnloadKey @ 0x14054D0B4 (CmpPerformUnloadKey.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x1405A7050 (CmpCallCallBacksEx.c)
 *     CmpRetryBackOff @ 0x1406F9BF4 (CmpRetryBackOff.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
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
  struct _PRIVILEGE_SET *TransientPoolWithQuotaTag; // rax
  wchar_t *v14; // rdi
  void *v15; // rdx
  __int64 v16; // rax
  int v17; // r8d
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r8
  __int64 v20; // r8
  int v21; // eax
  int v22; // r9d
  int v23; // eax
  unsigned int v24; // edi
  __int64 v25; // rdx
  unsigned int v27; // [rsp+40h] [rbp-258h]
  PVOID v29; // [rsp+48h] [rbp-250h] BYREF
  PVOID v30; // [rsp+50h] [rbp-248h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-238h] BYREF
  unsigned int v32; // [rsp+70h] [rbp-228h]
  int v33; // [rsp+74h] [rbp-224h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+78h] [rbp-220h]
  HANDLE v35; // [rsp+80h] [rbp-218h] BYREF
  _QWORD v36[2]; // [rsp+88h] [rbp-210h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-200h]
  PVOID Object; // [rsp+A0h] [rbp-1F8h] BYREF
  UNICODE_STRING v39; // [rsp+B0h] [rbp-1E8h]
  __int128 v40; // [rsp+C0h] [rbp-1D8h] BYREF
  __int128 v41; // [rsp+D0h] [rbp-1C8h]
  __int128 v42; // [rsp+E0h] [rbp-1B8h]
  _QWORD v43[6]; // [rsp+F0h] [rbp-1A8h] BYREF
  _QWORD v44[38]; // [rsp+120h] [rbp-178h] BYREF

  v4 = a4;
  Handle = a4;
  v32 = a2;
  RtlInitUnicodeString(&DestinationString, 0LL);
  memset(v44, 0, 0x128uLL);
  v44[19] = &v44[18];
  v44[18] = &v44[18];
  memset(&v44[27], 0, 0x50uLL);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v29 = 0LL;
  v30 = 0LL;
  Privileges = 0LL;
  v35 = 0LL;
  memset(v43, 0, 0x28uLL);
  v8 = 0;
  v36[1] = v36;
  v36[0] = v36;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = KeGetCurrentThread();
  --v10->KernelApcDisable;
  v11 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v11 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_52:
    LODWORD(v20) = -1073741431;
LABEL_54:
    v27 = v20;
    goto LABEL_37;
  }
  if ( !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
  {
    LODWORD(v20) = -1073741727;
    goto LABEL_54;
  }
  if ( (a2 & 0xFFFFFFFE) != 0 )
  {
    LODWORD(v20) = -1073741811;
    goto LABEL_54;
  }
  if ( PreviousMode == 1 && (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v40 = *(_OWORD *)a1;
  v41 = *(_OWORD *)(a1 + 16);
  v42 = *(_OWORD *)(a1 + 32);
  if ( PreviousMode == 1 )
  {
    v16 = v41;
    if ( (unsigned __int64)v41 >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    v17 = *(_DWORD *)v16;
    *(_DWORD *)&v39.Length = v17;
    v18 = *(_QWORD *)(v16 + 8);
    v39.Buffer = (wchar_t *)v18;
    DestinationString = v39;
    if ( (_WORD)v17 )
    {
      if ( (v18 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v19 = v18 + (unsigned __int16)v17;
      if ( v19 > 0x7FFFFFFF0000LL || v19 < v18 )
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
    TransientPoolWithQuotaTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuotaTag(
                                                           0x7FFFFFFF0000LL,
                                                           DestinationString.Length,
                                                           0x35374D43u);
    Privileges = TransientPoolWithQuotaTag;
    if ( !TransientPoolWithQuotaTag )
    {
      LODWORD(v20) = -1073741670;
      v27 = -1073741670;
      goto LABEL_37;
    }
    v14 = (wchar_t *)TransientPoolWithQuotaTag;
    memmove(TransientPoolWithQuotaTag, DestinationString.Buffer, Length);
    DestinationString.Length = Length;
    DestinationString.MaximumLength = Length;
    DestinationString.Buffer = v14;
    v4 = Handle;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
  }
  *(_QWORD *)&v41 = &DestinationString;
  v42 = 0LL;
  if ( PreviousMode == 1 )
  {
    LODWORD(v20) = CmConvertHandleToKernelHandle(*((void **)&v40 + 1), v15, 1, 0, &v35);
    v27 = v20;
    if ( (int)v20 < 0 )
      goto LABEL_37;
    *((_QWORD *)&v40 + 1) = v35;
  }
  LODWORD(v44[3]) = 0;
  LODWORD(v44[0]) = 4;
  v21 = ObReferenceObjectByNameEx((__int64)&v40, (__int64)v15, 0, (__int64)CmKeyObjectType, 0, (__int64)v44, &v29);
  if ( v21 == -1073741772 )
    v21 = -1073741811;
  v20 = (unsigned int)v21;
  v27 = v21;
  if ( v21 >= 0 )
  {
    if ( v4 )
    {
      LODWORD(v20) = ObReferenceObjectByHandle(v4, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
      v30 = Object;
      v27 = v20;
      if ( (int)v20 < 0 )
        goto LABEL_37;
      KeResetEvent((PRKEVENT)Object);
    }
    if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
      goto LABEL_34;
    v43[0] = v29;
    v43[1] = v30;
    LOBYTE(v22) = 1;
    v23 = CmpCallCallBacksEx(34, (unsigned int)v43, 0, v22, 35, (__int64)v29, (__int64)v36);
    v20 = (unsigned int)v23;
    v27 = v23;
    if ( v23 >= 0 )
    {
      v8 = 1;
LABEL_34:
      v33 = 0;
      v24 = v32;
      while ( (CmpShutdownRundown & 1) == 0 )
      {
        LOBYTE(v20) = a3;
        LODWORD(v20) = CmpPerformUnloadKey(v29, v24, v20, v30);
        v27 = v20;
        if ( (_DWORD)v20 != -1073741267 )
          goto LABEL_37;
        CmpRetryBackOff(&v33, v25, 3221226029LL);
      }
      goto LABEL_52;
    }
    if ( v23 == -1073740541 )
    {
      LODWORD(v20) = 0;
      v27 = 0;
    }
  }
LABEL_37:
  if ( v8 )
    v27 = CmPostCallbackNotificationEx(35, (__int64)v29, v20, (__int64)v43, 0LL, v36);
  if ( v30 )
    ObfDereferenceObject(v30);
  if ( v29 )
    ObfDereferenceObject(v29);
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v35 )
    ZwClose(v35);
  CmpCleanupParseContext((__int64)v44, 0);
  if ( v11 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v27;
}
