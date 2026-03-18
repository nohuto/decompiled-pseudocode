/*
 * XREFs of CmLoadDifferencingKey @ 0x1404E2048
 * Callers:
 *     NtLoadKey3 @ 0x14043C36C (NtLoadKey3.c)
 *     NtLoadKeyEx @ 0x1404E1FEC (NtLoadKeyEx.c)
 *     NtLoadKey2 @ 0x1405F1704 (NtLoadKey2.c)
 *     VrpPreLoadKey @ 0x1406A6F7C (VrpPreLoadKey.c)
 *     VrpLoadDifferencingHive @ 0x1406A8FE8 (VrpLoadDifferencingHive.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x14001655C (CmpFreeTransientPoolWithTag.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140060B70 (ExAllocatePoolWithQuotaTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140081010 (ExIsResourceAcquiredSharedLite.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     CmpDereferenceKeyControlBlock @ 0x140478370 (CmpDereferenceKeyControlBlock.c)
 *     CmObReferenceObjectByHandle @ 0x14047AF90 (CmObReferenceObjectByHandle.c)
 *     ObReferenceObjectByName @ 0x140484700 (ObReferenceObjectByName.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x1404B3FE0 (CmpCallCallBacksEx.c)
 *     ObOpenObjectByPointer @ 0x1404C5930 (ObOpenObjectByPointer.c)
 *     CmLoadAppKey @ 0x1404E13B4 (CmLoadAppKey.c)
 *     CmpTraceHiveLoadStop @ 0x1404E2C00 (CmpTraceHiveLoadStop.c)
 *     CmpCleanupParseContext @ 0x1404E322C (CmpCleanupParseContext.c)
 *     CmPostCallbackNotificationEx @ 0x1404E32E0 (CmPostCallbackNotificationEx.c)
 *     CmpTraceHiveLoadStart @ 0x1404E3448 (CmpTraceHiveLoadStart.c)
 *     CmConvertHandleToKernelHandle @ 0x1404E34C4 (CmConvertHandleToKernelHandle.c)
 *     CmpNameFromAttributes @ 0x1404E3564 (CmpNameFromAttributes.c)
 *     CmCheckNoTxContext @ 0x1404E3874 (CmCheckNoTxContext.c)
 *     ObDeleteCapturedInsertInfo @ 0x1404E38B0 (ObDeleteCapturedInsertInfo.c)
 *     CmReleaseLoadKeyContext @ 0x1404E3934 (CmReleaseLoadKeyContext.c)
 *     SeTokenType @ 0x14058A710 (SeTokenType.c)
 *     CmLoadKey @ 0x140596790 (CmLoadKey.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
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
  int v31; // eax
  int v32; // eax
  UNICODE_STRING *p_DestinationString; // rcx
  PVOID v34; // rbx
  int HandleInformation; // [rsp+28h] [rbp-310h]
  int v37; // [rsp+50h] [rbp-2E8h]
  char v38; // [rsp+57h] [rbp-2E1h]
  char v39; // [rsp+58h] [rbp-2E0h]
  PVOID v40; // [rsp+68h] [rbp-2D0h] BYREF
  ULONG_PTR v41; // [rsp+70h] [rbp-2C8h] BYREF
  UNICODE_STRING *v42; // [rsp+78h] [rbp-2C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-2B8h] BYREF
  HANDLE *v44; // [rsp+90h] [rbp-2A8h]
  PVOID v45; // [rsp+98h] [rbp-2A0h]
  PVOID v46; // [rsp+A0h] [rbp-298h]
  PVOID v47; // [rsp+A8h] [rbp-290h] BYREF
  unsigned int v48; // [rsp+B0h] [rbp-288h]
  HANDLE v49; // [rsp+B8h] [rbp-280h] BYREF
  PVOID P; // [rsp+C0h] [rbp-278h]
  UNICODE_STRING v51; // [rsp+C8h] [rbp-270h] BYREF
  PVOID v52; // [rsp+D8h] [rbp-260h] BYREF
  HANDLE Handle; // [rsp+E0h] [rbp-258h]
  PVOID v54; // [rsp+E8h] [rbp-250h]
  _SLIST_ENTRY v55; // [rsp+F0h] [rbp-248h] BYREF
  _QWORD *v56; // [rsp+100h] [rbp-238h] BYREF
  PVOID v57; // [rsp+108h] [rbp-230h]
  __int64 v58; // [rsp+110h] [rbp-228h]
  _BYTE v59[48]; // [rsp+118h] [rbp-220h] BYREF
  void *v60; // [rsp+148h] [rbp-1F0h]
  HANDLE v61; // [rsp+150h] [rbp-1E8h]
  PVOID Token; // [rsp+158h] [rbp-1E0h] BYREF
  PVOID v63; // [rsp+160h] [rbp-1D8h] BYREF
  HANDLE v64; // [rsp+168h] [rbp-1D0h] BYREF
  __int64 v65; // [rsp+170h] [rbp-1C8h]
  void *v66; // [rsp+178h] [rbp-1C0h]
  PVOID Object; // [rsp+180h] [rbp-1B8h] BYREF
  UNICODE_STRING v68; // [rsp+190h] [rbp-1A8h]
  _QWORD v69[12]; // [rsp+1A0h] [rbp-198h] BYREF
  _QWORD v70[30]; // [rsp+200h] [rbp-138h] BYREF

  v66 = a4;
  v65 = a2;
  v48 = a3;
  Handle = a5;
  v44 = a7;
  v60 = a9;
  v61 = a11;
  *(_DWORD *)v59 = 0;
  memset(&v59[8], 0, 0x28uLL);
  v42 = 0LL;
  v38 = 0;
  v14 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v39 = 0;
  RtlInitUnicodeString(&v51, 0LL);
  v40 = 0LL;
  v41 = 0LL;
  v47 = 0LL;
  v49 = 0LL;
  v15 = 0;
  v46 = 0LL;
  P = 0LL;
  memset(v70, 0, sizeof(v70));
  v70[19] = &v70[18];
  v70[18] = &v70[18];
  memset(&v70[20], 0, 0x50uLL);
  v45 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v17 = -1073741431;
LABEL_3:
    v37 = v17;
    goto LABEL_99;
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
    goto LABEL_5;
  v17 = CmCheckNoTxContext();
  v37 = v17;
  if ( v17 >= 0 )
  {
    if ( (a3 & 0x10) == 0 && !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
    {
      v17 = -1073741727;
      goto LABEL_3;
    }
    if ( (a3 & 0x810) != 0 )
    {
      if ( !v44 )
      {
LABEL_20:
        v17 = -1073741579;
        goto LABEL_3;
      }
      if ( (a3 & 0x444) != 0 && (a3 & 0x10) != 0 )
      {
LABEL_5:
        v17 = -1073741583;
        goto LABEL_3;
      }
    }
    else
    {
      if ( v44 )
        goto LABEL_20;
      if ( Handle )
      {
        v17 = -1073741581;
        goto LABEL_3;
      }
    }
    LOBYTE(v18) = PreviousMode;
    v17 = CmpNameFromAttributes(v65, v18, &v51);
    v37 = v17;
    if ( v17 >= 0 )
    {
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
      *(_OWORD *)v59 = *(_OWORD *)a1;
      *(_OWORD *)&v59[16] = *(_OWORD *)(a1 + 16);
      *(_OWORD *)&v59[32] = *(_OWORD *)(a1 + 32);
      if ( (a3 & 0x10) != 0 && *(_QWORD *)&v59[8] )
      {
        v17 = -1073741585;
        v37 = -1073741585;
        goto LABEL_99;
      }
      if ( PreviousMode == 1 )
      {
        v20 = *(_QWORD *)&v59[16];
        if ( *(_QWORD *)&v59[16] >= 0x7FFFFFFF0000uLL )
          v20 = 0x7FFFFFFF0000LL;
        v21 = *(_DWORD *)v20;
        *(_DWORD *)&v68.Length = v21;
        v22 = *(_QWORD *)(v20 + 8);
        v68.Buffer = (wchar_t *)v22;
        DestinationString = v68;
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
        P = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, DestinationString.Length, 0x6B624D43u);
        if ( !P )
        {
          v17 = -1073741670;
          v37 = -1073741670;
          v14 = 0;
          goto LABEL_99;
        }
        v25 = (wchar_t *)P;
        memmove(P, DestinationString.Buffer, Length);
        DestinationString.Length = Length;
        DestinationString.MaximumLength = Length;
        DestinationString.Buffer = v25;
        v14 = 0;
      }
      else
      {
        RtlInitUnicodeString(&DestinationString, 0LL);
      }
      *(_QWORD *)&v59[16] = &DestinationString;
      *(_QWORD *)&v59[32] = 0LL;
      if ( !v66 || (v17 = CmObReferenceObjectByHandle(v66, 0, v27, PreviousMode, &v40, 0LL), v37 = v17, v17 >= 0) )
      {
        if ( !Handle
          || (v17 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL),
              v46 = Object,
              v37 = v17,
              v17 >= 0) )
        {
          if ( !v60 || (v17 = CmObReferenceObjectByHandle(v60, 0, v27, PreviousMode, &v47, 0LL), v37 = v17, v17 >= 0) )
          {
            if ( v61 )
            {
              v17 = ObReferenceObjectByHandle(v61, 4u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Token, 0LL);
              v45 = Token;
              v37 = v17;
              if ( v17 < 0 )
                goto LABEL_99;
              if ( SeTokenType(Token) != TokenImpersonation )
              {
                v17 = -1073741656;
                goto LABEL_3;
              }
            }
            v28 = KeGetCurrentThread();
            --v28->KernelApcDisable;
            v39 = 1;
            LOBYTE(v27) = PreviousMode;
            v17 = CmConvertHandleToKernelHandle(*(_QWORD *)&v59[8], v26, v27, 131097LL, &v49);
            v37 = v17;
            if ( v17 >= 0 )
            {
              v29 = v49;
              *(_QWORD *)&v59[8] = v49;
              v30 = 0LL;
              v54 = 0LL;
              memset(v69, 0, sizeof(v69));
              v56 = 0LL;
              v57 = 0LL;
              v58 = 0LL;
              *((_QWORD *)&v55.Next + 1) = &v55;
              v55.Next = &v55;
              if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
              {
                if ( v29 )
                {
                  ObReferenceObjectByHandle(v29, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &v63, 0LL);
                  v30 = v63;
                  v54 = v63;
                }
                v69[10] = 2LL;
                v69[0] = v30;
                v69[1] = &DestinationString;
                v69[2] = &v51;
                LODWORD(v69[3]) = a3;
                v69[4] = v40;
                v69[5] = v46;
                LODWORD(v69[6]) = DesiredAccess;
                v69[7] = v44;
                v69[11] = v45;
                v56 = v69;
                v57 = v47;
                LOBYTE(v58) = a10;
                v17 = CmpCallCallBacksEx(0x20u, (__int64)v69, (__int64)&v56, 1, 0x21u, 0LL, &v55);
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
                CmpTraceHiveLoadStart(&v51, a3);
                v14 = 1;
                if ( (a3 & 0x10) != 0 )
                {
                  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
                  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                  v15 = 0;
                  v31 = CmLoadAppKey(
                          (__int64)v59,
                          &v51,
                          a3,
                          (__int64)v40,
                          (struct _KEVENT *)v46,
                          (POBJECT_HANDLE_INFORMATION)v45,
                          &v42,
                          (__int64 *)&v41);
                  v30 = v54;
                }
                else
                {
                  LOBYTE(HandleInformation) = a10;
                  v31 = CmLoadKey(v59, &v51, a3, v40, v47, HandleInformation, v46, v45, &v42, &v41);
                }
                v17 = CmPostCallbackNotificationEx(
                        33,
                        (_DWORD)v30,
                        v31,
                        (unsigned int)v69,
                        (__int64)&v56,
                        (__int64)&v55);
                v37 = v17;
              }
              if ( v30 )
                ObfDereferenceObject(v30);
              if ( v40 )
              {
                ObfDereferenceObject(v40);
                v40 = 0LL;
              }
              if ( v17 >= 0 && (a3 & 0x810) != 0 && !v38 )
              {
                v52 = 0LL;
                v32 = v70[0];
                if ( (a3 & 0x10) != 0 )
                  v32 = 64;
                LODWORD(v70[0]) = v32;
                p_DestinationString = &DestinationString;
                if ( v42 )
                  p_DestinationString = v42;
                v42 = p_DestinationString;
                v17 = ObReferenceObjectByName(
                        (__int64)p_DestinationString,
                        64LL,
                        0LL,
                        0,
                        (__int64)CmKeyObjectType,
                        0,
                        (__int64)v70,
                        &v52);
                v37 = v17;
                if ( v17 >= 0 )
                {
                  v34 = v52;
                  ObDeleteCapturedInsertInfo(v52);
                  v17 = ObOpenObjectByPointer(
                          v34,
                          PreviousMode != 0 ? 64 : 576,
                          0LL,
                          DesiredAccess,
                          (POBJECT_TYPE)CmKeyObjectType,
                          PreviousMode,
                          &v64);
                  v37 = v17;
                  ObfDereferenceObject(v34);
                  if ( v17 >= 0 )
                    *v44 = v64;
                }
                if ( v41 )
                {
                  if ( (a3 & 0x10) != 0 )
                    CmReleaseLoadKeyContext(v41, (unsigned int)v17);
                  else
                    CmpDereferenceKeyControlBlock(v41);
                  v41 = 0LL;
                }
                if ( v17 < 0 && (a3 & 0x800) != 0 )
                {
                  v17 = 0;
                  v37 = 0;
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_99:
  if ( v41 )
    CmReleaseLoadKeyContext(v41, (unsigned int)v17);
  if ( v42 && v42 != &DestinationString )
    CmpFreeTransientPoolWithTag(v42, 0x624E4D43u);
  if ( v49 )
    ZwClose(v49);
  if ( v39 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v17 = v37;
  }
  if ( v45 )
    ObfDereferenceObject(v45);
  if ( v47 )
    ObfDereferenceObject(v47);
  if ( v46 )
    ObfDereferenceObject(v46);
  if ( v40 )
    ObfDereferenceObject(v40);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v51.Buffer )
    ExFreePoolWithTag(v51.Buffer, 0);
  CmpCleanupParseContext(v70, 0LL);
  if ( v15 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v17 = v37;
  }
  if ( v14 )
    CmpTraceHiveLoadStop((unsigned int)v17);
  return (unsigned int)v17;
}
