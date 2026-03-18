/*
 * XREFs of PnpIrpQueryID @ 0x1404DDF0C
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1404DC8A4 (PiProcessNewDeviceNode.c)
 *     PnpQueryID @ 0x1404DDC40 (PnpQueryID.c)
 *     PpProfileCommitTransitioningDock @ 0x14069FF30 (PpProfileCommitTransitioningDock.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x1406A007C (PpProfileIncludeInHardwareProfileTransition.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     IopSynchronousCall @ 0x1404DDF94 (IopSynchronousCall.c)
 */

__int64 __fastcall PnpIrpQueryID(int a1, int a2, _QWORD *a3)
{
  __int64 result; // rax
  _DWORD v7[18]; // [rsp+30h] [rbp-58h] BYREF

  *a3 = 0LL;
  memset(v7, 0, sizeof(v7));
  v7[2] = a2;
  LOWORD(v7[0]) = 4891;
  result = IopSynchronousCall(a1, (unsigned int)v7, -1073741637, 0, (__int64)a3);
  if ( (int)result < 0 )
  {
    *a3 = 0LL;
  }
  else if ( !*a3 )
  {
    return 3221225659LL;
  }
  return result;
}
