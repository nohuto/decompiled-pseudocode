/*
 * XREFs of RtlReleasePath @ 0x1800258A0
 * Callers:
 *     sub_18000F300 @ 0x18000F300 (sub_18000F300.c)
 *     sub_1800105FC @ 0x1800105FC (sub_1800105FC.c)
 *     sub_180041814 @ 0x180041814 (sub_180041814.c)
 *     LdrLoadDll @ 0x180041BB0 (LdrLoadDll.c)
 *     LdrGetDllHandleEx @ 0x180041D20 (LdrGetDllHandleEx.c)
 *     sub_18004213C @ 0x18004213C (sub_18004213C.c)
 *     sub_180055808 @ 0x180055808 (sub_180055808.c)
 *     sub_1800559B0 @ 0x1800559B0 (sub_1800559B0.c)
 *     sub_180081044 @ 0x180081044 (sub_180081044.c)
 *     LdrLoadEnclaveModule @ 0x1800C9990 (LdrLoadEnclaveModule.c)
 *     sub_1800CCA84 @ 0x1800CCA84 (sub_1800CCA84.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall RtlReleasePath(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 result; // rax

  v1 = a1 - 112;
  RtlAcquireSRWLockExclusive(&unk_18015D3D8);
  if ( (*(_QWORD *)(v1 + 80))-- != 1LL )
    v1 = 0LL;
  result = RtlReleaseSRWLockExclusive(&unk_18015D3D8);
  if ( v1 )
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v1);
  return result;
}
