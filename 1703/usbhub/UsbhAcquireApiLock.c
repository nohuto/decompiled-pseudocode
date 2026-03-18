/*
 * XREFs of UsbhAcquireApiLock @ 0x1C00473C8
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
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhAcquireFdoPnpLock @ 0x1C003E8D4 (UsbhAcquireFdoPnpLock.c)
 */

__int64 __fastcall UsbhAcquireApiLock(__int64 a1, unsigned int a2, _BYTE *a3)
{
  __int64 v3; // rbx
  _DWORD *v6; // rax
  int v7; // esi
  _DWORD *v8; // rax
  int v9; // eax
  __int64 v10; // r10

  v3 = a2;
  Log(a1, 32, 1095774507, 0LL, a2);
  v6 = FdoExt(a1);
  v7 = 0;
  KeWaitForSingleObject(v6 + 1230, Executive, 0, 0, 0LL);
  v8 = FdoExt(a1);
  v9 = UsbhAcquireFdoPnpLock(a1, (__int64)(v8 + 434), 11, v3, 1);
  v10 = v9;
  *a3 = 1;
  if ( v9 != 5 )
  {
    if ( v9 == 6 )
      Log(a1, 32, 1095774563, 0LL, v3);
    v7 = -1073741810;
  }
  Log(a1, 32, 1095774497, v7, v10);
  return (unsigned int)v7;
}
