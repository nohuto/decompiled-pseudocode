/*
 * XREFs of PopControlMonitor @ 0x1406FF5E0
 * Callers:
 *     PopScreenOff @ 0x1406FF984 (PopScreenOff.c)
 *     PopScreenOn @ 0x1406FF9CC (PopScreenOn.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     PopInvokeWin32Callout @ 0x1404E8B38 (PopInvokeWin32Callout.c)
 *     TtmSessionMonitorControl @ 0x14070F8B8 (TtmSessionMonitorControl.c)
 */

__int64 __fastcall PopControlMonitor(unsigned int *a1, unsigned int a2)
{
  _QWORD v4[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v5; // [rsp+68h] [rbp+10h] BYREF

  v5 = a2;
  if ( TtmpEnabled == 1 )
    return TtmSessionMonitorControl(a2, a1[1], *a1);
  memset(v4, 0, 0x28uLL);
  LODWORD(v4[0]) = 3;
  BYTE4(v4[0]) = 0;
  LODWORD(v4[1]) = 8;
  v4[2] = a1;
  LODWORD(v4[3]) = 0;
  v4[4] = 0LL;
  return PopInvokeWin32Callout(5, (__int64)v4, 1, (int *)&v5);
}
