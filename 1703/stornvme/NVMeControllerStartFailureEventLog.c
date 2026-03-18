/*
 * XREFs of NVMeControllerStartFailureEventLog @ 0x1C00010DC
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C0001580 (NVMeHwFindAdapter.c)
 *     NVMeHwPassiveInitialize @ 0x1C0001B90 (NVMeHwPassiveInitialize.c)
 *     NVMeHwAdapterControl @ 0x1C0001C10 (NVMeHwAdapterControl.c)
 *     NVMeControllerReset @ 0x1C0005138 (NVMeControllerReset.c)
 * Callees:
 *     memset @ 0x1C0012380 (memset.c)
 */

__int64 __fastcall NVMeControllerStartFailureEventLog(__int64 a1)
{
  _QWORD v3[10]; // [rsp+20h] [rbp-50h] BYREF
  int v4; // [rsp+80h] [rbp+10h] BYREF

  memset((char *)v3 + 4, 0, 0x44uLL);
  HIDWORD(v3[1]) = 0;
  v3[0] = 0x4800000100LL;
  v4 = 72;
  BYTE4(v3[3]) = 1;
  v3[4] = 0x200000006LL;
  LODWORD(v3[5]) = 4;
  v3[6] = a1 + 24;
  return ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, int *))StorPortExtendedFunction)(16LL, a1, v3, &v4);
}
