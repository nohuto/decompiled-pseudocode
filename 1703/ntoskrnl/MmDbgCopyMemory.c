/*
 * XREFs of MmDbgCopyMemory @ 0x14021B98C
 * Callers:
 *     KdpReadPhysicalMemory @ 0x14078A0C8 (KdpReadPhysicalMemory.c)
 *     KdpSearchMemory @ 0x14078A7DC (KdpSearchMemory.c)
 *     KdpSearchPhysicalPage @ 0x14078A9D0 (KdpSearchPhysicalPage.c)
 *     KdpCopyMemoryChunks @ 0x14078C474 (KdpCopyMemoryChunks.c)
 * Callees:
 *     MiDbgCopyMemory @ 0x14021AE1C (MiDbgCopyMemory.c)
 */

__int64 __fastcall MmDbgCopyMemory(char *BaseAddress, _BYTE *a2, ULONG a3, unsigned int a4, unsigned int a5)
{
  ULONG v6; // edi
  __int64 result; // rax
  ULONG v10; // esi

  v6 = a3;
  if ( a4 > 2 && a4 != 4 && a4 != 8 )
    return 2147483650LL;
  result = 0LL;
  if ( a3 )
  {
    do
    {
      v10 = 4096 - ((unsigned __int16)BaseAddress & 0xFFF);
      if ( v10 > v6 )
        v10 = v6;
      result = MiDbgCopyMemory(BaseAddress, a2, v10, a4, a5);
      if ( (int)result < 0 )
        break;
      BaseAddress += v10;
      a2 += v10;
      v6 -= v10;
    }
    while ( v6 );
  }
  return result;
}
