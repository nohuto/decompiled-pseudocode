/*
 * XREFs of NtDuplicateToken @ 0x140476350
 * Callers:
 *     <none>
 * Callees:
 *     SeCaptureObjectAttributeSecurityDescriptorPresent @ 0x14003F4F4 (SeCaptureObjectAttributeSecurityDescriptorPresent.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     memset @ 0x140192D80 (memset.c)
 *     SeCaptureSecurityQos @ 0x1404766B0 (SeCaptureSecurityQos.c)
 *     RtlIsSandboxedToken @ 0x1404767C0 (RtlIsSandboxedToken.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1404F4620 (SepAppendAceToTokenObjectAcl.c)
 *     SepDuplicateToken @ 0x14050CF30 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 *     SeCaptureSubjectContextEx @ 0x14050F760 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x140560360 (SepNewTokenAsRestrictedAsProcessToken.c)
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
  PVOID v14; // rsi
  int v15; // ecx
  NTSTATUS inserted; // ebx
  PVOID v17; // rdi
  struct _KTHREAD *CurrentThread; // rax
  PACCESS_TOKEN PrimaryToken; // r15
  char v20; // [rsp+40h] [rbp-A8h] BYREF
  char v21; // [rsp+41h] [rbp-A7h] BYREF
  PVOID Token; // [rsp+48h] [rbp-A0h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+50h] [rbp-98h] BYREF
  PVOID v24; // [rsp+58h] [rbp-90h] BYREF
  __int64 v25; // [rsp+60h] [rbp-88h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+68h] [rbp-80h] BYREF
  _BYTE v27[4]; // [rsp+88h] [rbp-60h] BYREF
  int v28; // [rsp+8Ch] [rbp-5Ch]
  struct _SECURITY_SUBJECT_CONTEXT v29; // [rsp+98h] [rbp-50h] BYREF

  v20 = 0;
  v21 = 0;
  v25 = 0LL;
  memset(&v29, 0, sizeof(v29));
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
  result = SeCaptureSecurityQos(ObjectAttributes, v9, &v20, v27);
  if ( result >= 0 )
  {
    result = SeCaptureObjectAttributeSecurityDescriptorPresent((__int64)ObjectAttributes, v9, &v21);
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
          v29.PrimaryToken = SubjectContext.PrimaryToken;
          if ( (unsigned __int8)RtlIsSandboxedToken(&SubjectContext) && (unsigned __int8)RtlIsSandboxedToken(&v29) )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            PrimaryToken = SubjectContext.PrimaryToken;
            ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6), 1u);
            SepNewTokenAsRestrictedAsProcessToken(Token, PrimaryToken);
            ExReleaseResourceLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6));
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          }
          SeReleaseSubjectContext(&SubjectContext);
        }
        v14 = Token;
        if ( v20 )
          v15 = v28;
        else
          v15 = *((_DWORD *)Token + 49);
        if ( *((_DWORD *)Token + 48) == 2
          && (v10 == TokenImpersonation && v15 > *((_DWORD *)Token + 49)
           || v10 == TokenPrimary && *((int *)Token + 49) < 2) )
        {
          ObfDereferenceObject(Token);
          return -1073741659;
        }
        else
        {
          v24 = 0LL;
          inserted = SepDuplicateToken(
                       (_DWORD)Token,
                       (_DWORD)ObjectAttributes,
                       EffectiveOnly,
                       v10,
                       v15,
                       v9,
                       0,
                       (__int64)&v24);
          if ( inserted >= 0 )
          {
            v17 = v24;
            inserted = ObInsertObjectEx(v24, 0LL, 0, 0LL, (__int64)&v25);
            if ( inserted >= 0 )
            {
              if ( !v21 )
                SepAppendAceToTokenObjectAcl(v17, 8LL);
              ObfDereferenceObject(v17);
            }
          }
          ObfDereferenceObject(v14);
          if ( inserted >= 0 )
            *v11 = (HANDLE)v25;
          return inserted;
        }
      }
    }
  }
  return result;
}
