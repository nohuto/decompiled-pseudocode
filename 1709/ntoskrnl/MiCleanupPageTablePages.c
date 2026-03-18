/*
 * XREFs of MiCleanupPageTablePages @ 0x1400C3F04
 * Callers:
 *     MiGetPageTablePages @ 0x140027ECC (MiGetPageTablePages.c)
 *     MiMakeZeroedPageTables @ 0x1400C3C2C (MiMakeZeroedPageTables.c)
 *     MmCreateShadowMapping @ 0x14043D3A4 (MmCreateShadowMapping.c)
 * Callees:
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiReturnSystemCharges @ 0x1400C3258 (MiReturnSystemCharges.c)
 *     MiFreeLargeZeroPages @ 0x1400C5300 (MiFreeLargeZeroPages.c)
 */

void __fastcall MiCleanupPageTablePages(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  unsigned __int64 v4; // rdi

  MiFreeLargeZeroPages(*(_QWORD *)(a1 + 24), a1);
  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 40);
    if ( v3 != v2 )
    {
      v4 = v2 - v3;
      MiReturnCommit(*(_QWORD *)(a1 + 24), v4);
      MiReturnSystemCharges(*(_QWORD *)(a1 + 24), v4, *(_DWORD *)(a1 + 48));
    }
  }
  *(_QWORD *)(a1 + 32) = 0LL;
}
