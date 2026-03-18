/*
 * XREFs of HvlSetPartitionProperty @ 0x1401ECFE8
 * Callers:
 *     HvlResumePartition @ 0x1401ECC10 (HvlResumePartition.c)
 *     HvlSuspendPartition @ 0x1401ED240 (HvlSuspendPartition.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x140132F60 (HvcallpNoHypervisorPresent.c)
 *     HvlpReleaseHypercallPage @ 0x140140F8C (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140140FC4 (HvlpAcquireHypercallPage.c)
 */

__int64 __fastcall HvlSetPartitionProperty(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int16 v7; // bx
  PHYSICAL_ADDRESS v8[3]; // [rsp+20h] [rbp-28h] BYREF

  if ( (HvlpFlags & 2) == 0 )
    return 3221225506LL;
  v6 = HvlpAcquireHypercallPage(v8, 1, 0LL, 24LL);
  *(_QWORD *)v6 = a1;
  *(_DWORD *)(v6 + 8) = 0x20000;
  *(_QWORD *)(v6 + 16) = a3;
  v7 = HvcallCodeVa();
  HvlpReleaseHypercallPage((__int64)v8);
  return v7 != 0 ? 0xC0000001 : 0;
}
