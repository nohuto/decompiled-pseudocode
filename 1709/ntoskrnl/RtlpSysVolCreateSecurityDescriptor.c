/*
 * XREFs of RtlpSysVolCreateSecurityDescriptor @ 0x14044F9F8
 * Callers:
 *     RtlCreateSystemVolumeInformationFolder @ 0x14044F7E0 (RtlCreateSystemVolumeInformationFolder.c)
 * Callees:
 *     RtlLengthSid @ 0x140019280 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlSetControlSecurityDescriptor @ 0x14044FD40 (RtlSetControlSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140486330 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140486390 (RtlCreateAcl.c)
 *     RtlpAddKnownAce @ 0x1404BBB70 (RtlpAddKnownAce.c)
 *     RtlCreateSecurityDescriptor @ 0x14054A4B0 (RtlCreateSecurityDescriptor.c)
 */

__int64 __fastcall RtlpSysVolCreateSecurityDescriptor(_QWORD *a1, ACL **a2)
{
  PVOID PoolWithTag; // rax
  void *v5; // rdi
  NTSTATUS SecurityDescriptor; // ebx
  ULONG v7; // esi
  ACL *v8; // rax
  ACL *v9; // rbx
  NTSTATUS Acl; // esi
  ACL *v11; // rcx
  __int64 result; // rax
  __int16 Sid; // [rsp+30h] [rbp-38h] BYREF
  int v14; // [rsp+32h] [rbp-36h]
  __int16 v15; // [rsp+36h] [rbp-32h]
  int v16; // [rsp+38h] [rbp-30h]

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x536C6F56u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  SecurityDescriptor = RtlCreateSecurityDescriptor(PoolWithTag, 1u);
  if ( SecurityDescriptor >= 0 )
  {
    v14 = 0;
    v15 = 1280;
    Sid = 257;
    v16 = 18;
    v7 = RtlLengthSid(&Sid) + 16;
    v8 = (ACL *)ExAllocatePoolWithTag(PagedPool, v7, 0x536C6F56u);
    v9 = v8;
    if ( v8 )
    {
      Acl = RtlCreateAcl(v8, v7, 2u);
      v11 = v9;
      if ( Acl >= 0 )
      {
        Acl = RtlpAddKnownAce(v9, &Sid, 0);
        if ( Acl >= 0 )
        {
          Acl = RtlSetDaclSecurityDescriptor(v5, 1u, v9, 0);
          if ( Acl >= 0 )
          {
            Acl = RtlSetControlSecurityDescriptor(v5, 0x1000u, 0x1000u);
            if ( Acl >= 0 )
            {
              *a1 = v5;
              result = 0LL;
              *a2 = v9;
              return result;
            }
          }
        }
        v11 = v9;
      }
      ExFreePoolWithTag(v11, 0);
      SecurityDescriptor = Acl;
    }
    else
    {
      SecurityDescriptor = -1073741670;
    }
  }
  ExFreePoolWithTag(v5, 0);
  return (unsigned int)SecurityDescriptor;
}
