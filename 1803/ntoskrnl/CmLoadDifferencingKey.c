/*
 * XREFs of CmLoadDifferencingKey @ 0x14049ED68
 * Callers:
 *     NtLoadKey3 @ 0x1404893A4 (NtLoadKey3.c)
 *     NtLoadKeyEx @ 0x14049E7D4 (NtLoadKeyEx.c)
 *     NtLoadKey2 @ 0x140605FA0 (NtLoadKey2.c)
 *     VrpPreLoadKey @ 0x14070B60C (VrpPreLoadKey.c)
 *     VrpLoadDifferencingHive @ 0x14070D6EC (VrpLoadDifferencingHive.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x1400078DC (CmpAllocateTransientPoolWithQuotaTag.c)
 *     CmpFreeTransientPoolWithTag @ 0x140009034 (CmpFreeTransientPoolWithTag.c)
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
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     CmReleaseLoadKeyContext @ 0x14049BE14 (CmReleaseLoadKeyContext.c)
 *     ObDeleteCapturedInsertInfo @ 0x14049BE40 (ObDeleteCapturedInsertInfo.c)
 *     CmLoadAppKey @ 0x14049C2A8 (CmLoadAppKey.c)
 *     CmCheckNoTxContext @ 0x14049E830 (CmCheckNoTxContext.c)
 *     CmpNameFromAttributes @ 0x14049E868 (CmpNameFromAttributes.c)
 *     CmConvertHandleToKernelHandle @ 0x14049EB74 (CmConvertHandleToKernelHandle.c)
 *     CmpTraceHiveLoadStart @ 0x14049EC14 (CmpTraceHiveLoadStart.c)
 *     CmPostCallbackNotificationEx @ 0x14049EC90 (CmPostCallbackNotificationEx.c)
 *     CmpTraceHiveLoadStop @ 0x14049F910 (CmpTraceHiveLoadStop.c)
 *     CmpCleanupParseContext @ 0x14049FF18 (CmpCleanupParseContext.c)
 *     CmObReferenceObjectByHandle @ 0x1404A48AC (CmObReferenceObjectByHandle.c)
 *     CmpDereferenceKeyControlBlock @ 0x1404A86C0 (CmpDereferenceKeyControlBlock.c)
 *     ObReferenceObjectByName @ 0x1404D2990 (ObReferenceObjectByName.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     SeTokenType @ 0x140579720 (SeTokenType.c)
 *     CmLoadKey @ 0x14057F140 (CmLoadKey.c)
 *     ObOpenObjectByPointer @ 0x14059A7F0 (ObOpenObjectByPointer.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x1405A7050 (CmpCallCallBacksEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall CmLoadDifferencingKey(
        __int64 a1,
        _OWORD *a2,
        unsigned int a3,
        __int64 a4,
        void *a5,
        ACCESS_MASK DesiredAccess,
        HANDLE *a7,
        int a8,
        __int64 a9,
        char a10,
        void *a11,
        KPROCESSOR_MODE PreviousMode)
{
  char v14; // r13
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v16; // di
  int v17; // edi
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // r8d
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r8
  unsigned __int16 Length; // di
  wchar_t *v25; // rbx
  void *v26; // rdx
  int v27; // r8d
  int v28; // r9d
  struct _KTHREAD *v29; // rax
  HANDLE v30; // r13
  PVOID v31; // rbx
  int v32; // r9d
  unsigned int v33; // eax
  int v34; // eax
  UNICODE_STRING *p_DestinationString; // rcx
  __int64 v36; // rdx
  __int64 v37; // r8
  PVOID v38; // rbx
  int HandleInformation; // [rsp+28h] [rbp-350h]
  int v41; // [rsp+50h] [rbp-328h]
  char v42; // [rsp+56h] [rbp-322h]
  char v43; // [rsp+57h] [rbp-321h]
  BOOLEAN v44; // [rsp+58h] [rbp-320h]
  PVOID v45; // [rsp+60h] [rbp-318h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-310h] BYREF
  void *v47[2]; // [rsp+70h] [rbp-308h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-2F8h] BYREF
  HANDLE *v49; // [rsp+90h] [rbp-2E8h]
  PVOID v50; // [rsp+98h] [rbp-2E0h]
  PVOID v51; // [rsp+A0h] [rbp-2D8h]
  PVOID v52; // [rsp+A8h] [rbp-2D0h] BYREF
  unsigned int v53; // [rsp+B0h] [rbp-2C8h]
  HANDLE v54; // [rsp+B8h] [rbp-2C0h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+C0h] [rbp-2B8h]
  UNICODE_STRING v56; // [rsp+C8h] [rbp-2B0h] BYREF
  PVOID v57; // [rsp+D8h] [rbp-2A0h] BYREF
  HANDLE Handle; // [rsp+E0h] [rbp-298h]
  PVOID v59; // [rsp+E8h] [rbp-290h]
  _QWORD v60[2]; // [rsp+F0h] [rbp-288h] BYREF
  _QWORD *v61; // [rsp+100h] [rbp-278h] BYREF
  PVOID v62; // [rsp+108h] [rbp-270h]
  __int64 v63; // [rsp+110h] [rbp-268h]
  __int64 v64; // [rsp+118h] [rbp-260h]
  HANDLE v65; // [rsp+120h] [rbp-258h]
  PVOID Token; // [rsp+128h] [rbp-250h] BYREF
  PVOID v67; // [rsp+130h] [rbp-248h] BYREF
  HANDLE v68; // [rsp+138h] [rbp-240h] BYREF
  _OWORD *v69; // [rsp+140h] [rbp-238h]
  __int64 v70; // [rsp+148h] [rbp-230h]
  PVOID Object; // [rsp+150h] [rbp-228h] BYREF
  _OWORD v72[3]; // [rsp+158h] [rbp-220h] BYREF
  UNICODE_STRING v73; // [rsp+190h] [rbp-1E8h]
  _QWORD v74[12]; // [rsp+1A0h] [rbp-1D8h] BYREF
  _QWORD v75[38]; // [rsp+200h] [rbp-178h] BYREF

  v70 = a4;
  v69 = a2;
  v53 = a3;
  Handle = a5;
  v49 = a7;
  v64 = a9;
  v65 = a11;
  memset(v72, 0, sizeof(v72));
  v47[0] = 0LL;
  v42 = 0;
  v14 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v43 = 0;
  RtlInitUnicodeString(&v56, 0LL);
  v45 = 0LL;
  BugCheckParameter2 = 0LL;
  v52 = 0LL;
  v54 = 0LL;
  v51 = 0LL;
  Privileges = 0LL;
  memset(v75, 0, 0x128uLL);
  v75[19] = &v75[18];
  v75[18] = &v75[18];
  memset(&v75[27], 0, 0x50uLL);
  v50 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v16 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v16 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v44 = v16;
  if ( !v16 )
  {
    v17 = -1073741431;
LABEL_5:
    v41 = v17;
    goto LABEL_99;
  }
  v14 = 0;
  if ( (a3 & 0xFFFF000B) != 0 || a9 && (a3 & 0xFFFF9EFF) != 0 )
    goto LABEL_7;
  if ( a10 )
  {
    if ( !a9 )
    {
      v17 = -1073741576;
      goto LABEL_5;
    }
    if ( (a3 & 0x4000) == 0 )
      goto LABEL_7;
  }
  if ( (a3 & 0x1000) != 0 && (a3 & 0x600) != 0x600 )
    goto LABEL_7;
  v17 = CmCheckNoTxContext();
  v41 = v17;
  if ( v17 < 0 )
    goto LABEL_99;
  if ( (a3 & 0x10) == 0 && !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
  {
    v17 = -1073741727;
    goto LABEL_5;
  }
  if ( (a3 & 0x810) == 0 )
  {
    if ( v49 )
      goto LABEL_22;
    if ( Handle )
    {
      v17 = -1073741581;
      goto LABEL_5;
    }
    goto LABEL_24;
  }
  if ( !v49 )
  {
LABEL_22:
    v17 = -1073741579;
    goto LABEL_5;
  }
  if ( (a3 & 0x444) != 0 && (a3 & 0x10) != 0 )
  {
LABEL_7:
    v17 = -1073741583;
    goto LABEL_5;
  }
LABEL_24:
  v17 = CmpNameFromAttributes(v69, PreviousMode, &v56, v18);
  v41 = v17;
  if ( v17 < 0 )
    goto LABEL_99;
  if ( PreviousMode == 1 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (a3 & 0x810) != 0 )
    {
      v19 = (__int64)v49;
      if ( (unsigned __int64)v49 >= 0x7FFFFFFF0000LL )
        v19 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v19 = 0LL;
    }
  }
  v72[0] = *(_OWORD *)a1;
  v72[1] = *(_OWORD *)(a1 + 16);
  v72[2] = *(_OWORD *)(a1 + 32);
  if ( (a3 & 0x10) != 0 && *((_QWORD *)&v72[0] + 1) )
  {
    v17 = -1073741585;
    v41 = -1073741585;
    goto LABEL_99;
  }
  if ( PreviousMode == 1 )
  {
    v20 = *(_QWORD *)&v72[1];
    if ( *(_QWORD *)&v72[1] >= 0x7FFFFFFF0000uLL )
      v20 = 0x7FFFFFFF0000LL;
    v21 = *(_DWORD *)v20;
    *(_DWORD *)&v73.Length = v21;
    v22 = *(_QWORD *)(v20 + 8);
    v73.Buffer = (wchar_t *)v22;
    DestinationString = v73;
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
    Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithQuotaTag(
                                   0x7FFFFFFF0000LL,
                                   DestinationString.Length,
                                   0x6B624D43u);
    if ( !Privileges )
    {
      v17 = -1073741670;
      v41 = -1073741670;
      v14 = 0;
      goto LABEL_99;
    }
    v25 = (wchar_t *)Privileges;
    memmove(Privileges, DestinationString.Buffer, Length);
    DestinationString.Length = Length;
    DestinationString.MaximumLength = Length;
    DestinationString.Buffer = v25;
    v14 = 0;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
  }
  *(_QWORD *)&v72[1] = &DestinationString;
  *(_QWORD *)&v72[2] = 0LL;
  if ( !v70
    || (LOBYTE(v28) = PreviousMode,
        v17 = CmObReferenceObjectByHandle(v70, 0, v27, v28, (__int64)&v45, 0LL),
        v41 = v17,
        v17 >= 0) )
  {
    if ( !Handle
      || (v17 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL),
          v51 = Object,
          v41 = v17,
          v17 >= 0) )
    {
      if ( !v64
        || (LOBYTE(v28) = PreviousMode,
            v17 = CmObReferenceObjectByHandle(v64, 0, v27, v28, (__int64)&v52, 0LL),
            v41 = v17,
            v17 >= 0) )
      {
        if ( v65 )
        {
          v17 = ObReferenceObjectByHandle(v65, 4u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Token, 0LL);
          v50 = Token;
          v41 = v17;
          if ( v17 < 0 )
            goto LABEL_99;
          if ( SeTokenType(Token) != TokenImpersonation )
          {
            v17 = -1073741656;
            goto LABEL_5;
          }
        }
        v29 = KeGetCurrentThread();
        --v29->KernelApcDisable;
        v43 = 1;
        v17 = CmConvertHandleToKernelHandle(*((void **)&v72[0] + 1), v26, PreviousMode, 0x20019u, &v54);
        v41 = v17;
        if ( v17 >= 0 )
        {
          v30 = v54;
          *((_QWORD *)&v72[0] + 1) = v54;
          v31 = 0LL;
          v59 = 0LL;
          memset(v74, 0, sizeof(v74));
          v61 = 0LL;
          v62 = 0LL;
          v63 = 0LL;
          v60[1] = v60;
          v60[0] = v60;
          if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
          {
            if ( v30 )
            {
              ObReferenceObjectByHandle(v30, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &v67, 0LL);
              v31 = v67;
              v59 = v67;
            }
            v74[10] = 2LL;
            v74[0] = v31;
            v74[1] = &DestinationString;
            v74[2] = &v56;
            LODWORD(v74[3]) = a3;
            v74[4] = v45;
            v74[5] = v51;
            LODWORD(v74[6]) = DesiredAccess;
            v74[7] = v49;
            v74[11] = v50;
            v61 = v74;
            v62 = v52;
            LOBYTE(v63) = a10;
            LOBYTE(v32) = 1;
            v17 = CmpCallCallBacksEx(32, (unsigned int)v74, (unsigned int)&v61, v32, 33, 0LL, (__int64)v60);
            v41 = v17;
          }
          if ( v17 < 0 )
          {
            if ( v17 == -1073740541 )
            {
              v17 = 0;
              v41 = 0;
              v42 = 1;
            }
            v14 = 0;
          }
          else
          {
            CmpTraceHiveLoadStart(&v56.Length, a3);
            v14 = 1;
            if ( (a3 & 0x10) != 0 )
            {
              ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
              v44 = 0;
              v33 = CmLoadAppKey(
                      (__int64)v72,
                      &v56,
                      a3,
                      (__int64)v45,
                      (struct _KEVENT *)v51,
                      (POBJECT_HANDLE_INFORMATION)v50,
                      v47,
                      (__int64 *)&BugCheckParameter2);
              v31 = v59;
            }
            else
            {
              LOBYTE(HandleInformation) = a10;
              v33 = CmLoadKey(v72, &v56, a3, v45, v52, HandleInformation, v51, v50, v47, &BugCheckParameter2);
            }
            v17 = CmPostCallbackNotificationEx(33, (__int64)v31, v33, (__int64)v74, (__int64)&v61, v60);
            v41 = v17;
          }
          if ( v31 )
            ObfDereferenceObject(v31);
          if ( v45 )
          {
            ObfDereferenceObject(v45);
            v45 = 0LL;
          }
          if ( v17 >= 0 && (a3 & 0x810) != 0 && !v42 )
          {
            v57 = 0LL;
            v34 = v75[0];
            if ( (a3 & 0x10) != 0 )
              v34 = 64;
            LODWORD(v75[0]) = v34;
            p_DestinationString = &DestinationString;
            if ( v47[0] )
              p_DestinationString = (UNICODE_STRING *)v47[0];
            v47[0] = p_DestinationString;
            v17 = ObReferenceObjectByName(
                    (_DWORD)p_DestinationString,
                    64,
                    0,
                    0,
                    (__int64)CmKeyObjectType,
                    0,
                    (__int64)v75,
                    (__int64)&v57);
            v41 = v17;
            if ( v17 >= 0 )
            {
              v38 = v57;
              ObDeleteCapturedInsertInfo((__int64)v57, v36, v37);
              v17 = ObOpenObjectByPointer(
                      v38,
                      PreviousMode != 0 ? 64 : 576,
                      0LL,
                      DesiredAccess,
                      (POBJECT_TYPE)CmKeyObjectType,
                      PreviousMode,
                      &v68);
              v41 = v17;
              ObfDereferenceObject(v38);
              if ( v17 >= 0 )
                *v49 = v68;
            }
            if ( BugCheckParameter2 )
            {
              if ( (a3 & 0x10) != 0 )
                CmReleaseLoadKeyContext(BugCheckParameter2, v17);
              else
                CmpDereferenceKeyControlBlock(BugCheckParameter2);
              BugCheckParameter2 = 0LL;
            }
            if ( v17 < 0 && (a3 & 0x800) != 0 )
            {
              v17 = 0;
              v41 = 0;
            }
          }
        }
      }
    }
  }
LABEL_99:
  if ( BugCheckParameter2 )
    CmReleaseLoadKeyContext(BugCheckParameter2, v17);
  if ( v47[0] && v47[0] != &DestinationString )
    CmpFreeTransientPoolWithTag(v47[0], 0x624E4D43u);
  if ( v54 )
    ZwClose(v54);
  if ( v43 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v17 = v41;
  }
  if ( v50 )
    ObfDereferenceObject(v50);
  if ( v52 )
    ObfDereferenceObject(v52);
  if ( v51 )
    ObfDereferenceObject(v51);
  if ( v45 )
    ObfDereferenceObject(v45);
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v56.Buffer )
    ExFreePoolWithTag(v56.Buffer, 0);
  CmpCleanupParseContext(v75, 0LL);
  if ( v44 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v17 = v41;
  }
  if ( v14 )
    CmpTraceHiveLoadStop((unsigned int)v17);
  return (unsigned int)v17;
}
