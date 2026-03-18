/*
 * XREFs of UsbhResetPortData @ 0x1C0056830
 * Callers:
 *     UsbhDeregisterPdo @ 0x1C0042B54 (UsbhDeregisterPdo.c)
 *     UsbhDeletePdo @ 0x1C0054F90 (UsbhDeletePdo.c)
 * Callees:
 *     UsbhSignalSyncDeviceResetPdo @ 0x1C0008E44 (UsbhSignalSyncDeviceResetPdo.c)
 *     UsbhDerefPdo @ 0x1C000B1A0 (UsbhDerefPdo.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     UsbhGetPortData @ 0x1C0016C70 (UsbhGetPortData.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 */

void __fastcall UsbhResetPortData(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v5; // rax
  __int64 PortData; // rax
  _DWORD *v7; // rax

  Log(a1, 256, 1919968372, a2, a3);
  v5 = PdoExt(a2);
  PortData = UsbhGetPortData(a1, *((_WORD *)v5 + 710));
  if ( PortData )
  {
    *(_QWORD *)(PortData + 392) = 0LL;
    _InterlockedExchange((volatile __int32 *)(PortData + 428), 0);
    v7 = PdoExt(a2);
    v7[354] &= ~8u;
    UsbhSignalSyncDeviceResetPdo(a1, a2, -1073741810);
    UsbhDerefPdo(a1, a2, 0LL, 0x4C415443u);
  }
}
