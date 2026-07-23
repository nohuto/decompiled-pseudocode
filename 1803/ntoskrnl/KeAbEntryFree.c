/*
 * XREFs of KeAbEntryFree @ 0x14007C944
 * Callers:
 *     KeAbPostReleaseEx @ 0x14007C82C (KeAbPostReleaseEx.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 */

__int64 __fastcall KeAbEntryFree(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax
  unsigned int v6; // ecx

  *(_BYTE *)(a1 + 32) |= 2u;
  if ( *(__int64 *)(a1 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)a1);
  result = *(_DWORD *)(a1 + 88) & 0x1FFFF;
  v6 = *(_DWORD *)(a1 + 88) & 0xFFFE0000;
  *(_BYTE *)(a1 + 25) &= ~1u;
  *a3 = result;
  *(_DWORD *)(a1 + 88) = v6;
  *(_QWORD *)(a1 + 32) = 0LL;
  return result;
}
