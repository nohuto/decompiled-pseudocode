/*
 * XREFs of MiCleanupPageTablePages @ 0x14010AD58
 * Callers:
 *     MiGetPageTablePages @ 0x14010E79C (MiGetPageTablePages.c)
 *     MiMakeZeroedPageTables @ 0x140127F0C (MiMakeZeroedPageTables.c)
 *     MmCreateShadowMapping @ 0x14041D7C8 (MmCreateShadowMapping.c)
 * Callees:
 *     MiReturnSystemCharges @ 0x140082C30 (MiReturnSystemCharges.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiReleaseFreshPage @ 0x14010ADC8 (MiReleaseFreshPage.c)
 */

void __fastcall MiCleanupPageTablePages(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rax
  unsigned __int64 v5; // rdi

  while ( *(_QWORD *)a1 )
  {
    v2 = *(_QWORD **)a1;
    *(_QWORD *)a1 = **(_QWORD **)a1;
    MiReleaseFreshPage(v2);
  }
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 24);
    if ( v4 != v3 )
    {
      v5 = v3 - v4;
      MiReturnCommit(*(_QWORD *)(a1 + 8), v5);
      MiReturnSystemCharges(*(_QWORD *)(a1 + 8), v5, *(unsigned int *)(a1 + 32));
    }
  }
  *(_QWORD *)(a1 + 16) = 0LL;
}
