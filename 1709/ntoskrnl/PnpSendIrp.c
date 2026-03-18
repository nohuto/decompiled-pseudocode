/*
 * XREFs of PnpSendIrp @ 0x1400FBD5C
 * Callers:
 *     PnpGetRelatedTargetDevice @ 0x1400FBC60 (PnpGetRelatedTargetDevice.c)
 *     PnpStartDevice @ 0x1400FCED4 (PnpStartDevice.c)
 *     PnpQueryDeviceRelations @ 0x140553234 (PnpQueryDeviceRelations.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x1400AAD30 (KeRevertToUserGroupAffinityThread.c)
 *     PnpSetDeviceAffinityThread @ 0x1400FBE04 (PnpSetDeviceAffinityThread.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     IopSynchronousCall @ 0x14051CF64 (IopSynchronousCall.c)
 *     PnpAsynchronousCall @ 0x1405532A4 (PnpAsynchronousCall.c)
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
