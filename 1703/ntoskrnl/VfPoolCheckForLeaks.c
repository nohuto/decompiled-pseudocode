/*
 * XREFs of VfPoolCheckForLeaks @ 0x1407758E8
 * Callers:
 *     VfTargetDriversRemove @ 0x14014885C (VfTargetDriversRemove.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140189470 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 */

PSLIST_ENTRY __fastcall VfPoolCheckForLeaks(ULONG_PTR a1, __int64 a2)
{
  PSLIST_ENTRY result; // rax

  if ( *(_QWORD *)(a1 + 96) || *(_QWORD *)(a1 + 104) )
    VerifierBugCheckIfAppropriate(
      0xC4u,
      0x62uLL,
      *(_QWORD *)(a2 + 96),
      a1,
      (unsigned int)(*(_DWORD *)(a1 + 84) + *(_DWORD *)(a1 + 80)));
  while ( 1 )
  {
    result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 48));
    if ( !result )
      break;
    ExFreePoolWithTag(result, 0);
  }
  return result;
}
