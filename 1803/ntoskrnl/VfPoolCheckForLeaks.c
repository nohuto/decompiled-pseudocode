/*
 * XREFs of VfPoolCheckForLeaks @ 0x1408248DC
 * Callers:
 *     VfTargetDriversRemove @ 0x140160844 (VfTargetDriversRemove.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     VerifierBugCheckIfAppropriate @ 0x14081D3A4 (VerifierBugCheckIfAppropriate.c)
 */

PSLIST_ENTRY __fastcall VfPoolCheckForLeaks(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  PSLIST_ENTRY result; // rax

  if ( (*(_QWORD *)(BugCheckParameter3 + 112) || *(_QWORD *)(BugCheckParameter3 + 120)) && (MmVerifierData & 8) != 0 )
    VerifierBugCheckIfAppropriate(
      0xC4u,
      0x62uLL,
      *(_QWORD *)(a2 + 96),
      BugCheckParameter3,
      (unsigned int)(*(_DWORD *)(BugCheckParameter3 + 100) + *(_DWORD *)(BugCheckParameter3 + 96)));
  while ( 1 )
  {
    result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(BugCheckParameter3 + 64));
    if ( !result )
      break;
    ExFreePoolWithTag(result, 0);
  }
  return result;
}
