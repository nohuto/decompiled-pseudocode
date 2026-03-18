/*
 * XREFs of ?RimInputTypeToDeviceInputType@CBaseInput@@AEBAIXZ @ 0x1C004EFC0
 * Callers:
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C004F3E0 (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@1@@Z @ 0x1C004F8CC (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@1@@Z.c)
 *     ?OnRemoteCloseNotification@CBaseInput@@AEAAJXZ @ 0x1C004FB50 (-OnRemoteCloseNotification@CBaseInput@@AEAAJXZ.c)
 *     ?DeliverMarshaledPnPNotification@CBaseInput@@QEAAXXZ @ 0x1C009A2B8 (-DeliverMarshaledPnPNotification@CBaseInput@@QEAAXXZ.c)
 *     ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x1C009A400 (-OnRemoteOpenNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseInput::RimInputTypeToDeviceInputType(CBaseInput *this)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *((_DWORD *)this + 36);
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
