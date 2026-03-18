/*
 * XREFs of vRemoveAndCleanupRimClient @ 0x1C0109B10
 * Callers:
 *     DitPrepRitTakeOver @ 0x1C0109914 (DitPrepRitTakeOver.c)
 *     RitPrepDitTakeOver @ 0x1C0109A88 (RitPrepDitTakeOver.c)
 * Callees:
 *     vCleanupRimClientWorker @ 0x1C0109B6C (vCleanupRimClientWorker.c)
 */

void vRemoveAndCleanupRimClient()
{
  unsigned int v0; // ebx
  __int64 v1; // rdi
  bool v2; // zf
  unsigned int v3; // eax

  v0 = 0;
  v1 = 0LL;
  v2 = 0;
  do
  {
    if ( v2 )
    {
      gbPendRecreateTouchInjectionDevices = 1;
      if ( (gdwMitConfig & 4) != 0
        || (v3 = DeviceTypeToRimInputType(2LL),
            (int)RIMRemoveInputOfType(*(_QWORD *)((char *)&aDeviceTemplate[0][4].Header.Lock + v1), v3) >= 0) )
      {
        vCleanupRimClientWorker(2LL);
      }
    }
    ++v0;
    v1 += 560LL;
    v2 = v0 == 2;
  }
  while ( v0 <= 2 );
}
