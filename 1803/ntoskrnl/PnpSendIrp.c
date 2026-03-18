/*
 * XREFs of PnpSendIrp @ 0x140006EE4
 * Callers:
 *     PnpGetRelatedTargetDevice @ 0x140006DB4 (PnpGetRelatedTargetDevice.c)
 *     PnpStartDevice @ 0x140146E98 (PnpStartDevice.c)
 *     PnpQueryDeviceRelations @ 0x1405D3E80 (PnpQueryDeviceRelations.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x140005230 (KeRevertToUserGroupAffinityThread.c)
 *     PnpSetDeviceAffinityThread @ 0x140006F84 (PnpSetDeviceAffinityThread.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     IopSynchronousCall @ 0x140499818 (IopSynchronousCall.c)
 *     PnpAsynchronousCall @ 0x1405E2C94 (PnpAsynchronousCall.c)
 */

__int64 __fastcall PnpSendIrp(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v8; // ebp
  unsigned int v9; // eax
  unsigned int v10; // ebx
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-38h] BYREF

  v8 = PnpSetDeviceAffinityThread(a1, &PreviousAffinity);
  if ( a4 )
    v9 = PnpAsynchronousCall(a1, a2, a4, a5);
  else
    v9 = IopSynchronousCall(a1, a2, -1073741637, 0, a5);
  v10 = v9;
  if ( v8 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return v10;
}
