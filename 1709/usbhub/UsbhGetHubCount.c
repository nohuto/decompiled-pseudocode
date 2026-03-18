/*
 * XREFs of UsbhGetHubCount @ 0x1C0023A34
 * Callers:
 *     UsbhInitialize @ 0x1C0015CC0 (UsbhInitialize.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhSyncSendInternalIoctl @ 0x1C0023F60 (UsbhSyncSendInternalIoctl.c)
 */

__int64 __fastcall UsbhGetHubCount(__int64 a1, _DWORD *a2)
{
  _DWORD *v4; // rax
  int v5; // r10d
  unsigned int v6; // r10d

  v4 = FdoExt(a1);
  *a2 = 1;
  if ( (v4[640] & 1) != 0 )
    Log(a1, 8, 1214475858, 0LL, 0LL);
  else
    v5 = UsbhSyncSendInternalIoctl(a1, 2228251LL, a2, 0LL);
  Log(a1, 8, 1214475892, v5, (unsigned int)*a2);
  return v6;
}
