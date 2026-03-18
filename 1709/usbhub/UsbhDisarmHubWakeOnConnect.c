/*
 * XREFs of UsbhDisarmHubWakeOnConnect @ 0x1C000568C
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C0001CC4 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhSshResumeDownstream @ 0x1C000266C (UsbhSshResumeDownstream.c)
 *     UsbhSshSuspendHub @ 0x1C0019474 (UsbhSshSuspendHub.c)
 * Callees:
 *     UsbhDisarmHubForWakeDetect @ 0x1C00056DC (UsbhDisarmHubForWakeDetect.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhSetHubRemoteWake @ 0x1C0017278 (UsbhSetHubRemoteWake.c)
 */

__int64 __fastcall UsbhDisarmHubWakeOnConnect(__int64 a1)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = FdoExt(a1);
  result = UsbhDisarmHubForWakeDetect(a1);
  if ( (*(_DWORD *)(v2 + 2560) & 0x80000) != 0 )
  {
    result = UsbhSetHubRemoteWake(a1);
    if ( (int)result >= 0 )
      *(_DWORD *)(v2 + 2560) &= ~0x80000u;
  }
  return result;
}
