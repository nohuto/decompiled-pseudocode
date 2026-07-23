/*
 * XREFs of NtCreateLowBoxToken @ 0x1404A48A0
 * Callers:
 *     <none>
 * Callees:
 *     SepCaptureHandles @ 0x140037860 (SepCaptureHandles.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x14003DE8C (SepAppendAceToTokenDefaultDacl.c)
 *     SepLocateTokenIntegrity @ 0x140064184 (SepLocateTokenIntegrity.c)
 *     RtlSubAuthoritySid @ 0x14008C0C0 (RtlSubAuthoritySid.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlEqualSid @ 0x1400EDD10 (RtlEqualSid.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SepCheckCapabilities @ 0x14041E774 (SepCheckCapabilities.c)
 *     SepCheckCreateLowBox @ 0x14045B3C8 (SepCheckCreateLowBox.c)
 *     SepSetTokenCachedHandles @ 0x140461CB4 (SepSetTokenCachedHandles.c)
 *     SepSetTokenLowboxNumber @ 0x140461FFC (SepSetTokenLowboxNumber.c)
 *     RtlIsPackageSid @ 0x14046A0F8 (RtlIsPackageSid.c)
 *     SeSetMandatoryPolicyToken @ 0x14046E770 (SeSetMandatoryPolicyToken.c)
 *     SeReleaseLuidAndAttributesArray @ 0x14046FF24 (SeReleaseLuidAndAttributesArray.c)
 *     SepSetTokenCapabilities @ 0x14046FF44 (SepSetTokenCapabilities.c)
 *     SeCaptureSidAndAttributesArray @ 0x140470170 (SeCaptureSidAndAttributesArray.c)
 *     SeReleaseSid @ 0x140471664 (SeReleaseSid.c)
 *     RtlGetAppContainerSidType @ 0x1404A4820 (RtlGetAppContainerSidType.c)
 *     RtlIsCapabilitySid @ 0x1404A4EC8 (RtlIsCapabilitySid.c)
 *     SepSetTokenPackage @ 0x1404F1A70 (SepSetTokenPackage.c)
 *     SeCaptureSid @ 0x1404F32A8 (SeCaptureSid.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1404F4620 (SepAppendAceToTokenObjectAcl.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     SepDuplicateToken @ 0x14050CF30 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
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
  NTSTATUS appended; // ebx
  ACCESS_MASK GrantedAccess; // r12d
  ULONG v21; // ebx
  PSID *v22; // rdi
  unsigned int v23; // r14d
  PSID v24; // r12
  __int64 v25; // r9
  char v26; // r14
  __int64 v27; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v29; // r14
  __int64 TokenIntegrity; // rax
  void *v31; // rcx
  unsigned __int8 v32; // al
  int v33; // eax
  signed __int32 v34[8]; // [rsp+0h] [rbp-108h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-E8h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-E0h]
  __int64 v37; // [rsp+30h] [rbp-D8h]
  char v38; // [rsp+50h] [rbp-B8h]
  char v39; // [rsp+51h] [rbp-B7h]
  _WORD v40[7]; // [rsp+52h] [rbp-B6h] BYREF
  PSID Sid; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v42; // [rsp+68h] [rbp-A0h] BYREF
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+70h] [rbp-98h] BYREF
  PVOID Token; // [rsp+78h] [rbp-90h] BYREF
  __int64 v45; // [rsp+80h] [rbp-88h] BYREF
  int v46; // [rsp+88h] [rbp-80h] BYREF
  PVOID P; // [rsp+90h] [rbp-78h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-70h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v49; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v50; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v51; // [rsp+B0h] [rbp-58h] BYREF
  int v52; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE *v53; // [rsp+C0h] [rbp-48h]
  __int64 v54; // [rsp+C8h] [rbp-40h]
  __int64 v55; // [rsp+D0h] [rbp-38h]
  int v57; // [rsp+128h] [rbp+20h]

  v57 = (int)ObjectAttributes;
  v9 = (int)ObjectAttributes;
  v42 = 0LL;
  LODWORD(v45) = 0;
  P = 0LL;
  Sid = 0LL;
  v49 = 0LL;
  Handle = 0LL;
  v55 = 0LL;
  *(_QWORD *)&v40[3] = 0LL;
  v46 = 1;
  v39 = 0;
  v38 = 0;
  v50 = 0LL;
  v51 = 0LL;
  AppContainerSidType = NotAppContainerSidType;
  LOBYTE(v40[0]) = 0;
  v52 = 0;
  v53 = 0LL;
  v54 = 0LL;
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
             &v49);
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
  GrantedAccess = v49.GrantedAccess;
  if ( DesiredAccess )
    GrantedAccess = DesiredAccess;
  HIDWORD(v45) = GrantedAccess;
  if ( Capabilities )
    appended = SeCaptureSidAndAttributesArray(
                 (char *)Capabilities,
                 CapabilityCount,
                 PreviousMode,
                 0LL,
                 0,
                 (int)HandleInformation,
                 v37,
                 (void **)&v42,
                 (unsigned int *)&v45);
  if ( appended < 0 )
    goto LABEL_81;
  appended = SepCaptureHandles(HandleCount, (__int64)Handles, &P);
  if ( appended < 0 )
    goto LABEL_81;
  if ( !RtlIsPackageSid(v18) )
    goto LABEL_75;
  if ( ((v18[1] - 8) & 0xFB) != 0 )
  {
    appended = -1073700350;
    goto LABEL_81;
  }
  v21 = 0;
  if ( CapabilityCount )
  {
    v22 = (PSID *)v42;
    while ( RtlIsCapabilitySid(*v22) )
    {
      v23 = 0;
      if ( v21 )
      {
        v24 = *v22;
        while ( !RtlEqualSid(v24, *(PSID *)(v42 + 16LL * v23)) )
        {
          if ( ++v23 >= v21 )
            goto LABEL_33;
        }
        break;
      }
LABEL_33:
      ++v21;
      v22 += 2;
      if ( v21 >= CapabilityCount )
      {
        v9 = v57;
        goto LABEL_35;
      }
    }
LABEL_75:
    appended = -1073741811;
    goto LABEL_81;
  }
LABEL_35:
  appended = RtlGetAppContainerSidType(v18, &AppContainerSidType);
  if ( appended < 0 )
  {
LABEL_81:
    v27 = *(_QWORD *)&v40[3];
    goto LABEL_82;
  }
  if ( AppContainerSidType == ChildAppContainerSidType )
  {
    appended = SepCheckCapabilities(Token, CapabilityCount, v42, v25, (char *)v40);
    if ( !LOBYTE(v40[0]) )
    {
      appended = -1073741790;
      goto LABEL_81;
    }
  }
  if ( appended < 0 )
    goto LABEL_81;
  appended = SepDuplicateToken((_DWORD)Token, v9, 0, 1, 0, PreviousMode, 0, (__int64)&v40[3]);
  if ( appended < 0 )
    goto LABEL_81;
  v26 = 1;
  v38 = 1;
  v27 = *(_QWORD *)&v40[3];
  appended = SeSetMandatoryPolicyToken(*(__int64 *)&v40[3], &v46);
  if ( appended >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v29 = *(_QWORD *)&v40[3];
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(*(_QWORD *)&v40[3] + 48LL), 1u);
    _InterlockedOr(v34, 0);
    v39 = 1;
    v27 = *(_QWORD *)&v40[3];
    TokenIntegrity = SepLocateTokenIntegrity(*(__int64 *)&v40[3]);
    if ( TokenIntegrity )
    {
      v31 = *(void **)TokenIntegrity;
      v32 = *(_BYTE *)(*(_QWORD *)TokenIntegrity + 1LL);
      if ( v32 )
        *RtlSubAuthoritySid(v31, (unsigned int)v32 - 1) = 4096;
      v33 = AppContainerPrivilegesEnabledExt(PackageSid, 0x200800000LL, &v50, &v51);
      appended = v33;
      if ( v33 == -1073741637 )
      {
        *(_QWORD *)(v27 + 72) &= 0x200800000uLL;
        *(_QWORD *)(v27 + 80) &= 0x200800000uLL;
        appended = 0;
      }
      else
      {
        if ( v33 < 0 )
          goto LABEL_80;
        *(_QWORD *)(v27 + 72) &= v50;
        *(_QWORD *)(v27 + 80) &= v51;
      }
      *(_DWORD *)(v27 + 200) = *(_DWORD *)(v27 + 200) & 0xFFFF9FFF | 0x4000;
    }
    else
    {
      appended = -1073740730;
    }
    if ( appended >= 0 )
    {
      v18 = Sid;
      appended = SepSetTokenCapabilities(v27, Sid, (void *)v42, CapabilityCount);
      if ( appended < 0 )
        goto LABEL_82;
      appended = SepSetTokenLowboxNumber(v27, (__int64)v18);
      if ( appended < 0 )
        goto LABEL_82;
      v52 = 0;
      v53 = v18;
      appended = SepSetTokenCachedHandles((_QWORD *)v27, &v52, HandleCount, (HANDLE *)P);
      if ( appended < 0 )
        goto LABEL_82;
      appended = SepSetTokenPackage(v27, v18);
      if ( appended < 0 )
        goto LABEL_82;
      appended = SepAppendAceToTokenDefaultDacl(v27, v18);
      if ( appended < 0 )
        goto LABEL_82;
      *(_QWORD *)(v27 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      _InterlockedOr(v34, 0);
      ExReleaseResourceLite(*(PERESOURCE *)(v29 + 48));
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v39 = 0;
      v27 = *(_QWORD *)&v40[3];
      appended = ObInsertObjectEx(*(PVOID *)&v40[3], 0LL, 0, 0LL, (__int64)&Handle);
      v18 = Sid;
      if ( appended < 0 )
        goto LABEL_55;
      appended = SepAppendAceToTokenObjectAcl(v27, 983551LL);
      if ( appended >= 0 )
      {
        SepAppendAceToTokenObjectAcl(v27, 8LL);
        ObfDereferenceObject((PVOID)v27);
LABEL_55:
        v26 = 0;
        goto LABEL_56;
      }
LABEL_82:
      v26 = v38;
      goto LABEL_56;
    }
LABEL_80:
    v18 = Sid;
    goto LABEL_82;
  }
LABEL_56:
  if ( v39 )
  {
    if ( appended >= 0 )
      *(_QWORD *)(v27 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    _InterlockedOr(v34, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)&v40[3] + 48LL));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v18 = Sid;
    v27 = *(_QWORD *)&v40[3];
  }
  if ( appended < 0 )
  {
    if ( v26 )
      ObfDereferenceObject((PVOID)v27);
    if ( Handle )
      ObCloseHandle(Handle, PreviousMode);
  }
  if ( v42 )
    SeReleaseLuidAndAttributesArray((void *)v42, PreviousMode);
  if ( v18 )
    SeReleaseSid(v18, PreviousMode, 1);
  ObfDereferenceObject(Token);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( appended >= 0 )
    *TokenHandle = Handle;
  return appended;
}
