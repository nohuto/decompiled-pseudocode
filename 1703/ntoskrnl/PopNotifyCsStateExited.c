/*
 * XREFs of PopNotifyCsStateExited @ 0x1406CB680
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     PopInvokeWin32Callout @ 0x1404C5D90 (PopInvokeWin32Callout.c)
 *     TtmNotifyCsStateExited @ 0x1406D9200 (TtmNotifyCsStateExited.c)
 */

__int64 __fastcall PopNotifyCsStateExited(int a1)
{
  _QWORD v2[7]; // [rsp+20h] [rbp-38h] BYREF
  int v3; // [rsp+60h] [rbp+8h] BYREF

  v3 = a1;
  if ( TtmpEnabled == 1 )
    return TtmNotifyCsStateExited();
  memset(v2, 0, 0x28uLL);
  BYTE4(v2[0]) = 0;
  LODWORD(v2[0]) = 5;
  LODWORD(v2[1]) = 0;
  v2[2] = 0LL;
  LODWORD(v2[3]) = 0;
  v2[4] = 0LL;
  return PopInvokeWin32Callout(5u, (__int64)v2, 1u, &v3);
}
