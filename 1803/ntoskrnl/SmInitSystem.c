/*
 * XREFs of SmInitSystem @ 0x1408C16B8
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1408A1BE4 (IoInitSystemPreDrivers.c)
 *     Phase1InitializationDiscard @ 0x1408A6E00 (Phase1InitializationDiscard.c)
 * Callees:
 *     EtwRegister @ 0x140601F00 (EtwRegister.c)
 *     SmQueryRegistry @ 0x1408C1720 (SmQueryRegistry.c)
 *     SmGlobalsInitialize @ 0x1408C17A4 (SmGlobalsInitialize.c)
 */

__int64 __fastcall SmInitSystem(int a1)
{
  if ( a1 )
  {
    if ( a1 == 1 && EtwRegister(&SmEventProvider, (PETWENABLECALLBACK)SmEtwEnableCallback, 0LL, &qword_1404664F0) >= 0 )
    {
      dword_1404664F8 |= 1u;
      dword_1404664FC = 64;
    }
  }
  else
  {
    SmGlobalsInitialize(&SmGlobals);
    SmQueryRegistry(&SmGlobals);
  }
  return 0LL;
}
