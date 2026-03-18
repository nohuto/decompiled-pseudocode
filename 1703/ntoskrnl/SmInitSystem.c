/*
 * XREFs of SmInitSystem @ 0x14081FACC
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1407FD20C (IoInitSystemPreDrivers.c)
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
 * Callees:
 *     EtwRegister @ 0x140589230 (EtwRegister.c)
 *     SmQueryRegistry @ 0x14081FB34 (SmQueryRegistry.c)
 *     SmGlobalsInitialize @ 0x14081FBB8 (SmGlobalsInitialize.c)
 */

__int64 __fastcall SmInitSystem(int a1)
{
  if ( a1 )
  {
    if ( a1 == 1 && EtwRegister(&SmEventProvider, (PETWENABLECALLBACK)SmEtwEnableCallback, 0LL, &qword_1403FA510) >= 0 )
    {
      dword_1403FA518 |= 1u;
      dword_1403FA51C = 64;
    }
  }
  else
  {
    SmGlobalsInitialize(&SmGlobals);
    SmQueryRegistry(&SmGlobals);
  }
  return 0LL;
}
