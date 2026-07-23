/*
 * XREFs of NtCreateLowBoxToken @ 0x140549290
 * Callers:
 *     <none>
 * Callees:
 *     RtlSubAuthoritySid @ 0x140019320 (RtlSubAuthoritySid.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     SepLocateTokenIntegrity @ 0x1400878E8 (SepLocateTokenIntegrity.c)
 *     RtlEqualSid @ 0x140087C60 (RtlEqualSid.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x140128E84 (SepAppendAceToTokenDefaultDacl.c)
 *     SepCaptureHandles @ 0x14012C48C (SepCaptureHandles.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     SepCheckCapabilities @ 0x140447668 (SepCheckCapabilities.c)
 *     SeReleaseLuidAndAttributesArray @ 0x14045DA2C (SeReleaseLuidAndAttributesArray.c)
 *     SeReleaseSid @ 0x140460948 (SeReleaseSid.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140484B90 (SepAppendAceToTokenObjectAcl.c)
 *     SeCaptureSid @ 0x140487010 (SeCaptureSid.c)
 *     SepSetTokenCapabilities @ 0x1404888F8 (SepSetTokenCapabilities.c)
 *     SeCaptureSidAndAttributesArray @ 0x140488B20 (SeCaptureSidAndAttributesArray.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ObInsertObjectEx @ 0x1404BC710 (ObInsertObjectEx.c)
 *     SepDuplicateToken @ 0x1404C6BB0 (SepDuplicateToken.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 *     RtlGetAppContainerSidType @ 0x140549210 (RtlGetAppContainerSidType.c)
 *     RtlIsCapabilitySid @ 0x1405498A0 (RtlIsCapabilitySid.c)
 *     RtlIsPackageSid @ 0x140549BD8 (RtlIsPackageSid.c)
 *     SepSetTokenCachedHandles @ 0x140563B44 (SepSetTokenCachedHandles.c)
 *     SepSetTokenLowboxNumber @ 0x140563EE0 (SepSetTokenLowboxNumber.c)
 *     SepSetTokenPackage @ 0x1405646C8 (SepSetTokenPackage.c)
 *     SeSetMandatoryPolicyToken @ 0x14058B13C (SeSetMandatoryPolicyToken.c)
 *     SepCheckCreateLowBox @ 0x14059942C (SepCheckCreateLowBox.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
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
  POBJECT_ATTRIBUTES v9; // r14
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v14; // rcx
  __int64 v15; // rcx
  HANDLE *v16; // rcx
  NTSTATUS result; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  _BYTE *v20; // rsi
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
  signed __int32 v36[8]; // [rsp+0h] [rbp-F8h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-D8h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-D0h]
  __int64 v39; // [rsp+30h] [rbp-C8h]
  char v40; // [rsp+50h] [rbp-A8h]
  char v41; // [rsp+51h] [rbp-A7h]
  _WORD v42[7]; // [rsp+52h] [rbp-A6h] BYREF
  PSID Sid; // [rsp+60h] [rbp-98h] BYREF
  __int64 v44; // [rsp+68h] [rbp-90h] BYREF
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+70h] [rbp-88h] BYREF
  PVOID Token; // [rsp+78h] [rbp-80h] BYREF
  unsigned int v47; // [rsp+80h] [rbp-78h] BYREF
  ACCESS_MASK v48; // [rsp+84h] [rbp-74h]
  int v49; // [rsp+88h] [rbp-70h] BYREF
  PVOID P; // [rsp+90h] [rbp-68h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-60h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v52; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v53; // [rsp+A8h] [rbp-50h] BYREF
  __int64 v54; // [rsp+B0h] [rbp-48h] BYREF
  int v55; // [rsp+B8h] [rbp-40h] BYREF
  _BYTE *v56; // [rsp+C0h] [rbp-38h]
  __int64 v57; // [rsp+C8h] [rbp-30h]

  v9 = ObjectAttributes;
  v44 = 0LL;
  v47 = 0;
  P = 0LL;
  Sid = 0LL;
  v52 = 0LL;
  Handle = 0LL;
  *(_QWORD *)&v42[3] = 0LL;
  v49 = 1;
  v41 = 0;
  v40 = 0;
  v53 = 0LL;
  v54 = 0LL;
  AppContainerSidType = NotAppContainerSidType;
  LOBYTE(v42[0]) = 0;
  v55 = 0;
  v56 = 0LL;
  v57 = 0LL;
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
      goto LABEL_14;
    return -1073741776;
  }
  if ( !Handles )
    return -1073741776;
LABEL_14:
  result = ObReferenceObjectByHandle(
             ExistingTokenHandle,
             2u,
             (POBJECT_TYPE)SeTokenObjectType,
             PreviousMode,
             &Token,
             &v52);
  if ( result < 0 )
    return result;
  result = SeCaptureSid((char *)PackageSid, PreviousMode, v18, v19, (int)Object, 1, &Sid);
  if ( result < 0 )
    return result;
  v20 = Sid;
  result = SepCheckCreateLowBox(Sid);
  appended = result;
  if ( result < 0 )
    return result;
  if ( *((_DWORD *)Token + 48) != 1 && *((int *)Token + 49) < 2 )
  {
    ObfDereferenceObject(Token);
    return -1073741659;
  }
  GrantedAccess = v52.GrantedAccess;
  if ( DesiredAccess )
    GrantedAccess = DesiredAccess;
  v48 = GrantedAccess;
  if ( Capabilities )
    appended = SeCaptureSidAndAttributesArray(
                 (char *)Capabilities,
                 CapabilityCount,
                 PreviousMode,
                 0LL,
                 0,
                 (int)HandleInformation,
                 v39,
                 (void **)&v44,
                 &v47);
  if ( appended < 0 )
    goto LABEL_81;
  appended = SepCaptureHandles(HandleCount, (__int64)Handles, &P);
  if ( appended < 0 )
    goto LABEL_81;
  if ( !RtlIsPackageSid(v20) )
    goto LABEL_74;
  if ( ((v20[1] - 8) & 0xFB) != 0 )
  {
    appended = -1073700350;
    goto LABEL_81;
  }
  v23 = 0;
  if ( CapabilityCount )
  {
    v24 = (PSID *)v44;
    while ( RtlIsCapabilitySid(*v24) )
    {
      v25 = 0;
      if ( v23 )
      {
        v26 = *v24;
        while ( !RtlEqualSid(v26, *(PSID *)(v44 + 16LL * v25)) )
        {
          if ( ++v25 >= v23 )
            goto LABEL_34;
        }
        break;
      }
LABEL_34:
      ++v23;
      v24 += 2;
      if ( v23 >= CapabilityCount )
      {
        GrantedAccess = v48;
        v9 = ObjectAttributes;
        goto LABEL_36;
      }
    }
LABEL_74:
    appended = -1073741811;
    goto LABEL_81;
  }
LABEL_36:
  appended = RtlGetAppContainerSidType(v20, &AppContainerSidType);
  if ( appended < 0 )
  {
LABEL_81:
    v29 = *(_QWORD *)&v42[3];
    goto LABEL_82;
  }
  if ( AppContainerSidType == ChildAppContainerSidType )
  {
    appended = SepCheckCapabilities(Token, CapabilityCount, v44, v27, (char *)v42);
    if ( !LOBYTE(v42[0]) )
    {
      appended = -1073741790;
      goto LABEL_81;
    }
  }
  if ( appended < 0 )
    goto LABEL_81;
  appended = SepDuplicateToken((__int64)Token, (__int64)v9, 0, 1, 0, PreviousMode, 0, &v42[3]);
  if ( appended < 0 )
    goto LABEL_81;
  v28 = 1;
  v40 = 1;
  v29 = *(_QWORD *)&v42[3];
  appended = SeSetMandatoryPolicyToken(*(_QWORD *)&v42[3], &v49);
  if ( appended >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v31 = *(_QWORD *)&v42[3];
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(*(_QWORD *)&v42[3] + 48LL), 1u);
    _InterlockedOr(v36, 0);
    v41 = 1;
    v29 = *(_QWORD *)&v42[3];
    TokenIntegrity = SepLocateTokenIntegrity(*(__int64 *)&v42[3]);
    if ( TokenIntegrity )
    {
      v33 = *(void **)TokenIntegrity;
      v34 = *(_BYTE *)(*(_QWORD *)TokenIntegrity + 1LL);
      if ( v34 )
        *RtlSubAuthoritySid(v33, (unsigned int)v34 - 1) = 4096;
      v35 = AppContainerPrivilegesEnabledExt(PackageSid, 0x200800000LL, &v53, &v54);
      appended = v35;
      if ( v35 == -1073741637 )
      {
        *(_QWORD *)(v29 + 72) &= 0x200800000uLL;
        *(_QWORD *)(v29 + 80) &= 0x200800000uLL;
        appended = 0;
      }
      else
      {
        if ( v35 < 0 )
          goto LABEL_80;
        *(_QWORD *)(v29 + 72) &= v53;
        *(_QWORD *)(v29 + 80) &= v54;
      }
      *(_DWORD *)(v29 + 200) = *(_DWORD *)(v29 + 200) & 0xFFFF9FFF | 0x4000;
    }
    else
    {
      appended = -1073740730;
    }
    if ( appended >= 0 )
    {
      v20 = Sid;
      appended = SepSetTokenCapabilities(v29, Sid, (void *)v44, CapabilityCount);
      if ( appended < 0 )
        goto LABEL_82;
      appended = SepSetTokenLowboxNumber(v29, v20);
      if ( appended < 0 )
        goto LABEL_82;
      v55 = 0;
      v56 = v20;
      appended = SepSetTokenCachedHandles(v29, &v55, HandleCount, P, (_DWORD)Object, HandleInformation, v39);
      if ( appended < 0 )
        goto LABEL_82;
      appended = SepSetTokenPackage(v29, v20);
      if ( appended < 0 )
        goto LABEL_82;
      appended = SepAppendAceToTokenDefaultDacl(v29, (__int64)v20);
      if ( appended < 0 )
        goto LABEL_82;
      *(_QWORD *)(v29 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      _InterlockedOr(v36, 0);
      ExReleaseResourceLite(*(PERESOURCE *)(v31 + 48));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v41 = 0;
      v29 = *(_QWORD *)&v42[3];
      appended = ObInsertObjectEx(*(_QWORD **)&v42[3], 0LL, GrantedAccess, 1, 0, 0LL, (unsigned __int64 *)&Handle);
      v20 = Sid;
      if ( appended < 0 )
        goto LABEL_57;
      appended = SepAppendAceToTokenObjectAcl(v29, 983551, Sid);
      if ( appended >= 0 )
      {
        SepAppendAceToTokenObjectAcl(v29, 8, SeAliasAdminsSid);
        ObfDereferenceObject((PVOID)v29);
LABEL_57:
        v28 = 0;
        goto LABEL_58;
      }
LABEL_82:
      v28 = v40;
      goto LABEL_58;
    }
LABEL_80:
    v20 = Sid;
    goto LABEL_82;
  }
LABEL_58:
  if ( v41 )
  {
    if ( appended >= 0 )
      *(_QWORD *)(v29 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    _InterlockedOr(v36, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)&v42[3] + 48LL));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v20 = Sid;
    v29 = *(_QWORD *)&v42[3];
  }
  if ( appended < 0 )
  {
    if ( v28 )
      ObfDereferenceObject((PVOID)v29);
    if ( Handle )
      ObCloseHandle(Handle, PreviousMode);
  }
  if ( v44 )
    SeReleaseLuidAndAttributesArray((void *)v44, PreviousMode);
  if ( v20 )
    SeReleaseSid(v20, PreviousMode, 1);
  ObfDereferenceObject(Token);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( appended >= 0 )
    *TokenHandle = Handle;
  return appended;
}
