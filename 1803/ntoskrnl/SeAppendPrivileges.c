/*
 * XREFs of SeAppendPrivileges @ 0x14053E890
 * Callers:
 *     IopCreateSecurityCheck @ 0x14009EA00 (IopCreateSecurityCheck.c)
 *     ObCheckObjectAccess @ 0x14053E470 (ObCheckObjectAccess.c)
 *     ObCheckCreateObjectAccess @ 0x140561B00 (ObCheckCreateObjectAccess.c)
 *     ObpAdjustCreatorAccessState @ 0x140562B1C (ObpAdjustCreatorAccessState.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 *     ObpCreateHandle @ 0x1405AB660 (ObpCreateHandle.c)
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 *     CmpCheckKeyBodyAccess @ 0x1406F5E54 (CmpCheckKeyBodyAccess.c)
 *     ObpCheckTraverseAccess @ 0x140759244 (ObpCheckTraverseAccess.c)
 *     CMFCheckAccess @ 0x1407C8194 (CMFCheckAccess.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     SepConcatenatePrivileges @ 0x14078CDD4 (SepConcatenatePrivileges.c)
 */

NTSTATUS __stdcall SeAppendPrivileges(PACCESS_STATE AccessState, PPRIVILEGE_SET Privileges)
{
  PVOID *AuxData; // r14
  ULONG PrivilegeCount; // r9d
  _DWORD *v6; // rbx
  int v7; // r8d
  unsigned int v8; // esi
  int v10; // ecx
  unsigned int v11; // esi
  int v12; // eax
  PVOID PoolWithTag; // rbx
  _DWORD *v14; // rdx
  __int64 v15; // rdx

  AuxData = (PVOID *)AccessState->AuxData;
  PrivilegeCount = Privileges->PrivilegeCount;
  v6 = *AuxData;
  v7 = *(_DWORD *)*AuxData;
  if ( v7 + Privileges->PrivilegeCount <= 3 )
  {
    if ( v6 )
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
    memmove((char *)v6 + v8, Privileges->Privilege, 12 * PrivilegeCount);
    *v6 += Privileges->PrivilegeCount;
    return 0;
  }
  if ( PrivilegeCount )
    v10 = 12 * PrivilegeCount + 8;
  else
    v10 = 8;
  v11 = 0;
  if ( v6 )
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
