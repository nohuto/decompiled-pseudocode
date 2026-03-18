/*
 * XREFs of CmpCheckSecurityCellAccess @ 0x1405977F4
 * Callers:
 *     CmpValidateHiveSecurityDescriptors @ 0x1404746C0 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpCheckKeyAccess @ 0x140692EC8 (CmpCheckKeyAccess.c)
 * Callees:
 *     SeAccessCheck @ 0x14007E440 (SeAccessCheck.c)
 *     SepDeleteAccessState @ 0x140081E70 (SepDeleteAccessState.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     SeCaptureSubjectContext @ 0x14049D010 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404AC530 (SeReleaseSubjectContext.c)
 *     SeCreateAccessState @ 0x1404C6430 (SeCreateAccessState.c)
 *     CmpSetAccessStateForBackupRestore @ 0x1405E0370 (CmpSetAccessStateForBackupRestore.c)
 */

__int64 __fastcall CmpCheckSecurityCellAccess(__int64 a1, unsigned int a2, KPROCESSOR_MODE a3, ACCESS_MASK a4, char a5)
{
  __int64 v9; // rax
  void *v10; // rdi
  BOOLEAN v11; // al
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rcx
  signed int AccessState; // ebx
  __int64 v15; // rdx
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v17[2]; // [rsp+58h] [rbp-A8h] BYREF
  NTSTATUS AccessStatus; // [rsp+60h] [rbp-A0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+68h] [rbp-98h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v20[5]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v21[28]; // [rsp+130h] [rbp+30h] BYREF

  v17[0] = -1;
  v17[1] = 0;
  memset(v20, 0, sizeof(v20));
  memset(v21, 0, sizeof(v21));
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, a2, v17);
  if ( !v9 )
    return (unsigned int)-1073741670;
  v10 = (void *)(v9 + 20);
  if ( a5 )
  {
    AccessState = SeCreateAccessState(v20, v21, a4, (GENERIC_MAPPING *)((char *)CmKeyObjectType + 76));
    if ( AccessState < 0 )
      goto LABEL_6;
    LOBYTE(v15) = a3;
    AccessState = CmpSetAccessStateForBackupRestore(v20, v15, v10, 0LL);
    if ( AccessState >= 0 )
    {
      if ( LODWORD(v20[0].PrimaryToken) )
      {
        GrantedAccess = HIDWORD(v20[0].PrimaryToken);
        SepDeleteAccessState((__int64)v20);
        SeReleaseSubjectContext(&v20[1]);
        goto LABEL_4;
      }
      AccessState = 0;
    }
    SepDeleteAccessState((__int64)v20);
    p_SubjectContext = &v20[1];
    goto LABEL_5;
  }
  GrantedAccess = 0;
LABEL_4:
  SeCaptureSubjectContext(&SubjectContext);
  v11 = SeAccessCheck(
          v10,
          &SubjectContext,
          0,
          a4,
          0,
          0LL,
          (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
          a3,
          &GrantedAccess,
          &AccessStatus);
  p_SubjectContext = &SubjectContext;
  AccessState = v11 == 0 ? 0xC0000022 : 0;
LABEL_5:
  SeReleaseSubjectContext(p_SubjectContext);
LABEL_6:
  (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v17);
  return (unsigned int)AccessState;
}
