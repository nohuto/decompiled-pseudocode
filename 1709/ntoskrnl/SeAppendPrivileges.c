/*
 * XREFs of SeAppendPrivileges @ 0x14056D5D0
 * Callers:
 *     IopCreateSecurityCheck @ 0x140129858 (IopCreateSecurityCheck.c)
 *     ObpAdjustCreatorAccessState @ 0x140484A78 (ObpAdjustCreatorAccessState.c)
 *     ObCheckCreateObjectAccess @ 0x140486D00 (ObCheckCreateObjectAccess.c)
 *     ObCheckObjectAccess @ 0x140487DB0 (ObCheckObjectAccess.c)
 *     ObpCreateHandle @ 0x1404AE7E0 (ObpCreateHandle.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 *     CMFCheckAccess @ 0x1405D5B14 (CMFCheckAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x140692F64 (CmpCheckKeyBodyAccess.c)
 *     ObpCheckTraverseAccess @ 0x1406EFDB4 (ObpCheckTraverseAccess.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     SepConcatenatePrivileges @ 0x140728A44 (SepConcatenatePrivileges.c)
 */

NTSTATUS __stdcall SeAppendPrivileges(PACCESS_STATE AccessState, PPRIVILEGE_SET Privileges)
{
  PVOID *AuxData; // r14
  _DWORD *v5; // rbx
  ULONG PrivilegeCount; // r8d
  int v7; // edx
  unsigned int v8; // esi
  int v10; // ecx
  unsigned int v11; // esi
  int v12; // eax
  PVOID PoolWithTag; // rbx
  _DWORD *v14; // rdx
  __int64 v15; // rdx

  AuxData = (PVOID *)AccessState->AuxData;
  v5 = *AuxData;
  PrivilegeCount = Privileges->PrivilegeCount;
  v7 = *(_DWORD *)*AuxData;
  if ( v7 + PrivilegeCount <= 3 )
  {
    if ( v5 )
    {
      if ( v7 )
        v8 = 12 * v7 + 8;
      else
        v8 = 8;
    }
    else
    {
      v8 = 0;
    }
    memmove((char *)v5 + v8, Privileges->Privilege, 12 * PrivilegeCount);
    *v5 += Privileges->PrivilegeCount;
    return 0;
  }
  if ( PrivilegeCount )
    v10 = 12 * PrivilegeCount + 8;
  else
    v10 = 8;
  v11 = 0;
  if ( v5 )
  {
    if ( v7 )
      v12 = 12 * v7 + 8;
    else
      v12 = 8;
  }
  else
  {
    v12 = 0;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v10 + v12), 0x72506553u);
  if ( PoolWithTag )
  {
    v14 = *AuxData;
    if ( *AuxData )
    {
      if ( *v14 )
        v11 = 12 * *v14 + 8;
      else
        v11 = 8;
    }
    memmove(PoolWithTag, v14, v11);
    SepConcatenatePrivileges(PoolWithTag, v15, Privileges);
    if ( AccessState->PrivilegesAllocated )
      ExFreePoolWithTag(*AuxData, 0);
    *AuxData = PoolWithTag;
    AccessState->PrivilegesAllocated = 1;
    return 0;
  }
  return -1073741670;
}
