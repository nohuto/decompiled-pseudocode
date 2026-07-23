/*
 * XREFs of RtlDeleteUmsThreadContext @ 0x1800EF720
 * Callers:
 *     sub_1800EFCD8 @ 0x1800EFCD8 (sub_1800EFCD8.c)
 *     sub_1800EFD98 @ 0x1800EFD98 (sub_1800EFD98.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlDeleteUmsThreadContext(PVOID BaseAddress)
{
  unsigned int v2; // [rsp+38h] [rbp+10h]

  v2 = -1073741811;
  if ( BaseAddress && (*((_DWORD *)BaseAddress + 316) & 8) != 0 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    return 0;
  }
  return v2;
}
