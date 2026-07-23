/*
 * XREFs of IopCreateDefaultDeviceSecurityDescriptor @ 0x1404A1E64
 * Callers:
 *     IoCreateDevice @ 0x1404A1F50 (IoCreateDevice.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1404E3894 (PipChangeDeviceObjectFromRegistryProperties.c)
 * Callees:
 *     RtlGetNtProductType @ 0x14002F6A0 (RtlGetNtProductType.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     RtlCreateSecurityDescriptor @ 0x1404A1C80 (RtlCreateSecurityDescriptor.c)
 *     IopCreateSecurityDescriptorPerType @ 0x1404A1D38 (IopCreateSecurityDescriptorPerType.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404F5D90 (RtlSetDaclSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x14050C130 (RtlpAddKnownAce.c)
 */

void *__fastcall IopCreateDefaultDeviceSecurityDescriptor(
        unsigned int a1,
        char a2,
        char a3,
        void *a4,
        ACL **a5,
        ACL **a6,
        _DWORD *a7)
{
  _DWORD *v7; // rdi
  void *v8; // rsi
  ACL **v10; // r12
  bool v11; // zf
  int v12; // edx
  NTSTATUS SecurityDescriptorPerType; // eax
  USHORT AclSize; // r15
  unsigned __int8 *v16; // rax
  ACL *PoolWithTag; // rax
  ACL *v18; // rbp
  PSID Src; // rax
  int v20; // r9d
  _NT_PRODUCT_TYPE ProductType; // [rsp+70h] [rbp+18h] BYREF

  LOBYTE(ProductType) = a3;
  v7 = a7;
  v8 = a4;
  if ( a7 )
    *a7 = 0;
  v10 = a5;
  *a5 = 0LL;
  if ( a1 <= 0x14 )
  {
    switch ( a1 )
    {
      case 0x14u:
        goto LABEL_21;
      case 2u:
        goto LABEL_25;
      case 3u:
LABEL_20:
        v12 = 2;
        goto LABEL_10;
      case 7u:
LABEL_21:
        if ( a1 == 7 && (a2 & 1) != 0 )
        {
LABEL_25:
          AclSize = SePublicDefaultUnrestrictedDacl->AclSize;
          if ( !RtlGetNtProductType(&ProductType) )
            return 0LL;
          if ( ProductType == NtProductWinNt )
          {
            v16 = (unsigned __int8 *)SeInteractiveSid;
          }
          else
          {
            if ( a1 != 2 )
              goto LABEL_32;
            v16 = (unsigned __int8 *)SeWorldSid;
          }
          AclSize += 4 * (v16[1] + 4);
LABEL_32:
          PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, AclSize, 0x65536F49u);
          v18 = PoolWithTag;
          if ( PoolWithTag )
          {
            memmove(PoolWithTag, SePublicDefaultUnrestrictedDacl, SePublicDefaultUnrestrictedDacl->AclSize);
            v11 = ProductType == NtProductWinNt;
            v18->AclSize = AclSize;
            if ( v11 )
            {
              Src = SeInteractiveSid;
              v20 = -1073676288;
            }
            else
            {
              if ( a1 != 2 )
              {
LABEL_38:
                RtlCreateSecurityDescriptor(v8, 1u);
                RtlSetDaclSecurityDescriptor(v8, 1u, v18, 0);
                if ( v7 )
                  *v7 |= 4u;
                *v10 = v18;
                SecurityDescriptorPerType = 0;
                goto LABEL_11;
              }
              Src = SeWorldSid;
              v20 = 0x80000000;
            }
            RtlpAddKnownAce((int)v18, 2, 0, v20, Src, 0);
            goto LABEL_38;
          }
          return 0LL;
        }
        goto LABEL_20;
    }
    if ( a1 <= 7 )
      goto LABEL_9;
    if ( a1 <= 9 )
      goto LABEL_20;
    v11 = a1 == 18;
  }
  else
  {
    switch ( a1 )
    {
      case '-':
        goto LABEL_21;
      case ' ':
        goto LABEL_20;
      case '$':
        goto LABEL_21;
    }
    v11 = a1 == 53;
  }
  if ( v11 )
    goto LABEL_21;
LABEL_9:
  v12 = 4;
LABEL_10:
  SecurityDescriptorPerType = IopCreateSecurityDescriptorPerType(a4, v12, a6, v7);
LABEL_11:
  if ( SecurityDescriptorPerType < 0 )
    return 0LL;
  return v8;
}
