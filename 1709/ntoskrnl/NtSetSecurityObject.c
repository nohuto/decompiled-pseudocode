/*
 * XREFs of NtSetSecurityObject @ 0x140488560
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x14044FB54 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlpSysVolTakeOwnership @ 0x140723ACC (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x14046D3F0 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     ObSetSecurityObjectByPointer @ 0x140486290 (ObSetSecurityObjectByPointer.c)
 *     SeSetSecurityAccessMask @ 0x140488880 (SeSetSecurityAccessMask.c)
 *     SeReleaseSecurityDescriptor @ 0x14049CFE0 (SeReleaseSecurityDescriptor.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     SeCaptureSecurityDescriptor @ 0x1404BBCD0 (SeCaptureSecurityDescriptor.c)
 *     RtlGetSaclSecurityDescriptor @ 0x140504D60 (RtlGetSaclSecurityDescriptor.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x1405942D4 (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     SepRmGlobalSaclFind @ 0x140730E4C (SepRmGlobalSaclFind.c)
 */

NTSTATUS __stdcall NtSetSecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  int v3; // esi
  SECURITY_INFORMATION v4; // ebx
  SECURITY_INFORMATION v5; // edx
  int v6; // ecx
  ACCESS_MASK v7; // r14d
  KPROCESSOR_MODE PreviousMode; // r13
  HANDLE v9; // r10
  int v10; // edx
  NTSTATUS v11; // edi
  int v12; // r9d
  int v13; // eax
  __int64 v14; // rdx
  unsigned __int64 v15; // r8
  _QWORD *v16; // rsi
  __int64 v17; // r12
  unsigned int v18; // r15d
  PVOID v19; // r13
  PVOID v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // r9
  PVOID v23; // r12
  int v25; // eax
  NTSTATUS SaclSecurityDescriptor; // eax
  __int64 v27; // r9
  bool v28; // al
  __int64 v29; // rdx
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-81h]
  __int64 v31; // [rsp+60h] [rbp-49h]
  BOOLEAN SaclDefaulted[8]; // [rsp+70h] [rbp-39h] BYREF
  PVOID SecurityDescriptora; // [rsp+78h] [rbp-31h] BYREF
  PVOID v34; // [rsp+80h] [rbp-29h] BYREF
  ACCESS_MASK DesiredAccess; // [rsp+88h] [rbp-21h] BYREF
  PVOID P; // [rsp+90h] [rbp-19h] BYREF
  PVOID v37; // [rsp+98h] [rbp-11h] BYREF
  __int64 v38; // [rsp+A0h] [rbp-9h] BYREF
  PVOID Object; // [rsp+A8h] [rbp-1h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v40; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v41; // [rsp+B8h] [rbp+Fh] BYREF
  PACL Sacl; // [rsp+C0h] [rbp+17h] BYREF
  int SaclPresent; // [rsp+120h] [rbp+77h] BYREF
  KPROCESSOR_MODE v45; // [rsp+128h] [rbp+7Fh]

  v3 = (int)SecurityDescriptor;
  v34 = 0LL;
  v4 = SecurityInformation;
  SecurityDescriptora = 0LL;
  P = 0LL;
  v37 = 0LL;
  if ( !SecurityDescriptor )
    return -1073741819;
  v5 = SecurityInformation & 0x80;
  v6 = v4 & 0x100;
  if ( (v4 & 0x10000) != 0 )
  {
    v25 = v4 | 0x1FF;
    v4 = v4 & 0xFFFFFE00 | 0x17F;
    if ( v5 )
      v4 = v25;
    if ( !v6 )
      v4 &= ~0x100u;
  }
  SeSetSecurityAccessMask(v4, &DesiredAccess);
  v7 = DesiredAccess;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v45 = PreviousMode;
  v11 = ObReferenceObjectByHandle(v9, DesiredAccess, 0LL, PreviousMode, &Object, &v40);
  if ( v11 < 0 )
    return v11;
  LOBYTE(v12) = 1;
  LOBYTE(v10) = PreviousMode;
  v13 = SeCaptureSecurityDescriptor(v3, v10, 1, v12, (__int64)&v38);
  v16 = Object;
  v11 = v13;
  if ( v13 < 0 )
  {
LABEL_32:
    ObfDereferenceObject(v16);
    return v11;
  }
  v17 = v38;
  v18 = v4 & 0xFFFFFE07;
  if ( (v4 & 0x10000) == 0 || (*(_WORD *)(v38 + 2) & 0x10) != 0 )
    v18 = v4;
  if ( ((v18 & 1) == 0 || *(_DWORD *)(v38 + 4)) && ((v18 & 2) == 0 || *(_DWORD *)(v38 + 8)) )
  {
    if ( (v40.HandleAttributes & 4) == 0 )
      v7 &= 0xFFF3FFFF;
    if ( !v7 )
      goto LABEL_12;
    v11 = ObpAllocateAndQuerySecurityDescriptorInfo(Object, 8LL, &SecurityDescriptora);
    if ( v11 < 0 )
    {
      v20 = v34;
      v19 = SecurityDescriptora;
LABEL_27:
      if ( v19 )
        ExFreePoolWithTag(v19, 0);
      if ( v20 )
        ExFreePoolWithTag(v20, 0);
      LOBYTE(v14) = v45;
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
      v28 = SaclPresent;
      if ( !(_BYTE)SaclPresent )
      {
        v41 = 0LL;
        LOBYTE(v27) = 1;
        v28 = (unsigned int)SepRmGlobalSaclFind(
                              &v41,
                              0LL,
                              ObTypeIndexTable[(unsigned __int8)(ObHeaderCookie ^ *((_BYTE *)v16 - 24) ^ ((unsigned __int16)((_WORD)v16 - 48) >> 8))]
                            + 16,
                              v27) != -1073741772;
      }
      if ( v11 < 0 )
      {
LABEL_63:
        v20 = v34;
        goto LABEL_27;
      }
      if ( v28 )
      {
        v29 = ((v7 & 0x80000) != 0 ? v18 & 0x13 : 0) | 4;
        if ( (v7 & 0x40000) == 0 )
          v29 = (v7 & 0x80000) != 0 ? v18 & 0x13 : 0;
        v11 = ObpAllocateAndQuerySecurityDescriptorInfo(v16, v29, &v34);
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
          v11 = ObpAllocateAndQuerySecurityDescriptorInfo(v16, 64LL, &v37);
      }
      v20 = v34;
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
      if ( v11 >= 0 && (v11 = ObSetSecurityObjectByPointer((__int64)v16, v18, v17), v11 >= 0) && (v7 || SaclPresent) )
      {
        v31 = v17;
        v23 = P;
        SeSecurityDescriptorChangedAuditAlarm(
          v21,
          (__int64)v16,
          (UNICODE_STRING *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v16 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v16 - 48) >> 8)]
                           + 16),
          v22,
          (__int64)Handle,
          (__int64)HandleInformation,
          v7,
          v18,
          (__int64)v20,
          (__int64)v19,
          (__int64)P,
          (__int64)v37,
          v31);
      }
      else
      {
LABEL_21:
        v23 = P;
      }
      if ( v37 )
        ExFreePoolWithTag(v37, 0);
      if ( v23 )
        ExFreePoolWithTag(v23, 0);
      v17 = v38;
      goto LABEL_27;
    }
    goto LABEL_63;
  }
  LOBYTE(v15) = 1;
  LOBYTE(v14) = PreviousMode;
  SeReleaseSecurityDescriptor(v38, v14, v15);
  ObfDereferenceObject(Object);
  return -1073741703;
}
