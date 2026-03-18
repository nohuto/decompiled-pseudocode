/*
 * XREFs of ?OnRemoteCloseNotification@CBaseInput@@AEAAJXZ @ 0x1C001A5A0
 * Callers:
 *     <none>
 * Callees:
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C000AB20 (RIMDirectPnpRemoveDevicesOfType.c)
 *     ?RimInputTypeToDeviceInputType@CBaseInput@@AEBAIXZ @ 0x1C0019964 (-RimInputTypeToDeviceInputType@CBaseInput@@AEBAIXZ.c)
 */

__int64 __fastcall CBaseInput::OnRemoteCloseNotification(CBaseInput *this)
{
  int v1; // eax
  __int64 v2; // r8

  v1 = CBaseInput::RimInputTypeToDeviceInputType(this);
  return RIMDirectPnpRemoveDevicesOfType(*(_QWORD *)(v2 + 8), v1);
}
