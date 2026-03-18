/*
 * XREFs of MiReadPteShadow @ 0x140122630
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x14000F720 (MiWalkPageTablesRecursively.c)
 *     MiUserFault @ 0x14001B870 (MiUserFault.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MiConvertHiberPhasePte @ 0x140475650 (MiConvertHiberPhasePte.c)
 *     MiPfPrepareSequentialReadList @ 0x1404ADAD0 (MiPfPrepareSequentialReadList.c)
 *     MiIsRangeFullyCommitted @ 0x1404D5F64 (MiIsRangeFullyCommitted.c)
 *     MmProtectVirtualMemory @ 0x1404D6080 (MmProtectVirtualMemory.c)
 *     MiChargeSegmentCommit @ 0x1404D7760 (MiChargeSegmentCommit.c)
 *     MmHardFaultBytesRequired @ 0x1405B6CC0 (MmHardFaultBytesRequired.c)
 *     MiPfPrepareReadList @ 0x1405B7520 (MiPfPrepareReadList.c)
 *     MiPrefetchDriverPages @ 0x1405BB2D0 (MiPrefetchDriverPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiReadPteShadow(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rax

  if ( (MiFlags & 0x1800000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (a2 & 1) != 0
    && ((a2 & 0x20) == 0 || (a2 & 0x42) == 0) )
  {
    v3 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v3 )
    {
      v4 = *(_QWORD *)(v3 + 8 * ((a1 >> 3) & 0x1FF));
      if ( (v4 & 0x20) != 0 )
        a2 |= 0x20uLL;
      if ( (v4 & 0x42) != 0 )
        return a2 | 0x42;
    }
  }
  return a2;
}
