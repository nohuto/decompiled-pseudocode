/*
 * XREFs of PnpIrpQueryID @ 0x1405CDA64
 * Callers:
 *     PnpQueryID @ 0x1405CD96C (PnpQueryID.c)
 *     PiProcessNewDeviceNode @ 0x1405D0A18 (PiProcessNewDeviceNode.c)
 *     PpProfileCommitTransitioningDock @ 0x140731E94 (PpProfileCommitTransitioningDock.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x140731FDC (PpProfileIncludeInHardwareProfileTransition.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     IopSynchronousCall @ 0x140499818 (IopSynchronousCall.c)
 */

__int64 __fastcall PnpIrpQueryID(struct _DEVICE_OBJECT *a1, int a2, ULONG_PTR *a3)
{
  __int64 result; // rax
  _DWORD v7[20]; // [rsp+30h] [rbp-58h] BYREF

  *a3 = 0LL;
  memset(v7, 0, 0x48uLL);
  v7[2] = a2;
  LOWORD(v7[0]) = 4891;
  result = IopSynchronousCall(a1, (__int64)v7, -1073741637, 0LL, a3);
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
