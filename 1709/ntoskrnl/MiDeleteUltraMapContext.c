/*
 * XREFs of MiDeleteUltraMapContext @ 0x1400CF098
 * Callers:
 *     MiDeleteUltraThreadContext @ 0x1400CF060 (MiDeleteUltraThreadContext.c)
 *     MiReclaimUnusedUltraMdlMaps @ 0x1400F0FD4 (MiReclaimUnusedUltraMdlMaps.c)
 *     MiGetUltraMdlContext @ 0x140234AAC (MiGetUltraMdlContext.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x1400C538C (MiReleaseFreshPage.c)
 *     MiGetUltraMapping @ 0x1400CD380 (MiGetUltraMapping.c)
 *     MiReleaseNonPagedResources @ 0x1400CF13C (MiReleaseNonPagedResources.c)
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
    _InterlockedDecrement(&dword_140389074);
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
