/*
 * XREFs of TpDbgDumpHeapUsage @ 0x180105720
 * Callers:
 *     <none>
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     RtlQueryTagHeap @ 0x1800EF530 (RtlQueryTagHeap.c)
 */

PWSTR __fastcall TpDbgDumpHeapUsage(
        BOOLEAN a1,
        __int64 (__fastcall *a2)(__int64, _QWORD, PWSTR, _QWORD, ULONG, SIZE_T),
        __int64 a3)
{
  unsigned int i; // ebx
  PWSTR result; // rax
  _RTL_HEAP_TAG_INFO TagInfo; // [rsp+40h] [rbp-38h] BYREF

  for ( i = 0; i < 0xE; ++i )
  {
    result = RtlQueryTagHeap(NtCurrentPeb()->ProcessHeap, 0, i + (dword_18015C000 >> 18), a1, &TagInfo);
    if ( result )
      result = (PWSTR)a2(
                        a3,
                        i + dword_18015C000,
                        result,
                        TagInfo.NumberOfAllocations,
                        TagInfo.NumberOfFrees,
                        TagInfo.BytesAllocated);
  }
  return result;
}
