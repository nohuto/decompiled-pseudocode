/*
 * XREFs of CiSystemUpdateThreadTag @ 0x1C0001FF0
 * Callers:
 *     CiSchedulerSetTaskIndexThreadTag @ 0x1C00011B0 (CiSchedulerSetTaskIndexThreadTag.c)
 *     CiSchedulerAddThread @ 0x1C00018A0 (CiSchedulerAddThread.c)
 *     CiSchedulerRemoveThread @ 0x1C0001DD0 (CiSchedulerRemoveThread.c)
 * Callees:
 *     CiLogThreadBuffering @ 0x1C000435C (CiLogThreadBuffering.c)
 */

__int64 __fastcall CiSystemUpdateThreadTag(__int64 a1, unsigned int a2)
{
  if ( byte_1C0007298 )
    CiLogThreadBuffering(a1, a2 == 1);
  return KeUpdateThreadTag(*(_QWORD *)(a1 + 96), a2);
}
