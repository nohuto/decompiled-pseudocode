/*
 * XREFs of RtlAddAce @ 0x18005B6F0
 * Callers:
 *     RtlCreateAndSetSD @ 0x18005B390 (RtlCreateAndSetSD.c)
 * Callees:
 *     RtlFirstFreeAce @ 0x18002D790 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x18002D7F0 (RtlValidAcl.c)
 */

NTSTATUS __cdecl RtlAddAce(PACL Acl, ULONG AceRevision, ULONG StartingAceIndex, PVOID AceList, ULONG AceListLength)
{
  unsigned __int8 AclRevision; // r15
  char *v10; // rcx
  __int64 v11; // r11
  char *v12; // rdx
  __int16 v13; // r12
  unsigned __int8 v14; // al
  ULONG v15; // ecx
  PACL i; // rdx
  int v17; // r8d
  __int64 v18; // r9
  char *v19; // rdi
  NTSTATUS result; // eax
  __int64 v21; // r10
  bool v22; // cf
  PVOID FirstFree; // [rsp+20h] [rbp-28h] BYREF

  if ( !RtlValidAcl(Acl) || !RtlFirstFreeAce(Acl, &FirstFree) )
    return -1073741811;
  AclRevision = Acl->AclRevision;
  v10 = (char *)AceList;
  v11 = AceListLength;
  if ( (unsigned __int8)AceRevision > Acl->AclRevision )
    AclRevision = AceRevision;
  v12 = (char *)AceList + AceListLength;
  v13 = 0;
  if ( AceList < v12 )
  {
    do
    {
      v14 = *v10;
      if ( (unsigned __int8)*v10 > 3u )
      {
        if ( v14 <= 4u )
        {
          v22 = AceRevision < 3;
        }
        else
        {
          if ( v14 > 8u )
            goto LABEL_7;
          v22 = AceRevision < 4;
        }
        if ( v22 )
          return -1073741811;
      }
LABEL_7:
      ++v13;
      v10 += *((unsigned __int16 *)v10 + 1);
    }
    while ( v10 < v12 );
  }
  if ( v10 > v12 )
    return -1073741811;
  if ( !FirstFree || (char *)FirstFree + AceListLength > (char *)Acl + Acl->AclSize )
    return -1073741789;
  v15 = 0;
  for ( i = Acl + 1; v15 < StartingAceIndex; i = (PACL)((char *)i + i->AclSize) )
  {
    if ( v15 >= Acl->AceCount )
      break;
    ++v15;
  }
  v17 = (_DWORD)FirstFree - (_DWORD)i - 1;
  v18 = v17;
  if ( v17 >= 0 )
  {
    v21 = v17 + AceListLength;
    do
    {
      *(&i->AclRevision + v21) = *(&i->AclRevision + v18);
      v21 = (unsigned int)(v21 - 1);
      --v18;
    }
    while ( v18 >= 0 );
  }
  if ( AceListLength )
  {
    v19 = (char *)((_BYTE *)AceList - (_BYTE *)i);
    do
    {
      i->AclRevision = *(&i->AclRevision + (_QWORD)v19);
      i = (PACL)((char *)i + 1);
      --v11;
    }
    while ( v11 );
  }
  Acl->AceCount += v13;
  result = 0;
  Acl->AclRevision = AclRevision;
  return result;
}
