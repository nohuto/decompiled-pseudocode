/*
 * XREFs of HvFreeDirtyData @ 0x1404E6528
 * Callers:
 *     CmpDeleteHive @ 0x1400AFD08 (CmpDeleteHive.c)
 *     CmpFlushHive @ 0x1404DD950 (CmpFlushHive.c)
 *     HvFoldBackDirtyData @ 0x140696CC0 (HvFoldBackDirtyData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall HvFreeDirtyData(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 2864);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_DWORD *)(a1 + 2856) = 0;
    *(_QWORD *)(a1 + 2864) = 0LL;
    ExFreePoolWithTag(*(PVOID *)(a1 + 2880), 0);
    *(_QWORD *)(a1 + 2880) = 0LL;
    *(_DWORD *)(a1 + 2888) = 0;
  }
}
