/*
 * XREFs of ?OnRemoteCloseNotification@CBaseInput@@AEAAJXZ @ 0x1C0123800
 * Callers:
 *     <none>
 * Callees:
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C00E11E0 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RimInputTypeToDeviceInputType @ 0x1C012E918 (RimInputTypeToDeviceInputType.c)
 */

__int64 __fastcall CBaseInput::OnRemoteCloseNotification(CBaseInput *this)
{
  int v1; // eax
  __int64 v2; // r8

  v1 = RimInputTypeToDeviceInputType(*((unsigned int *)this + 34));
  return RIMDirectPnpRemoveDevicesOfType(*(char **)(v2 + 8), v1);
}
