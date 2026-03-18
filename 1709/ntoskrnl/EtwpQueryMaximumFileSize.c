/*
 * XREFs of EtwpQueryMaximumFileSize @ 0x1400E0BAC
 * Callers:
 *     EtwpFlushBufferToLogfile @ 0x1405330A4 (EtwpFlushBufferToLogfile.c)
 *     EtwpFinalizeHeader @ 0x1405776D0 (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x140578090 (EtwpUpdateFileHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpQueryMaximumFileSize(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(unsigned int *)(a1 + 308);
  if ( (*(_DWORD *)(a1 + 12) & 0x2000) != 0 )
    return v1 << 10;
  else
    return v1 << 20;
}
