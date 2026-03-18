/*
 * XREFs of CmpCheckSecurityCellAccess @ 0x14045860C
 * Callers:
 *     CmpValidateHiveSecurityDescriptors @ 0x1404BF6E4 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpCheckKeyAccess @ 0x140668068 (CmpCheckKeyAccess.c)
 * Callees:
 *     SeAccessCheck @ 0x14008D750 (SeAccessCheck.c)
 *     SepDeleteAccessState @ 0x1400EE7C0 (SepDeleteAccessState.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmpSetAccessStateForBackupRestore @ 0x14042B3E4 (CmpSetAccessStateForBackupRestore.c)
 *     SeCreateAccessState @ 0x1404F4470 (SeCreateAccessState.c)
 *     SeCaptureSubjectContext @ 0x14050C4F0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14052DE30 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall CmpCheckSecurityCellAccess(__int64 a1, unsigned int a2, KPROCESSOR_MODE a3, ACCESS_MASK a4, char a5)
{
  __int64 v9; // rax
  void *v10; // rdi
  BOOLEAN v11; // al
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rcx
  signed int AccessState; // ebx
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v16[2]; // [rsp+58h] [rbp-A8h] BYREF
  NTSTATUS AccessStatus; // [rsp+60h] [rbp-A0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+68h] [rbp-98h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v19[5]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v20[224]; // [rsp+130h] [rbp+30h] BYREF

  v16[0] = -1;
  v16[1] = 0;
  memset(v19, 0, sizeof(v19));
  memset(v20, 0, sizeof(v20));
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, a2, v16);
  if ( !v9 )
    return (unsigned int)-1073741670;
  v10 = (void *)(v9 + 20);
  if ( a5 )
  {
    AccessState = SeCreateAccessState(v19, v20, a4, (char *)CmKeyObjectType + 76);
    if ( AccessState < 0 )
      goto LABEL_6;
    AccessState = CmpSetAccessStateForBackupRestore(v19, a3, (__int64)v10, 0);
    if ( AccessState >= 0 )
    {
      if ( LODWORD(v19[0].PrimaryToken) )
      {
        GrantedAccess = HIDWORD(v19[0].PrimaryToken);
        SepDeleteAccessState((__int64)v19);
        SeReleaseSubjectContext(&v19[1]);
        goto LABEL_4;
      }
      AccessState = 0;
    }
    SepDeleteAccessState((__int64)v19);
    p_SubjectContext = &v19[1];
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
  (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v16);
  return (unsigned int)AccessState;
}
