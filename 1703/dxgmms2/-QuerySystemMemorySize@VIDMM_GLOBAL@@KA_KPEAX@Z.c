/*
 * XREFs of ?QuerySystemMemorySize@VIDMM_GLOBAL@@KA_KPEAX@Z @ 0x1C0047934
 * Callers:
 *     ?XboxReevaluateAdapterBudgets@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C00476EC (-XboxReevaluateAdapterBudgets@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?ReadConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C0076FB8 (-ReadConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall VIDMM_GLOBAL::QuerySystemMemorySize(void *a1)
{
  __int64 v1; // rbx
  _QWORD *PhysicalMemoryRanges; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // edx

  v1 = 0LL;
  PhysicalMemoryRanges = (_QWORD *)MmGetPhysicalMemoryRangesEx(a1);
  if ( PhysicalMemoryRanges )
  {
    v5 = PhysicalMemoryRanges[1];
    v6 = 0;
    while ( v5 )
    {
      v1 += v5;
      v5 = PhysicalMemoryRanges[2 * (unsigned int)++v6 + 1];
    }
    ExFreePoolWithTag(PhysicalMemoryRanges, 0);
  }
  else
  {
    _InterlockedIncrement(&dword_1C003C65C);
    v4 = WdLogNewEntry5_WdLowResource(v3);
    *(_QWORD *)(v4 + 24) = 44LL;
    WdLogEvent5_WdLowResource(v4);
    return 0x20000000LL;
  }
  return v1;
}
