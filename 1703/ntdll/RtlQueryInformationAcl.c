/*
 * XREFs of RtlQueryInformationAcl @ 0x18004CA40
 * Callers:
 *     <none>
 * Callees:
 *     RtlFirstFreeAce @ 0x180049B80 (RtlFirstFreeAce.c)
 */

NTSTATUS __cdecl RtlQueryInformationAcl(
        PACL Acl,
        PVOID AclInformation,
        ULONG AclInformationLength,
        ACL_INFORMATION_CLASS AclInformationClass)
{
  __int32 v6; // r9d
  PVOID v7; // rcx
  int v8; // ecx
  PVOID FirstFree; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned __int8)(Acl->AclRevision - 2) <= 2u )
  {
    v6 = AclInformationClass - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
        return -1073741821;
      if ( AclInformationLength >= 0xC )
      {
        if ( RtlFirstFreeAce(Acl, &FirstFree) )
        {
          v7 = FirstFree;
          *(_DWORD *)AclInformation = Acl->AceCount;
          if ( v7 )
          {
            v8 = (_DWORD)v7 - (_DWORD)Acl;
            *((_DWORD *)AclInformation + 1) = v8;
            *((_DWORD *)AclInformation + 2) = Acl->AclSize - v8;
          }
          else
          {
            *(_QWORD *)((char *)AclInformation + 4) = Acl->AclSize;
          }
          return 0;
        }
        return -1073741811;
      }
    }
    else if ( AclInformationLength >= 4 )
    {
      *(_DWORD *)AclInformation = Acl->AclRevision;
      return 0;
    }
    return -1073741789;
  }
  return -1073741811;
}
