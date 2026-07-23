/*
 * XREFs of RtlUnlockCurrentThread @ 0x18008BD20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008BE18 @ 0x18008BE18 (sub_18008BE18.c)
 *     ZwQueryVirtualMemory @ 0x1800A5760 (ZwQueryVirtualMemory.c)
 *     ZwUnlockVirtualMemory @ 0x1800A8A90 (ZwUnlockVirtualMemory.c)
 */

NTSTATUS RtlUnlockCurrentThread(void)
{
  struct _TEB *v0; // rdx
  ULONG LockCount; // eax
  ULONG v2; // eax
  _QWORD MemoryInformation[7]; // [rsp+30h] [rbp-38h] BYREF
  ULONG_PTR RegionSize; // [rsp+70h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp+10h] BYREF

  v0 = NtCurrentTeb();
  LockCount = v0->LockCount;
  if ( !LockCount )
    return -1073741782;
  v2 = LockCount - 1;
  v0->LockCount = v2;
  if ( !v2 )
  {
    if ( ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v0, MemoryBasicInformation, MemoryInformation, 0x30uLL, 0LL) >= 0 )
    {
      BaseAddress = (PVOID)MemoryInformation[0];
      RegionSize = MemoryInformation[3];
      ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
    }
    sub_18008BE18();
  }
  return 0;
}
