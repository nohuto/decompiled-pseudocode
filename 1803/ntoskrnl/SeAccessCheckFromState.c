/*
 * XREFs of SeAccessCheckFromState @ 0x1400D45D0
 * Callers:
 *     EtwpAccessCheckFromState @ 0x140591764 (EtwpAccessCheckFromState.c)
 *     CmpCheckAdminAccess @ 0x1406F4BB0 (CmpCheckAdminAccess.c)
 * Callees:
 *     SeAccessCheckFromStateEx @ 0x1400D46F0 (SeAccessCheckFromStateEx.c)
 *     SepTokenFromAccessInformation @ 0x1400D48E4 (SepTokenFromAccessInformation.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

BOOLEAN __stdcall SeAccessCheckFromState(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PTOKEN_ACCESS_INFORMATION PrimaryTokenInformation,
        PTOKEN_ACCESS_INFORMATION ClientTokenInformation,
        ACCESS_MASK DesiredAccess,
        ACCESS_MASK PreviouslyGrantedAccess,
        PPRIVILEGE_SET *Privileges,
        PGENERIC_MAPPING GenericMapping,
        KPROCESSOR_MODE AccessMode,
        PACCESS_MASK GrantedAccess,
        PNTSTATUS AccessStatus)
{
  int v12; // ebp
  _BYTE v15[1184]; // [rsp+50h] [rbp-988h] BYREF
  _BYTE v16[1184]; // [rsp+4F0h] [rbp-4E8h] BYREF

  v12 = (int)SecurityDescriptor;
  memset(v16, 0, 0x498uLL);
  memset(v15, 0, 0x498uLL);
  SepTokenFromAccessInformation(PrimaryTokenInformation, v16);
  if ( ClientTokenInformation )
    SepTokenFromAccessInformation(ClientTokenInformation, v15);
  return SeAccessCheckFromStateEx(
           v12,
           (unsigned int)v16,
           (unsigned __int64)v15 & -(__int64)(ClientTokenInformation != 0LL),
           DesiredAccess,
           PreviouslyGrantedAccess,
           (__int64)Privileges,
           (__int64)GenericMapping,
           AccessMode,
           (__int64)GrantedAccess,
           (__int64)AccessStatus);
}
