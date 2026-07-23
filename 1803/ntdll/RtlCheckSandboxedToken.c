/*
 * XREFs of RtlCheckSandboxedToken @ 0x18006B8E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlCreateSecurityDescriptor @ 0x18002ED10 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x180030680 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1800320D0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x180032130 (RtlSetGroupSecurityDescriptor.c)
 *     RtlFreeSid @ 0x18006BC20 (RtlFreeSid.c)
 *     RtlAllocateAndInitializeSid @ 0x18006BC60 (RtlAllocateAndInitializeSid.c)
 *     RtlAddMandatoryAce @ 0x18006C310 (RtlAddMandatoryAce.c)
 *     RtlSetSaclSecurityDescriptor @ 0x18006C540 (RtlSetSaclSecurityDescriptor.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwAccessCheck @ 0x18009AAC0 (ZwAccessCheck.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwQueryInformationToken @ 0x18009AEE0 (ZwQueryInformationToken.c)
 *     ZwOpenThreadToken @ 0x18009AF40 (ZwOpenThreadToken.c)
 *     ZwDuplicateToken @ 0x18009B300 (ZwDuplicateToken.c)
 *     ZwOpenProcessToken @ 0x18009CED0 (ZwOpenProcessToken.c)
 */

NTSTATUS __cdecl RtlCheckSandboxedToken(HANDLE TokenHandle, PBOOLEAN IsSandboxed)
{
  HANDLE v3; // r14
  int v4; // ebx
  NTSTATUS v5; // eax
  ACL *Heap; // rax
  ACL *v7; // rsi
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+60h] [rbp-A0h] BYREF
  _SID_IDENTIFIER_AUTHORITY v10; // [rsp+68h] [rbp-98h] BYREF
  HANDLE TokenHandlea; // [rsp+70h] [rbp-90h] BYREF
  PSID Owner; // [rsp+78h] [rbp-88h] BYREF
  int TokenInformation; // [rsp+80h] [rbp-80h] BYREF
  ULONG PrivilegeSetLength; // [rsp+84h] [rbp-7Ch] BYREF
  NTSTATUS AccessStatus; // [rsp+88h] [rbp-78h] BYREF
  PSID Sid; // [rsp+90h] [rbp-70h] BYREF
  HANDLE ExistingTokenHandle; // [rsp+98h] [rbp-68h] BYREF
  ULONG ReturnLength; // [rsp+A0h] [rbp-60h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+A4h] [rbp-5Ch] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+D8h] [rbp-28h] BYREF
  _DWORD v22[2]; // [rsp+100h] [rbp+0h] BYREF
  __int16 v23; // [rsp+108h] [rbp+8h]
  _PRIVILEGE_SET PrivilegeSet; // [rsp+110h] [rbp+10h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 4096;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_DWORD *)v10.Value = 0;
  v3 = TokenHandle;
  *(_WORD *)&v10.Value[4] = 1280;
  v4 = 0;
  TokenHandlea = 0LL;
  *IsSandboxed = 0;
  Owner = 0LL;
  Sid = 0LL;
  if ( TokenHandle )
  {
    TokenHandlea = TokenHandle;
  }
  else
  {
    v5 = ZwOpenThreadToken((HANDLE)0xFFFFFFFFFFFFFFFELL, 8u, 0, &TokenHandlea);
    TokenHandle = TokenHandlea;
    v4 = v5;
  }
  if ( !TokenHandle )
  {
    if ( v4 == -1073741700 )
    {
      v4 = ZwOpenProcessToken((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0xAu, &ExistingTokenHandle);
      if ( v4 < 0 )
        return v4;
      ObjectAttributes.SecurityQualityOfService = v22;
      ObjectAttributes.Length = 48;
      memset(&ObjectAttributes.RootDirectory, 0, 20);
      ObjectAttributes.SecurityDescriptor = 0LL;
      v22[0] = 12;
      v22[1] = 2;
      v23 = 1;
      v4 = ZwDuplicateToken(ExistingTokenHandle, 0xCu, &ObjectAttributes, 0, TokenImpersonation, &TokenHandlea);
      ZwClose(ExistingTokenHandle);
    }
    if ( v4 < 0 )
      return v4;
    goto LABEL_8;
  }
  v4 = ZwQueryInformationToken(TokenHandle, 9u, &TokenInformation, 4u, &ReturnLength);
  if ( v4 >= 0 )
  {
    if ( TokenInformation >= 2 )
    {
LABEL_8:
      Heap = (ACL *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x20uLL);
      v7 = Heap;
      if ( Heap )
      {
        RtlCreateAcl(Heap, 0x20u, 2u);
        v4 = RtlAllocateAndInitializeSid(&IdentifierAuthority, 1u, 0x2000u, 0, 0, 0, 0, 0, 0, 0, &Sid);
        if ( v4 >= 0 )
        {
          v4 = RtlAllocateAndInitializeSid(&v10, 1u, 0x12u, 0, 0, 0, 0, 0, 0, 0, &Owner);
          if ( v4 >= 0 )
          {
            RtlAddMandatoryAce(v7, 2u, 0, Sid, 0x11u, 2u);
            RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
            RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, v7, 0);
            RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Owner, 0);
            RtlSetGroupSecurityDescriptor(SecurityDescriptor, Owner, 0);
            PrivilegeSetLength = 56;
            v4 = ZwAccessCheck(
                   SecurityDescriptor,
                   TokenHandlea,
                   0x20000u,
                   (PGENERIC_MAPPING)&stru_180115658,
                   &PrivilegeSet,
                   &PrivilegeSetLength,
                   &GrantedAccess,
                   &AccessStatus);
            if ( v4 >= 0 )
              *IsSandboxed = AccessStatus < 0;
          }
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
        if ( Sid )
          RtlFreeSid(Sid);
        if ( Owner )
          RtlFreeSid(Owner);
      }
      else
      {
        v4 = -1073741801;
      }
      goto LABEL_17;
    }
    v4 = -1073741659;
  }
LABEL_17:
  if ( !v3 && TokenHandlea )
    ZwClose(TokenHandlea);
  return v4;
}
