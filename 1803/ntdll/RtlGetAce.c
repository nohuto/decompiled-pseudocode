/*
 * XREFs of RtlGetAce @ 0x180074630
 * Callers:
 *     sub_180086A98 @ 0x180086A98 (sub_180086A98.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlGetAce(PACL Acl, ULONG AceIndex, PVOID *Ace)
{
  PACL v5; // rcx
  ULONG v6; // r8d

  if ( (unsigned __int8)(Acl->AclRevision - 2) <= 2u && AceIndex < Acl->AceCount )
  {
    v5 = Acl + 1;
    *Ace = v5;
    v6 = 0;
    if ( !AceIndex )
      return v5 >= (PACL)((char *)Acl + Acl->AclSize) ? 0xC000000D : 0;
    while ( v5 < (PACL)((char *)Acl + Acl->AclSize) )
    {
      ++v6;
      v5 = (PACL)((char *)v5 + v5->AclSize);
      *Ace = v5;
      if ( v6 >= AceIndex )
        return v5 >= (PACL)((char *)Acl + Acl->AclSize) ? 0xC000000D : 0;
    }
  }
  return -1073741811;
}
