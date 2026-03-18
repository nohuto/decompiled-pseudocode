/*
 * XREFs of EtwpQueryMaximumFileSize @ 0x1400D2F20
 * Callers:
 *     EtwpFlushBufferToLogfile @ 0x1405875C0 (EtwpFlushBufferToLogfile.c)
 *     EtwpFinalizeHeader @ 0x1405879E8 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1405887F0 (EtwpUpdateFileHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpQueryMaximumFileSize(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(unsigned int *)(a1 + 308);
  if ( (*(_DWORD *)(a1 + 12) & 0x2000) != 0 )
    return v1 << 10;
  else
    return v1 << 20;
}
