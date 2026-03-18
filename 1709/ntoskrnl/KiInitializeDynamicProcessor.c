/*
 * XREFs of KiInitializeDynamicProcessor @ 0x14042E5D4
 * Callers:
 *     KiStartDynamicProcessor @ 0x1406D7344 (KiStartDynamicProcessor.c)
 * Callees:
 *     KeGenericCallDpc @ 0x14012F0C0 (KeGenericCallDpc.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     KiStartDpcThread @ 0x1405BF270 (KiStartDpcThread.c)
 */

void __fastcall KiInitializeDynamicProcessor(__int64 a1)
{
  int started; // eax
  __int64 v3; // [rsp+30h] [rbp-18h] BYREF
  char v4; // [rsp+38h] [rbp-10h]

  v3 = a1;
  v4 = 0;
  KeGenericCallDpc((__int64)KiInitializeDynamicProcessorDpc, (__int64)&v3);
  if ( KeThreadDpcEnable )
  {
    started = KiStartDpcThread(a1);
    if ( started < 0 )
      KeBugCheckEx(0x33u, started, 0LL, 0LL, 0LL);
  }
}
