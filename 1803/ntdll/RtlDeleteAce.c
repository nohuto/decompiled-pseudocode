/*
 * XREFs of RtlDeleteAce @ 0x180079C70
 * Callers:
 *     <none>
 * Callees:
 *     RtlFirstFreeAce @ 0x180037550 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x1800375A0 (RtlValidAcl.c)
 *     sub_180079CEC @ 0x180079CEC (sub_180079CEC.c)
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
  sub_180079CEC(v4, v4->AclSize, (unsigned int)((_DWORD)FirstFree - (_DWORD)v4));
  --Acl->AceCount;
  return 0;
}
