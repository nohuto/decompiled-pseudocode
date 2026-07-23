/*
 * XREFs of SepInitializationPhase0 @ 0x14084AA68
 * Callers:
 *     SeInitSystem @ 0x14084AA38 (SeInitSystem.c)
 * Callees:
 *     ObInitializeFastReference @ 0x14048C56C (ObInitializeFastReference.c)
 *     SepRmDbInitialization @ 0x140827A2C (SepRmDbInitialization.c)
 *     SeMakeSystemToken @ 0x14084AF38 (SeMakeSystemToken.c)
 *     SepInitializeWorkList @ 0x14084B91C (SepInitializeWorkList.c)
 *     SepTokenInitialization @ 0x14084B9C8 (SepTokenInitialization.c)
 *     SepVariableInitialization @ 0x14084BA80 (SepVariableInitialization.c)
 */

bool SepInitializationPhase0()
{
  _KPROCESS *Process; // rbx
  __int64 SystemToken; // rax

  if ( !(unsigned __int8)SepVariableInitialization()
    || !SepRmDbInitialization()
    || !(unsigned __int8)SepTokenInitialization()
    || !(unsigned __int8)SepInitializeWorkList() )
  {
    return 0;
  }
  *($55B18245EBEA7C4FC31D19100062276C *)((char *)&KeGetCurrentThread()[1].116 + 4) = 0LL;
  _InterlockedAnd((volatile signed __int32 *)&KeGetCurrentThread()[1].SwapListEntry + 2, 0xFFFFFFF7);
  ObInitializeFastReference(&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5], 0LL);
  Process = KeGetCurrentThread()->ApcState.Process;
  SystemToken = SeMakeSystemToken();
  ObInitializeFastReference(&Process[1].Affinity.Bitmap[5], SystemToken);
  SepMandatoryObjectTypePolicyLock = 0LL;
  SepDefaultMandatorySid = SeMediumMandatorySid;
  return KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5] != 0;
}
