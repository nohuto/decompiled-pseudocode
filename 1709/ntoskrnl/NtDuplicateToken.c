/*
 * XREFs of NtDuplicateToken @ 0x1404C66A0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     SeCaptureObjectAttributeSecurityDescriptorPresent @ 0x1400894EC (SeCaptureObjectAttributeSecurityDescriptorPresent.c)
 *     memset @ 0x140192F40 (memset.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140484B90 (SepAppendAceToTokenObjectAcl.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ObInsertObjectEx @ 0x1404BC710 (ObInsertObjectEx.c)
 *     SeCaptureSubjectContextEx @ 0x1404C5AF0 (SeCaptureSubjectContextEx.c)
 *     RtlIsSandboxedToken @ 0x1404C69F0 (RtlIsSandboxedToken.c)
 *     SeCaptureSecurityQos @ 0x1404C6AD4 (SeCaptureSecurityQos.c)
 *     SepDuplicateToken @ 0x1404C6BB0 (SepDuplicateToken.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x14051357C (SepNewTokenAsRestrictedAsProcessToken.c)
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
  PHANDLE v10; // r12
  TOKEN_TYPE v11; // r13d
  NTSTATUS result; // eax
  ACCESS_MASK GrantedAccess; // r15d
  PVOID v14; // rsi
  int v15; // ecx
  NTSTATUS inserted; // ebx
  PVOID v17; // rdi
  __int64 v18; // rcx
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
  int v30; // [rsp+8Ch] [rbp-5Ch]
  struct _SECURITY_SUBJECT_CONTEXT v31; // [rsp+98h] [rbp-50h] BYREF

  v22 = 0;
  v23[0] = 0;
  v27 = 0LL;
  memset(&v31, 0, sizeof(v31));
  v9 = KeGetCurrentThread()->gap0[10];
  if ( v9 )
  {
    v11 = TokenType;
    if ( (unsigned int)(TokenType - 1) > 1 )
      return -1073741811;
    v10 = NewTokenHandle;
    v18 = (__int64)NewTokenHandle;
    if ( (unsigned __int64)NewTokenHandle >= 0x7FFFFFFF0000LL )
      v18 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v18 = *(_QWORD *)v18;
  }
  else
  {
    v10 = NewTokenHandle;
    v11 = TokenType;
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
          SeCaptureSubjectContextEx(KeGetCurrentThread(), KeGetCurrentThread()->ApcState.Process, &SubjectContext);
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
        v14 = Token;
        if ( v22 )
          v15 = v30;
        else
          v15 = *((_DWORD *)Token + 49);
        if ( *((_DWORD *)Token + 48) == 2
          && (v11 == TokenImpersonation && v15 > *((_DWORD *)Token + 49)
           || v11 == TokenPrimary && *((int *)Token + 49) < 2) )
        {
          ObfDereferenceObject(Token);
          return -1073741659;
        }
        else
        {
          v26 = 0LL;
          inserted = SepDuplicateToken(
                       (_DWORD)Token,
                       (_DWORD)ObjectAttributes,
                       EffectiveOnly,
                       v11,
                       v15,
                       v9,
                       0,
                       (__int64)&v26);
          if ( inserted >= 0 )
          {
            v17 = v26;
            inserted = ObInsertObjectEx(v26, 0LL, GrantedAccess, 1, 0, 0LL, (unsigned __int64 *)&v27);
            if ( inserted >= 0 )
            {
              if ( !v23[0] )
                SepAppendAceToTokenObjectAcl((__int64)v17, 8, SeAliasAdminsSid);
              ObfDereferenceObject(v17);
            }
          }
          ObfDereferenceObject(v14);
          if ( inserted >= 0 )
            *v10 = (HANDLE)v27;
          return inserted;
        }
      }
    }
  }
  return result;
}
