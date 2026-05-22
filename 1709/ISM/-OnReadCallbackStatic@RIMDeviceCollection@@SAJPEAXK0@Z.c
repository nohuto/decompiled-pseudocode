/*
 * XREFs of ?OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z @ 0x180089550
 * Callers:
 *     ?OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKGG0@Z @ 0x1800893A0 (-OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKGG0@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?OnReadEvent@RIMDeviceCollection@@AEAAJXZ @ 0x180089828 (-OnReadEvent@RIMDeviceCollection@@AEAAJXZ.c)
 */

__int64 __fastcall RIMDeviceCollection::OnReadCallbackStatic(RIMDeviceCollection *a1, int a2, void *a3)
{
  int Event; // eax
  __int64 v4; // rcx

  if ( a2 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq((__int64)a1, &MinInput_Warning_CheckResult, 2, 437, 255);
  }
  else
  {
    Event = RIMDeviceCollection::OnReadEvent(a1);
    if ( Event < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v4, &MinInput_Warning_CheckResult, 2, 433, Event);
  }
  return 0LL;
}
