/*
 * XREFs of CmInitSystem2 @ 0x140857C20
 * Callers:
 *     Phase1InitializationIoReady @ 0x14082FAF0 (Phase1InitializationIoReady.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     IoCreateDriver @ 0x1405C7780 (IoCreateDriver.c)
 *     CmpRegisterTraceLoggingProvider @ 0x1405F23E4 (CmpRegisterTraceLoggingProvider.c)
 */

int CmInitSystem2()
{
  int result; // eax
  __int128 v1; // [rsp+30h] [rbp-18h] BYREF

  LODWORD(v1) = 2097182;
  *((_QWORD *)&v1 + 1) = L"\\Driver\\WscVReg";
  CmpRegisterTraceLoggingProvider();
  result = IoCreateDriver(&v1, (__int64 (__fastcall *)(PVOID, _QWORD))VRegSetup);
  if ( result < 0 )
    KeBugCheckEx(0x51u, 0x1EuLL, result, 0LL, 0LL);
  return result;
}
