/*
 * XREFs of MiDecrementCloneHeaderCount @ 0x1400ADB28
 * Callers:
 *     MiDeleteCloneDescriptor @ 0x1400ADA5C (MiDeleteCloneDescriptor.c)
 *     MiDrainCrossPartitionUsage @ 0x14026EF90 (MiDrainCrossPartitionUsage.c)
 *     MiFreeCloneDescriptor @ 0x1407563A0 (MiFreeCloneDescriptor.c)
 * Callees:
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 */

int __fastcall MiDecrementCloneHeaderCount(__int64 a1)
{
  signed __int64 v1; // rax

  v1 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1304), 0xFFFFFFFFFFFFFFFFuLL);
  if ( v1 == 1 )
    LODWORD(v1) = KeSetEvent(*(PRKEVENT *)(a1 + 2056), 0, 0);
  return v1;
}
