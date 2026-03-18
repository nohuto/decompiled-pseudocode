/*
 * XREFs of CmLoadDifferencingKey @ 0x1404D48BC
 * Callers:
 *     NtLoadKey3 @ 0x14041C3C0 (NtLoadKey3.c)
 *     NtLoadKeyEx @ 0x1404D4860 (NtLoadKeyEx.c)
 *     NtLoadKey2 @ 0x1405863D0 (NtLoadKey2.c)
 *     VrpLoadDifferencingHive @ 0x14067DF68 (VrpLoadDifferencingHive.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14004B900 (ExAllocatePoolWithQuotaTag.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14008D480 (ExIsResourceAcquiredSharedLite.c)
 *     CmpFreeTransientPoolWithTag @ 0x1400DB880 (CmpFreeTransientPoolWithTag.c)
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
 *     SeTokenType @ 0x14044FB50 (SeTokenType.c)
 *     CmObReferenceObjectByHandle @ 0x14048F490 (CmObReferenceObjectByHandle.c)
 *     CmpDereferenceKeyControlBlock @ 0x140490D70 (CmpDereferenceKeyControlBlock.c)
 *     CmLoadKey @ 0x1404CBC54 (CmLoadKey.c)
 *     CmpTraceHiveLoadStop @ 0x1404D53E4 (CmpTraceHiveLoadStop.c)
 *     CmpCleanupParseContext @ 0x1404D5440 (CmpCleanupParseContext.c)
 *     CmpTraceHiveLoadStart @ 0x1404D546C (CmpTraceHiveLoadStart.c)
 *     CmConvertHandleToKernelHandle @ 0x1404D54E8 (CmConvertHandleToKernelHandle.c)
 *     CmpNameFromAttributes @ 0x1404D5588 (CmpNameFromAttributes.c)
 *     CmCheckNoTxContext @ 0x1404D58A4 (CmCheckNoTxContext.c)
 *     CmReleaseLoadKeyContext @ 0x1404D58DC (CmReleaseLoadKeyContext.c)
 *     CmLoadAppKey @ 0x1404D59A0 (CmLoadAppKey.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByName @ 0x1404F3D70 (ObReferenceObjectByName.c)
 *     ObOpenObjectByPointer @ 0x14050ED20 (ObOpenObjectByPointer.c)
 *     ObDeleteCapturedInsertInfo @ 0x140515ED0 (ObDeleteCapturedInsertInfo.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x140533C00 (CmpCallCallBacksEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall CmLoadDifferencingKey(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        void *a4,
        void *a5,
        ACCESS_MASK DesiredAccess,
        HANDLE *a7,
        int a8,
        void *a9,
        char a10,
        void *a11,
        KPROCESSOR_MODE PreviousMode)
{
  char v14; // r13
  char v15; // r15
  struct _KTHREAD *CurrentThread; // rax
  int v17; // edi
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // r8d
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r8
  unsigned __int16 Length; // di
  wchar_t *v25; // rbx
  __int64 v26; // rdx
  void *v27; // r8
  struct _KTHREAD *v28; // rax
  HANDLE v29; // r13
  PVOID v30; // rbx
  int v31; // r9d
  unsigned int v32; // eax
  int v33; // eax
  UNICODE_STRING *p_DestinationString; // rcx
  PVOID v35; // rbx
  int v37; // [rsp+54h] [rbp-2C4h]
  char v38; // [rsp+5Ah] [rbp-2BEh]
  char v39; // [rsp+5Bh] [rbp-2BDh]
  PVOID v40; // [rsp+60h] [rbp-2B8h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+68h] [rbp-2B0h] BYREF
  PVOID P[2]; // [rsp+70h] [rbp-2A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-298h] BYREF
  HANDLE *v44; // [rsp+90h] [rbp-288h]
  PVOID v45; // [rsp+98h] [rbp-280h]
  PVOID v46; // [rsp+A0h] [rbp-278h]
  int v47; // [rsp+A8h] [rbp-270h]
  unsigned int v48; // [rsp+B0h] [rbp-268h]
  HANDLE v49; // [rsp+B8h] [rbp-260h] BYREF
  PVOID v50; // [rsp+C0h] [rbp-258h] BYREF
  PVOID PoolWithQuotaTag; // [rsp+C8h] [rbp-250h]
  UNICODE_STRING v52; // [rsp+D0h] [rbp-248h] BYREF
  PVOID v53; // [rsp+E0h] [rbp-238h] BYREF
  HANDLE Handle; // [rsp+E8h] [rbp-230h]
  PVOID v55; // [rsp+F0h] [rbp-228h]
  _QWORD v56[2]; // [rsp+F8h] [rbp-220h] BYREF
  _BYTE v57[48]; // [rsp+108h] [rbp-210h] BYREF
  void *v58; // [rsp+138h] [rbp-1E0h]
  HANDLE v59; // [rsp+140h] [rbp-1D8h]
  PVOID Token; // [rsp+148h] [rbp-1D0h] BYREF
  PVOID v61; // [rsp+150h] [rbp-1C8h] BYREF
  HANDLE v62; // [rsp+158h] [rbp-1C0h] BYREF
  __int64 v63; // [rsp+160h] [rbp-1B8h]
  void *v64; // [rsp+168h] [rbp-1B0h]
  PVOID Object; // [rsp+170h] [rbp-1A8h] BYREF
  UNICODE_STRING v66; // [rsp+180h] [rbp-198h]
  _QWORD v67[12]; // [rsp+190h] [rbp-188h] BYREF
  _DWORD v68[56]; // [rsp+1F0h] [rbp-128h] BYREF

  v64 = a4;
  v63 = a2;
  v48 = a3;
  Handle = a5;
  v44 = a7;
  v58 = a9;
  v59 = a11;
  *(_DWORD *)v57 = 0;
  memset(&v57[8], 0, 0x28uLL);
  P[0] = 0LL;
  v38 = 0;
  v14 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v39 = 0;
  RtlInitUnicodeString(&v52, 0LL);
  v40 = 0LL;
  BugCheckParameter4 = 0LL;
  v50 = 0LL;
  v49 = 0LL;
  v15 = 0;
  v46 = 0LL;
  PoolWithQuotaTag = 0LL;
  memset(v68, 0, sizeof(v68));
  v45 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v17 = -1073741431;
LABEL_3:
    v37 = v17;
    goto LABEL_102;
  }
  v15 = 1;
  v14 = 0;
  if ( (a3 & 0xFFFF000B) != 0 || a9 && (a3 & 0xFFFF9EFF) != 0 )
    goto LABEL_5;
  if ( a10 )
  {
    if ( !a9 )
    {
      v17 = -1073741576;
      goto LABEL_3;
    }
    if ( (a3 & 0x4000) == 0 )
      goto LABEL_5;
  }
  if ( (a3 & 0x1000) != 0 && (a3 & 0x600) != 0x600 )
  {
LABEL_5:
    v17 = -1073741583;
    goto LABEL_3;
  }
  v47 = a3 & 0x810;
  v17 = CmCheckNoTxContext();
  v37 = v17;
  if ( v17 < 0 )
    goto LABEL_101;
  if ( (a3 & 0x10) == 0 && !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
  {
    v17 = -1073741727;
LABEL_18:
    v37 = v17;
LABEL_101:
    v14 = 0;
    goto LABEL_102;
  }
  if ( (a3 & 0x810) != 0 )
  {
    if ( !v44 )
    {
LABEL_21:
      v17 = -1073741579;
      goto LABEL_18;
    }
    if ( (a3 & 0x444) != 0 && (a3 & 0x10) != 0 )
    {
      v17 = -1073741583;
      goto LABEL_18;
    }
  }
  else
  {
    if ( v44 )
      goto LABEL_21;
    if ( Handle )
    {
      v17 = -1073741581;
      goto LABEL_18;
    }
  }
  LOBYTE(v18) = PreviousMode;
  v17 = CmpNameFromAttributes(v63, v18, &v52);
  v37 = v17;
  if ( v17 < 0 )
    goto LABEL_101;
  if ( PreviousMode == 1 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (a3 & 0x810) != 0 )
    {
      v19 = (__int64)v44;
      if ( (unsigned __int64)v44 >= 0x7FFFFFFF0000LL )
        v19 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v19 = 0LL;
    }
  }
  *(_OWORD *)v57 = *(_OWORD *)a1;
  *(_OWORD *)&v57[16] = *(_OWORD *)(a1 + 16);
  *(_OWORD *)&v57[32] = *(_OWORD *)(a1 + 32);
  if ( (a3 & 0x10) != 0 && *(_QWORD *)&v57[8] )
  {
    v17 = -1073741585;
    v37 = -1073741585;
    v14 = 0;
    goto LABEL_102;
  }
  if ( PreviousMode == 1 )
  {
    v20 = *(_QWORD *)&v57[16];
    if ( *(_QWORD *)&v57[16] >= 0x7FFFFFFF0000uLL )
      v20 = 0x7FFFFFFF0000LL;
    v21 = *(_DWORD *)v20;
    *(_DWORD *)&v66.Length = v21;
    v22 = *(_QWORD *)(v20 + 8);
    v66.Buffer = (wchar_t *)v22;
    DestinationString = v66;
    if ( (_WORD)v21 )
    {
      if ( (v22 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v23 = v22 + (unsigned __int16)v21;
      if ( v23 > 0x7FFFFFFF0000LL || v23 < v22 )
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
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, DestinationString.Length, 0x6B624D43u);
    if ( !PoolWithQuotaTag )
    {
      v17 = -1073741670;
      v37 = -1073741670;
      v14 = 0;
      goto LABEL_102;
    }
    v25 = (wchar_t *)PoolWithQuotaTag;
    memmove(PoolWithQuotaTag, DestinationString.Buffer, Length);
    DestinationString.Length = Length;
    DestinationString.MaximumLength = Length;
    DestinationString.Buffer = v25;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
  }
  *(_QWORD *)&v57[16] = &DestinationString;
  *(_QWORD *)&v57[32] = 0LL;
  if ( v64 )
  {
    v17 = CmObReferenceObjectByHandle(v64, 0, v27, PreviousMode, &v40, 0LL);
    v37 = v17;
    if ( v17 < 0 )
      goto LABEL_63;
  }
  if ( Handle )
  {
    v17 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
    v46 = Object;
    v37 = v17;
    if ( v17 < 0 )
      goto LABEL_63;
  }
  if ( v58 )
  {
    v17 = CmObReferenceObjectByHandle(v58, 0, v27, PreviousMode, &v50, 0LL);
    v37 = v17;
    if ( v17 < 0 )
      goto LABEL_63;
  }
  if ( !v59 )
    goto LABEL_64;
  v17 = ObReferenceObjectByHandle(v59, 4u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Token, 0LL);
  v45 = Token;
  v37 = v17;
  if ( v17 < 0 )
  {
LABEL_63:
    v14 = 0;
    goto LABEL_102;
  }
  if ( SeTokenType(Token) != TokenImpersonation )
  {
    v17 = -1073741656;
    v37 = -1073741656;
    goto LABEL_63;
  }
LABEL_64:
  v28 = KeGetCurrentThread();
  --v28->KernelApcDisable;
  v39 = 1;
  LOBYTE(v27) = PreviousMode;
  v17 = CmConvertHandleToKernelHandle(*(_QWORD *)&v57[8], v26, v27, 131097LL, &v49);
  v37 = v17;
  if ( v17 < 0 )
    goto LABEL_63;
  v29 = v49;
  *(_QWORD *)&v57[8] = v49;
  v30 = 0LL;
  v55 = 0LL;
  memset(v67, 0, sizeof(v67));
  v56[1] = v56;
  v56[0] = v56;
  if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
  {
    if ( v29 )
    {
      ObReferenceObjectByHandle(v29, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &v61, 0LL);
      v30 = v61;
      v55 = v61;
    }
    v67[10] = 2LL;
    v67[0] = v30;
    v67[1] = &DestinationString;
    v67[2] = &v52;
    LODWORD(v67[3]) = a3;
    v67[4] = v40;
    v67[5] = v46;
    LODWORD(v67[6]) = DesiredAccess;
    v67[7] = v44;
    v67[11] = v45;
    LOBYTE(v31) = 1;
    v17 = CmpCallCallBacksEx(32, (unsigned int)v67, 0, v31, 33, 0LL, (__int64)v56);
    v37 = v17;
  }
  if ( v17 < 0 )
  {
    if ( v17 == -1073740541 )
    {
      v17 = 0;
      v37 = 0;
      v38 = 1;
    }
    v14 = 0;
  }
  else
  {
    CmpTraceHiveLoadStart(&v52, a3);
    v14 = 1;
    if ( (a3 & 0x10) != 0 )
    {
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v15 = 0;
      v32 = CmLoadAppKey(v57, &v52, a3, v40, v46, v45, P, &BugCheckParameter4);
      v30 = v55;
    }
    else
    {
      v32 = CmLoadKey(
              (__int64)v57,
              &v52,
              a3,
              (__int64)v40,
              (__int64)v50,
              a10,
              (struct _KEVENT *)v46,
              (__int64)v45,
              (__int64)P,
              (__int64 *)&BugCheckParameter4);
    }
    v17 = CmPostCallbackNotificationEx(33, (__int64)v30, v32, (__int64)v67, 0LL, v56);
    v37 = v17;
  }
  if ( v30 )
    ObfDereferenceObject(v30);
  if ( v40 )
  {
    ObfDereferenceObject(v40);
    v40 = 0LL;
  }
  if ( v17 >= 0 && v47 && !v38 )
  {
    v53 = 0LL;
    v33 = v68[0];
    if ( (a3 & 0x10) != 0 )
      v33 = 64;
    v68[0] = v33;
    p_DestinationString = &DestinationString;
    if ( P[0] )
      p_DestinationString = (UNICODE_STRING *)P[0];
    P[0] = p_DestinationString;
    v17 = ObReferenceObjectByName(
            (_DWORD)p_DestinationString,
            64,
            0,
            0,
            (__int64)CmKeyObjectType,
            0,
            (__int64)v68,
            (__int64)&v53);
    v37 = v17;
    if ( v17 >= 0 )
    {
      v35 = v53;
      ObDeleteCapturedInsertInfo(v53);
      v17 = ObOpenObjectByPointer(v35, 0x40u, 0LL, DesiredAccess, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &v62);
      v37 = v17;
      ObfDereferenceObject(v35);
      if ( v17 >= 0 )
        *v44 = v62;
    }
    if ( BugCheckParameter4 )
    {
      if ( (a3 & 0x10) != 0 )
        CmReleaseLoadKeyContext(BugCheckParameter4);
      else
        CmpDereferenceKeyControlBlock(BugCheckParameter4);
      BugCheckParameter4 = 0LL;
    }
    if ( v17 < 0 && (a3 & 0x800) != 0 )
    {
      v17 = 0;
      v37 = 0;
    }
  }
LABEL_102:
  if ( BugCheckParameter4 )
    CmReleaseLoadKeyContext(BugCheckParameter4);
  if ( P[0] && P[0] != &DestinationString )
    CmpFreeTransientPoolWithTag(P[0], 0x624E4D43u);
  if ( v49 )
    ZwClose(v49);
  if ( v39 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v17 = v37;
  }
  if ( v45 )
    ObfDereferenceObject(v45);
  if ( v50 )
    ObfDereferenceObject(v50);
  if ( v46 )
    ObfDereferenceObject(v46);
  if ( v40 )
    ObfDereferenceObject(v40);
  if ( PoolWithQuotaTag )
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
  if ( v52.Buffer )
    ExFreePoolWithTag(v52.Buffer, 0);
  CmpCleanupParseContext(v68, 0LL);
  if ( v15 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v17 = v37;
  }
  if ( v14 )
    CmpTraceHiveLoadStop((unsigned int)v17);
  return (unsigned int)v17;
}
