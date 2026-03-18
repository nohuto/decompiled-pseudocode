/*
 * XREFs of ExpLicenseWatchInitWorker @ 0x14083A220
 * Callers:
 *     ExpWatchProductTypeInitialization @ 0x140839140 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 ExpLicenseWatchInitWorker()
{
  __int64 v0; // rax
  __int64 v1; // r11
  __int64 (__fastcall *v2)(__int64); // rbx
  unsigned __int64 v3; // r9
  __int64 result; // rax
  char v5; // r8

  v0 = KiProcessorBlock[0];
  v1 = *(_QWORD *)(KiProcessorBlock[0] + 120);
  v2 = *(__int64 (__fastcall **)(__int64))(KiProcessorBlock[0] + 112);
  *(_QWORD *)(KiProcessorBlock[0] + 120) = 0LL;
  *(_QWORD *)(v0 + 112) = 0LL;
  v3 = __rdtsc() >> 3;
  result = (unsigned int)(1374389535 * v3);
  v5 = (MEMORY[0xFFFFF780000002D4] >> 1) | (InitSafeBootMode != 0) | 1;
  if ( (unsigned int)v3 % 0x64 <= 3 )
    v5 = (MEMORY[0xFFFFF780000002D4] >> 1) | (InitSafeBootMode != 0);
  if ( !v5 )
  {
    result = v2(v1);
    if ( (_DWORD)result != 1 )
      KeBugCheckEx(0x9Au, 0x42424242uLL, 0xC000026AuLL, 0LL, 0LL);
  }
  return result;
}
