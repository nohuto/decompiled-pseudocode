/*
 * XREFs of SmInitSystem @ 0x14085032C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140830A1C (Phase1InitializationDiscard.c)
 *     IoInitSystemPreDrivers @ 0x140841C30 (IoInitSystemPreDrivers.c)
 * Callees:
 *     EtwRegister @ 0x1404F0AB0 (EtwRegister.c)
 *     SmQueryRegistry @ 0x140850394 (SmQueryRegistry.c)
 *     SmGlobalsInitialize @ 0x140850418 (SmGlobalsInitialize.c)
 */

__int64 __fastcall SmInitSystem(int a1)
{
  if ( a1 )
  {
    if ( a1 == 1 && EtwRegister(&SmEventProvider, (PETWENABLECALLBACK)SmEtwEnableCallback, 0LL, &qword_14041B4E0) >= 0 )
    {
      dword_14041B4E8 |= 1u;
      dword_14041B4EC = 64;
    }
  }
  else
  {
    SmGlobalsInitialize(&SmGlobals);
    SmQueryRegistry(&SmGlobals);
  }
  return 0LL;
}
