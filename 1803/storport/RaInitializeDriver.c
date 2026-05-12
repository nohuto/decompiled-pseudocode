/*
 * XREFs of RaInitializeDriver @ 0x1C0065750
 * Callers:
 *     StorPortInitialize @ 0x1C002DEE0 (StorPortInitialize.c)
 * Callees:
 *     RaidAddPortDriver @ 0x1C002DE10 (RaidAddPortDriver.c)
 *     RaDuplicateUnicodeString @ 0x1C0038E9C (RaDuplicateUnicodeString.c)
 *     RaSqmAndEtwInitialize @ 0x1C006591C (RaSqmAndEtwInitialize.c)
 */

__int64 __fastcall RaInitializeDriver(__int64 a1, _QWORD *a2, __int64 a3, const UNICODE_STRING *a4)
{
  __int64 v8; // r8

  RaSqmAndEtwInitialize();
  a2[14] = RaDriverCreateIrp;
  a2[16] = RaDriverCloseIrp;
  a2[28] = RaDriverDeviceControlIrp;
  a2[29] = RaDriverScsiIrp;
  a2[41] = RaDriverPnpIrp;
  a2[36] = RaDriverPowerIrp;
  a2[37] = RaDriverSystemControlIrp;
  *(_QWORD *)(a2[6] + 8LL) = RaDriverAddDevice;
  a2[12] = 0LL;
  a2[13] = RaDriverUnload;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a3;
  RaDuplicateUnicodeString((PUNICODE_STRING)(a1 + 40), a4, v8, (__int64)a2);
  RaidAddPortDriver(a3, a1);
  return 0LL;
}
