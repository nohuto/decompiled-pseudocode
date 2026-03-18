/*
 * XREFs of UsbhFdoReturnHubName @ 0x1C003F214
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0010A80 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     UsbhDecPdoIoCount @ 0x1C000A050 (UsbhDecPdoIoCount.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhGetHubPdoName @ 0x1C003C3AC (UsbhGetHubPdoName.c)
 */

__int64 __fastcall UsbhFdoReturnHubName(__int64 a1, ULONG_PTR a2, ULONG_PTR a3)
{
  __int64 v5; // rbx
  int HubPdoName; // eax

  v5 = a1;
  FdoExt(a1);
  PdoExt(a2);
  Log(v5, 8, 1919446590, a3, 0LL);
  HubPdoName = UsbhGetHubPdoName(
                 v5,
                 a2,
                 *(_WORD **)(a3 + 24),
                 *(_DWORD *)(*(_QWORD *)(a3 + 184) + 8LL),
                 (_DWORD *)(a3 + 56));
  *(_DWORD *)(a3 + 48) = HubPdoName;
  LODWORD(v5) = HubPdoName;
  IofCompleteRequest((PIRP)a3, 0);
  UsbhDecPdoIoCount(a2, a3);
  return (unsigned int)v5;
}
