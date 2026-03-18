/*
 * XREFs of EtwpQueryMaximumFileSize @ 0x1401223B4
 * Callers:
 *     EtwpFinalizeHeader @ 0x14054E348 (EtwpFinalizeHeader.c)
 *     EtwpFlushBufferToLogfile @ 0x140550754 (EtwpFlushBufferToLogfile.c)
 *     EtwpUpdateFileHeader @ 0x14055830C (EtwpUpdateFileHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpQueryMaximumFileSize(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(unsigned int *)(a1 + 292);
  if ( (*(_DWORD *)(a1 + 12) & 0x2000) != 0 )
    return v1 << 10;
  else
    return v1 << 20;
}
