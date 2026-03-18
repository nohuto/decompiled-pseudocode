/*
 * XREFs of NVMeControllerStartFailureEventLog @ 0x1C0001008
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C00015C0 (NVMeHwFindAdapter.c)
 *     NVMeHwPassiveInitialize @ 0x1C0001BD0 (NVMeHwPassiveInitialize.c)
 *     NVMeHwAdapterControl @ 0x1C0001C90 (NVMeHwAdapterControl.c)
 *     NVMeControllerReset @ 0x1C0005534 (NVMeControllerReset.c)
 * Callees:
 *     memset @ 0x1C0013D00 (memset.c)
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
