/*
 * XREFs of CiSystemUpdateThreadTag @ 0x1C000289C
 * Callers:
 *     CiSchedulerAddThread @ 0x1C00028E0 (CiSchedulerAddThread.c)
 *     CiSchedulerRemoveThread @ 0x1C0002FFC (CiSchedulerRemoveThread.c)
 *     CiSchedulerSetTaskIndexThreadTag @ 0x1C0003230 (CiSchedulerSetTaskIndexThreadTag.c)
 * Callees:
 *     CiLogThreadBuffering @ 0x1C0001BA4 (CiLogThreadBuffering.c)
 */

__int64 __fastcall CiSystemUpdateThreadTag(__int64 a1, unsigned int a2)
{
  if ( byte_1C00062B0 )
    CiLogThreadBuffering(a1, a2 == 1);
  return KeUpdateThreadTag(*(_QWORD *)(a1 + 96), a2);
}
