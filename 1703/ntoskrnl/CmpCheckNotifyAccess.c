/*
 * XREFs of CmpCheckNotifyAccess @ 0x14048E404
 * Callers:
 *     CmpNotifyTriggerCheck @ 0x14048E298 (CmpNotifyTriggerCheck.c)
 * Callees:
 *     SeAccessCheck @ 0x14008D750 (SeAccessCheck.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     CmpFindSecurityCellCacheIndex @ 0x14048E4D4 (CmpFindSecurityCellCacheIndex.c)
 */

BOOLEAN __fastcall CmpCheckNotifyAccess(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v3; // rsi
  BOOLEAN v6; // di
  NTSTATUS AccessStatus; // [rsp+78h] [rbp+10h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+80h] [rbp+18h] BYREF

  v3 = a2 + 2952;
  v6 = 0;
  GrantedAccess = 0;
  ExAcquirePushLockSharedEx(a2 + 2952, 0LL);
  if ( (unsigned __int8)CmpFindSecurityCellCacheIndex(a2, *(unsigned int *)(a3 + 44), &AccessStatus) )
    v6 = SeAccessCheck(
           (PSECURITY_DESCRIPTOR)(*(_QWORD *)(*(_QWORD *)(a2 + 3056) + 16LL * (unsigned int)AccessStatus + 8) + 32LL),
           (PSECURITY_SUBJECT_CONTEXT)(a1 + 56),
           0,
           0x10u,
           0,
           0LL,
           (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
           1,
           &GrantedAccess,
           &AccessStatus);
  ExReleasePushLockEx(v3, 0LL);
  return v6;
}
