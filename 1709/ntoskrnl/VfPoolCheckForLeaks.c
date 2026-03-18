/*
 * XREFs of VfPoolCheckForLeaks @ 0x1407B76A8
 * Callers:
 *     VfTargetDriversRemove @ 0x1400F8F58 (VfTargetDriversRemove.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140188F70 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     VerifierBugCheckIfAppropriate @ 0x1407B01F4 (VerifierBugCheckIfAppropriate.c)
 */

PSLIST_ENTRY __fastcall VfPoolCheckForLeaks(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  PSLIST_ENTRY result; // rax

  if ( (*(_QWORD *)(BugCheckParameter3 + 96) || *(_QWORD *)(BugCheckParameter3 + 104)) && (MmVerifierData & 8) != 0 )
    VerifierBugCheckIfAppropriate(
      0xC4u,
      0x62uLL,
      *(_QWORD *)(a2 + 96),
      BugCheckParameter3,
      (unsigned int)(*(_DWORD *)(BugCheckParameter3 + 84) + *(_DWORD *)(BugCheckParameter3 + 80)));
  while ( 1 )
  {
    result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(BugCheckParameter3 + 48));
    if ( !result )
      break;
    ExFreePoolWithTag(result, 0);
  }
  return result;
}
