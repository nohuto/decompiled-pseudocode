/*
 * XREFs of NtSetSecurityObject @ 0x14046AB40
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x14056CFA4 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlpSysVolTakeOwnership @ 0x1406EB860 (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SeSetSecurityAccessMask @ 0x14046AE60 (SeSetSecurityAccessMask.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x14046AED8 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x14046C97C (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     RtlGetSaclSecurityDescriptor @ 0x1404C2C00 (RtlGetSaclSecurityDescriptor.c)
 *     ObSetSecurityObjectByPointer @ 0x1404F5CF0 (ObSetSecurityObjectByPointer.c)
 *     SeReleaseSecurityDescriptor @ 0x14050B570 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSecurityDescriptor @ 0x14050B5A0 (SeCaptureSecurityDescriptor.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     SepRmGlobalSaclFind @ 0x1406F93F8 (SepRmGlobalSaclFind.c)
 */

NTSTATUS __stdcall NtSetSecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  SECURITY_INFORMATION v4; // ebx
  SECURITY_INFORMATION v5; // edx
  int v6; // ecx
  ACCESS_MASK v7; // r14d
  KPROCESSOR_MODE PreviousMode; // r13
  HANDLE v9; // r10
  __int64 v10; // rdx
  int v11; // edi
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rdx
  unsigned __int64 v15; // r8
  _QWORD *v16; // rsi
  __int64 v17; // r12
  unsigned int v18; // r15d
  PVOID v19; // r13
  PVOID v20; // rbx
  __int64 v21; // rcx
  PVOID v22; // r12
  int v24; // eax
  NTSTATUS SaclSecurityDescriptor; // eax
  __int64 v26; // r9
  bool v27; // al
  __int64 v28; // rdx
  BOOLEAN SaclDefaulted[8]; // [rsp+70h] [rbp-39h] BYREF
  PVOID SecurityDescriptora; // [rsp+78h] [rbp-31h] BYREF
  PVOID v31; // [rsp+80h] [rbp-29h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+88h] [rbp-21h] BYREF
  PVOID P; // [rsp+90h] [rbp-19h] BYREF
  PVOID v34; // [rsp+98h] [rbp-11h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-9h]
  PVOID Object; // [rsp+A8h] [rbp-1h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v38; // [rsp+B8h] [rbp+Fh] BYREF
  PACL Sacl; // [rsp+C0h] [rbp+17h] BYREF
  int SaclPresent; // [rsp+120h] [rbp+77h] BYREF
  KPROCESSOR_MODE v41; // [rsp+128h] [rbp+7Fh]

  v31 = 0LL;
  v4 = SecurityInformation;
  SecurityDescriptora = 0LL;
  P = 0LL;
  v34 = 0LL;
  if ( !SecurityDescriptor )
    return -1073741819;
  v5 = SecurityInformation & 0x80;
  v6 = v4 & 0x100;
  if ( (v4 & 0x10000) != 0 )
  {
    v24 = v4 | 0x1FF;
    v4 = v4 & 0xFFFFFE00 | 0x17F;
    if ( v5 )
      v4 = v24;
    if ( !v6 )
      v4 &= ~0x100u;
  }
  SeSetSecurityAccessMask(v4, &DesiredAccess);
  v7 = DesiredAccess;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v41 = PreviousMode;
  v11 = ObReferenceObjectByHandle(v9, DesiredAccess, 0LL, PreviousMode, &Object, &HandleInformation);
  if ( v11 < 0 )
    return v11;
  LOBYTE(v12) = 1;
  LOBYTE(v10) = PreviousMode;
  v13 = SeCaptureSecurityDescriptor(SecurityDescriptor, v10, 1LL, v12);
  v16 = Object;
  v11 = v13;
  if ( v13 < 0 )
  {
LABEL_32:
    ObfDereferenceObject(v16);
    return v11;
  }
  v17 = v35;
  v18 = v4 & 0xFFFFFE07;
  if ( (v4 & 0x10000) == 0 || (*(_WORD *)(v35 + 2) & 0x10) != 0 )
    v18 = v4;
  if ( ((v18 & 1) == 0 || *(_DWORD *)(v35 + 4)) && ((v18 & 2) == 0 || *(_DWORD *)(v35 + 8)) )
  {
    if ( (HandleInformation.HandleAttributes & 4) == 0 )
      v7 &= 0xFFF3FFFF;
    if ( !v7 )
      goto LABEL_12;
    v11 = ObpAllocateAndQuerySecurityDescriptorInfo(Object, 8LL, &SecurityDescriptora);
    if ( v11 < 0 )
    {
      v20 = v31;
      v19 = SecurityDescriptora;
LABEL_27:
      if ( v19 )
        ExFreePoolWithTag(v19, 0);
      if ( v20 )
        ExFreePoolWithTag(v20, 0);
      LOBYTE(v14) = v41;
      LOBYTE(v15) = 1;
      SeReleaseSecurityDescriptor(v17, v14, v15);
      goto LABEL_32;
    }
    if ( (v7 & 0xFEFFFFFF) != 0 )
    {
      v19 = SecurityDescriptora;
      LOBYTE(SaclPresent) = 0;
      SaclSecurityDescriptor = RtlGetSaclSecurityDescriptor(
                                 SecurityDescriptora,
                                 (PBOOLEAN)&SaclPresent,
                                 &Sacl,
                                 SaclDefaulted);
      v11 = SaclSecurityDescriptor;
      v27 = SaclPresent;
      if ( !(_BYTE)SaclPresent )
      {
        v38 = 0LL;
        LOBYTE(v26) = 1;
        v27 = (unsigned int)SepRmGlobalSaclFind(
                              &v38,
                              0LL,
                              ObTypeIndexTable[(unsigned __int8)(ObHeaderCookie ^ *((_BYTE *)v16 - 24) ^ ((unsigned __int16)((_WORD)v16 - 48) >> 8))]
                            + 16,
                              v26) != -1073741772;
      }
      if ( v11 < 0 )
      {
LABEL_63:
        v20 = v31;
        goto LABEL_27;
      }
      if ( v27 )
      {
        v28 = ((v7 & 0x80000) != 0 ? v18 & 0x13 : 0) | 4;
        if ( (v7 & 0x40000) == 0 )
          v28 = (v7 & 0x80000) != 0 ? v18 & 0x13 : 0;
        v11 = ObpAllocateAndQuerySecurityDescriptorInfo(v16, v28, &v31);
      }
      else
      {
        v7 &= 0xFFF3FFFF;
      }
    }
    else
    {
LABEL_12:
      v19 = SecurityDescriptora;
    }
    if ( v11 >= 0 )
    {
      v14 = 64LL;
      if ( (v18 & 0x40) != 0 )
      {
        v15 = (unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v16 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v16 - 48) >> 8);
        if ( (POBJECT_TYPE *)ObTypeIndexTable[v15] != IoFileObjectType || (*(_DWORD *)(v16[1] + 52LL) & 0x10) == 0 )
          v11 = ObpAllocateAndQuerySecurityDescriptorInfo(v16, 64LL, &v34);
      }
      v20 = v31;
      if ( v11 < 0 )
        goto LABEL_21;
      v14 = 32LL;
      SaclPresent = v18 & 0x20;
      if ( (v18 & 0x20) != 0 )
      {
        v15 = (unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v16 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v16 - 48) >> 8);
        if ( (POBJECT_TYPE *)ObTypeIndexTable[v15] != IoFileObjectType || (*(_DWORD *)(v16[1] + 52LL) & 0x10) == 0 )
          v11 = ObpAllocateAndQuerySecurityDescriptorInfo(v16, 32LL, &P);
      }
      if ( v11 >= 0 && (v11 = ObSetSecurityObjectByPointer(v16, v18), v11 >= 0) && (v7 || SaclPresent) )
      {
        v22 = P;
        SeSecurityDescriptorChangedAuditAlarm(
          v21,
          v16,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v16 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v16 - 48) >> 8)]
        + 16);
      }
      else
      {
LABEL_21:
        v22 = P;
      }
      if ( v34 )
        ExFreePoolWithTag(v34, 0);
      if ( v22 )
        ExFreePoolWithTag(v22, 0);
      v17 = v35;
      goto LABEL_27;
    }
    goto LABEL_63;
  }
  LOBYTE(v15) = 1;
  LOBYTE(v14) = PreviousMode;
  SeReleaseSecurityDescriptor(v35, v14, v15);
  ObfDereferenceObject(Object);
  return -1073741703;
}
