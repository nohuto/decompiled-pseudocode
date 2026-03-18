/*
 * XREFs of ?OnRemoteCloseNotification@CBaseInput@@AEAAJXZ @ 0x1C004FB50
 * Callers:
 *     <none>
 * Callees:
 *     ?RimInputTypeToDeviceInputType@CBaseInput@@AEBAIXZ @ 0x1C004EFC0 (-RimInputTypeToDeviceInputType@CBaseInput@@AEBAIXZ.c)
 */

__int64 __fastcall CBaseInput::OnRemoteCloseNotification(CBaseInput *this)
{
  unsigned int v1; // eax
  __int64 v2; // r8

  v1 = CBaseInput::RimInputTypeToDeviceInputType(this);
  return RIMDirectPnpRemoveDevicesOfType(*(_QWORD *)(v2 + 8), v1);
}
