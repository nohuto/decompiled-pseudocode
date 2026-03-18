/*
 * XREFs of UsbhGetHubCount @ 0x1C00277A0
 * Callers:
 *     UsbhInitialize @ 0x1C0017340 (UsbhInitialize.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhSyncSendInternalIoctl @ 0x1C001A710 (UsbhSyncSendInternalIoctl.c)
 */

__int64 __fastcall UsbhGetHubCount(__int64 a1, _DWORD *a2)
{
  _DWORD *v4; // rax
  NTSTATUS v5; // r10d
  unsigned int v6; // r10d

  v4 = FdoExt(a1);
  *a2 = 1;
  if ( (v4[640] & 1) != 0 )
    Log(a1, 8, 1214475858, 0LL, 0LL);
  else
    v5 = UsbhSyncSendInternalIoctl(a1, 0x22001Bu, (unsigned __int64)a2, 0LL);
  Log(a1, 8, 1214475892, v5, (unsigned int)*a2);
  return v6;
}
