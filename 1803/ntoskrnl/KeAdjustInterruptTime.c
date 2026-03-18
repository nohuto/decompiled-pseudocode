/*
 * XREFs of KeAdjustInterruptTime @ 0x140156098
 * Callers:
 *     KiSetSystemTimeDpc @ 0x140167EE0 (KiSetSystemTimeDpc.c)
 *     xHalTscSynchronization @ 0x1402267E0 (xHalTscSynchronization.c)
 *     InitBootProcessor @ 0x1408A6138 (InitBootProcessor.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140036ED0 (KeQueryActiveProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x14016C6C0 (KeIpiGenericCall.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

char __fastcall KeAdjustInterruptTime(__int64 a1, char a2)
{
  char Context; // [rsp+20h] [rbp-38h] BYREF
  unsigned int Context_4; // [rsp+24h] [rbp-34h]
  __int64 v7; // [rsp+28h] [rbp-30h]
  ULONG ActiveProcessorCount; // [rsp+38h] [rbp-20h]
  int v9; // [rsp+3Ch] [rbp-1Ch]

  if ( a1 < 0 )
    return 0;
  Context_4 = KeGetCurrentPrcb()->Number;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v7 = a1;
  Context = a2;
  v9 = 1;
  KeIpiGenericCall(KiCalibrateTimeAdjustment, (ULONG_PTR)&Context);
  return 1;
}
