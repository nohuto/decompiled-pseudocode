/*
 * XREFs of SeAppendPrivileges @ 0x1404370B0
 * Callers:
 *     IopCreateSecurityCheck @ 0x140032804 (IopCreateSecurityCheck.c)
 *     CMFCheckAccess @ 0x14041F098 (CMFCheckAccess.c)
 *     ObpAdjustCreatorAccessState @ 0x1404F2E14 (ObpAdjustCreatorAccessState.c)
 *     ObCheckCreateObjectAccess @ 0x1404F3120 (ObCheckCreateObjectAccess.c)
 *     ObCheckObjectAccess @ 0x1404F3890 (ObCheckObjectAccess.c)
 *     ObpCreateHandle @ 0x14052CD90 (ObpCreateHandle.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     IopParseDevice @ 0x1405385E0 (IopParseDevice.c)
 *     CmpCheckKeyBodyAccess @ 0x14056C688 (CmpCheckKeyBodyAccess.c)
 *     ObpCheckTraverseAccess @ 0x1406C1408 (ObpCheckTraverseAccess.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SepConcatenatePrivileges @ 0x140437114 (SepConcatenatePrivileges.c)
 */

NTSTATUS __stdcall SeAppendPrivileges(PACCESS_STATE AccessState, PPRIVILEGE_SET Privileges)
{
  PVOID *AuxData; // rdi
  ULONG PrivilegeCount; // r8d
  _DWORD *v6; // rcx
  int v7; // r9d
  unsigned int v9; // ebx
  int v10; // edx
  int v11; // eax
  PVOID PoolWithTag; // rsi
  _DWORD *v13; // rdx
  __int64 v14; // rdx

  AuxData = (PVOID *)AccessState->AuxData;
  PrivilegeCount = Privileges->PrivilegeCount;
  v6 = *AuxData;
  v7 = *(_DWORD *)*AuxData;
  if ( Privileges->PrivilegeCount + v7 <= 3 )
  {
    SepConcatenatePrivileges(v6, Privileges, Privileges);
    return 0;
  }
  v9 = 8;
  if ( PrivilegeCount )
    v10 = 12 * PrivilegeCount + 8;
  else
    v10 = 8;
  if ( v6 )
  {
    if ( v7 )
      v11 = 12 * v7 + 8;
    else
      v11 = 8;
  }
  else
  {
    v11 = 0;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v11 + v10), 0x72506553u);
  if ( PoolWithTag )
  {
    v13 = *AuxData;
    if ( *AuxData )
    {
      if ( *v13 )
        v9 = 12 * *v13 + 8;
    }
    else
    {
      v9 = 0;
    }
    memmove(PoolWithTag, v13, v9);
    SepConcatenatePrivileges(PoolWithTag, v14, Privileges);
    if ( AccessState->PrivilegesAllocated )
      ExFreePoolWithTag(*AuxData, 0);
    *AuxData = PoolWithTag;
    AccessState->PrivilegesAllocated = 1;
    return 0;
  }
  return -1073741670;
}
