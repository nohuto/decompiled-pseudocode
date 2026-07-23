/*
 * XREFs of RtlDeleteAce @ 0x18007FA60
 * Callers:
 *     <none>
 * Callees:
 *     RtlValidAcl @ 0x180044810 (RtlValidAcl.c)
 *     RtlFirstFreeAce @ 0x180049B80 (RtlFirstFreeAce.c)
 *     sub_18007FADC @ 0x18007FADC (sub_18007FADC.c)
 */

NTSTATUS __cdecl RtlDeleteAce(PACL Acl, ULONG AceIndex)
{
  __int64 v2; // rdi
  PACL v4; // rcx
  __int64 v6; // rdx
  PVOID FirstFree; // [rsp+40h] [rbp+18h] BYREF

  v2 = AceIndex;
  if ( !RtlValidAcl(Acl) || (unsigned int)v2 >= Acl->AceCount || !RtlFirstFreeAce(Acl, &FirstFree) )
    return -1073741811;
  v4 = Acl + 1;
  if ( (_DWORD)v2 )
  {
    v6 = v2;
    do
    {
      v4 = (PACL)((char *)v4 + v4->AclSize);
      --v6;
    }
    while ( v6 );
  }
  sub_18007FADC(v4, v4->AclSize, (unsigned int)((_DWORD)FirstFree - (_DWORD)v4));
  --Acl->AceCount;
  return 0;
}
