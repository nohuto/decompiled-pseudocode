/*
 * XREFs of AddAces @ 0x1C011E310
 * Callers:
 *     CreateDeviceDriverSecurityDescriptor @ 0x1C011E08C (CreateDeviceDriverSecurityDescriptor.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 */

__int64 __fastcall AddAces(PACL Acl, __int64 a2, char a3, ACL **a4)
{
  int AclSize; // r14d
  ACL *v5; // rdi
  GENERIC_MAPPING *FileObjectGenericMapping; // rax
  ULONG v10; // eax
  _DWORD *PoolWithTag; // rax
  _DWORD *v12; // rsi
  NTSTATUS v13; // ebx
  int v14; // ebx
  ULONG v15; // r14d
  ULONG v16; // ebx
  ACL *v17; // rax
  ACCESS_MASK AccessMask; // [rsp+20h] [rbp-20h] BYREF
  PVOID Ace; // [rsp+28h] [rbp-18h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+30h] [rbp-10h] BYREF

  AclSize = Acl->AclSize;
  v5 = 0LL;
  AccessMask = 0x10000000;
  FileObjectGenericMapping = IoGetFileObjectGenericMapping();
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  RtlMapGenericMask(&AccessMask, FileObjectGenericMapping);
  v10 = RtlLengthRequiredSid(2u);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v10, 0x7363444Eu);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v13 = RtlInitializeSid(PoolWithTag, &IdentifierAuthority, 2u);
  if ( !v13 )
  {
    v12[2] = 32;
    v12[3] = 556;
    v14 = AclSize + 16;
    v15 = 0;
    v16 = RtlLengthSid(v12) + v14;
    if ( a3 )
      v16 += RtlLengthSid(SeExports->SeLocalServiceSid) + 16;
    v17 = (ACL *)ExAllocatePoolWithTag(PagedPool, v16, 0x6163444Eu);
    v5 = v17;
    if ( v17 )
    {
      v13 = RtlCreateAcl(v17, v16, 2u);
      if ( v13 >= 0 )
      {
        if ( Acl->AceCount )
        {
          while ( 1 )
          {
            v13 = RtlGetAce(Acl, v15, &Ace);
            if ( v13 < 0 )
              break;
            v13 = RtlAddAccessAllowedAce(v5, 2u, *((_DWORD *)Ace + 1), (char *)Ace + 8);
            if ( v13 < 0 )
              break;
            if ( (int)++v15 >= Acl->AceCount )
              goto LABEL_11;
          }
        }
        else
        {
LABEL_11:
          v13 = RtlAddAccessAllowedAce(v5, 2u, AccessMask, v12);
          if ( v13 >= 0 )
          {
            if ( a3 )
              v13 = RtlAddAccessAllowedAce(v5, 2u, AccessMask, SeExports->SeLocalServiceSid);
            *a4 = v5;
          }
        }
      }
    }
    else
    {
      v13 = -1073741670;
    }
  }
  ExFreePoolWithTag(v12, 0);
  if ( v13 < 0 )
  {
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
  }
  return (unsigned int)v13;
}
