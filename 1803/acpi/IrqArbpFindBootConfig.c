/*
 * XREFs of IrqArbpFindBootConfig @ 0x1C0091020
 * Callers:
 *     IrqArbGetNextAllocationRange @ 0x1C0090750 (IrqArbGetNextAllocationRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IrqArbpFindBootConfig(__int64 a1, __int64 a2, _DWORD *a3)
{
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+20h] [rbp-28h] BYREF
  PRTL_RANGE Range; // [rsp+50h] [rbp+8h] BYREF

  RtlGetFirstRange(*(PRTL_RANGE_LIST *)(a1 + 40), &Iterator, &Range);
  while ( 1 )
  {
    if ( !Range )
      return 3221226021LL;
    if ( (Range->Attributes & 1) != 0 && *(PVOID *)(*(_QWORD *)(a2 + 32) + 32LL) == Range->Owner )
      break;
    RtlGetNextRange(&Iterator, &Range, 1u);
  }
  *a3 = Range->Start;
  return 0LL;
}
