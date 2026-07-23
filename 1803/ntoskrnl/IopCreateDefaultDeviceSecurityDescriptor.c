/*
 * XREFs of IopCreateDefaultDeviceSecurityDescriptor @ 0x1405419D0
 * Callers:
 *     IoCreateDevice @ 0x140541590 (IoCreateDevice.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1405CD170 (PipChangeDeviceObjectFromRegistryProperties.c)
 * Callees:
 *     RtlGetNtProductType @ 0x1400C4610 (RtlGetNtProductType.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404C07E0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1404C76D0 (RtlpAddKnownAce.c)
 *     IopCreateSecurityDescriptorPerType @ 0x140541ABC (IopCreateSecurityDescriptorPerType.c)
 *     RtlCreateSecurityDescriptor @ 0x140541DF0 (RtlCreateSecurityDescriptor.c)
 */

void *__fastcall IopCreateDefaultDeviceSecurityDescriptor(
        unsigned int a1,
        char a2,
        char a3,
        void *a4,
        ACL **a5,
        __int64 a6,
        _DWORD *a7)
{
  _DWORD *v7; // rdi
  void *v8; // rsi
  ACL **v10; // r12
  int SecurityDescriptorPerType; // eax
  bool v13; // zf
  USHORT AclSize; // r15
  unsigned __int8 *v15; // rax
  ACL *PoolWithTag; // rax
  ACL *v17; // rbp
  unsigned __int8 *Src; // rax
  int v19; // r9d
  _NT_PRODUCT_TYPE ProductType; // [rsp+70h] [rbp+18h] BYREF

  LOBYTE(ProductType) = a3;
  v7 = a7;
  v8 = a4;
  if ( a7 )
    *a7 = 0;
  v10 = a5;
  *a5 = 0LL;
  if ( a1 > 0x14 )
  {
    switch ( a1 )
    {
      case '-':
        goto LABEL_19;
      case ' ':
        goto LABEL_9;
      case '$':
        goto LABEL_19;
    }
    v13 = a1 == 53;
    goto LABEL_17;
  }
  if ( a1 == 20 )
  {
LABEL_19:
    if ( a1 != 7 || (a2 & 1) == 0 )
      goto LABEL_9;
LABEL_23:
    AclSize = SePublicDefaultUnrestrictedDacl->AclSize;
    if ( !RtlGetNtProductType(&ProductType) )
      return 0LL;
    if ( ProductType == NtProductWinNt )
    {
      v15 = (unsigned __int8 *)SeInteractiveSid;
    }
    else
    {
      if ( a1 != 2 )
        goto LABEL_30;
      v15 = (unsigned __int8 *)SeWorldSid;
    }
    AclSize += 4 * (v15[1] + 4);
LABEL_30:
    PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, AclSize, 0x65536F49u);
    v17 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, SePublicDefaultUnrestrictedDacl, SePublicDefaultUnrestrictedDacl->AclSize);
      v13 = ProductType == NtProductWinNt;
      v17->AclSize = AclSize;
      if ( v13 )
      {
        Src = (unsigned __int8 *)SeInteractiveSid;
        v19 = -1073676288;
      }
      else
      {
        if ( a1 != 2 )
        {
LABEL_36:
          RtlCreateSecurityDescriptor(v8, 1u);
          RtlSetDaclSecurityDescriptor(v8, 1u, v17, 0);
          if ( v7 )
            *v7 |= 4u;
          *v10 = v17;
          SecurityDescriptorPerType = 0;
          goto LABEL_10;
        }
        Src = (unsigned __int8 *)SeWorldSid;
        v19 = 0x80000000;
      }
      RtlpAddKnownAce(v17, 2u, 0, v19, Src, 0);
      goto LABEL_36;
    }
    return 0LL;
  }
  if ( a1 == 2 )
    goto LABEL_23;
  if ( a1 != 3 )
  {
    if ( a1 != 7 )
    {
      if ( a1 <= 9 )
        goto LABEL_9;
      v13 = a1 == 18;
LABEL_17:
      if ( !v13 )
        goto LABEL_9;
      goto LABEL_19;
    }
    goto LABEL_19;
  }
LABEL_9:
  SecurityDescriptorPerType = IopCreateSecurityDescriptorPerType(a4);
LABEL_10:
  if ( SecurityDescriptorPerType < 0 )
    return 0LL;
  return v8;
}
