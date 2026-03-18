/*
 * XREFs of ?RimInputTypeToDeviceInputType@CBaseInput@@AEBAIXZ @ 0x1C0019964
 * Callers:
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C0019E30 (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@1@@Z @ 0x1C001A300 (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@1@@Z.c)
 *     ?OnRemoteCloseNotification@CBaseInput@@AEAAJXZ @ 0x1C001A5A0 (-OnRemoteCloseNotification@CBaseInput@@AEAAJXZ.c)
 *     ?DeliverMarshaledPnPNotification@CBaseInput@@QEAAXXZ @ 0x1C00A55F8 (-DeliverMarshaledPnPNotification@CBaseInput@@QEAAXXZ.c)
 *     ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x1C00A5750 (-OnRemoteOpenNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseInput::RimInputTypeToDeviceInputType(CBaseInput *this)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *((_DWORD *)this + 34);
  result = 1LL;
  if ( v1 == 1 )
    return 0LL;
  if ( v1 != 2 )
  {
    result = 3LL;
    if ( (v1 & 0x3C) != 0 )
      return 2LL;
  }
  return result;
}
