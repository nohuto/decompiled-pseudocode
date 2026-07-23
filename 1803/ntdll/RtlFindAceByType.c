/*
 * XREFs of RtlFindAceByType @ 0x1800306C0
 * Callers:
 *     sub_18002EC40 @ 0x18002EC40 (sub_18002EC40.c)
 *     sub_18002ED3C @ 0x18002ED3C (sub_18002ED3C.c)
 *     sub_180036F7C @ 0x180036F7C (sub_180036F7C.c)
 *     sub_180071344 @ 0x180071344 (sub_180071344.c)
 *     sub_1800785AC @ 0x1800785AC (sub_1800785AC.c)
 *     RtlIsUntrustedObject @ 0x1800DFDC0 (RtlIsUntrustedObject.c)
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlFindAceByType(PACL Acl, UCHAR AceType, PULONG Index)
{
  PACL v4; // r9
  unsigned int v5; // r10d

  if ( !Acl )
    return 0LL;
  v4 = Acl + 1;
  v5 = 0;
  if ( !Acl->AceCount )
    return 0LL;
  while ( !Index )
  {
    if ( v4->AclRevision == AceType )
      return v4;
LABEL_9:
    ++v5;
    v4 = (PACL)((char *)v4 + v4->AclSize);
    if ( v5 >= Acl->AceCount )
      return 0LL;
  }
  if ( v5 < *Index || v4->AclRevision != AceType )
    goto LABEL_9;
  *Index = v5;
  return v4;
}
