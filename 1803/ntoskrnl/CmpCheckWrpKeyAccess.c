/*
 * XREFs of CmpCheckWrpKeyAccess @ 0x140562828
 * Callers:
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x1400BAFE0 (PsGetCurrentThreadProcess.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     RtlEqualSid @ 0x140105600 (RtlEqualSid.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1404A81C4 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     ObQuerySecurityObject @ 0x140562964 (ObQuerySecurityObject.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x140562A00 (RtlGetOwnerSecurityDescriptor.c)
 *     PsReferenceProcessFilePointer @ 0x140562A40 (PsReferenceProcessFilePointer.c)
 */

BOOLEAN __fastcall CmpCheckWrpKeyAccess(__int64 a1)
{
  _KPROCESS *CurrentThreadProcess; // rax
  PVOID PoolWithTag; // rax
  PVOID v4; // rcx
  void *v5; // rdi
  int SecurityObject; // ebx
  void *v7; // rcx
  __int64 SecurityCacheEntryForKcbStack; // rax
  SIZE_T NumberOfBytes; // [rsp+48h] [rbp+10h] BYREF
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  if ( !CmpTrustedInstallerSid )
    return 0;
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  if ( (int)PsReferenceProcessFilePointer(CurrentThreadProcess, &Object) < 0 )
    return 0;
  if ( (unsigned int)ObQuerySecurityObject((_DWORD)Object, 1, 0, 0, (__int64)&NumberOfBytes) != -1073741789 )
  {
    v4 = Object;
    goto LABEL_14;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20204D43u);
  v4 = Object;
  v5 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_14:
    ObfDereferenceObject(v4);
    return 0;
  }
  SecurityObject = ObQuerySecurityObject((_DWORD)Object, 1, (_DWORD)PoolWithTag, NumberOfBytes, (__int64)&NumberOfBytes);
  ObfDereferenceObject(Object);
  v7 = v5;
  if ( SecurityObject < 0 )
  {
LABEL_9:
    ExFreePoolWithTag(v7, 0);
    return 0;
  }
  if ( RtlGetOwnerSecurityDescriptor(v5, &Object, (PBOOLEAN)&NumberOfBytes) < 0
    || RtlEqualSid(CmpTrustedInstallerSid, Object) )
  {
    v7 = v5;
    goto LABEL_9;
  }
  ExFreePoolWithTag(v5, 0);
  SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(a1, 0LL);
  if ( RtlGetOwnerSecurityDescriptor(
         (PSECURITY_DESCRIPTOR)(SecurityCacheEntryForKcbStack + 32),
         &Object,
         (PBOOLEAN)&NumberOfBytes) < 0 )
    return 0;
  return RtlEqualSid(CmpTrustedInstallerSid, Object);
}
