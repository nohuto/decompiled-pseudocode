/*
 * XREFs of SmStoreSetProcessVaRanges @ 0x140444AF0
 * Callers:
 *     MmInSwapWorkingSet @ 0x140003E0C (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x140014900 (MmOutSwapWorkingSet.c)
 * Callees:
 *     SmpKeyedStoreSetVaRanges @ 0x140004A3C (SmpKeyedStoreSetVaRanges.c)
 *     SmAlloc @ 0x1400064E8 (SmAlloc.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SmStoreSetProcessVaRanges(void *Src, __int64 a2, __int64 a3)
{
  void *v3; // rbx
  _KPROCESS *Process; // rbp
  size_t v6; // rdi
  PVOID v7; // rax
  int v8; // edi

  v3 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( a2 )
  {
    v6 = 16 * a2;
    v7 = SmAlloc(16 * a2, 0x52566D73u);
    v3 = v7;
    if ( !v7 )
      return (unsigned int)-1073741670;
    memmove(v7, Src, v6);
  }
  v8 = SmpKeyedStoreSetVaRanges((ULONG_PTR)qword_14041B178, (__int64)Process, a3);
  if ( v8 >= 0 )
  {
    v3 = 0LL;
    v8 = 0;
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return (unsigned int)v8;
}
