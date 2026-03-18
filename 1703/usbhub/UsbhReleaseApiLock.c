/*
 * XREFs of UsbhReleaseApiLock @ 0x1C004A710
 * Callers:
 *     UsbhIoctlCyclePort @ 0x1C00478CC (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C004802C (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetHubCaps @ 0x1C0048344 (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetHubCapsEx @ 0x1C0048594 (UsbhIoctlGetHubCapsEx.c)
 *     UsbhIoctlGetHubInformationEx @ 0x1C004880C (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C0048AA8 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C0048D10 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C004916C (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C0049480 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C004975C (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C0049A14 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C0049CD8 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhIoctlResetStuckHub @ 0x1C0049F94 (UsbhIoctlResetStuckHub.c)
 * Callees:
 *     UsbhReleaseFdoPnpLock @ 0x1C00097A8 (UsbhReleaseFdoPnpLock.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 */

LONG __fastcall UsbhReleaseApiLock(__int64 a1, unsigned int a2)
{
  _DWORD *v3; // rax
  struct _KEVENT *v4; // rax

  Log(a1, 32, 1095774509, 0LL, a2);
  v3 = FdoExt(a1);
  UsbhReleaseFdoPnpLock(a1, (__int64)(v3 + 434));
  v4 = (struct _KEVENT *)FdoExt(a1);
  return KeSetEvent(v4 + 205, 0, 0);
}
