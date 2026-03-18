/*
 * XREFs of PfTAcquireLogEntry @ 0x1406C4630
 * Callers:
 *     PfpFlushBuffers @ 0x140496650 (PfpFlushBuffers.c)
 * Callees:
 *     PfTReplaceCurrentBuffer @ 0x1404972A0 (PfTReplaceCurrentBuffer.c)
 */

__int64 __fastcall PfTAcquireLogEntry(__int64 a1, int *a2, int a3)
{
  __int64 v3; // r10
  int v7; // eax

  v3 = *(_QWORD *)(a1 + 24);
  if ( (unsigned int)(a3 + *(_DWORD *)(v3 + 16)) <= *(_DWORD *)(v3 + 20) )
  {
LABEL_4:
    *(_DWORD *)(v3 + 16) += a3;
    v7 = *(_DWORD *)(v3 + 16) - a3;
  }
  else
  {
    while ( (unsigned int)PfTReplaceCurrentBuffer() != -1073741823 )
    {
      v3 = *(_QWORD *)(a1 + 24);
      if ( (unsigned int)(a3 + *(_DWORD *)(v3 + 16)) <= *(_DWORD *)(v3 + 20) )
        goto LABEL_4;
    }
    v3 = 0LL;
    v7 = 0xFFFF;
  }
  *a2 = v7;
  return v3;
}
