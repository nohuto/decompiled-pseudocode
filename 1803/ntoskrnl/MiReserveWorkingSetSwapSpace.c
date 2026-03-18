/*
 * XREFs of MiReserveWorkingSetSwapSpace @ 0x14053AFC8
 * Callers:
 *     MmOutSwapWorkingSet @ 0x140062868 (MmOutSwapWorkingSet.c)
 *     MmOutSwapVirtualAddresses @ 0x14009C194 (MmOutSwapVirtualAddresses.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiFreeReservationRuns @ 0x14053AF80 (MiFreeReservationRuns.c)
 *     MiReserveWorkingSetSwapSpaceRuns @ 0x14053B04C (MiReserveWorkingSetSwapSpaceRuns.c)
 */

__int64 __fastcall MiReserveWorkingSetSwapSpace(
        __int64 a1,
        void *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  unsigned int v6; // edi
  unsigned int *i; // r8
  unsigned int v10; // r9d
  int v11; // r9d
  __int64 result; // rax

  v6 = a4;
  for ( i = *(unsigned int **)(a1 + 8LL * a4 + 6880); ; i = *(unsigned int **)(a1 + 8LL * a5 + 6880) )
  {
    if ( v6 == a5 || a5 == 16 )
    {
      v11 = 1;
    }
    else
    {
      v10 = *i;
      v11 = (i[51] & 0x20) != 0 ? v10 >> 1 : v10 - (v10 >> 6);
    }
    result = MiReserveWorkingSetSwapSpaceRuns(a1, a6, v6, v11, (__int64)a2);
    if ( !result )
      break;
    MiFreeReservationRuns(a1, (unsigned __int64)a2);
    memset(a2, 0, 0x50uLL);
    if ( v6 == a5 || a5 >= 0x10 )
      return 3221226021LL;
    v6 = a5;
  }
  return result;
}
