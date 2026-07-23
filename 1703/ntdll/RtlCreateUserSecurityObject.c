/*
 * XREFs of RtlCreateUserSecurityObject @ 0x1800D8FB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     sub_180047D44 @ 0x180047D44 (sub_180047D44.c)
 *     RtlCreateAndSetSD @ 0x180075B60 (RtlCreateAndSetSD.c)
 */

NTSTATUS __cdecl RtlCreateUserSecurityObject(
        PRTL_ACE_DATA AceData,
        ULONG AceCount,
        PSID OwnerSid,
        PSID GroupSid,
        BOOLEAN IsDirectoryObject,
        PGENERIC_MAPPING GenericMapping,
        PSECURITY_DESCRIPTOR *NewSecurityDescriptor)
{
  PVOID ProcessHeap; // rdi
  NTSTATUS result; // eax
  NTSTATUS v9; // ebx
  PSECURITY_DESCRIPTOR BaseAddress; // [rsp+50h] [rbp-18h] BYREF

  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  result = RtlCreateAndSetSD(AceData, AceCount, OwnerSid, GroupSid, &BaseAddress);
  if ( result >= 0 )
  {
    v9 = sub_180047D44(
           0LL,
           BaseAddress,
           NewSecurityDescriptor,
           0LL,
           0,
           IsDirectoryObject,
           0,
           (HANDLE)0xFFFFFFFFFFFFFFFCLL,
           GenericMapping,
           0LL);
    RtlFreeHeap(ProcessHeap, 0, BaseAddress);
    return v9;
  }
  return result;
}
