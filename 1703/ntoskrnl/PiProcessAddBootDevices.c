/*
 * XREFs of PiProcessAddBootDevices @ 0x14059CE7C
 * Callers:
 *     PipAddDevicesToBootDriverWorker @ 0x1407F8FCC (PipAddDevicesToBootDriverWorker.c)
 * Callees:
 *     PoFxPrepareDevice @ 0x14006776C (PoFxPrepareDevice.c)
 *     PiPnpRtlBeginOperation @ 0x14048823C (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140488F04 (PiPnpRtlEndOperation.c)
 *     PipCallDriverAddDevice @ 0x1404E1D64 (PipCallDriverAddDevice.c)
 */

__int64 __fastcall PiProcessAddBootDevices(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  int v4; // [rsp+30h] [rbp+8h] BYREF
  char v5; // [rsp+34h] [rbp+Ch]
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 312);
  P = 0LL;
  v2 = *(_QWORD *)(v1 + 40);
  if ( *(_DWORD *)(v2 + 300) == 770 && (*(_DWORD *)(v2 + 396) & 0x6002) == 0 && !*(_QWORD *)(v2 + 432) )
  {
    PiPnpRtlBeginOperation((__int64 **)&P);
    v4 = 0;
    v5 = PnPBootDriversInitialized;
    if ( (int)PipCallDriverAddDevice(v2, (__int64)&v4) >= 0 )
      PoFxPrepareDevice(v2, 0);
    if ( P )
      PiPnpRtlEndOperation((char *)P);
  }
  return 0LL;
}
