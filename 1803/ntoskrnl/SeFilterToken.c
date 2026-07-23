/*
 * XREFs of SeFilterToken @ 0x14062CB20
 * Callers:
 *     CmpCreateRegistryProcessToken @ 0x14062C9C4 (CmpCreateRegistryProcessToken.c)
 * Callees:
 *     SepAppendAceToTokenObjectAcl @ 0x1404C20C0 (SepAppendAceToTokenObjectAcl.c)
 *     ObInsertObjectEx @ 0x1404C3DD0 (ObInsertObjectEx.c)
 *     SepFilterToken @ 0x140542044 (SepFilterToken.c)
 */

NTSTATUS __stdcall SeFilterToken(
        PACCESS_TOKEN ExistingToken,
        ULONG Flags,
        PTOKEN_GROUPS SidsToDisable,
        PTOKEN_PRIVILEGES PrivilegesToDelete,
        PTOKEN_GROUPS RestrictedSids,
        PACCESS_TOKEN *FilteredToken)
{
  PACCESS_TOKEN *v6; // rsi
  ULONG GroupCount; // ebx
  ULONG v8; // r10d
  SID_AND_ATTRIBUTES *Groups; // r11
  ULONG PrivilegeCount; // edi
  NTSTATUS inserted; // edi
  PVOID v13; // rbx
  ULONG v15; // ecx
  ULONG *p_Attributes; // rax
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  v6 = FilteredToken;
  GroupCount = 0;
  Object = 0LL;
  v8 = 0;
  Groups = 0LL;
  PrivilegeCount = 0;
  *FilteredToken = 0LL;
  if ( SidsToDisable )
    GroupCount = SidsToDisable->GroupCount;
  if ( PrivilegesToDelete )
    PrivilegeCount = PrivilegesToDelete->PrivilegeCount;
  if ( RestrictedSids
    && (v8 = RestrictedSids->GroupCount, Groups = RestrictedSids->Groups, v15 = 0, RestrictedSids->GroupCount) )
  {
    p_Attributes = &RestrictedSids->Groups[0].Attributes;
    while ( !*p_Attributes )
    {
      ++v15;
      p_Attributes += 4;
      if ( v15 >= v8 )
        goto LABEL_6;
    }
    return -1073741811;
  }
  else
  {
LABEL_6:
    inserted = SepFilterToken(
                 (__int64)ExistingToken,
                 0,
                 Flags,
                 GroupCount,
                 (unsigned __int64)SidsToDisable->Groups & -(__int64)(SidsToDisable != 0LL),
                 PrivilegeCount,
                 (unsigned __int64)PrivilegesToDelete->Privileges & -(__int64)(PrivilegesToDelete != 0LL),
                 v8,
                 &Groups->Sid,
                 0,
                 &Object);
    if ( inserted >= 0 )
    {
      v13 = Object;
      inserted = ObInsertObjectEx(Object, 0LL, 0LL, 0, 0, 0LL, 0LL);
      if ( inserted >= 0 )
      {
        SepAppendAceToTokenObjectAcl((__int64)v13, 8, SeAliasAdminsSid);
        *v6 = v13;
      }
    }
    return inserted;
  }
}
