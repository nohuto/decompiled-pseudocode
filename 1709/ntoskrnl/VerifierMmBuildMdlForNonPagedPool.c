/*
 * XREFs of VerifierMmBuildMdlForNonPagedPool @ 0x1407C4070
 * Callers:
 *     <none>
 * Callees:
 *     MmDeterminePoolType @ 0x1400665E4 (MmDeterminePoolType.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     MmAreMdlPagesLocked @ 0x1407A5AD4 (MmAreMdlPagesLocked.c)
 *     VerifierBugCheckIfAppropriate @ 0x1407B01F4 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierMmBuildMdlForNonPagedPool(ULONG_PTR BugCheckParameter3)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v3; // r8
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql
    && (unsigned int)MmDeterminePoolType(*(_QWORD *)(BugCheckParameter3 + 32))
    && (MmVerifierData & 1) != 0 )
  {
    VerifierBugCheckIfAppropriate(0xC4u, 0x7FuLL, 0LL, BugCheckParameter3, v3);
  }
  ((void (__fastcall *)(ULONG_PTR))pXdvMmBuildMdlForNonPagedPool)(BugCheckParameter3);
  result = (unsigned int)MmVerifierData;
  if ( (MmVerifierData & 0x400000) != 0 && (MmVerifierData & 0x800) != 0 )
  {
    result = MmAreMdlPagesLocked((_DWORD *)BugCheckParameter3);
    if ( !(_DWORD)result )
      return VerifierBugCheckIfAppropriate(
               0xC4u,
               0x140uLL,
               CurrentIrql,
               BugCheckParameter3,
               *(_QWORD *)(BugCheckParameter3 + 32));
  }
  return result;
}
