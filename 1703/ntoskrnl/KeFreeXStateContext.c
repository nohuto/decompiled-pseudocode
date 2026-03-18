/*
 * XREFs of KeFreeXStateContext @ 0x140030D04
 * Callers:
 *     KeRestoreExtendedAndSupervisorState @ 0x140030B9C (KeRestoreExtendedAndSupervisorState.c)
 *     VfCtxInit @ 0x14077F660 (VfCtxInit.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall KeFreeXStateContext(__int64 a1)
{
  void *v2; // rcx

  if ( a1 )
  {
    v2 = *(void **)(a1 + 24);
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0x76615358u);
      *(_QWORD *)a1 = 0LL;
      *(_DWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 24) = 0LL;
      *(_QWORD *)(a1 + 16) = 0LL;
    }
  }
}
