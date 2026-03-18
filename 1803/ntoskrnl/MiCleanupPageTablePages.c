/*
 * XREFs of MiCleanupPageTablePages @ 0x1400493E0
 * Callers:
 *     MiMakeZeroedPageTables @ 0x1400490A0 (MiMakeZeroedPageTables.c)
 *     MmCreateShadowMapping @ 0x14062B744 (MmCreateShadowMapping.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiFreeLargeZeroPages @ 0x140049444 (MiFreeLargeZeroPages.c)
 *     MiReturnSystemCharges @ 0x1401377CC (MiReturnSystemCharges.c)
 */

__int64 __fastcall MiCleanupPageTablePages(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  unsigned __int64 v4; // rdi

  result = MiFreeLargeZeroPages(*(_QWORD *)(a1 + 24), a1);
  v3 = *(_QWORD *)(a1 + 32);
  if ( v3 )
  {
    result = *(_QWORD *)(a1 + 40);
    if ( result != v3 )
    {
      v4 = v3 - result;
      MiReturnCommit(*(_QWORD *)(a1 + 24), v4);
      result = MiReturnSystemCharges(*(_QWORD *)(a1 + 24), v4, *(unsigned int *)(a1 + 48));
    }
  }
  *(_QWORD *)(a1 + 32) = 0LL;
  return result;
}
