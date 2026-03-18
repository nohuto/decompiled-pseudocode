/*
 * XREFs of CmpCheckWrpKeyAccess @ 0x140576EB0
 * Callers:
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     RtlEqualSid @ 0x140087C60 (RtlEqualSid.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x140482B3C (CmpGetSecurityCacheEntryForKcbStack.c)
 *     ObQuerySecurityObject @ 0x140576FE4 (ObQuerySecurityObject.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x140577080 (RtlGetOwnerSecurityDescriptor.c)
 *     PsReferenceProcessFilePointer @ 0x1405770C0 (PsReferenceProcessFilePointer.c)
 */

BOOLEAN __fastcall CmpCheckWrpKeyAccess(__int64 a1)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rcx
  void *v4; // rdi
  int SecurityObject; // ebx
  void *v6; // rcx
  __int64 SecurityCacheEntryForKcbStack; // rax
  PSID Owner[5]; // [rsp+30h] [rbp-28h] BYREF
  BOOLEAN OwnerDefaulted; // [rsp+68h] [rbp+10h] BYREF
  SIZE_T NumberOfBytes; // [rsp+70h] [rbp+18h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  if ( !CmpTrustedInstallerSid
    || (int)PsReferenceProcessFilePointer(KeGetCurrentThread()->ApcState.Process, &Object) < 0 )
  {
    return 0;
  }
  if ( (unsigned int)ObQuerySecurityObject((_DWORD)Object, 1, 0, 0, (__int64)&NumberOfBytes) != -1073741789 )
  {
    v3 = Object;
    goto LABEL_14;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20204D43u);
  v3 = Object;
  v4 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_14:
    ObfDereferenceObject(v3);
    return 0;
  }
  SecurityObject = ObQuerySecurityObject((_DWORD)Object, 1, (_DWORD)PoolWithTag, NumberOfBytes, (__int64)&NumberOfBytes);
  ObfDereferenceObject(Object);
  v6 = v4;
  if ( SecurityObject < 0 )
  {
LABEL_9:
    ExFreePoolWithTag(v6, 0);
    return 0;
  }
  if ( RtlGetOwnerSecurityDescriptor(v4, Owner, &OwnerDefaulted) < 0 || RtlEqualSid(CmpTrustedInstallerSid, Owner[0]) )
  {
    v6 = v4;
    goto LABEL_9;
  }
  ExFreePoolWithTag(v4, 0);
  SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(a1, 0LL);
  if ( RtlGetOwnerSecurityDescriptor((PSECURITY_DESCRIPTOR)(SecurityCacheEntryForKcbStack + 32), Owner, &OwnerDefaulted) < 0 )
    return 0;
  return RtlEqualSid(CmpTrustedInstallerSid, Owner[0]);
}
