/*
 * XREFs of CmpCheckSecurityCellAccess @ 0x14056251C
 * Callers:
 *     CmpValidateHiveSecurityDescriptors @ 0x140516F4C (CmpValidateHiveSecurityDescriptors.c)
 *     CmpCheckKeyAccess @ 0x1406F5DB8 (CmpCheckKeyAccess.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x1400BAFE0 (PsGetCurrentThreadProcess.c)
 *     SeAccessCheck @ 0x140100B90 (SeAccessCheck.c)
 *     SepDeleteAccessState @ 0x140105150 (SepDeleteAccessState.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     SeCreateAccessStateEx @ 0x1405626A0 (SeCreateAccessStateEx.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     CmpSetAccessStateForBackupRestore @ 0x1405F2528 (CmpSetAccessStateForBackupRestore.c)
 */

__int64 __fastcall CmpCheckSecurityCellAccess(__int64 a1, unsigned int a2, KPROCESSOR_MODE a3, ACCESS_MASK a4, char a5)
{
  __int64 v9; // rax
  unsigned int CurrentThread; // edi
  void *v11; // r14
  char *v12; // rbx
  unsigned int CurrentThreadProcess; // eax
  __int64 v14; // rdx
  signed int AccessState; // ebx
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v18[2]; // [rsp+58h] [rbp-A8h] BYREF
  NTSTATUS AccessStatus[4]; // [rsp+60h] [rbp-A0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v20[5]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v21[224]; // [rsp+110h] [rbp+10h] BYREF

  v18[0] = -1;
  v18[1] = 0;
  memset(v20, 0, sizeof(v20));
  memset(v21, 0, sizeof(v21));
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, a2, v18);
  if ( !v9 )
    return (unsigned int)-1073741670;
  CurrentThread = (unsigned int)KeGetCurrentThread();
  v11 = (void *)(v9 + 20);
  v12 = (char *)CmKeyObjectType + 76;
  CurrentThreadProcess = (unsigned int)PsGetCurrentThreadProcess();
  AccessState = SeCreateAccessStateEx(
                  CurrentThread,
                  CurrentThreadProcess,
                  (unsigned int)v20,
                  (unsigned int)v21,
                  a4,
                  (__int64)v12);
  if ( AccessState >= 0 )
  {
    if ( a5 )
    {
      LOBYTE(v14) = a3;
      AccessState = CmpSetAccessStateForBackupRestore(v20, v14, v11, 0LL);
      if ( AccessState < 0 )
        goto LABEL_6;
      if ( !LODWORD(v20[0].PrimaryToken) )
      {
        AccessState = 0;
        goto LABEL_6;
      }
      GrantedAccess = HIDWORD(v20[0].PrimaryToken);
    }
    else
    {
      GrantedAccess = 0;
    }
    AccessState = SeAccessCheck(
                    v11,
                    &v20[1],
                    0,
                    a4,
                    0,
                    0LL,
                    (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
                    a3,
                    &GrantedAccess,
                    AccessStatus) == 0
                ? 0xC0000022
                : 0;
LABEL_6:
    SepDeleteAccessState((__int64)v20);
    SeReleaseSubjectContext(&v20[1]);
  }
  (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v18);
  return (unsigned int)AccessState;
}
