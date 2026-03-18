/*
 * XREFs of PnpSendIrp @ 0x140080D08
 * Callers:
 *     PnpGetRelatedTargetDevice @ 0x140005C74 (PnpGetRelatedTargetDevice.c)
 *     PnpStartDevice @ 0x1400676C0 (PnpStartDevice.c)
 *     PnpQueryDeviceRelations @ 0x1404A769C (PnpQueryDeviceRelations.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x140026160 (KeRevertToUserGroupAffinityThread.c)
 *     PnpSetDeviceAffinityThread @ 0x140080DB0 (PnpSetDeviceAffinityThread.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PnpAsynchronousCall @ 0x1404DB8E0 (PnpAsynchronousCall.c)
 *     IopSynchronousCall @ 0x1404DDF94 (IopSynchronousCall.c)
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
