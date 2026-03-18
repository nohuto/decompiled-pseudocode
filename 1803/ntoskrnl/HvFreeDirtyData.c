/*
 * XREFs of HvFreeDirtyData @ 0x14054D894
 * Callers:
 *     CmpFlushHive @ 0x14049D2A8 (CmpFlushHive.c)
 *     CmpDeleteHive @ 0x14054D76C (CmpDeleteHive.c)
 *     HvFoldBackDirtyData @ 0x1406FB740 (HvFoldBackDirtyData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall HvFreeDirtyData(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 1688);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_DWORD *)(a1 + 1680) = 0;
    *(_QWORD *)(a1 + 1688) = 0LL;
    ExFreePoolWithTag(*(PVOID *)(a1 + 1704), 0);
    *(_QWORD *)(a1 + 1704) = 0LL;
    *(_DWORD *)(a1 + 1712) = 0;
  }
}
