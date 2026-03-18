/*
 * XREFs of SmStoreSetProcessVaRanges @ 0x140568258
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1400793EC (MmOutSwapWorkingSet.c)
 *     MmInSwapWorkingSet @ 0x14007D3E4 (MmInSwapWorkingSet.c)
 * Callees:
 *     SmpKeyedStoreSetVaRanges @ 0x14012F544 (SmpKeyedStoreSetVaRanges.c)
 *     SmAlloc @ 0x14012F798 (SmAlloc.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SmStoreSetProcessVaRanges(void *Src, __int64 a2)
{
  void *v2; // rbx
  _KPROCESS *Process; // rbp
  size_t v5; // rdi
  PVOID v6; // rax
  int v7; // edi

  v2 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( a2 )
  {
    v5 = 16 * a2;
    v6 = SmAlloc(16 * a2, 0x52566D73u);
    v2 = v6;
    if ( !v6 )
      return (unsigned int)-1073741670;
    memmove(v6, Src, v5);
  }
  v7 = SmpKeyedStoreSetVaRanges((ULONG_PTR)&qword_1403FA1A8, Process);
  if ( v7 >= 0 )
  {
    v2 = 0LL;
    v7 = 0;
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  return (unsigned int)v7;
}
