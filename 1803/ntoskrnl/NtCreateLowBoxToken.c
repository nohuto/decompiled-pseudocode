/*
 * XREFs of NtCreateLowBoxToken @ 0x140540EB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSubAuthoritySid @ 0x14005C820 (RtlSubAuthoritySid.c)
 *     SepLocateTokenIntegrity @ 0x14005CA48 (SepLocateTokenIntegrity.c)
 *     SepCaptureHandles @ 0x14009F208 (SepCaptureHandles.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x1400A0C84 (SepAppendAceToTokenDefaultDacl.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     RtlEqualSid @ 0x140105600 (RtlEqualSid.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1404C20C0 (SepAppendAceToTokenObjectAcl.c)
 *     SepDuplicateToken @ 0x1404C28D0 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x1404C3DD0 (ObInsertObjectEx.c)
 *     SepSetTokenPackage @ 0x1404D5088 (SepSetTokenPackage.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1404ECAE0 (SeReleaseLuidAndAttributesArray.c)
 *     SepCheckCapabilities @ 0x14053EE14 (SepCheckCapabilities.c)
 *     SepCheckCreateLowBox @ 0x14053F314 (SepCheckCreateLowBox.c)
 *     SepSetTokenCachedHandles @ 0x14053F3B4 (SepSetTokenCachedHandles.c)
 *     SepSetTokenLowboxNumber @ 0x14053F6FC (SepSetTokenLowboxNumber.c)
 *     RtlGetAppContainerSidType @ 0x140540E30 (RtlGetAppContainerSidType.c)
 *     RtlIsCapabilitySid @ 0x1405414D8 (RtlIsCapabilitySid.c)
 *     RtlIsPackageSid @ 0x140541F64 (RtlIsPackageSid.c)
 *     SepSetTokenCapabilities @ 0x140543800 (SepSetTokenCapabilities.c)
 *     SeCaptureSidAndAttributesArray @ 0x140543A30 (SeCaptureSidAndAttributesArray.c)
 *     SeReleaseSid @ 0x140543EF0 (SeReleaseSid.c)
 *     SeCaptureSid @ 0x140543F18 (SeCaptureSid.c)
 *     SeSetMandatoryPolicyToken @ 0x140545E8C (SeSetMandatoryPolicyToken.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtCreateLowBoxToken(
        PHANDLE TokenHandle,
        HANDLE ExistingTokenHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PSID PackageSid,
        ULONG CapabilityCount,
        PSID_AND_ATTRIBUTES Capabilities,
        ULONG HandleCount,
        HANDLE *Handles)
{
  int v9; // r14d
  char PreviousMode; // r15
  __int64 v14; // rcx
  __int64 v15; // rcx
  HANDLE *v16; // rcx
  NTSTATUS result; // eax
  _BYTE *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // r8
  NTSTATUS appended; // ebx
  ACCESS_MASK GrantedAccess; // r12d
  ULONG v23; // ebx
  PSID *v24; // rdi
  unsigned int v25; // r14d
  PSID v26; // r12
  __int64 v27; // r9
  char v28; // r14
  __int64 v29; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v31; // r14
  __int64 TokenIntegrity; // rax
  void *v33; // rcx
  unsigned __int8 v34; // al
  int v35; // eax
  __int64 v36; // r9
  signed __int32 v37[8]; // [rsp+0h] [rbp-F8h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-D8h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-D0h]
  __int64 v40; // [rsp+30h] [rbp-C8h]
  char v41; // [rsp+50h] [rbp-A8h]
  char v42; // [rsp+51h] [rbp-A7h]
  _WORD v43[7]; // [rsp+52h] [rbp-A6h] BYREF
  PSID Sid; // [rsp+60h] [rbp-98h] BYREF
  __int64 v45; // [rsp+68h] [rbp-90h] BYREF
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+70h] [rbp-88h] BYREF
  PVOID Token; // [rsp+78h] [rbp-80h] BYREF
  int v48; // [rsp+80h] [rbp-78h] BYREF
  ACCESS_MASK v49; // [rsp+84h] [rbp-74h]
  int v50; // [rsp+88h] [rbp-70h] BYREF
  __int64 v51; // [rsp+90h] [rbp-68h] BYREF
  __int64 v52; // [rsp+98h] [rbp-60h] BYREF
  PVOID P; // [rsp+A0h] [rbp-58h] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp-50h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v55; // [rsp+B0h] [rbp-48h] BYREF
  __int64 v56; // [rsp+B8h] [rbp-40h] BYREF
  _BYTE *v57; // [rsp+C0h] [rbp-38h]
  __int64 v58; // [rsp+C8h] [rbp-30h]
  int v60; // [rsp+118h] [rbp+20h]

  v60 = (int)ObjectAttributes;
  v9 = (int)ObjectAttributes;
  v45 = 0LL;
  v48 = 0;
  P = 0LL;
  Sid = 0LL;
  v55 = 0LL;
  Handle = 0LL;
  *(_QWORD *)&v43[3] = 0LL;
  v50 = 1;
  v42 = 0;
  v41 = 0;
  v52 = 0LL;
  v51 = 0LL;
  AppContainerSidType = NotAppContainerSidType;
  LOBYTE(v43[0]) = 0;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v14 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)TokenHandle < 0x7FFFFFFF0000LL )
      v14 = (__int64)TokenHandle;
    *(_QWORD *)v14 = *(_QWORD *)v14;
    v15 = HandleCount;
    if ( v15 * 8 )
    {
      if ( ((unsigned __int8)Handles & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = &Handles[v15];
      if ( (unsigned __int64)v16 > 0x7FFFFFFF0000LL || v16 < Handles )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  if ( !PackageSid )
    return -1073741811;
  if ( !HandleCount )
  {
    if ( !Handles )
      goto LABEL_13;
    return -1073741776;
  }
  if ( !Handles )
    return -1073741776;
LABEL_13:
  result = ObReferenceObjectByHandle(
             ExistingTokenHandle,
             2u,
             (POBJECT_TYPE)SeTokenObjectType,
             PreviousMode,
             &Token,
             &v55);
  if ( result < 0 )
    return result;
  result = SeCaptureSid(PackageSid, (int)Object, 1, (__int64)&Sid);
  if ( result < 0 )
    return result;
  v18 = Sid;
  result = SepCheckCreateLowBox(Sid);
  appended = result;
  if ( result < 0 )
    return result;
  if ( *((_DWORD *)Token + 48) != 1 && *((int *)Token + 49) < 2 )
  {
    ObfDereferenceObject(Token);
    return -1073741659;
  }
  GrantedAccess = v55.GrantedAccess;
  if ( DesiredAccess )
    GrantedAccess = DesiredAccess;
  v49 = GrantedAccess;
  if ( Capabilities )
    appended = SeCaptureSidAndAttributesArray(
                 Capabilities,
                 0,
                 (int)HandleInformation,
                 v40,
                 (__int64)&v45,
                 (__int64)&v48);
  if ( appended < 0 )
    goto LABEL_75;
  appended = SepCaptureHandles(HandleCount, (__int64)Handles, &P);
  if ( appended < 0 )
    goto LABEL_75;
  if ( !RtlIsPackageSid(v18) )
    goto LABEL_74;
  if ( ((v18[1] - 8) & 0xFB) != 0 )
  {
    appended = -1073700350;
    goto LABEL_75;
  }
  v23 = 0;
  if ( CapabilityCount )
  {
    v24 = (PSID *)v45;
    while ( RtlIsCapabilitySid(*v24) )
    {
      v25 = 0;
      if ( v23 )
      {
        v26 = *v24;
        while ( !RtlEqualSid(v26, *(PSID *)(v45 + 16LL * v25)) )
        {
          if ( ++v25 >= v23 )
            goto LABEL_32;
        }
        break;
      }
LABEL_32:
      ++v23;
      v24 += 2;
      if ( v23 >= CapabilityCount )
      {
        GrantedAccess = v49;
        v9 = v60;
        goto LABEL_34;
      }
    }
LABEL_74:
    appended = -1073741811;
    goto LABEL_75;
  }
LABEL_34:
  appended = RtlGetAppContainerSidType(v18, &AppContainerSidType);
  if ( appended < 0 )
  {
LABEL_75:
    v29 = *(_QWORD *)&v43[3];
    goto LABEL_76;
  }
  if ( AppContainerSidType == ChildAppContainerSidType )
  {
    appended = SepCheckCapabilities(Token, CapabilityCount, v45, v27, (char *)v43);
    if ( !LOBYTE(v43[0]) )
    {
      appended = -1073741790;
      goto LABEL_75;
    }
  }
  if ( appended < 0 )
    goto LABEL_75;
  appended = SepDuplicateToken((__int64)Token, v9, 0, 1, 0, PreviousMode, 0, (char **)&v43[3]);
  if ( appended < 0 )
    goto LABEL_75;
  v28 = 1;
  v41 = 1;
  v29 = *(_QWORD *)&v43[3];
  appended = SeSetMandatoryPolicyToken(*(_QWORD *)&v43[3], &v50);
  if ( appended >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v31 = *(_QWORD *)&v43[3];
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(*(_QWORD *)&v43[3] + 48LL), 1u);
    _InterlockedOr(v37, 0);
    v42 = 1;
    v29 = *(_QWORD *)&v43[3];
    TokenIntegrity = SepLocateTokenIntegrity(*(__int64 *)&v43[3]);
    if ( TokenIntegrity )
    {
      v33 = *(void **)TokenIntegrity;
      v34 = *(_BYTE *)(*(_QWORD *)TokenIntegrity + 1LL);
      if ( v34 )
        *RtlSubAuthoritySid(v33, (unsigned int)v34 - 1) = 4096;
      v35 = AppContainerPrivilegesEnabledExt(PackageSid, 0x200800000LL, &v52, &v51);
      appended = v35;
      if ( v35 == -1073741637 )
      {
        *(_QWORD *)(v29 + 72) &= 0x200800000uLL;
        *(_QWORD *)(v29 + 80) &= 0x200800000uLL;
        *(_QWORD *)(v29 + 64) &= 0x200800000uLL;
        appended = 0;
      }
      else
      {
        if ( v35 < 0 )
          goto LABEL_81;
        *(_QWORD *)(v29 + 72) &= v52;
        *(_QWORD *)(v29 + 80) &= v51;
        *(_QWORD *)(v29 + 64) &= v52 | v51;
      }
      *(_DWORD *)(v29 + 200) = *(_DWORD *)(v29 + 200) & 0xFFFF9FFF | 0x4000;
    }
    else
    {
      appended = -1073740730;
    }
    if ( appended >= 0 )
    {
      v18 = Sid;
      appended = SepSetTokenCapabilities(v29, Sid, v45, CapabilityCount);
      if ( appended < 0 )
        goto LABEL_76;
      appended = SepSetTokenLowboxNumber(v29, (__int64)v18, v20, v36);
      if ( appended < 0 )
        goto LABEL_76;
      LODWORD(v56) = 0;
      v57 = v18;
      appended = SepSetTokenCachedHandles((_QWORD *)v29, &v56, HandleCount, (HANDLE *)P);
      if ( appended < 0 )
        goto LABEL_76;
      appended = SepSetTokenPackage(v29, v18);
      if ( appended < 0 )
        goto LABEL_76;
      appended = SepAppendAceToTokenDefaultDacl(v29, (__int64)v18);
      if ( appended < 0 )
        goto LABEL_76;
      *(_QWORD *)(v29 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      _InterlockedOr(v37, 0);
      ExReleaseResourceLite(*(PERESOURCE *)(v31 + 48));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v42 = 0;
      v29 = *(_QWORD *)&v43[3];
      appended = ObInsertObjectEx(*(_QWORD **)&v43[3], 0LL, GrantedAccess, 1, 0, 0LL, &Handle);
      v18 = Sid;
      if ( appended >= 0 )
      {
        appended = SepAppendAceToTokenObjectAcl(v29, 983551, Sid);
        if ( appended < 0 )
        {
LABEL_76:
          v28 = v41;
          goto LABEL_55;
        }
        SepAppendAceToTokenObjectAcl(v29, 8, SeAliasAdminsSid);
        ObfDereferenceObject((PVOID)v29);
      }
      v28 = 0;
      goto LABEL_55;
    }
LABEL_81:
    v18 = Sid;
    goto LABEL_76;
  }
LABEL_55:
  if ( v42 )
  {
    if ( appended >= 0 )
      *(_QWORD *)(v29 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    _InterlockedOr(v37, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)&v43[3] + 48LL));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v18 = Sid;
    v29 = *(_QWORD *)&v43[3];
  }
  if ( appended < 0 )
  {
    if ( v28 )
      ObfDereferenceObject((PVOID)v29);
    if ( Handle )
      ObCloseHandle(Handle, PreviousMode);
  }
  if ( v45 )
    SeReleaseLuidAndAttributesArray((void *)v45, PreviousMode);
  if ( v18 )
  {
    LOBYTE(v20) = 1;
    LOBYTE(v19) = PreviousMode;
    SeReleaseSid(v18, v19, v20);
  }
  ObfDereferenceObject(Token);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( appended >= 0 )
    *TokenHandle = Handle;
  return appended;
}
