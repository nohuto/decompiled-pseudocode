/*
 * XREFs of NtDuplicateToken @ 0x1404DCD80
 * Callers:
 *     <none>
 * Callees:
 *     SeCaptureObjectAttributeSecurityDescriptorPresent @ 0x14006310C (SeCaptureObjectAttributeSecurityDescriptorPresent.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1404C20C0 (SepAppendAceToTokenObjectAcl.c)
 *     SepDuplicateToken @ 0x1404C28D0 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x1404C3DD0 (ObInsertObjectEx.c)
 *     SeCaptureSubjectContext @ 0x1404C8F50 (SeCaptureSubjectContext.c)
 *     RtlIsSandboxedToken @ 0x1404DD0B0 (RtlIsSandboxedToken.c)
 *     SeCaptureSecurityQos @ 0x1404DD1DC (SeCaptureSecurityQos.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x1404DF338 (SepNewTokenAsRestrictedAsProcessToken.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 */

NTSTATUS __stdcall NtDuplicateToken(
        HANDLE ExistingTokenHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN EffectiveOnly,
        TOKEN_TYPE TokenType,
        PHANDLE NewTokenHandle)
{
  unsigned __int8 v9; // di
  TOKEN_TYPE v10; // r13d
  PHANDLE v11; // r12
  __int64 v12; // rcx
  NTSTATUS result; // eax
  ACCESS_MASK GrantedAccess; // r15d
  PVOID v15; // rsi
  signed int v16; // ecx
  NTSTATUS inserted; // ebx
  PVOID v18; // rdi
  struct _KTHREAD *CurrentThread; // rax
  PACCESS_TOKEN PrimaryToken; // r15
  int v21; // eax
  char v22; // [rsp+40h] [rbp-A8h] BYREF
  _BYTE v23[7]; // [rsp+41h] [rbp-A7h] BYREF
  PVOID Token; // [rsp+48h] [rbp-A0h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+50h] [rbp-98h] BYREF
  PVOID v26; // [rsp+58h] [rbp-90h] BYREF
  __int64 v27; // [rsp+60h] [rbp-88h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+68h] [rbp-80h] BYREF
  _BYTE v29[4]; // [rsp+88h] [rbp-60h] BYREF
  signed int v30; // [rsp+8Ch] [rbp-5Ch]
  struct _SECURITY_SUBJECT_CONTEXT v31; // [rsp+98h] [rbp-50h] BYREF

  v22 = 0;
  v23[0] = 0;
  v27 = 0LL;
  memset(&v31, 0, sizeof(v31));
  v9 = KeGetCurrentThread()->gap0[10];
  if ( v9 )
  {
    v10 = TokenType;
    if ( (unsigned int)(TokenType - 1) > 1 )
      return -1073741811;
    v11 = NewTokenHandle;
    v12 = (__int64)NewTokenHandle;
    if ( (unsigned __int64)NewTokenHandle >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v12 = *(_QWORD *)v12;
  }
  else
  {
    v11 = NewTokenHandle;
    v10 = TokenType;
  }
  result = SeCaptureSecurityQos(ObjectAttributes, v9, &v22, v29);
  if ( result >= 0 )
  {
    result = SeCaptureObjectAttributeSecurityDescriptorPresent((__int64)ObjectAttributes, v9, v23);
    if ( result >= 0 )
    {
      result = ObReferenceObjectByHandle(
                 ExistingTokenHandle,
                 2u,
                 (POBJECT_TYPE)SeTokenObjectType,
                 v9,
                 &Token,
                 &HandleInformation);
      if ( result >= 0 )
      {
        if ( DesiredAccess )
        {
          SeCaptureSubjectContext(&SubjectContext);
          v31.PrimaryToken = SubjectContext.PrimaryToken;
          if ( (unsigned __int8)RtlIsSandboxedToken(&SubjectContext) && (unsigned __int8)RtlIsSandboxedToken(&v31) )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            PrimaryToken = SubjectContext.PrimaryToken;
            ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6), 1u);
            v21 = SepNewTokenAsRestrictedAsProcessToken(Token, PrimaryToken);
            if ( Token == PrimaryToken || v21 >= 0 && v23[1] )
              GrantedAccess = DesiredAccess;
            else
              GrantedAccess = DesiredAccess & (HandleInformation.GrantedAccess | 0x2001F);
            ExReleaseResourceLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6));
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          }
          else
          {
            GrantedAccess = DesiredAccess;
          }
          SeReleaseSubjectContext(&SubjectContext);
        }
        else
        {
          GrantedAccess = HandleInformation.GrantedAccess;
        }
        v15 = Token;
        if ( v22 )
          v16 = v30;
        else
          v16 = *((_DWORD *)Token + 49);
        if ( *((_DWORD *)Token + 48) == 2
          && (v10 == TokenImpersonation && v16 > *((_DWORD *)Token + 49)
           || v10 == TokenPrimary && *((int *)Token + 49) < 2) )
        {
          ObfDereferenceObject(Token);
          return -1073741659;
        }
        else
        {
          v26 = 0LL;
          inserted = SepDuplicateToken(
                       (__int64)Token,
                       (int)ObjectAttributes,
                       EffectiveOnly,
                       v10,
                       v16,
                       v9,
                       0,
                       (char **)&v26);
          if ( inserted >= 0 )
          {
            v18 = v26;
            inserted = ObInsertObjectEx(v26, 0LL, GrantedAccess, 1, 0, 0LL, &v27);
            if ( inserted >= 0 )
            {
              if ( !v23[0] )
                SepAppendAceToTokenObjectAcl((__int64)v18, 8, SeAliasAdminsSid);
              ObfDereferenceObject(v18);
            }
          }
          ObfDereferenceObject(v15);
          if ( inserted >= 0 )
            *v11 = (HANDLE)v27;
          return inserted;
        }
      }
    }
  }
  return result;
}
