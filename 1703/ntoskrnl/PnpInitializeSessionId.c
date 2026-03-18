/*
 * XREFs of PnpInitializeSessionId @ 0x1404A648C
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1404DC8A4 (PiProcessNewDeviceNode.c)
 * Callees:
 *     IopGetSessionIdFromPDO @ 0x1404A6410 (IopGetSessionIdFromPDO.c)
 *     _PnpSetObjectProperty @ 0x1404DDABC (_PnpSetObjectProperty.c)
 */

void __fastcall PnpInitializeSessionId(__int64 a1, __int64 a2, char a3)
{
  int SessionIdFromPDO; // r10d
  __int64 v5; // rcx
  struct _DEVICE_OBJECT *v7; // rcx
  int v8; // ecx
  int *v9; // rdx
  int v10; // r8d
  int v11; // [rsp+70h] [rbp+18h] BYREF

  SessionIdFromPDO = -1;
  v5 = *(_QWORD *)(a1 + 16);
  v11 = -1;
  if ( v5 )
  {
    v7 = *(struct _DEVICE_OBJECT **)(v5 + 32);
    if ( (v7->DeviceObjectExtension->ExtensionFlags & 0x400) != 0 )
    {
      SessionIdFromPDO = IopGetSessionIdFromPDO(v7);
      v11 = SessionIdFromPDO;
    }
  }
  if ( !a3 || SessionIdFromPDO != -1 )
  {
    if ( SessionIdFromPDO == -1 )
    {
      v8 = 0;
      v9 = 0LL;
      v10 = 0;
    }
    else
    {
      v8 = 4;
      v9 = &v11;
      v10 = 7;
    }
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(a1 + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_SessionId,
      v10,
      (__int64)v9,
      v8,
      a3 != 0 ? 0x20000 : 0);
  }
}
