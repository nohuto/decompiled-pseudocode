/*
 * XREFs of PortAllowIrpFromPdoToFdo @ 0x1C0069478
 * Callers:
 *     RaUnitStorageBreakReservationIoctl @ 0x1C00685E8 (RaUnitStorageBreakReservationIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PortAllowIrpFromPdoToFdo(__int64 a1, __int64 a2)
{
  struct _GENERIC_MAPPING *GenericMapping; // rax
  unsigned int v5; // edi
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-28h] BYREF
  int AccessStatus; // [rsp+80h] [rbp+8h] BYREF
  DWORD GrantedAccess; // [rsp+88h] [rbp+10h] BYREF

  SeCaptureSubjectContext(&SubjectContext);
  SeLockSubjectContext(&SubjectContext);
  AccessStatus = -1073741790;
  GenericMapping = IoGetFileObjectGenericMapping();
  v5 = 0;
  LOBYTE(a2) = SeAccessCheck(
                 *(PSECURITY_DESCRIPTOR *)(a1 + 272),
                 &SubjectContext,
                 1u,
                 2u,
                 0,
                 0LL,
                 GenericMapping,
                 *(_BYTE *)(a2 + 64),
                 &GrantedAccess,
                 &AccessStatus);
  SeUnlockSubjectContext(&SubjectContext);
  SeReleaseSubjectContext(&SubjectContext);
  if ( !(_BYTE)a2 )
    return (unsigned int)AccessStatus;
  return v5;
}
