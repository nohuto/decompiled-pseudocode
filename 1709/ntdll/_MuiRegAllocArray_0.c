/*
 * XREFs of _MuiRegAllocArray_0 @ 0x1800EE9FC
 * Callers:
 *     RtlpCleanupRegistryKeys @ 0x1800EC2B0 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 */

PVOID __fastcall MuiRegAllocArray_0(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rcx

  v2 = 8LL * a2;
  v3 = 0LL;
  if ( v2 <= 0xFFFFFFFF && (_DWORD)v2 )
    return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)v2);
  return (PVOID)v3;
}
