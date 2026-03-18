/*
 * XREFs of IopCreateSecurityDescriptorPerType @ 0x1404A1D38
 * Callers:
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x1404A1E64 (IopCreateDefaultDeviceSecurityDescriptor.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     RtlCreateSecurityDescriptor @ 0x1404A1C80 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x1404A2390 (RtlSetSaclSecurityDescriptor.c)
 *     RtlAddMandatoryAce @ 0x1404A23F4 (RtlAddMandatoryAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404F5D90 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1404F5DF0 (RtlCreateAcl.c)
 */

NTSTATUS __fastcall IopCreateSecurityDescriptorPerType(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        int a2,
        ACL **a3,
        _DWORD *a4)
{
  char v4; // si
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  ACL *v12; // rbx
  unsigned __int16 v13; // bp
  ACL *PoolWithTag; // rax
  ACL *v15; // r15
  ULONG v16; // edx
  NTSTATUS result; // eax
  UCHAR v18; // [rsp+20h] [rbp-28h]
  PSID LabelSid; // [rsp+28h] [rbp-20h]

  v4 = 0;
  v8 = a2 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( !v10 )
      {
        v12 = SePublicOpenDacl;
        goto LABEL_6;
      }
      v11 = v10 - 1;
      if ( !v11 )
      {
        v12 = SePublicOpenUnrestrictedDacl;
LABEL_6:
        v4 = 1;
        goto LABEL_7;
      }
      if ( v11 != 1 )
        return -1073741811;
      v12 = SeSystemDefaultDacl;
    }
    else
    {
      v12 = SePublicDefaultUnrestrictedDacl;
    }
  }
  else
  {
    v12 = SePublicDefaultDacl;
  }
LABEL_7:
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( v4 == 1 )
  {
    v13 = 4 * (*(unsigned __int8 *)(*(_QWORD *)&SeLowMandatorySid + 1LL) + 6);
    PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v13, 0x65536F49u);
    v15 = PoolWithTag;
    if ( !PoolWithTag )
      return -1073741670;
    RtlCreateAcl(PoolWithTag, v13, 2u);
    LODWORD(LabelSid) = 1;
    RtlAddMandatoryAce(v15, v16, 0, SeLowMandatorySid, v18, LabelSid);
    RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, v15, 0);
    *a3 = v15;
  }
  result = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v12, 0);
  if ( a4 )
  {
    *a4 |= 4u;
    if ( v4 )
      *a4 |= 0x10u;
  }
  return result;
}
