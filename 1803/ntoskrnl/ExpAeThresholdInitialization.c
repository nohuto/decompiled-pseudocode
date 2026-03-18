/*
 * XREFs of ExpAeThresholdInitialization @ 0x1408BA930
 * Callers:
 *     ExpInitSystemPhase1 @ 0x1408A0198 (ExpInitSystemPhase1.c)
 * Callees:
 *     KeGenericCallDpc @ 0x140004B40 (KeGenericCallDpc.c)
 *     ExpAeMeasureContention @ 0x14017C810 (ExpAeMeasureContention.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

char ExpAeThresholdInitialization()
{
  unsigned __int64 v0; // rbx
  unsigned __int8 v1; // r10
  __int64 v2; // r9
  unsigned __int64 v3; // rbx
  unsigned int v4; // ecx
  char v5; // cl
  unsigned __int64 v6; // rdx
  int v7; // eax
  unsigned int v9; // ecx
  _BYTE v10[128]; // [rsp+60h] [rbp+0h] BYREF

  memset((void *)((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFC0uLL), 0, 0xC0uLL);
  v0 = 0LL;
  KeGetCurrentIrql();
  __writecr8(2uLL);
  do
    v0 += ExpAeMeasureContention((signed __int64 *)((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFC0uLL));
  while ( v2 != 1 );
  __writecr8(v1);
  v3 = v0 >> 10;
  KeGenericCallDpc((__int64)ExpAeThresholdInitWorker, (unsigned __int64)v10 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( *(_QWORD *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80)
     / 1024LL
     / (unsigned __int64)*(int *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) < 4 * v3 )
  {
    v7 = -1;
    ExpAeCycleCountScaler = -1;
    ExpAeCycleCountThreshold = -1;
  }
  else
  {
    if ( HIDWORD(v3) )
    {
      _BitScanReverse(&v9, HIDWORD(v3));
      v4 = v9 + 32;
    }
    else
    {
      _BitScanReverse(&v4, v3);
    }
    if ( v4 < 2 )
      v5 = 0;
    else
      v5 = v4 - 2;
    ExpAeCycleCountScaler = v5;
    v6 = (v3 + (v3 >> 2)) << 7 >> v5;
    if ( v6 > 0xFFFFFFFF )
      LODWORD(v6) = -1;
    v7 = 15728640;
    ExpAeCycleCountThreshold = v6;
  }
  ExpAeSamplingPeriodMask = v7;
  return 1;
}
