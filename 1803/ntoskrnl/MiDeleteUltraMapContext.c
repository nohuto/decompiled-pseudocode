/*
 * XREFs of MiDeleteUltraMapContext @ 0x14013A5FC
 * Callers:
 *     MiReclaimUnusedUltraMdlMaps @ 0x140081174 (MiReclaimUnusedUltraMdlMaps.c)
 *     MiDeleteUltraThreadContext @ 0x14013A5C4 (MiDeleteUltraThreadContext.c)
 *     MiGetUltraMdlContext @ 0x14026D360 (MiGetUltraMdlContext.c)
 * Callees:
 *     MiGetUltraMapping @ 0x1401389F0 (MiGetUltraMapping.c)
 *     MiReleaseNonPagedResources @ 0x14013A6A0 (MiReleaseNonPagedResources.c)
 *     MiReleaseFreshPage @ 0x14013A6E0 (MiReleaseFreshPage.c)
 */

void __fastcall MiDeleteUltraMapContext(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v4; // r8
  _QWORD *v5; // rdi

  if ( *(_BYTE *)(a1 + 24) )
  {
    v3 = 2LL;
    if ( a2 <= 2 )
      v4 = MiLargePageSizes[a2];
    else
      v4 = 1LL;
    MiGetUltraMapping((unsigned __int64 *)a1, a2, v4, 2);
    _InterlockedDecrement(&dword_1403CC324);
    v5 = (_QWORD *)(a1 + 8);
    do
    {
      if ( *v5 != -1LL )
      {
        MiReleaseFreshPage(48LL * *v5 - 0x58000000000LL);
        MiReleaseNonPagedResources(&MiSystemPartition, 1LL);
        *v5 = -1LL;
      }
      ++v5;
      --v3;
    }
    while ( v3 );
    *(_BYTE *)(a1 + 24) = 0;
  }
}
